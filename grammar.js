module.exports = grammar({
  name: "ProgrammingLanguage12d",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) =>
      choice(
        $.function_definition
        // TODO: other kinds of definitions
      ),

    function_definition: ($) =>
      seq($.primative_type, $.identifier, $.parameter_list, $.block),

    parameter_list: ($) =>
      seq(
        "(",
        // TODO: parameters
        ")"
      ),

    primative_type: ($) =>
      choice(
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

    block: ($) => seq("{", repeat($._statement), "}"),

    _statement: ($) => choice($.return_statement, $.declaration),

    return_statement: ($) => seq("return", $._expression, ";"),

    _expression: ($) =>
      choice(
        $.identifier,
        $.number
        // TODO: other kinds of expressions
      ),

    identifier: ($) => /[a-zA-Z_]\w*/,

    number: ($) => /\d+/,

    declaration: ($) => seq($.primative_type, $._declarator, ";"),

    array_declarator: ($) =>
      prec(1, seq($._declarator, "[", $._expression, "]")),

    _declarator: ($) => choice($.array_declarator, $.identifier),
  },
});

function commaSep(rule) {
  return optional(commaSep1(rule));
}

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
