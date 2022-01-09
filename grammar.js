const PREC = {
  PAREN_DECLARATOR: -10,
  ASSIGNMENT: -1,
  CONDITIONAL: -2,
  DEFAULT: 0,
  LOGICAL_OR: 1,
  LOGICAL_AND: 2,
  INCLUSIVE_OR: 3,
  EXCLUSIVE_OR: 4,
  BITWISE_AND: 5,
  EQUAL: 6,
  RELATIONAL: 7,
  SIZEOF: 8,
  SHIFT: 9,
  ADD: 10,
  MULTIPLY: 11,
  CAST: 12,
  UNARY: 13,
  CALL: 14,
  FIELD: 15,
  SUBSCRIPT: 16,
};

module.exports = grammar({
  name: "ProgrammingLanguage12d",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.function_definition, $.compound_statement),

    function_definition: ($) =>
      seq(
        $._declaration_specifiers,
        field("declarator", $._declarator),
        field("body", $.compound_statement)
      ),

    compound_statement: ($) => seq("{", repeat($._statement), "}"),

    parameter_list: ($) => seq("(", commaSep($.parameter_declaration), ")"),

    parameter_declaration: ($) =>
      seq(
        $._declaration_specifiers,
        optional(field("declarator", $._declarator))
      ),

    _declaration_specifiers: ($) => seq(field("type", $._type_specifier)),

    _type_specifier: ($) => $.primitive_type,

    _statement: ($) => choice($._non_case_statement),

    // case_statement: ($) =>
    //   prec.right(
    //     seq(
    //       choice(seq("case", field("value", $._expression)), "default"),
    //       ":",
    //       repeat(
    //         choice(
    //           alias($.attributed_non_case_statement, $.attributed_statement),
    //           $._non_case_statement,
    //           $.declaration,
    //           $.type_definition
    //         )
    //       )
    //     )
    //   ),

    _non_case_statement: ($) =>
      choice(
        $.expression_statement,
        $.compound_statement,
        $.if_statement,
        $.for_statement,
        $.return_statement,
        $.declaration
      ),

    if_statement: ($) =>
      prec.right(
        seq(
          "if",
          field("condition", $.parenthesized_expression),
          field("consequence", $._statement),
          optional(seq("else", field("alternative", $._statement)))
        )
      ),

    for_statement: ($) =>
      seq(
        "for",
        "(",
        field("initializer", $.declaration),
        field("condition", $._expression),
        ";",
        field("update", $._expression),
        ")",
        $._statement
      ),

    unary_expression: ($) =>
      prec.left(
        PREC.UNARY,
        seq(field("operator", choice("!")), field("argument", $._expression))
      ),

    expression_statement: ($) =>
      seq(optional(choice($._expression, $.comma_expression)), ";"),

    comma_expression: ($) =>
      seq(
        field("left", $._expression),
        ",",
        field("right", choice($._expression, $.comma_expression))
      ),

    call_expression: ($) =>
      prec(
        PREC.CALL,
        seq(
          field("function", $._expression),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) => seq("(", commaSep($._expression), ")"),

    binary_expression: ($) => {
      const table = [
        ["+", PREC.ADD],
        ["-", PREC.ADD],
        ["*", PREC.MULTIPLY],
        ["/", PREC.MULTIPLY],
        ["%", PREC.MULTIPLY],
        ["||", PREC.LOGICAL_OR],
        ["&&", PREC.LOGICAL_AND],
        ["|", PREC.INCLUSIVE_OR],
        ["^", PREC.EXCLUSIVE_OR],
        ["&", PREC.BITWISE_AND],
        ["==", PREC.EQUAL],
        ["!=", PREC.EQUAL],
        [">", PREC.RELATIONAL],
        [">=", PREC.RELATIONAL],
        ["<=", PREC.RELATIONAL],
        ["<", PREC.RELATIONAL],
        ["<<", PREC.SHIFT],
        [">>", PREC.SHIFT],
      ];

      return choice(
        ...table.map(([operator, precedence]) => {
          return prec.left(
            precedence,
            seq(
              field("left", $._expression),
              field("operator", operator),
              field("right", $._expression)
            )
          );
        })
      );
    },

    assignment_expression: ($) =>
      prec.right(
        PREC.ASSIGNMENT,
        seq(
          field("left", $._assignment_left_expression),
          field(
            "operator",
            choice("=", "*=", "/=", "%=", "+=", "-=", "&=", "^=", "|=")
          ),
          field("right", $._expression)
        )
      ),

    _assignment_left_expression: ($) =>
      choice(
        $.identifier,
        $.call_expression,
        $.subscript_expression,
        $.parenthesized_expression
      ),

    subscript_expression: ($) =>
      prec(
        PREC.SUBSCRIPT,
        seq(
          field("argument", $._expression),
          "[",
          field("index", $._expression),
          "]"
        )
      ),

    update_expression: ($) =>
      prec.right(
        PREC.UNARY,
        seq(
          field("argument", $._expression),
          field("operator", choice("--", "++"))
        )
      ),

    parenthesized_expression: ($) => seq("(", $._expression, ")"),

    return_statement: ($) => seq("return", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number_literal,
        $.string_literal,
        $.unary_expression,
        $.binary_expression,
        $.assignment_expression,
        $.call_expression,
        $.update_expression,
        $.subscript_expression
      ),

    identifier: ($) => /[a-zA-Z_]\w*/,

    number_literal: ($) => /\d+/,

    string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(prec(1, /[^\\"\n]+/)), $.escape_sequence)
        ),
        '"'
      ),

    escape_sequence: ($) => token(prec(1, seq("\\"))),

    declaration: ($) =>
      seq(
        $._declaration_specifiers,
        commaSep1(
          field("declarator", choice($._declarator, $.init_declarator))
        ),
        ";"
      ),

    init_declarator: ($) =>
      seq(
        field("declarator", $._declarator),
        "=",
        field("value", $._expression)
      ),

    array_declarator: ($) =>
      prec(1, seq($._declarator, "[", $._expression, "]")),

    function_declarator: ($) =>
      prec(
        1,
        seq(
          field("declarator", $._declarator),
          field("parameters", $.parameter_list)
        )
      ),

    _declarator: ($) =>
      choice($.function_declarator, $.array_declarator, $.identifier),

    primitive_type: ($) =>
      choice(
        "void",

        "Integer",
        "Real",
        "Text",
        "Vector2",
        "Vector3",
        "Vector4",
        "Matrix3",
        "Matrix4",

        "Point",
        "Line",
        "Arc",
        "Spiral",
        "Parabola",
        "Segment",

        "Element",
        "Model",
        "View",
        "Macro_Function",
        "Function",

        "Uid",
        "Guid",
        "Attributes",
        "SDR_Attribute",
        "Blob",
        "Screen_Text",
        "Textstyle_Data",
        "Equality_Label",
        "Undo",
        "Undo_List",

        "Widget",
        "Menu",
        "Panel",
        "Overlay_Widget",
        "Vertical_Group",
        "Horizontal_Group",
        "Widget_Pages",
        "Button",
        "Select_Button",
        "Angle_Box",
        "Attributes_Box",
        "Billboard_Box",
        "Bitmap_Fill_Box",
        "Bitmap_List_Box",
        "Chainage_Box",
        "Choice_Box",
        "Colour_Box",
        "Colour_Message_Box",
        "Date_Time_Box",
        "Directory_Box",
        "Draw_Box",
        "File_Box",
        "Function_Box",
        "Graph_Box",
        "GridCtrl_Box",
        "HyperLink_Box",
        "Input_Box",
        "Integer_Box",
        "Justify_Box",
        "Linestyle_Box",
        "List_Box",
        "ListCtrl_Box",
        "Map_File_Box",
        "Message_Box",
        "Model_Box",
        "Name_Box",
        "Named_Tick_Box",
        "New_Select_Box",
        "New_XYZ_Box",
        "Plotter_Box",
        "Polygon_Box",
        "Real_Box",
        "Report_Box",
        "Select_Box",
        "Select_Boxes",
        "Sheet_Size_Box",
        "Source_Box",
        "Symbol_Box",
        "Tab_Box",
        "Target_Box",
        "Template_Box",
        "Text_Edit_Box",
        "Text_Style_Box",
        "Texture_Box",
        "Tree_Box",
        "Tree_Page",
        "Tick_Box",
        "Tin_Box",
        "View_Box",
        "XYZ_Box",
        "File",
        "Map_File",
        "Plot_Parameter_File",
        "XML_Document",
        "XML_Node",

        "Connection",
        "Select_Query",
        "Insert_Query",
        "Update_Query",
        "Delete_Query",
        "Database_Results",
        "Transactions",
        "Parameter_Collection",
        "Query_Condition",
        "Manual_Condition",

        "Dynamic_Element",
        "Dynamic_Integer",
        "Dynamic_Real",
        "Dynamic_Text"
      ),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
