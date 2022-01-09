#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 238
#define LARGE_STATE_COUNT 80
#define SYMBOL_COUNT 220
#define ALIAS_COUNT 1
#define TOKEN_COUNT 171
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 27

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_while = 3,
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_case = 7,
  anon_sym_default = 8,
  anon_sym_COLON = 9,
  anon_sym_break = 10,
  anon_sym_SEMI = 11,
  anon_sym_continue = 12,
  anon_sym_goto = 13,
  anon_sym_switch = 14,
  anon_sym_if = 15,
  anon_sym_else = 16,
  anon_sym_for = 17,
  anon_sym_BANG = 18,
  anon_sym_DASH = 19,
  anon_sym_PLUS = 20,
  anon_sym_STAR = 21,
  anon_sym_SLASH = 22,
  anon_sym_PERCENT = 23,
  anon_sym_PIPE_PIPE = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE = 26,
  anon_sym_CARET = 27,
  anon_sym_AMP = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_GT = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_LT_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_LT_LT = 35,
  anon_sym_GT_GT = 36,
  anon_sym_EQ = 37,
  anon_sym_STAR_EQ = 38,
  anon_sym_SLASH_EQ = 39,
  anon_sym_PERCENT_EQ = 40,
  anon_sym_PLUS_EQ = 41,
  anon_sym_DASH_EQ = 42,
  anon_sym_AMP_EQ = 43,
  anon_sym_CARET_EQ = 44,
  anon_sym_PIPE_EQ = 45,
  anon_sym_LBRACK = 46,
  anon_sym_RBRACK = 47,
  anon_sym_DASH_DASH = 48,
  anon_sym_PLUS_PLUS = 49,
  anon_sym_return = 50,
  sym_identifier = 51,
  sym_number_literal = 52,
  anon_sym_DQUOTE = 53,
  aux_sym_string_literal_token1 = 54,
  sym_system_lib_string = 55,
  sym_escape_sequence = 56,
  aux_sym_preproc_include_token1 = 57,
  anon_sym_LF = 58,
  aux_sym_preproc_def_token1 = 59,
  sym_preproc_arg = 60,
  anon_sym_void = 61,
  anon_sym_Integer = 62,
  anon_sym_Real = 63,
  anon_sym_Text = 64,
  anon_sym_Vector2 = 65,
  anon_sym_Vector3 = 66,
  anon_sym_Vector4 = 67,
  anon_sym_Matrix3 = 68,
  anon_sym_Matrix4 = 69,
  anon_sym_Point = 70,
  anon_sym_Line = 71,
  anon_sym_Arc = 72,
  anon_sym_Spiral = 73,
  anon_sym_Parabola = 74,
  anon_sym_Segment = 75,
  anon_sym_Element = 76,
  anon_sym_Model = 77,
  anon_sym_View = 78,
  anon_sym_Macro_Function = 79,
  anon_sym_Function = 80,
  anon_sym_Uid = 81,
  anon_sym_Guid = 82,
  anon_sym_Attributes = 83,
  anon_sym_SDR_Attribute = 84,
  anon_sym_Blob = 85,
  anon_sym_Screen_Text = 86,
  anon_sym_Textstyle_Data = 87,
  anon_sym_Equality_Label = 88,
  anon_sym_Undo = 89,
  anon_sym_Undo_List = 90,
  anon_sym_Widget = 91,
  anon_sym_Menu = 92,
  anon_sym_Panel = 93,
  anon_sym_Overlay_Widget = 94,
  anon_sym_Vertical_Group = 95,
  anon_sym_Horizontal_Group = 96,
  anon_sym_Widget_Pages = 97,
  anon_sym_Button = 98,
  anon_sym_Select_Button = 99,
  anon_sym_Angle_Box = 100,
  anon_sym_Attributes_Box = 101,
  anon_sym_Billboard_Box = 102,
  anon_sym_Bitmap_Fill_Box = 103,
  anon_sym_Bitmap_List_Box = 104,
  anon_sym_Chainage_Box = 105,
  anon_sym_Choice_Box = 106,
  anon_sym_Colour_Box = 107,
  anon_sym_Colour_Message_Box = 108,
  anon_sym_Date_Time_Box = 109,
  anon_sym_Directory_Box = 110,
  anon_sym_Draw_Box = 111,
  anon_sym_File_Box = 112,
  anon_sym_Function_Box = 113,
  anon_sym_Graph_Box = 114,
  anon_sym_GridCtrl_Box = 115,
  anon_sym_HyperLink_Box = 116,
  anon_sym_Input_Box = 117,
  anon_sym_Integer_Box = 118,
  anon_sym_Justify_Box = 119,
  anon_sym_Linestyle_Box = 120,
  anon_sym_List_Box = 121,
  anon_sym_ListCtrl_Box = 122,
  anon_sym_Map_File_Box = 123,
  anon_sym_Message_Box = 124,
  anon_sym_Model_Box = 125,
  anon_sym_Name_Box = 126,
  anon_sym_Named_Tick_Box = 127,
  anon_sym_New_Select_Box = 128,
  anon_sym_New_XYZ_Box = 129,
  anon_sym_Plotter_Box = 130,
  anon_sym_Polygon_Box = 131,
  anon_sym_Real_Box = 132,
  anon_sym_Report_Box = 133,
  anon_sym_Select_Box = 134,
  anon_sym_Select_Boxes = 135,
  anon_sym_Sheet_Size_Box = 136,
  anon_sym_Source_Box = 137,
  anon_sym_Symbol_Box = 138,
  anon_sym_Tab_Box = 139,
  anon_sym_Target_Box = 140,
  anon_sym_Template_Box = 141,
  anon_sym_Text_Edit_Box = 142,
  anon_sym_Text_Style_Box = 143,
  anon_sym_Texture_Box = 144,
  anon_sym_Tree_Box = 145,
  anon_sym_Tree_Page = 146,
  anon_sym_Tick_Box = 147,
  anon_sym_Tin_Box = 148,
  anon_sym_View_Box = 149,
  anon_sym_XYZ_Box = 150,
  anon_sym_File = 151,
  anon_sym_Map_File = 152,
  anon_sym_Plot_Parameter_File = 153,
  anon_sym_XML_Document = 154,
  anon_sym_XML_Node = 155,
  anon_sym_Connection = 156,
  anon_sym_Select_Query = 157,
  anon_sym_Insert_Query = 158,
  anon_sym_Update_Query = 159,
  anon_sym_Delete_Query = 160,
  anon_sym_Database_Results = 161,
  anon_sym_Transactions = 162,
  anon_sym_Parameter_Collection = 163,
  anon_sym_Query_Condition = 164,
  anon_sym_Manual_Condition = 165,
  anon_sym_Dynamic_Element = 166,
  anon_sym_Dynamic_Integer = 167,
  anon_sym_Dynamic_Real = 168,
  anon_sym_Dynamic_Text = 169,
  sym_comment = 170,
  sym_source_file = 171,
  sym__definition = 172,
  sym_function_definition = 173,
  sym_compound_statement = 174,
  sym_while_statement = 175,
  sym_parameter_list = 176,
  sym_parameter_declaration = 177,
  sym__declaration_specifiers = 178,
  sym__type_specifier = 179,
  sym__statement = 180,
  sym_case_statement = 181,
  sym_break_statement = 182,
  sym_labeled_statement = 183,
  sym_continue_statement = 184,
  sym_goto_statement = 185,
  sym_switch_statement = 186,
  sym__non_case_statement = 187,
  sym_if_statement = 188,
  sym_for_statement = 189,
  sym_unary_expression = 190,
  sym_expression_statement = 191,
  sym_comma_expression = 192,
  sym_call_expression = 193,
  sym_argument_list = 194,
  sym_binary_expression = 195,
  sym_assignment_expression = 196,
  sym__assignment_left_expression = 197,
  sym_subscript_expression = 198,
  sym_update_expression = 199,
  sym_parenthesized_expression = 200,
  sym_return_statement = 201,
  sym__expression = 202,
  sym__statement_identifier = 203,
  sym_string_literal = 204,
  sym_declaration = 205,
  sym_init_declarator = 206,
  sym_array_declarator = 207,
  sym_function_declarator = 208,
  sym__declarator = 209,
  sym_preproc_include = 210,
  sym_preproc_def = 211,
  sym_primitive_type = 212,
  aux_sym_source_file_repeat1 = 213,
  aux_sym_compound_statement_repeat1 = 214,
  aux_sym_parameter_list_repeat1 = 215,
  aux_sym_case_statement_repeat1 = 216,
  aux_sym_argument_list_repeat1 = 217,
  aux_sym_string_literal_repeat1 = 218,
  aux_sym_declaration_repeat1 = 219,
  alias_sym_statement_identifier = 220,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_while] = "while",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_case] = "case",
  [anon_sym_default] = "default",
  [anon_sym_COLON] = ":",
  [anon_sym_break] = "break",
  [anon_sym_SEMI] = ";",
  [anon_sym_continue] = "continue",
  [anon_sym_goto] = "goto",
  [anon_sym_switch] = "switch",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_system_lib_string] = "system_lib_string",
  [sym_escape_sequence] = "escape_sequence",
  [aux_sym_preproc_include_token1] = "#include",
  [anon_sym_LF] = "\n",
  [aux_sym_preproc_def_token1] = "#define",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_void] = "void",
  [anon_sym_Integer] = "Integer",
  [anon_sym_Real] = "Real",
  [anon_sym_Text] = "Text",
  [anon_sym_Vector2] = "Vector2",
  [anon_sym_Vector3] = "Vector3",
  [anon_sym_Vector4] = "Vector4",
  [anon_sym_Matrix3] = "Matrix3",
  [anon_sym_Matrix4] = "Matrix4",
  [anon_sym_Point] = "Point",
  [anon_sym_Line] = "Line",
  [anon_sym_Arc] = "Arc",
  [anon_sym_Spiral] = "Spiral",
  [anon_sym_Parabola] = "Parabola",
  [anon_sym_Segment] = "Segment",
  [anon_sym_Element] = "Element",
  [anon_sym_Model] = "Model",
  [anon_sym_View] = "View",
  [anon_sym_Macro_Function] = "Macro_Function",
  [anon_sym_Function] = "Function",
  [anon_sym_Uid] = "Uid",
  [anon_sym_Guid] = "Guid",
  [anon_sym_Attributes] = "Attributes",
  [anon_sym_SDR_Attribute] = "SDR_Attribute",
  [anon_sym_Blob] = "Blob",
  [anon_sym_Screen_Text] = "Screen_Text",
  [anon_sym_Textstyle_Data] = "Textstyle_Data",
  [anon_sym_Equality_Label] = "Equality_Label",
  [anon_sym_Undo] = "Undo",
  [anon_sym_Undo_List] = "Undo_List",
  [anon_sym_Widget] = "Widget",
  [anon_sym_Menu] = "Menu",
  [anon_sym_Panel] = "Panel",
  [anon_sym_Overlay_Widget] = "Overlay_Widget",
  [anon_sym_Vertical_Group] = "Vertical_Group",
  [anon_sym_Horizontal_Group] = "Horizontal_Group",
  [anon_sym_Widget_Pages] = "Widget_Pages",
  [anon_sym_Button] = "Button",
  [anon_sym_Select_Button] = "Select_Button",
  [anon_sym_Angle_Box] = "Angle_Box",
  [anon_sym_Attributes_Box] = "Attributes_Box",
  [anon_sym_Billboard_Box] = "Billboard_Box",
  [anon_sym_Bitmap_Fill_Box] = "Bitmap_Fill_Box",
  [anon_sym_Bitmap_List_Box] = "Bitmap_List_Box",
  [anon_sym_Chainage_Box] = "Chainage_Box",
  [anon_sym_Choice_Box] = "Choice_Box",
  [anon_sym_Colour_Box] = "Colour_Box",
  [anon_sym_Colour_Message_Box] = "Colour_Message_Box",
  [anon_sym_Date_Time_Box] = "Date_Time_Box",
  [anon_sym_Directory_Box] = "Directory_Box",
  [anon_sym_Draw_Box] = "Draw_Box",
  [anon_sym_File_Box] = "File_Box",
  [anon_sym_Function_Box] = "Function_Box",
  [anon_sym_Graph_Box] = "Graph_Box",
  [anon_sym_GridCtrl_Box] = "GridCtrl_Box",
  [anon_sym_HyperLink_Box] = "HyperLink_Box",
  [anon_sym_Input_Box] = "Input_Box",
  [anon_sym_Integer_Box] = "Integer_Box",
  [anon_sym_Justify_Box] = "Justify_Box",
  [anon_sym_Linestyle_Box] = "Linestyle_Box",
  [anon_sym_List_Box] = "List_Box",
  [anon_sym_ListCtrl_Box] = "ListCtrl_Box",
  [anon_sym_Map_File_Box] = "Map_File_Box",
  [anon_sym_Message_Box] = "Message_Box",
  [anon_sym_Model_Box] = "Model_Box",
  [anon_sym_Name_Box] = "Name_Box",
  [anon_sym_Named_Tick_Box] = "Named_Tick_Box",
  [anon_sym_New_Select_Box] = "New_Select_Box",
  [anon_sym_New_XYZ_Box] = "New_XYZ_Box",
  [anon_sym_Plotter_Box] = "Plotter_Box",
  [anon_sym_Polygon_Box] = "Polygon_Box",
  [anon_sym_Real_Box] = "Real_Box",
  [anon_sym_Report_Box] = "Report_Box",
  [anon_sym_Select_Box] = "Select_Box",
  [anon_sym_Select_Boxes] = "Select_Boxes",
  [anon_sym_Sheet_Size_Box] = "Sheet_Size_Box",
  [anon_sym_Source_Box] = "Source_Box",
  [anon_sym_Symbol_Box] = "Symbol_Box",
  [anon_sym_Tab_Box] = "Tab_Box",
  [anon_sym_Target_Box] = "Target_Box",
  [anon_sym_Template_Box] = "Template_Box",
  [anon_sym_Text_Edit_Box] = "Text_Edit_Box",
  [anon_sym_Text_Style_Box] = "Text_Style_Box",
  [anon_sym_Texture_Box] = "Texture_Box",
  [anon_sym_Tree_Box] = "Tree_Box",
  [anon_sym_Tree_Page] = "Tree_Page",
  [anon_sym_Tick_Box] = "Tick_Box",
  [anon_sym_Tin_Box] = "Tin_Box",
  [anon_sym_View_Box] = "View_Box",
  [anon_sym_XYZ_Box] = "XYZ_Box",
  [anon_sym_File] = "File",
  [anon_sym_Map_File] = "Map_File",
  [anon_sym_Plot_Parameter_File] = "Plot_Parameter_File",
  [anon_sym_XML_Document] = "XML_Document",
  [anon_sym_XML_Node] = "XML_Node",
  [anon_sym_Connection] = "Connection",
  [anon_sym_Select_Query] = "Select_Query",
  [anon_sym_Insert_Query] = "Insert_Query",
  [anon_sym_Update_Query] = "Update_Query",
  [anon_sym_Delete_Query] = "Delete_Query",
  [anon_sym_Database_Results] = "Database_Results",
  [anon_sym_Transactions] = "Transactions",
  [anon_sym_Parameter_Collection] = "Parameter_Collection",
  [anon_sym_Query_Condition] = "Query_Condition",
  [anon_sym_Manual_Condition] = "Manual_Condition",
  [anon_sym_Dynamic_Element] = "Dynamic_Element",
  [anon_sym_Dynamic_Integer] = "Dynamic_Integer",
  [anon_sym_Dynamic_Real] = "Dynamic_Real",
  [anon_sym_Dynamic_Text] = "Dynamic_Text",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_compound_statement] = "compound_statement",
  [sym_while_statement] = "while_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym__declaration_specifiers] = "_declaration_specifiers",
  [sym__type_specifier] = "_type_specifier",
  [sym__statement] = "_statement",
  [sym_case_statement] = "case_statement",
  [sym_break_statement] = "break_statement",
  [sym_labeled_statement] = "labeled_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_goto_statement] = "goto_statement",
  [sym_switch_statement] = "switch_statement",
  [sym__non_case_statement] = "_non_case_statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_unary_expression] = "unary_expression",
  [sym_expression_statement] = "expression_statement",
  [sym_comma_expression] = "comma_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym_binary_expression] = "binary_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym__assignment_left_expression] = "_assignment_left_expression",
  [sym_subscript_expression] = "subscript_expression",
  [sym_update_expression] = "update_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym__statement_identifier] = "_statement_identifier",
  [sym_string_literal] = "string_literal",
  [sym_declaration] = "declaration",
  [sym_init_declarator] = "init_declarator",
  [sym_array_declarator] = "array_declarator",
  [sym_function_declarator] = "function_declarator",
  [sym__declarator] = "_declarator",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_def] = "preproc_def",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [alias_sym_statement_identifier] = "statement_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_goto] = anon_sym_goto,
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_system_lib_string] = sym_system_lib_string,
  [sym_escape_sequence] = sym_escape_sequence,
  [aux_sym_preproc_include_token1] = aux_sym_preproc_include_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_preproc_def_token1] = aux_sym_preproc_def_token1,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_Real] = anon_sym_Real,
  [anon_sym_Text] = anon_sym_Text,
  [anon_sym_Vector2] = anon_sym_Vector2,
  [anon_sym_Vector3] = anon_sym_Vector3,
  [anon_sym_Vector4] = anon_sym_Vector4,
  [anon_sym_Matrix3] = anon_sym_Matrix3,
  [anon_sym_Matrix4] = anon_sym_Matrix4,
  [anon_sym_Point] = anon_sym_Point,
  [anon_sym_Line] = anon_sym_Line,
  [anon_sym_Arc] = anon_sym_Arc,
  [anon_sym_Spiral] = anon_sym_Spiral,
  [anon_sym_Parabola] = anon_sym_Parabola,
  [anon_sym_Segment] = anon_sym_Segment,
  [anon_sym_Element] = anon_sym_Element,
  [anon_sym_Model] = anon_sym_Model,
  [anon_sym_View] = anon_sym_View,
  [anon_sym_Macro_Function] = anon_sym_Macro_Function,
  [anon_sym_Function] = anon_sym_Function,
  [anon_sym_Uid] = anon_sym_Uid,
  [anon_sym_Guid] = anon_sym_Guid,
  [anon_sym_Attributes] = anon_sym_Attributes,
  [anon_sym_SDR_Attribute] = anon_sym_SDR_Attribute,
  [anon_sym_Blob] = anon_sym_Blob,
  [anon_sym_Screen_Text] = anon_sym_Screen_Text,
  [anon_sym_Textstyle_Data] = anon_sym_Textstyle_Data,
  [anon_sym_Equality_Label] = anon_sym_Equality_Label,
  [anon_sym_Undo] = anon_sym_Undo,
  [anon_sym_Undo_List] = anon_sym_Undo_List,
  [anon_sym_Widget] = anon_sym_Widget,
  [anon_sym_Menu] = anon_sym_Menu,
  [anon_sym_Panel] = anon_sym_Panel,
  [anon_sym_Overlay_Widget] = anon_sym_Overlay_Widget,
  [anon_sym_Vertical_Group] = anon_sym_Vertical_Group,
  [anon_sym_Horizontal_Group] = anon_sym_Horizontal_Group,
  [anon_sym_Widget_Pages] = anon_sym_Widget_Pages,
  [anon_sym_Button] = anon_sym_Button,
  [anon_sym_Select_Button] = anon_sym_Select_Button,
  [anon_sym_Angle_Box] = anon_sym_Angle_Box,
  [anon_sym_Attributes_Box] = anon_sym_Attributes_Box,
  [anon_sym_Billboard_Box] = anon_sym_Billboard_Box,
  [anon_sym_Bitmap_Fill_Box] = anon_sym_Bitmap_Fill_Box,
  [anon_sym_Bitmap_List_Box] = anon_sym_Bitmap_List_Box,
  [anon_sym_Chainage_Box] = anon_sym_Chainage_Box,
  [anon_sym_Choice_Box] = anon_sym_Choice_Box,
  [anon_sym_Colour_Box] = anon_sym_Colour_Box,
  [anon_sym_Colour_Message_Box] = anon_sym_Colour_Message_Box,
  [anon_sym_Date_Time_Box] = anon_sym_Date_Time_Box,
  [anon_sym_Directory_Box] = anon_sym_Directory_Box,
  [anon_sym_Draw_Box] = anon_sym_Draw_Box,
  [anon_sym_File_Box] = anon_sym_File_Box,
  [anon_sym_Function_Box] = anon_sym_Function_Box,
  [anon_sym_Graph_Box] = anon_sym_Graph_Box,
  [anon_sym_GridCtrl_Box] = anon_sym_GridCtrl_Box,
  [anon_sym_HyperLink_Box] = anon_sym_HyperLink_Box,
  [anon_sym_Input_Box] = anon_sym_Input_Box,
  [anon_sym_Integer_Box] = anon_sym_Integer_Box,
  [anon_sym_Justify_Box] = anon_sym_Justify_Box,
  [anon_sym_Linestyle_Box] = anon_sym_Linestyle_Box,
  [anon_sym_List_Box] = anon_sym_List_Box,
  [anon_sym_ListCtrl_Box] = anon_sym_ListCtrl_Box,
  [anon_sym_Map_File_Box] = anon_sym_Map_File_Box,
  [anon_sym_Message_Box] = anon_sym_Message_Box,
  [anon_sym_Model_Box] = anon_sym_Model_Box,
  [anon_sym_Name_Box] = anon_sym_Name_Box,
  [anon_sym_Named_Tick_Box] = anon_sym_Named_Tick_Box,
  [anon_sym_New_Select_Box] = anon_sym_New_Select_Box,
  [anon_sym_New_XYZ_Box] = anon_sym_New_XYZ_Box,
  [anon_sym_Plotter_Box] = anon_sym_Plotter_Box,
  [anon_sym_Polygon_Box] = anon_sym_Polygon_Box,
  [anon_sym_Real_Box] = anon_sym_Real_Box,
  [anon_sym_Report_Box] = anon_sym_Report_Box,
  [anon_sym_Select_Box] = anon_sym_Select_Box,
  [anon_sym_Select_Boxes] = anon_sym_Select_Boxes,
  [anon_sym_Sheet_Size_Box] = anon_sym_Sheet_Size_Box,
  [anon_sym_Source_Box] = anon_sym_Source_Box,
  [anon_sym_Symbol_Box] = anon_sym_Symbol_Box,
  [anon_sym_Tab_Box] = anon_sym_Tab_Box,
  [anon_sym_Target_Box] = anon_sym_Target_Box,
  [anon_sym_Template_Box] = anon_sym_Template_Box,
  [anon_sym_Text_Edit_Box] = anon_sym_Text_Edit_Box,
  [anon_sym_Text_Style_Box] = anon_sym_Text_Style_Box,
  [anon_sym_Texture_Box] = anon_sym_Texture_Box,
  [anon_sym_Tree_Box] = anon_sym_Tree_Box,
  [anon_sym_Tree_Page] = anon_sym_Tree_Page,
  [anon_sym_Tick_Box] = anon_sym_Tick_Box,
  [anon_sym_Tin_Box] = anon_sym_Tin_Box,
  [anon_sym_View_Box] = anon_sym_View_Box,
  [anon_sym_XYZ_Box] = anon_sym_XYZ_Box,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Map_File] = anon_sym_Map_File,
  [anon_sym_Plot_Parameter_File] = anon_sym_Plot_Parameter_File,
  [anon_sym_XML_Document] = anon_sym_XML_Document,
  [anon_sym_XML_Node] = anon_sym_XML_Node,
  [anon_sym_Connection] = anon_sym_Connection,
  [anon_sym_Select_Query] = anon_sym_Select_Query,
  [anon_sym_Insert_Query] = anon_sym_Insert_Query,
  [anon_sym_Update_Query] = anon_sym_Update_Query,
  [anon_sym_Delete_Query] = anon_sym_Delete_Query,
  [anon_sym_Database_Results] = anon_sym_Database_Results,
  [anon_sym_Transactions] = anon_sym_Transactions,
  [anon_sym_Parameter_Collection] = anon_sym_Parameter_Collection,
  [anon_sym_Query_Condition] = anon_sym_Query_Condition,
  [anon_sym_Manual_Condition] = anon_sym_Manual_Condition,
  [anon_sym_Dynamic_Element] = anon_sym_Dynamic_Element,
  [anon_sym_Dynamic_Integer] = anon_sym_Dynamic_Integer,
  [anon_sym_Dynamic_Real] = anon_sym_Dynamic_Real,
  [anon_sym_Dynamic_Text] = anon_sym_Dynamic_Text,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_compound_statement] = sym_compound_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym__declaration_specifiers] = sym__declaration_specifiers,
  [sym__type_specifier] = sym__type_specifier,
  [sym__statement] = sym__statement,
  [sym_case_statement] = sym_case_statement,
  [sym_break_statement] = sym_break_statement,
  [sym_labeled_statement] = sym_labeled_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_goto_statement] = sym_goto_statement,
  [sym_switch_statement] = sym_switch_statement,
  [sym__non_case_statement] = sym__non_case_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_expression_statement] = sym_expression_statement,
  [sym_comma_expression] = sym_comma_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym_binary_expression] = sym_binary_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym__assignment_left_expression] = sym__assignment_left_expression,
  [sym_subscript_expression] = sym_subscript_expression,
  [sym_update_expression] = sym_update_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym__statement_identifier] = sym__statement_identifier,
  [sym_string_literal] = sym_string_literal,
  [sym_declaration] = sym_declaration,
  [sym_init_declarator] = sym_init_declarator,
  [sym_array_declarator] = sym_array_declarator,
  [sym_function_declarator] = sym_function_declarator,
  [sym__declarator] = sym__declarator,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_def] = sym_preproc_def,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
  [alias_sym_statement_identifier] = alias_sym_statement_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_goto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_switch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_system_lib_string] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_preproc_include_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_def_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vector4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Matrix3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Matrix4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Point] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Line] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Spiral] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Parabola] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Segment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Element] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Model] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_View] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Macro_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Uid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Guid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attributes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SDR_Attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Screen_Text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Textstyle_Data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Equality_Label] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Undo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Undo_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Widget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Menu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Panel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Overlay_Widget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Vertical_Group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Horizontal_Group] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Widget_Pages] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Button] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Select_Button] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Angle_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attributes_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Billboard_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bitmap_Fill_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bitmap_List_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Chainage_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Choice_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Colour_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Colour_Message_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Date_Time_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Directory_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Draw_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_File_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Function_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Graph_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GridCtrl_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HyperLink_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Input_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Justify_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Linestyle_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ListCtrl_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map_File_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Message_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Model_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Name_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Named_Tick_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_New_Select_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_New_XYZ_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Plotter_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Polygon_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Real_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Report_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Select_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Select_Boxes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Sheet_Size_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Symbol_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tab_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Target_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Template_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text_Edit_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Text_Style_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Texture_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tree_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tree_Page] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tick_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tin_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_View_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XYZ_Box] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Map_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Plot_Parameter_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XML_Document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XML_Node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Connection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Select_Query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Insert_Query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Update_Query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Delete_Query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Database_Results] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Transactions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Parameter_Collection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Query_Condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Manual_Condition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dynamic_Element] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dynamic_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dynamic_Real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dynamic_Text] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration_specifiers] = {
    .visible = false,
    .named = true,
  },
  [sym__type_specifier] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_break_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_labeled_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_goto_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_switch_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__non_case_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_comma_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__assignment_left_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_subscript_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_init_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_array_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declarator] = {
    .visible = true,
    .named = true,
  },
  [sym__declarator] = {
    .visible = false,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_compound_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_statement_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_declarator = 7,
  field_function = 8,
  field_index = 9,
  field_initializer = 10,
  field_label = 11,
  field_left = 12,
  field_name = 13,
  field_operator = 14,
  field_parameters = 15,
  field_path = 16,
  field_right = 17,
  field_type = 18,
  field_update = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_declarator] = "declarator",
  [field_function] = "function",
  [field_index] = "index",
  [field_initializer] = "initializer",
  [field_label] = "label",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_path] = "path",
  [field_right] = "right",
  [field_type] = "type",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 2},
  [15] = {.index = 22, .length = 3},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 1},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 1},
  [20] = {.index = 31, .length = 1},
  [21] = {.index = 32, .length = 3},
  [22] = {.index = 35, .length = 2},
  [23] = {.index = 37, .length = 2},
  [24] = {.index = 39, .length = 2},
  [25] = {.index = 41, .length = 3},
  [26] = {.index = 44, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_argument, 1},
    {field_operator, 0},
  [3] =
    {field_argument, 0},
    {field_operator, 1},
  [5] =
    {field_arguments, 1},
    {field_function, 0},
  [7] =
    {field_path, 1},
  [8] =
    {field_name, 1},
  [9] =
    {field_body, 2},
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [12] =
    {field_declarator, 0},
    {field_parameters, 1},
  [14] =
    {field_body, 2},
    {field_condition, 1},
  [16] =
    {field_value, 1},
  [17] =
    {field_label, 1},
  [18] =
    {field_condition, 1},
    {field_consequence, 2},
  [20] =
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [22] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [25] =
    {field_left, 0},
    {field_right, 2},
  [27] =
    {field_label, 0},
  [28] =
    {field_name, 1},
    {field_value, 2},
  [30] =
    {field_type, 0, .inherited = true},
  [31] =
    {field_declarator, 1},
  [32] =
    {field_declarator, 1},
    {field_declarator, 2, .inherited = true},
    {field_type, 0, .inherited = true},
  [35] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [37] =
    {field_declarator, 0},
    {field_value, 2},
  [39] =
    {field_argument, 0},
    {field_index, 2},
  [41] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [44] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_update, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_statement_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(772);
      if (lookahead == '!') ADVANCE(791);
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(800);
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == ')') ADVANCE(778);
      if (lookahead == '*') ADVANCE(798);
      if (lookahead == '+') ADVANCE(796);
      if (lookahead == ',') ADVANCE(777);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead == ':') ADVANCE(781);
      if (lookahead == ';') ADVANCE(783);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(815);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == 'A') ADVANCE(1262);
      if (lookahead == 'B') ADVANCE(1167);
      if (lookahead == 'C') ADVANCE(1164);
      if (lookahead == 'D') ADVANCE(993);
      if (lookahead == 'E') ADVANCE(1220);
      if (lookahead == 'F') ADVANCE(1197);
      if (lookahead == 'G') ADVANCE(1387);
      if (lookahead == 'H') ADVANCE(1300);
      if (lookahead == 'I') ADVANCE(1263);
      if (lookahead == 'J') ADVANCE(1503);
      if (lookahead == 'L') ADVANCE(1168);
      if (lookahead == 'M') ADVANCE(983);
      if (lookahead == 'N') ADVANCE(984);
      if (lookahead == 'O') ADVANCE(1525);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'Q') ADVANCE(1515);
      if (lookahead == 'R') ADVANCE(1065);
      if (lookahead == 'S') ADVANCE(886);
      if (lookahead == 'T') ADVANCE(986);
      if (lookahead == 'U') ADVANCE(1171);
      if (lookahead == 'V') ADVANCE(1066);
      if (lookahead == 'W') ADVANCE(1177);
      if (lookahead == 'X') ADVANCE(901);
      if (lookahead == '[') ADVANCE(824);
      if (lookahead == '\\') SKIP(768)
      if (lookahead == ']') ADVANCE(825);
      if (lookahead == '^') ADVANCE(804);
      if (lookahead == 'b') ADVANCE(1400);
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead == 'd') ADVANCE(1079);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'f') ADVANCE(1302);
      if (lookahead == 'g') ADVANCE(1304);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == 's') ADVANCE(1528);
      if (lookahead == 'v') ADVANCE(1376);
      if (lookahead == 'w') ADVANCE(1165);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '|') ADVANCE(803);
      if (lookahead == '}') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1598);
      if (('K' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(1609);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(800);
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == '*') ADVANCE(798);
      if (lookahead == '+') ADVANCE(796);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(815);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == '[') ADVANCE(824);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '^') ADVANCE(804);
      if (lookahead == '|') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '/') ADVANCE(1600);
      if (lookahead == '\\') ADVANCE(1607);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1603);
      if (lookahead != 0) ADVANCE(1604);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(1610);
      if (lookahead == '/') ADVANCE(1617);
      if (lookahead == '\\') ADVANCE(1615);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1614);
      if (lookahead != 0) ADVANCE(1618);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(790);
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '&') ADVANCE(24);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(797);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(783);
      if (lookahead == '=') ADVANCE(814);
      if (lookahead == 'A') ADVANCE(1262);
      if (lookahead == 'B') ADVANCE(1167);
      if (lookahead == 'C') ADVANCE(1164);
      if (lookahead == 'D') ADVANCE(993);
      if (lookahead == 'E') ADVANCE(1220);
      if (lookahead == 'F') ADVANCE(1197);
      if (lookahead == 'G') ADVANCE(1387);
      if (lookahead == 'H') ADVANCE(1300);
      if (lookahead == 'I') ADVANCE(1263);
      if (lookahead == 'J') ADVANCE(1503);
      if (lookahead == 'L') ADVANCE(1168);
      if (lookahead == 'M') ADVANCE(983);
      if (lookahead == 'N') ADVANCE(984);
      if (lookahead == 'O') ADVANCE(1525);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'Q') ADVANCE(1515);
      if (lookahead == 'R') ADVANCE(1065);
      if (lookahead == 'S') ADVANCE(886);
      if (lookahead == 'T') ADVANCE(986);
      if (lookahead == 'U') ADVANCE(1171);
      if (lookahead == 'V') ADVANCE(1066);
      if (lookahead == 'W') ADVANCE(1177);
      if (lookahead == 'X') ADVANCE(901);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(1400);
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead == 'd') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(1302);
      if (lookahead == 'g') ADVANCE(1304);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == 's') ADVANCE(1528);
      if (lookahead == 'v') ADVANCE(1376);
      if (lookahead == 'w') ADVANCE(1165);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '}') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1598);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(790);
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == ')') ADVANCE(778);
      if (lookahead == '+') ADVANCE(795);
      if (lookahead == ',') ADVANCE(777);
      if (lookahead == '-') ADVANCE(792);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(783);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1598);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(790);
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == '+') ADVANCE(795);
      if (lookahead == '-') ADVANCE(792);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ';') ADVANCE(783);
      if (lookahead == 'A') ADVANCE(1262);
      if (lookahead == 'B') ADVANCE(1167);
      if (lookahead == 'C') ADVANCE(1164);
      if (lookahead == 'D') ADVANCE(993);
      if (lookahead == 'E') ADVANCE(1220);
      if (lookahead == 'F') ADVANCE(1197);
      if (lookahead == 'G') ADVANCE(1387);
      if (lookahead == 'H') ADVANCE(1300);
      if (lookahead == 'I') ADVANCE(1263);
      if (lookahead == 'J') ADVANCE(1503);
      if (lookahead == 'L') ADVANCE(1168);
      if (lookahead == 'M') ADVANCE(983);
      if (lookahead == 'N') ADVANCE(984);
      if (lookahead == 'O') ADVANCE(1525);
      if (lookahead == 'P') ADVANCE(985);
      if (lookahead == 'Q') ADVANCE(1515);
      if (lookahead == 'R') ADVANCE(1065);
      if (lookahead == 'S') ADVANCE(886);
      if (lookahead == 'T') ADVANCE(986);
      if (lookahead == 'U') ADVANCE(1171);
      if (lookahead == 'V') ADVANCE(1066);
      if (lookahead == 'W') ADVANCE(1177);
      if (lookahead == 'X') ADVANCE(901);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(1400);
      if (lookahead == 'c') ADVANCE(991);
      if (lookahead == 'd') ADVANCE(1079);
      if (lookahead == 'e') ADVANCE(1233);
      if (lookahead == 'f') ADVANCE(1302);
      if (lookahead == 'g') ADVANCE(1304);
      if (lookahead == 'i') ADVANCE(1147);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == 's') ADVANCE(1528);
      if (lookahead == 'v') ADVANCE(1376);
      if (lookahead == 'w') ADVANCE(1165);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '}') ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1598);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(1599);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') ADVANCE(1607);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(1844);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(1844);
      if (lookahead == '=') ADVANCE(817);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(1842);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(1632);
      if (lookahead == '3') ADVANCE(1634);
      if (lookahead == '4') ADVANCE(1636);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(1638);
      if (lookahead == '4') ADVANCE(1640);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(807);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(818);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(821);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(816);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(822);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(823);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(1605);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '>') ADVANCE(1606);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(671);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(522);
      if (lookahead == 'Q') ADVANCE(688);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(485);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(486);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(487);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(488);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(489);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(492);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(495);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(496);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(501);
      if (lookahead == 'P') ADVANCE(212);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(505);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(506);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(508);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(510);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(513);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(515);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(517);
      if (lookahead == 'M') ADVANCE(280);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(519);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(523);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(524);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(525);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(526);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(527);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(528);
      END_STATE();
    case 56:
      if (lookahead == 'B') ADVANCE(529);
      END_STATE();
    case 57:
      if (lookahead == 'B') ADVANCE(530);
      END_STATE();
    case 58:
      if (lookahead == 'B') ADVANCE(531);
      END_STATE();
    case 59:
      if (lookahead == 'B') ADVANCE(532);
      END_STATE();
    case 60:
      if (lookahead == 'B') ADVANCE(533);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(534);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(535);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(536);
      END_STATE();
    case 64:
      if (lookahead == 'B') ADVANCE(537);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(538);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(539);
      END_STATE();
    case 67:
      if (lookahead == 'B') ADVANCE(540);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(541);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(542);
      END_STATE();
    case 70:
      if (lookahead == 'B') ADVANCE(543);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(544);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(545);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(546);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(547);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(548);
      END_STATE();
    case 76:
      if (lookahead == 'B') ADVANCE(549);
      END_STATE();
    case 77:
      if (lookahead == 'B') ADVANCE(550);
      END_STATE();
    case 78:
      if (lookahead == 'B') ADVANCE(551);
      END_STATE();
    case 79:
      if (lookahead == 'B') ADVANCE(552);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(647);
      END_STATE();
    case 81:
      if (lookahead == 'C') ADVANCE(512);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(507);
      END_STATE();
    case 83:
      if (lookahead == 'C') ADVANCE(561);
      END_STATE();
    case 84:
      if (lookahead == 'C') ADVANCE(672);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == 'c') ADVANCE(590);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead == 'h') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(680);
      if (lookahead == 'p') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(490);
      if (lookahead == 'N') ADVANCE(558);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(205);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(256);
      if (lookahead == 'S') ADVANCE(674);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(430);
      if (lookahead == 'I') ADVANCE(476);
      if (lookahead == 'R') ADVANCE(319);
      if (lookahead == 'T') ADVANCE(313);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(694);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(385);
      END_STATE();
    case 92:
      if (lookahead == 'F') ADVANCE(378);
      if (lookahead == 'L') ADVANCE(382);
      END_STATE();
    case 93:
      if (lookahead == 'F') ADVANCE(389);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(589);
      END_STATE();
    case 95:
      if (lookahead == 'G') ADVANCE(593);
      END_STATE();
    case 96:
      if (lookahead == 'L') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 98:
      if (lookahead == 'L') ADVANCE(380);
      END_STATE();
    case 99:
      if (lookahead == 'L') ADVANCE(377);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(96);
      if (lookahead == 'Y') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'P') ADVANCE(204);
      END_STATE();
    case 102:
      if (lookahead == 'P') ADVANCE(213);
      END_STATE();
    case 103:
      if (lookahead == 'Q') ADVANCE(686);
      END_STATE();
    case 104:
      if (lookahead == 'Q') ADVANCE(687);
      END_STATE();
    case 105:
      if (lookahead == 'Q') ADVANCE(689);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(282);
      END_STATE();
    case 108:
      if (lookahead == 'S') ADVANCE(365);
      END_STATE();
    case 109:
      if (lookahead == 'S') ADVANCE(318);
      if (lookahead == 'X') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 'T') ADVANCE(383);
      END_STATE();
    case 111:
      if (lookahead == 'T') ADVANCE(375);
      END_STATE();
    case 112:
      if (lookahead == 'T') ADVANCE(304);
      END_STATE();
    case 113:
      if (lookahead == 'W') ADVANCE(393);
      END_STATE();
    case 114:
      if (lookahead == 'Y') ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == 'Z') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'Z') ADVANCE(156);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(112);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(111);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 170:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 171:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 172:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 173:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 175:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 178:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 179:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 180:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 181:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(441);
      if (lookahead == 'e') ADVANCE(697);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(468);
      if (lookahead == 'l') ADVANCE(491);
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(224);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(1650);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(1676);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(562);
      if (lookahead == 'i') ADVANCE(249);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'e') ADVANCE(412);
      if (lookahead == 'i') ADVANCE(585);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == 'y') ADVANCE(460);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(557);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(436);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(416);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'o') ADVANCE(366);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(698);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(757);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(670);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(346);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(347);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(240);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(354);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(355);
      END_STATE();
    case 219:
      if (lookahead == 'b') ADVANCE(1672);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(191);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(503);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(500);
      END_STATE();
    case 224:
      if (lookahead == 'b') ADVANCE(556);
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 225:
      if (lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 226:
      if (lookahead == 'b') ADVANCE(691);
      END_STATE();
    case 227:
      if (lookahead == 'b') ADVANCE(692);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(401);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(1646);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(398);
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(582);
      if (lookahead == 'n') ADVANCE(690);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(693);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(130);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(639);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(201);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(655);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(658);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(659);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(664);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(400);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(667);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(1664);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(1666);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(1624);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(483);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(281);
      END_STATE();
    case 256:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 257:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 258:
      if (lookahead == 'd') ADVANCE(272);
      END_STATE();
    case 259:
      if (lookahead == 'd') ADVANCE(344);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(395);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1611);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1608);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(1805);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(1644);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(1807);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(1670);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(696);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(403);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(573);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(571);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(290);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(749);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(750);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(469);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(471);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(472);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(446);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(362);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(760);
      END_STATE();
    case 343:
      if (lookahead == 'g') ADVANCE(339);
      END_STATE();
    case 344:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 345:
      if (lookahead == 'g') ADVANCE(291);
      END_STATE();
    case 346:
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 347:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 348:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 349:
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(497);
      END_STATE();
    case 351:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(444);
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 353:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 354:
      if (lookahead == 'g') ADVANCE(331);
      END_STATE();
    case 355:
      if (lookahead == 'g') ADVANCE(337);
      END_STATE();
    case 356:
      if (lookahead == 'h') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(409);
      END_STATE();
    case 357:
      if (lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(408);
      if (lookahead == 'l') ADVANCE(482);
      if (lookahead == 'u') ADVANCE(632);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(764);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(459);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(765);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(237);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'l') ADVANCE(755);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(251);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(432);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(650);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(612);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(461);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(614);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(502);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(509);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(511);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(516);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(520);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(260);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(661);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 398:
      if (lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 399:
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 400:
      if (lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(675);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(1629);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(1657);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(1688);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(1648);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(1838);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(1678);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(422);
      if (lookahead == 't') ADVANCE(439);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(554);
      if (lookahead == 'n') ADVANCE(475);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(309);
      if (lookahead == 'q') ADVANCE(678);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(379);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(324);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(637);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(271);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(303);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(275);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(435);
      END_STATE();
    case 424:
      if (lookahead == 'l') ADVANCE(209);
      END_STATE();
    case 425:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 426:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 427:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 428:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 429:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 430:
      if (lookahead == 'l') ADVANCE(326);
      END_STATE();
    case 431:
      if (lookahead == 'l') ADVANCE(180);
      END_STATE();
    case 432:
      if (lookahead == 'l') ADVANCE(429);
      END_STATE();
    case 433:
      if (lookahead == 'l') ADVANCE(334);
      END_STATE();
    case 434:
      if (lookahead == 'l') ADVANCE(336);
      END_STATE();
    case 435:
      if (lookahead == 'l') ADVANCE(340);
      END_STATE();
    case 436:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 437:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 438:
      if (lookahead == 'm') ADVANCE(566);
      if (lookahead == 'x') ADVANCE(619);
      END_STATE();
    case 439:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 440:
      if (lookahead == 'm') ADVANCE(371);
      END_STATE();
    case 441:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 442:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 443:
      if (lookahead == 'm') ADVANCE(321);
      END_STATE();
    case 444:
      if (lookahead == 'm') ADVANCE(316);
      END_STATE();
    case 445:
      if (lookahead == 'm') ADVANCE(320);
      END_STATE();
    case 446:
      if (lookahead == 'm') ADVANCE(322);
      END_STATE();
    case 447:
      if (lookahead == 'm') ADVANCE(333);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 'r') ADVANCE(229);
      if (lookahead == 't') ADVANCE(646);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(1698);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(1663);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(1814);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(1700);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(1660);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(1830);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(1832);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(1828);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(677);
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(620);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 's') ADVANCE(617);
      END_STATE();
    case 467:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 468:
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 469:
      if (lookahead == 'n') ADVANCE(623);
      END_STATE();
    case 470:
      if (lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 471:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 472:
      if (lookahead == 'n') ADVANCE(629);
      END_STATE();
    case 473:
      if (lookahead == 'n') ADVANCE(611);
      END_STATE();
    case 474:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 475:
      if (lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 476:
      if (lookahead == 'n') ADVANCE(656);
      END_STATE();
    case 477:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 478:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 479:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 480:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 481:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(1680);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(577);
      if (lookahead == 'y') ADVANCE(568);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(232);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(477);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(474);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(463);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(456);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(457);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(458);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(733);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(734);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(735);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(736);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(737);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(738);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(739);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(740);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(741);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(743);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(745);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(746);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(747);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(470);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(479);
      END_STATE();
    case 562:
      if (lookahead == 'p') ADVANCE(357);
      END_STATE();
    case 563:
      if (lookahead == 'p') ADVANCE(1692);
      END_STATE();
    case 564:
      if (lookahead == 'p') ADVANCE(1694);
      END_STATE();
    case 565:
      if (lookahead == 'p') ADVANCE(683);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 566:
      if (lookahead == 'p') ADVANCE(424);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(126);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(285);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(372);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(1627);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(1836);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(756);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(360);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(753);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(367);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(754);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(361);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(654);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(498);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(307);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(504);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(396);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(663);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 603:
      if (lookahead == 's') ADVANCE(1669);
      END_STATE();
    case 604:
      if (lookahead == 's') ADVANCE(1772);
      END_STATE();
    case 605:
      if (lookahead == 's') ADVANCE(1826);
      END_STATE();
    case 606:
      if (lookahead == 's') ADVANCE(1696);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(1824);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(211);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(685);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(624);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(297);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(615);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(1631);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(1642);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(1685);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(1654);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(1652);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(1682);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(1674);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(1840);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(1810);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(1690);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(1834);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(192);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(384);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(188);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(278);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(597);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(499);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(758);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(514);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(759);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(651);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(386);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(387);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(388);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(390);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(391);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(392);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 670:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 671:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 672:
      if (lookahead == 't') ADVANCE(599);
      END_STATE();
    case 673:
      if (lookahead == 't') ADVANCE(216);
      END_STATE();
    case 674:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 675:
      if (lookahead == 'u') ADVANCE(252);
      END_STATE();
    case 676:
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 677:
      if (lookahead == 'u') ADVANCE(1686);
      END_STATE();
    case 678:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 679:
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 680:
      if (lookahead == 'u') ADVANCE(602);
      END_STATE();
    case 681:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 682:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 683:
      if (lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 684:
      if (lookahead == 'u') ADVANCE(586);
      END_STATE();
    case 685:
      if (lookahead == 'u') ADVANCE(418);
      END_STATE();
    case 686:
      if (lookahead == 'u') ADVANCE(296);
      END_STATE();
    case 687:
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 688:
      if (lookahead == 'u') ADVANCE(300);
      END_STATE();
    case 689:
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 690:
      if (lookahead == 'u') ADVANCE(199);
      END_STATE();
    case 691:
      if (lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 692:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 693:
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 694:
      if (lookahead == 'u') ADVANCE(480);
      END_STATE();
    case 695:
      if (lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 696:
      if (lookahead == 'w') ADVANCE(1659);
      END_STATE();
    case 697:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 698:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(1780);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(1798);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(1802);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(1724);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(1726);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(1744);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(1754);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(1766);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(1796);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(1792);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(1800);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(1702);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(1730);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(1736);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(1752);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(1714);
      END_STATE();
    case 716:
      if (lookahead == 'x') ADVANCE(1716);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(1768);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(1771);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(1776);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(1778);
      END_STATE();
    case 721:
      if (lookahead == 'x') ADVANCE(1782);
      END_STATE();
    case 722:
      if (lookahead == 'x') ADVANCE(1738);
      END_STATE();
    case 723:
      if (lookahead == 'x') ADVANCE(1740);
      END_STATE();
    case 724:
      if (lookahead == 'x') ADVANCE(1750);
      END_STATE();
    case 725:
      if (lookahead == 'x') ADVANCE(1760);
      END_STATE();
    case 726:
      if (lookahead == 'x') ADVANCE(1762);
      END_STATE();
    case 727:
      if (lookahead == 'x') ADVANCE(1764);
      END_STATE();
    case 728:
      if (lookahead == 'x') ADVANCE(1790);
      END_STATE();
    case 729:
      if (lookahead == 'x') ADVANCE(1712);
      END_STATE();
    case 730:
      if (lookahead == 'x') ADVANCE(1728);
      END_STATE();
    case 731:
      if (lookahead == 'x') ADVANCE(1732);
      END_STATE();
    case 732:
      if (lookahead == 'x') ADVANCE(1746);
      END_STATE();
    case 733:
      if (lookahead == 'x') ADVANCE(1748);
      END_STATE();
    case 734:
      if (lookahead == 'x') ADVANCE(1784);
      END_STATE();
    case 735:
      if (lookahead == 'x') ADVANCE(1706);
      END_STATE();
    case 736:
      if (lookahead == 'x') ADVANCE(1720);
      END_STATE();
    case 737:
      if (lookahead == 'x') ADVANCE(1722);
      END_STATE();
    case 738:
      if (lookahead == 'x') ADVANCE(1734);
      END_STATE();
    case 739:
      if (lookahead == 'x') ADVANCE(1742);
      END_STATE();
    case 740:
      if (lookahead == 'x') ADVANCE(1786);
      END_STATE();
    case 741:
      if (lookahead == 'x') ADVANCE(1704);
      END_STATE();
    case 742:
      if (lookahead == 'x') ADVANCE(1756);
      END_STATE();
    case 743:
      if (lookahead == 'x') ADVANCE(1758);
      END_STATE();
    case 744:
      if (lookahead == 'x') ADVANCE(1774);
      END_STATE();
    case 745:
      if (lookahead == 'x') ADVANCE(1788);
      END_STATE();
    case 746:
      if (lookahead == 'x') ADVANCE(1708);
      END_STATE();
    case 747:
      if (lookahead == 'x') ADVANCE(1710);
      END_STATE();
    case 748:
      if (lookahead == 'x') ADVANCE(1718);
      END_STATE();
    case 749:
      if (lookahead == 'x') ADVANCE(625);
      END_STATE();
    case 750:
      if (lookahead == 'x') ADVANCE(626);
      END_STATE();
    case 751:
      if (lookahead == 'y') ADVANCE(1822);
      END_STATE();
    case 752:
      if (lookahead == 'y') ADVANCE(1818);
      END_STATE();
    case 753:
      if (lookahead == 'y') ADVANCE(1816);
      END_STATE();
    case 754:
      if (lookahead == 'y') ADVANCE(1820);
      END_STATE();
    case 755:
      if (lookahead == 'y') ADVANCE(350);
      END_STATE();
    case 756:
      if (lookahead == 'y') ADVANCE(135);
      END_STATE();
    case 757:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 758:
      if (lookahead == 'y') ADVANCE(138);
      END_STATE();
    case 759:
      if (lookahead == 'y') ADVANCE(420);
      END_STATE();
    case 760:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 761:
      if (lookahead == 'y') ADVANCE(166);
      END_STATE();
    case 762:
      if (lookahead == 'y') ADVANCE(433);
      END_STATE();
    case 763:
      if (lookahead == 'y') ADVANCE(434);
      END_STATE();
    case 764:
      if (lookahead == 'z') ADVANCE(560);
      END_STATE();
    case 765:
      if (lookahead == 'z') ADVANCE(335);
      END_STATE();
    case 766:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1844);
      if (lookahead == '\r') ADVANCE(1846);
      END_STATE();
    case 767:
      if (eof) ADVANCE(772);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 768:
      if (eof) ADVANCE(772);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(767)
      END_STATE();
    case 769:
      if (eof) ADVANCE(772);
      if (lookahead == '\n') SKIP(771)
      END_STATE();
    case 770:
      if (eof) ADVANCE(772);
      if (lookahead == '\n') SKIP(771)
      if (lookahead == '\r') SKIP(769)
      END_STATE();
    case 771:
      if (eof) ADVANCE(772);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(247);
      if (lookahead == '%') ADVANCE(800);
      if (lookahead == '&') ADVANCE(805);
      if (lookahead == '(') ADVANCE(776);
      if (lookahead == ')') ADVANCE(778);
      if (lookahead == '*') ADVANCE(798);
      if (lookahead == '+') ADVANCE(796);
      if (lookahead == ',') ADVANCE(777);
      if (lookahead == '-') ADVANCE(793);
      if (lookahead == '/') ADVANCE(799);
      if (lookahead == ':') ADVANCE(781);
      if (lookahead == ';') ADVANCE(783);
      if (lookahead == '<') ADVANCE(811);
      if (lookahead == '=') ADVANCE(815);
      if (lookahead == '>') ADVANCE(808);
      if (lookahead == 'A') ADVANCE(449);
      if (lookahead == 'B') ADVANCE(358);
      if (lookahead == 'C') ADVANCE(356);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'E') ADVANCE(410);
      if (lookahead == 'F') ADVANCE(381);
      if (lookahead == 'G') ADVANCE(569);
      if (lookahead == 'H') ADVANCE(484);
      if (lookahead == 'I') ADVANCE(450);
      if (lookahead == 'J') ADVANCE(676);
      if (lookahead == 'L') ADVANCE(359);
      if (lookahead == 'M') ADVANCE(182);
      if (lookahead == 'N') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(695);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == 'Q') ADVANCE(682);
      if (lookahead == 'R') ADVANCE(266);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(185);
      if (lookahead == 'U') ADVANCE(364);
      if (lookahead == 'V') ADVANCE(267);
      if (lookahead == 'W') ADVANCE(369);
      if (lookahead == 'X') ADVANCE(100);
      if (lookahead == '[') ADVANCE(824);
      if (lookahead == '\\') SKIP(770)
      if (lookahead == ']') ADVANCE(825);
      if (lookahead == '^') ADVANCE(804);
      if (lookahead == 'v') ADVANCE(559);
      if (lookahead == '{') ADVANCE(773);
      if (lookahead == '|') ADVANCE(803);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(771)
      END_STATE();
    case 772:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_continue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_goto);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(807);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(826);
      if (lookahead == '=') ADVANCE(820);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(820);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(827);
      if (lookahead == '=') ADVANCE(819);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(819);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(816);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(1844);
      if (lookahead == '=') ADVANCE(817);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(818);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == '|') ADVANCE(801);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(822);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(802);
      if (lookahead == '=') ADVANCE(821);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(809);
      if (lookahead == '>') ADVANCE(813);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(812);
      if (lookahead == '=') ADVANCE(810);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(806);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1633);
      if (lookahead == '3') ADVANCE(1635);
      if (lookahead == '4') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(1639);
      if (lookahead == '4') ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1340);
      if (lookahead == 'Q') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1318);
      if (lookahead == 'P') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1335);
      if (lookahead == 'M') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1501);
      if (lookahead == '_') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(907);
      if (lookahead == 'c') ADVANCE(1409);
      if (lookahead == 'e') ADVANCE(1159);
      if (lookahead == 'h') ADVANCE(1120);
      if (lookahead == 'o') ADVANCE(1508);
      if (lookahead == 'p') ADVANCE(1180);
      if (lookahead == 'y') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(1309);
      if (lookahead == 'N') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1059);
      if (lookahead == 'S') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1245);
      if (lookahead == 'I') ADVANCE(1284);
      if (lookahead == 'R') ADVANCE(1124);
      if (lookahead == 'T') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1186);
      if (lookahead == 'L') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(897);
      if (lookahead == 'Y') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1125);
      if (lookahead == 'X') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(902);
      if (lookahead == 't') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(839);
      if (lookahead == 'd') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1035);
      if (lookahead == 'e') ADVANCE(1275);
      if (lookahead == 'o') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1255);
      if (lookahead == 'e') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1280);
      if (lookahead == 'l') ADVANCE(1311);
      if (lookahead == 'o') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead == 'e') ADVANCE(1252);
      if (lookahead == 'i') ADVANCE(1033);
      if (lookahead == 'r') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1382);
      if (lookahead == 'i') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1432);
      if (lookahead == 'o') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1454);
      if (lookahead == 'e') ADVANCE(1235);
      if (lookahead == 'i') ADVANCE(1402);
      if (lookahead == 'r') ADVANCE(1010);
      if (lookahead == 'y') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1026);
      if (lookahead == 'e') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1213);
      if (lookahead == 'p') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1288);
      if (lookahead == 'e') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1196);
      if (lookahead == 'o') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(921);
      if (lookahead == 'r') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1374);
      if (lookahead == 'm') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1210);
      if (lookahead == 'n') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1403);
      if (lookahead == 'n') ADVANCE(1514);
      if (lookahead == 'p') ADVANCE(918);
      if (lookahead == 't') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1476);
      if (lookahead == 'r') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1037);
      if (lookahead == 'i') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1257);
      if (lookahead == 'l') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1001);
      if (lookahead == 'o') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1219);
      if (lookahead == 'l') ADVANCE(1297);
      if (lookahead == 'u') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1051);
      if (lookahead == 'n') ADVANCE(1056);
      if (lookahead == 'p') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1222);
      if (lookahead == 'u') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1279);
      if (lookahead == 'l') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1234);
      if (lookahead == 't') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1115);
      if (lookahead == 'q') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1377);
      if (lookahead == 'n') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1384);
      if (lookahead == 'x') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1153);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 't') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1504);
      if (lookahead == 's') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead == 's') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1091);
      if (lookahead == 'r') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1399);
      if (lookahead == 'y') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1549);
      if (lookahead == 'u') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1512);
      if (lookahead == 's') ADVANCE(1094);
      if (lookahead == 't') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(990);
      if (lookahead == 'u') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1597);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1597);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1598);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1602);
      if (lookahead == '/') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1604);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1601);
      if (lookahead == '/') ADVANCE(1604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1602);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1602);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(1600);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1603);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1604);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1604);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym_system_lib_string);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(sym_system_lib_string);
      if (lookahead == '>') ADVANCE(1605);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(aux_sym_preproc_include_token1);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1609);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(1610);
      if (lookahead == '\\') ADVANCE(1615);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1614);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '*') ADVANCE(1612);
      if (lookahead == '/') ADVANCE(1842);
      if (lookahead == '\\') ADVANCE(1619);
      if (lookahead != 0) ADVANCE(1613);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '*') ADVANCE(1612);
      if (lookahead == '\\') ADVANCE(1619);
      if (lookahead != 0) ADVANCE(1613);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(1610);
      if (lookahead == '/') ADVANCE(1617);
      if (lookahead == '\\') ADVANCE(1615);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1614);
      if (lookahead != 0) ADVANCE(1618);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(1614);
      if (lookahead == '\r') ADVANCE(1616);
      if (lookahead == '\\') ADVANCE(1620);
      if (lookahead != 0) ADVANCE(1618);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\n') ADVANCE(1614);
      if (lookahead == '\\') ADVANCE(1620);
      if (lookahead != 0) ADVANCE(1618);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '*') ADVANCE(1613);
      if (lookahead == '/') ADVANCE(1845);
      if (lookahead == '\\') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1618);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '\\') ADVANCE(1620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1618);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(1613);
      if (lookahead == '\r') ADVANCE(1622);
      if (lookahead == '*') ADVANCE(1612);
      if (lookahead == '\\') ADVANCE(1619);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1618);
      if (lookahead == '\r') ADVANCE(1623);
      if (lookahead == '\\') ADVANCE(1620);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(1845);
      if (lookahead == '\r') ADVANCE(1847);
      if (lookahead == '\\') ADVANCE(1843);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(1613);
      if (lookahead == '*') ADVANCE(1612);
      if (lookahead == '\\') ADVANCE(1619);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1618);
      if (lookahead == '\\') ADVANCE(1620);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(889);
      if (lookahead == 's') ADVANCE(1487);
      if (lookahead == 'u') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 's') ADVANCE(652);
      if (lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_Vector4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_Point);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_Arc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_Spiral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_Parabola);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_Segment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_Uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_Guid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_Blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(102);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_Menu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_Panel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 1799:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 1801:
      ACCEPT_TOKEN(anon_sym_View_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1802:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1804:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1814:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(anon_sym_Connection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 1817:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 1819:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1820:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_Transactions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 1835:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1838:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 1839:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1840:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      END_STATE();
    case 1841:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1597);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(1845);
      if (lookahead == '\\') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1845);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1844);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1845);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1844);
      if (lookahead == '\\') ADVANCE(766);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1845);
      if (lookahead == '\\') ADVANCE(1621);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 771},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 771},
  [69] = {.lex_state = 771},
  [70] = {.lex_state = 771},
  [71] = {.lex_state = 771},
  [72] = {.lex_state = 771},
  [73] = {.lex_state = 771},
  [74] = {.lex_state = 771},
  [75] = {.lex_state = 771},
  [76] = {.lex_state = 771},
  [77] = {.lex_state = 771},
  [78] = {.lex_state = 771},
  [79] = {.lex_state = 771},
  [80] = {.lex_state = 771},
  [81] = {.lex_state = 771},
  [82] = {.lex_state = 771},
  [83] = {.lex_state = 771},
  [84] = {.lex_state = 771},
  [85] = {.lex_state = 771},
  [86] = {.lex_state = 771},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 771},
  [93] = {.lex_state = 771},
  [94] = {.lex_state = 771},
  [95] = {.lex_state = 771},
  [96] = {.lex_state = 771},
  [97] = {.lex_state = 771},
  [98] = {.lex_state = 771},
  [99] = {.lex_state = 771},
  [100] = {.lex_state = 771},
  [101] = {.lex_state = 771},
  [102] = {.lex_state = 771},
  [103] = {.lex_state = 771},
  [104] = {.lex_state = 771},
  [105] = {.lex_state = 771},
  [106] = {.lex_state = 771},
  [107] = {.lex_state = 771},
  [108] = {.lex_state = 771},
  [109] = {.lex_state = 771},
  [110] = {.lex_state = 771},
  [111] = {.lex_state = 771},
  [112] = {.lex_state = 771},
  [113] = {.lex_state = 771},
  [114] = {.lex_state = 771},
  [115] = {.lex_state = 771},
  [116] = {.lex_state = 771},
  [117] = {.lex_state = 771},
  [118] = {.lex_state = 771},
  [119] = {.lex_state = 771},
  [120] = {.lex_state = 771},
  [121] = {.lex_state = 771},
  [122] = {.lex_state = 771},
  [123] = {.lex_state = 771},
  [124] = {.lex_state = 771},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 771},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 13},
  [130] = {.lex_state = 13},
  [131] = {.lex_state = 13},
  [132] = {.lex_state = 13},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 13},
  [136] = {.lex_state = 13},
  [137] = {.lex_state = 13},
  [138] = {.lex_state = 13},
  [139] = {.lex_state = 13},
  [140] = {.lex_state = 13},
  [141] = {.lex_state = 13},
  [142] = {.lex_state = 13},
  [143] = {.lex_state = 13},
  [144] = {.lex_state = 13},
  [145] = {.lex_state = 13},
  [146] = {.lex_state = 13},
  [147] = {.lex_state = 13},
  [148] = {.lex_state = 13},
  [149] = {.lex_state = 13},
  [150] = {.lex_state = 13},
  [151] = {.lex_state = 13},
  [152] = {.lex_state = 13},
  [153] = {.lex_state = 13},
  [154] = {.lex_state = 13},
  [155] = {.lex_state = 13},
  [156] = {.lex_state = 13},
  [157] = {.lex_state = 13},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 13},
  [163] = {.lex_state = 13},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 13},
  [170] = {.lex_state = 13},
  [171] = {.lex_state = 13},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 13},
  [174] = {.lex_state = 13},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 13},
  [177] = {.lex_state = 13},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 13},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 13},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 13},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 11},
  [210] = {.lex_state = 13},
  [211] = {.lex_state = 13},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 13},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 7},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_goto] = ACTIONS(1),
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_preproc_include_token1] = ACTIONS(1),
    [aux_sym_preproc_def_token1] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_Real] = ACTIONS(1),
    [anon_sym_Text] = ACTIONS(1),
    [anon_sym_Vector2] = ACTIONS(1),
    [anon_sym_Vector3] = ACTIONS(1),
    [anon_sym_Vector4] = ACTIONS(1),
    [anon_sym_Matrix3] = ACTIONS(1),
    [anon_sym_Matrix4] = ACTIONS(1),
    [anon_sym_Point] = ACTIONS(1),
    [anon_sym_Line] = ACTIONS(1),
    [anon_sym_Arc] = ACTIONS(1),
    [anon_sym_Spiral] = ACTIONS(1),
    [anon_sym_Parabola] = ACTIONS(1),
    [anon_sym_Segment] = ACTIONS(1),
    [anon_sym_Element] = ACTIONS(1),
    [anon_sym_Model] = ACTIONS(1),
    [anon_sym_View] = ACTIONS(1),
    [anon_sym_Macro_Function] = ACTIONS(1),
    [anon_sym_Function] = ACTIONS(1),
    [anon_sym_Uid] = ACTIONS(1),
    [anon_sym_Guid] = ACTIONS(1),
    [anon_sym_Attributes] = ACTIONS(1),
    [anon_sym_SDR_Attribute] = ACTIONS(1),
    [anon_sym_Blob] = ACTIONS(1),
    [anon_sym_Screen_Text] = ACTIONS(1),
    [anon_sym_Textstyle_Data] = ACTIONS(1),
    [anon_sym_Equality_Label] = ACTIONS(1),
    [anon_sym_Undo] = ACTIONS(1),
    [anon_sym_Undo_List] = ACTIONS(1),
    [anon_sym_Widget] = ACTIONS(1),
    [anon_sym_Menu] = ACTIONS(1),
    [anon_sym_Panel] = ACTIONS(1),
    [anon_sym_Overlay_Widget] = ACTIONS(1),
    [anon_sym_Vertical_Group] = ACTIONS(1),
    [anon_sym_Horizontal_Group] = ACTIONS(1),
    [anon_sym_Widget_Pages] = ACTIONS(1),
    [anon_sym_Button] = ACTIONS(1),
    [anon_sym_Select_Button] = ACTIONS(1),
    [anon_sym_Angle_Box] = ACTIONS(1),
    [anon_sym_Attributes_Box] = ACTIONS(1),
    [anon_sym_Billboard_Box] = ACTIONS(1),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(1),
    [anon_sym_Bitmap_List_Box] = ACTIONS(1),
    [anon_sym_Chainage_Box] = ACTIONS(1),
    [anon_sym_Choice_Box] = ACTIONS(1),
    [anon_sym_Colour_Box] = ACTIONS(1),
    [anon_sym_Colour_Message_Box] = ACTIONS(1),
    [anon_sym_Date_Time_Box] = ACTIONS(1),
    [anon_sym_Directory_Box] = ACTIONS(1),
    [anon_sym_Draw_Box] = ACTIONS(1),
    [anon_sym_File_Box] = ACTIONS(1),
    [anon_sym_Function_Box] = ACTIONS(1),
    [anon_sym_Graph_Box] = ACTIONS(1),
    [anon_sym_GridCtrl_Box] = ACTIONS(1),
    [anon_sym_HyperLink_Box] = ACTIONS(1),
    [anon_sym_Input_Box] = ACTIONS(1),
    [anon_sym_Integer_Box] = ACTIONS(1),
    [anon_sym_Justify_Box] = ACTIONS(1),
    [anon_sym_Linestyle_Box] = ACTIONS(1),
    [anon_sym_List_Box] = ACTIONS(1),
    [anon_sym_ListCtrl_Box] = ACTIONS(1),
    [anon_sym_Map_File_Box] = ACTIONS(1),
    [anon_sym_Message_Box] = ACTIONS(1),
    [anon_sym_Model_Box] = ACTIONS(1),
    [anon_sym_Name_Box] = ACTIONS(1),
    [anon_sym_Named_Tick_Box] = ACTIONS(1),
    [anon_sym_New_Select_Box] = ACTIONS(1),
    [anon_sym_New_XYZ_Box] = ACTIONS(1),
    [anon_sym_Plotter_Box] = ACTIONS(1),
    [anon_sym_Polygon_Box] = ACTIONS(1),
    [anon_sym_Real_Box] = ACTIONS(1),
    [anon_sym_Report_Box] = ACTIONS(1),
    [anon_sym_Select_Box] = ACTIONS(1),
    [anon_sym_Select_Boxes] = ACTIONS(1),
    [anon_sym_Sheet_Size_Box] = ACTIONS(1),
    [anon_sym_Source_Box] = ACTIONS(1),
    [anon_sym_Symbol_Box] = ACTIONS(1),
    [anon_sym_Tab_Box] = ACTIONS(1),
    [anon_sym_Target_Box] = ACTIONS(1),
    [anon_sym_Template_Box] = ACTIONS(1),
    [anon_sym_Text_Edit_Box] = ACTIONS(1),
    [anon_sym_Text_Style_Box] = ACTIONS(1),
    [anon_sym_Texture_Box] = ACTIONS(1),
    [anon_sym_Tree_Box] = ACTIONS(1),
    [anon_sym_Tree_Page] = ACTIONS(1),
    [anon_sym_Tick_Box] = ACTIONS(1),
    [anon_sym_Tin_Box] = ACTIONS(1),
    [anon_sym_View_Box] = ACTIONS(1),
    [anon_sym_XYZ_Box] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Map_File] = ACTIONS(1),
    [anon_sym_Plot_Parameter_File] = ACTIONS(1),
    [anon_sym_XML_Document] = ACTIONS(1),
    [anon_sym_XML_Node] = ACTIONS(1),
    [anon_sym_Connection] = ACTIONS(1),
    [anon_sym_Select_Query] = ACTIONS(1),
    [anon_sym_Insert_Query] = ACTIONS(1),
    [anon_sym_Update_Query] = ACTIONS(1),
    [anon_sym_Delete_Query] = ACTIONS(1),
    [anon_sym_Database_Results] = ACTIONS(1),
    [anon_sym_Transactions] = ACTIONS(1),
    [anon_sym_Parameter_Collection] = ACTIONS(1),
    [anon_sym_Query_Condition] = ACTIONS(1),
    [anon_sym_Manual_Condition] = ACTIONS(1),
    [anon_sym_Dynamic_Element] = ACTIONS(1),
    [anon_sym_Dynamic_Integer] = ACTIONS(1),
    [anon_sym_Dynamic_Real] = ACTIONS(1),
    [anon_sym_Dynamic_Text] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(217),
    [sym__definition] = STATE(69),
    [sym_function_definition] = STATE(69),
    [sym_compound_statement] = STATE(69),
    [sym__declaration_specifiers] = STATE(184),
    [sym__type_specifier] = STATE(197),
    [sym_preproc_include] = STATE(69),
    [sym_preproc_def] = STATE(69),
    [sym_primitive_type] = STATE(197),
    [aux_sym_source_file_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [aux_sym_preproc_include_token1] = ACTIONS(9),
    [aux_sym_preproc_def_token1] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_compound_statement] = STATE(7),
    [sym_while_statement] = STATE(7),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(7),
    [sym_case_statement] = STATE(7),
    [sym_break_statement] = STATE(7),
    [sym_labeled_statement] = STATE(7),
    [sym_continue_statement] = STATE(7),
    [sym_goto_statement] = STATE(7),
    [sym_switch_statement] = STATE(7),
    [sym__non_case_statement] = STATE(7),
    [sym_if_statement] = STATE(7),
    [sym_for_statement] = STATE(7),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(7),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(7),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(7),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(19),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_compound_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_labeled_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_goto_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_while] = ACTIONS(58),
    [anon_sym_LPAREN] = ACTIONS(61),
    [anon_sym_case] = ACTIONS(64),
    [anon_sym_default] = ACTIONS(67),
    [anon_sym_break] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_continue] = ACTIONS(76),
    [anon_sym_goto] = ACTIONS(79),
    [anon_sym_switch] = ACTIONS(82),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_for] = ACTIONS(88),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_return] = ACTIONS(94),
    [sym_identifier] = ACTIONS(97),
    [sym_number_literal] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_void] = ACTIONS(106),
    [anon_sym_Integer] = ACTIONS(106),
    [anon_sym_Real] = ACTIONS(106),
    [anon_sym_Text] = ACTIONS(106),
    [anon_sym_Vector2] = ACTIONS(106),
    [anon_sym_Vector3] = ACTIONS(106),
    [anon_sym_Vector4] = ACTIONS(106),
    [anon_sym_Matrix3] = ACTIONS(106),
    [anon_sym_Matrix4] = ACTIONS(106),
    [anon_sym_Point] = ACTIONS(106),
    [anon_sym_Line] = ACTIONS(106),
    [anon_sym_Arc] = ACTIONS(106),
    [anon_sym_Spiral] = ACTIONS(106),
    [anon_sym_Parabola] = ACTIONS(106),
    [anon_sym_Segment] = ACTIONS(106),
    [anon_sym_Element] = ACTIONS(106),
    [anon_sym_Model] = ACTIONS(106),
    [anon_sym_View] = ACTIONS(106),
    [anon_sym_Macro_Function] = ACTIONS(106),
    [anon_sym_Function] = ACTIONS(106),
    [anon_sym_Uid] = ACTIONS(106),
    [anon_sym_Guid] = ACTIONS(106),
    [anon_sym_Attributes] = ACTIONS(106),
    [anon_sym_SDR_Attribute] = ACTIONS(106),
    [anon_sym_Blob] = ACTIONS(106),
    [anon_sym_Screen_Text] = ACTIONS(106),
    [anon_sym_Textstyle_Data] = ACTIONS(106),
    [anon_sym_Equality_Label] = ACTIONS(106),
    [anon_sym_Undo] = ACTIONS(106),
    [anon_sym_Undo_List] = ACTIONS(106),
    [anon_sym_Widget] = ACTIONS(106),
    [anon_sym_Menu] = ACTIONS(106),
    [anon_sym_Panel] = ACTIONS(106),
    [anon_sym_Overlay_Widget] = ACTIONS(106),
    [anon_sym_Vertical_Group] = ACTIONS(106),
    [anon_sym_Horizontal_Group] = ACTIONS(106),
    [anon_sym_Widget_Pages] = ACTIONS(106),
    [anon_sym_Button] = ACTIONS(106),
    [anon_sym_Select_Button] = ACTIONS(106),
    [anon_sym_Angle_Box] = ACTIONS(106),
    [anon_sym_Attributes_Box] = ACTIONS(106),
    [anon_sym_Billboard_Box] = ACTIONS(106),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(106),
    [anon_sym_Bitmap_List_Box] = ACTIONS(106),
    [anon_sym_Chainage_Box] = ACTIONS(106),
    [anon_sym_Choice_Box] = ACTIONS(106),
    [anon_sym_Colour_Box] = ACTIONS(106),
    [anon_sym_Colour_Message_Box] = ACTIONS(106),
    [anon_sym_Date_Time_Box] = ACTIONS(106),
    [anon_sym_Directory_Box] = ACTIONS(106),
    [anon_sym_Draw_Box] = ACTIONS(106),
    [anon_sym_File_Box] = ACTIONS(106),
    [anon_sym_Function_Box] = ACTIONS(106),
    [anon_sym_Graph_Box] = ACTIONS(106),
    [anon_sym_GridCtrl_Box] = ACTIONS(106),
    [anon_sym_HyperLink_Box] = ACTIONS(106),
    [anon_sym_Input_Box] = ACTIONS(106),
    [anon_sym_Integer_Box] = ACTIONS(106),
    [anon_sym_Justify_Box] = ACTIONS(106),
    [anon_sym_Linestyle_Box] = ACTIONS(106),
    [anon_sym_List_Box] = ACTIONS(106),
    [anon_sym_ListCtrl_Box] = ACTIONS(106),
    [anon_sym_Map_File_Box] = ACTIONS(106),
    [anon_sym_Message_Box] = ACTIONS(106),
    [anon_sym_Model_Box] = ACTIONS(106),
    [anon_sym_Name_Box] = ACTIONS(106),
    [anon_sym_Named_Tick_Box] = ACTIONS(106),
    [anon_sym_New_Select_Box] = ACTIONS(106),
    [anon_sym_New_XYZ_Box] = ACTIONS(106),
    [anon_sym_Plotter_Box] = ACTIONS(106),
    [anon_sym_Polygon_Box] = ACTIONS(106),
    [anon_sym_Real_Box] = ACTIONS(106),
    [anon_sym_Report_Box] = ACTIONS(106),
    [anon_sym_Select_Box] = ACTIONS(106),
    [anon_sym_Select_Boxes] = ACTIONS(106),
    [anon_sym_Sheet_Size_Box] = ACTIONS(106),
    [anon_sym_Source_Box] = ACTIONS(106),
    [anon_sym_Symbol_Box] = ACTIONS(106),
    [anon_sym_Tab_Box] = ACTIONS(106),
    [anon_sym_Target_Box] = ACTIONS(106),
    [anon_sym_Template_Box] = ACTIONS(106),
    [anon_sym_Text_Edit_Box] = ACTIONS(106),
    [anon_sym_Text_Style_Box] = ACTIONS(106),
    [anon_sym_Texture_Box] = ACTIONS(106),
    [anon_sym_Tree_Box] = ACTIONS(106),
    [anon_sym_Tree_Page] = ACTIONS(106),
    [anon_sym_Tick_Box] = ACTIONS(106),
    [anon_sym_Tin_Box] = ACTIONS(106),
    [anon_sym_View_Box] = ACTIONS(106),
    [anon_sym_XYZ_Box] = ACTIONS(106),
    [anon_sym_File] = ACTIONS(106),
    [anon_sym_Map_File] = ACTIONS(106),
    [anon_sym_Plot_Parameter_File] = ACTIONS(106),
    [anon_sym_XML_Document] = ACTIONS(106),
    [anon_sym_XML_Node] = ACTIONS(106),
    [anon_sym_Connection] = ACTIONS(106),
    [anon_sym_Select_Query] = ACTIONS(106),
    [anon_sym_Insert_Query] = ACTIONS(106),
    [anon_sym_Update_Query] = ACTIONS(106),
    [anon_sym_Delete_Query] = ACTIONS(106),
    [anon_sym_Database_Results] = ACTIONS(106),
    [anon_sym_Transactions] = ACTIONS(106),
    [anon_sym_Parameter_Collection] = ACTIONS(106),
    [anon_sym_Query_Condition] = ACTIONS(106),
    [anon_sym_Manual_Condition] = ACTIONS(106),
    [anon_sym_Dynamic_Element] = ACTIONS(106),
    [anon_sym_Dynamic_Integer] = ACTIONS(106),
    [anon_sym_Dynamic_Real] = ACTIONS(106),
    [anon_sym_Dynamic_Text] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_compound_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_labeled_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_goto_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_compound_statement] = STATE(4),
    [sym_while_statement] = STATE(4),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(4),
    [sym_case_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_labeled_statement] = STATE(4),
    [sym_continue_statement] = STATE(4),
    [sym_goto_statement] = STATE(4),
    [sym_switch_statement] = STATE(4),
    [sym__non_case_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(4),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(4),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(4),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_compound_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_labeled_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_goto_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_compound_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_labeled_statement] = STATE(3),
    [sym_continue_statement] = STATE(3),
    [sym_goto_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_compound_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(6),
    [sym_case_statement] = STATE(6),
    [sym_break_statement] = STATE(6),
    [sym_labeled_statement] = STATE(6),
    [sym_continue_statement] = STATE(6),
    [sym_goto_statement] = STATE(6),
    [sym_switch_statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(6),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(6),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(6),
    [sym_primitive_type] = STATE(197),
    [aux_sym_compound_statement_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(13),
    [sym_labeled_statement] = STATE(13),
    [sym_continue_statement] = STATE(13),
    [sym_goto_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(125),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_compound_statement] = STATE(9),
    [sym_while_statement] = STATE(9),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(9),
    [sym_labeled_statement] = STATE(9),
    [sym_continue_statement] = STATE(9),
    [sym_goto_statement] = STATE(9),
    [sym_switch_statement] = STATE(9),
    [sym__non_case_statement] = STATE(9),
    [sym_if_statement] = STATE(9),
    [sym_for_statement] = STATE(9),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(9),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(9),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(9),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(147),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(13),
    [sym_labeled_statement] = STATE(13),
    [sym_continue_statement] = STATE(13),
    [sym_goto_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(151),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_compound_statement] = STATE(11),
    [sym_while_statement] = STATE(11),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(11),
    [sym_labeled_statement] = STATE(11),
    [sym_continue_statement] = STATE(11),
    [sym_goto_statement] = STATE(11),
    [sym_switch_statement] = STATE(11),
    [sym__non_case_statement] = STATE(11),
    [sym_if_statement] = STATE(11),
    [sym_for_statement] = STATE(11),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(11),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(11),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(11),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_else] = ACTIONS(155),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(13),
    [sym_labeled_statement] = STATE(13),
    [sym_continue_statement] = STATE(13),
    [sym_goto_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(157),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_while] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_case] = ACTIONS(168),
    [anon_sym_default] = ACTIONS(168),
    [anon_sym_break] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_continue] = ACTIONS(176),
    [anon_sym_goto] = ACTIONS(179),
    [anon_sym_switch] = ACTIONS(182),
    [anon_sym_if] = ACTIONS(185),
    [anon_sym_else] = ACTIONS(168),
    [anon_sym_for] = ACTIONS(188),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(194),
    [sym_identifier] = ACTIONS(197),
    [sym_number_literal] = ACTIONS(200),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_void] = ACTIONS(206),
    [anon_sym_Integer] = ACTIONS(206),
    [anon_sym_Real] = ACTIONS(206),
    [anon_sym_Text] = ACTIONS(206),
    [anon_sym_Vector2] = ACTIONS(206),
    [anon_sym_Vector3] = ACTIONS(206),
    [anon_sym_Vector4] = ACTIONS(206),
    [anon_sym_Matrix3] = ACTIONS(206),
    [anon_sym_Matrix4] = ACTIONS(206),
    [anon_sym_Point] = ACTIONS(206),
    [anon_sym_Line] = ACTIONS(206),
    [anon_sym_Arc] = ACTIONS(206),
    [anon_sym_Spiral] = ACTIONS(206),
    [anon_sym_Parabola] = ACTIONS(206),
    [anon_sym_Segment] = ACTIONS(206),
    [anon_sym_Element] = ACTIONS(206),
    [anon_sym_Model] = ACTIONS(206),
    [anon_sym_View] = ACTIONS(206),
    [anon_sym_Macro_Function] = ACTIONS(206),
    [anon_sym_Function] = ACTIONS(206),
    [anon_sym_Uid] = ACTIONS(206),
    [anon_sym_Guid] = ACTIONS(206),
    [anon_sym_Attributes] = ACTIONS(206),
    [anon_sym_SDR_Attribute] = ACTIONS(206),
    [anon_sym_Blob] = ACTIONS(206),
    [anon_sym_Screen_Text] = ACTIONS(206),
    [anon_sym_Textstyle_Data] = ACTIONS(206),
    [anon_sym_Equality_Label] = ACTIONS(206),
    [anon_sym_Undo] = ACTIONS(206),
    [anon_sym_Undo_List] = ACTIONS(206),
    [anon_sym_Widget] = ACTIONS(206),
    [anon_sym_Menu] = ACTIONS(206),
    [anon_sym_Panel] = ACTIONS(206),
    [anon_sym_Overlay_Widget] = ACTIONS(206),
    [anon_sym_Vertical_Group] = ACTIONS(206),
    [anon_sym_Horizontal_Group] = ACTIONS(206),
    [anon_sym_Widget_Pages] = ACTIONS(206),
    [anon_sym_Button] = ACTIONS(206),
    [anon_sym_Select_Button] = ACTIONS(206),
    [anon_sym_Angle_Box] = ACTIONS(206),
    [anon_sym_Attributes_Box] = ACTIONS(206),
    [anon_sym_Billboard_Box] = ACTIONS(206),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(206),
    [anon_sym_Bitmap_List_Box] = ACTIONS(206),
    [anon_sym_Chainage_Box] = ACTIONS(206),
    [anon_sym_Choice_Box] = ACTIONS(206),
    [anon_sym_Colour_Box] = ACTIONS(206),
    [anon_sym_Colour_Message_Box] = ACTIONS(206),
    [anon_sym_Date_Time_Box] = ACTIONS(206),
    [anon_sym_Directory_Box] = ACTIONS(206),
    [anon_sym_Draw_Box] = ACTIONS(206),
    [anon_sym_File_Box] = ACTIONS(206),
    [anon_sym_Function_Box] = ACTIONS(206),
    [anon_sym_Graph_Box] = ACTIONS(206),
    [anon_sym_GridCtrl_Box] = ACTIONS(206),
    [anon_sym_HyperLink_Box] = ACTIONS(206),
    [anon_sym_Input_Box] = ACTIONS(206),
    [anon_sym_Integer_Box] = ACTIONS(206),
    [anon_sym_Justify_Box] = ACTIONS(206),
    [anon_sym_Linestyle_Box] = ACTIONS(206),
    [anon_sym_List_Box] = ACTIONS(206),
    [anon_sym_ListCtrl_Box] = ACTIONS(206),
    [anon_sym_Map_File_Box] = ACTIONS(206),
    [anon_sym_Message_Box] = ACTIONS(206),
    [anon_sym_Model_Box] = ACTIONS(206),
    [anon_sym_Name_Box] = ACTIONS(206),
    [anon_sym_Named_Tick_Box] = ACTIONS(206),
    [anon_sym_New_Select_Box] = ACTIONS(206),
    [anon_sym_New_XYZ_Box] = ACTIONS(206),
    [anon_sym_Plotter_Box] = ACTIONS(206),
    [anon_sym_Polygon_Box] = ACTIONS(206),
    [anon_sym_Real_Box] = ACTIONS(206),
    [anon_sym_Report_Box] = ACTIONS(206),
    [anon_sym_Select_Box] = ACTIONS(206),
    [anon_sym_Select_Boxes] = ACTIONS(206),
    [anon_sym_Sheet_Size_Box] = ACTIONS(206),
    [anon_sym_Source_Box] = ACTIONS(206),
    [anon_sym_Symbol_Box] = ACTIONS(206),
    [anon_sym_Tab_Box] = ACTIONS(206),
    [anon_sym_Target_Box] = ACTIONS(206),
    [anon_sym_Template_Box] = ACTIONS(206),
    [anon_sym_Text_Edit_Box] = ACTIONS(206),
    [anon_sym_Text_Style_Box] = ACTIONS(206),
    [anon_sym_Texture_Box] = ACTIONS(206),
    [anon_sym_Tree_Box] = ACTIONS(206),
    [anon_sym_Tree_Page] = ACTIONS(206),
    [anon_sym_Tick_Box] = ACTIONS(206),
    [anon_sym_Tin_Box] = ACTIONS(206),
    [anon_sym_View_Box] = ACTIONS(206),
    [anon_sym_XYZ_Box] = ACTIONS(206),
    [anon_sym_File] = ACTIONS(206),
    [anon_sym_Map_File] = ACTIONS(206),
    [anon_sym_Plot_Parameter_File] = ACTIONS(206),
    [anon_sym_XML_Document] = ACTIONS(206),
    [anon_sym_XML_Node] = ACTIONS(206),
    [anon_sym_Connection] = ACTIONS(206),
    [anon_sym_Select_Query] = ACTIONS(206),
    [anon_sym_Insert_Query] = ACTIONS(206),
    [anon_sym_Update_Query] = ACTIONS(206),
    [anon_sym_Delete_Query] = ACTIONS(206),
    [anon_sym_Database_Results] = ACTIONS(206),
    [anon_sym_Transactions] = ACTIONS(206),
    [anon_sym_Parameter_Collection] = ACTIONS(206),
    [anon_sym_Query_Condition] = ACTIONS(206),
    [anon_sym_Manual_Condition] = ACTIONS(206),
    [anon_sym_Dynamic_Element] = ACTIONS(206),
    [anon_sym_Dynamic_Integer] = ACTIONS(206),
    [anon_sym_Dynamic_Real] = ACTIONS(206),
    [anon_sym_Dynamic_Text] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(14),
    [sym_labeled_statement] = STATE(14),
    [sym_continue_statement] = STATE(14),
    [sym_goto_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_while] = ACTIONS(212),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_case] = ACTIONS(168),
    [anon_sym_default] = ACTIONS(168),
    [anon_sym_break] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(218),
    [anon_sym_continue] = ACTIONS(221),
    [anon_sym_goto] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(227),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_for] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_return] = ACTIONS(236),
    [sym_identifier] = ACTIONS(197),
    [sym_number_literal] = ACTIONS(239),
    [anon_sym_DQUOTE] = ACTIONS(203),
    [anon_sym_void] = ACTIONS(206),
    [anon_sym_Integer] = ACTIONS(206),
    [anon_sym_Real] = ACTIONS(206),
    [anon_sym_Text] = ACTIONS(206),
    [anon_sym_Vector2] = ACTIONS(206),
    [anon_sym_Vector3] = ACTIONS(206),
    [anon_sym_Vector4] = ACTIONS(206),
    [anon_sym_Matrix3] = ACTIONS(206),
    [anon_sym_Matrix4] = ACTIONS(206),
    [anon_sym_Point] = ACTIONS(206),
    [anon_sym_Line] = ACTIONS(206),
    [anon_sym_Arc] = ACTIONS(206),
    [anon_sym_Spiral] = ACTIONS(206),
    [anon_sym_Parabola] = ACTIONS(206),
    [anon_sym_Segment] = ACTIONS(206),
    [anon_sym_Element] = ACTIONS(206),
    [anon_sym_Model] = ACTIONS(206),
    [anon_sym_View] = ACTIONS(206),
    [anon_sym_Macro_Function] = ACTIONS(206),
    [anon_sym_Function] = ACTIONS(206),
    [anon_sym_Uid] = ACTIONS(206),
    [anon_sym_Guid] = ACTIONS(206),
    [anon_sym_Attributes] = ACTIONS(206),
    [anon_sym_SDR_Attribute] = ACTIONS(206),
    [anon_sym_Blob] = ACTIONS(206),
    [anon_sym_Screen_Text] = ACTIONS(206),
    [anon_sym_Textstyle_Data] = ACTIONS(206),
    [anon_sym_Equality_Label] = ACTIONS(206),
    [anon_sym_Undo] = ACTIONS(206),
    [anon_sym_Undo_List] = ACTIONS(206),
    [anon_sym_Widget] = ACTIONS(206),
    [anon_sym_Menu] = ACTIONS(206),
    [anon_sym_Panel] = ACTIONS(206),
    [anon_sym_Overlay_Widget] = ACTIONS(206),
    [anon_sym_Vertical_Group] = ACTIONS(206),
    [anon_sym_Horizontal_Group] = ACTIONS(206),
    [anon_sym_Widget_Pages] = ACTIONS(206),
    [anon_sym_Button] = ACTIONS(206),
    [anon_sym_Select_Button] = ACTIONS(206),
    [anon_sym_Angle_Box] = ACTIONS(206),
    [anon_sym_Attributes_Box] = ACTIONS(206),
    [anon_sym_Billboard_Box] = ACTIONS(206),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(206),
    [anon_sym_Bitmap_List_Box] = ACTIONS(206),
    [anon_sym_Chainage_Box] = ACTIONS(206),
    [anon_sym_Choice_Box] = ACTIONS(206),
    [anon_sym_Colour_Box] = ACTIONS(206),
    [anon_sym_Colour_Message_Box] = ACTIONS(206),
    [anon_sym_Date_Time_Box] = ACTIONS(206),
    [anon_sym_Directory_Box] = ACTIONS(206),
    [anon_sym_Draw_Box] = ACTIONS(206),
    [anon_sym_File_Box] = ACTIONS(206),
    [anon_sym_Function_Box] = ACTIONS(206),
    [anon_sym_Graph_Box] = ACTIONS(206),
    [anon_sym_GridCtrl_Box] = ACTIONS(206),
    [anon_sym_HyperLink_Box] = ACTIONS(206),
    [anon_sym_Input_Box] = ACTIONS(206),
    [anon_sym_Integer_Box] = ACTIONS(206),
    [anon_sym_Justify_Box] = ACTIONS(206),
    [anon_sym_Linestyle_Box] = ACTIONS(206),
    [anon_sym_List_Box] = ACTIONS(206),
    [anon_sym_ListCtrl_Box] = ACTIONS(206),
    [anon_sym_Map_File_Box] = ACTIONS(206),
    [anon_sym_Message_Box] = ACTIONS(206),
    [anon_sym_Model_Box] = ACTIONS(206),
    [anon_sym_Name_Box] = ACTIONS(206),
    [anon_sym_Named_Tick_Box] = ACTIONS(206),
    [anon_sym_New_Select_Box] = ACTIONS(206),
    [anon_sym_New_XYZ_Box] = ACTIONS(206),
    [anon_sym_Plotter_Box] = ACTIONS(206),
    [anon_sym_Polygon_Box] = ACTIONS(206),
    [anon_sym_Real_Box] = ACTIONS(206),
    [anon_sym_Report_Box] = ACTIONS(206),
    [anon_sym_Select_Box] = ACTIONS(206),
    [anon_sym_Select_Boxes] = ACTIONS(206),
    [anon_sym_Sheet_Size_Box] = ACTIONS(206),
    [anon_sym_Source_Box] = ACTIONS(206),
    [anon_sym_Symbol_Box] = ACTIONS(206),
    [anon_sym_Tab_Box] = ACTIONS(206),
    [anon_sym_Target_Box] = ACTIONS(206),
    [anon_sym_Template_Box] = ACTIONS(206),
    [anon_sym_Text_Edit_Box] = ACTIONS(206),
    [anon_sym_Text_Style_Box] = ACTIONS(206),
    [anon_sym_Texture_Box] = ACTIONS(206),
    [anon_sym_Tree_Box] = ACTIONS(206),
    [anon_sym_Tree_Page] = ACTIONS(206),
    [anon_sym_Tick_Box] = ACTIONS(206),
    [anon_sym_Tin_Box] = ACTIONS(206),
    [anon_sym_View_Box] = ACTIONS(206),
    [anon_sym_XYZ_Box] = ACTIONS(206),
    [anon_sym_File] = ACTIONS(206),
    [anon_sym_Map_File] = ACTIONS(206),
    [anon_sym_Plot_Parameter_File] = ACTIONS(206),
    [anon_sym_XML_Document] = ACTIONS(206),
    [anon_sym_XML_Node] = ACTIONS(206),
    [anon_sym_Connection] = ACTIONS(206),
    [anon_sym_Select_Query] = ACTIONS(206),
    [anon_sym_Insert_Query] = ACTIONS(206),
    [anon_sym_Update_Query] = ACTIONS(206),
    [anon_sym_Delete_Query] = ACTIONS(206),
    [anon_sym_Database_Results] = ACTIONS(206),
    [anon_sym_Transactions] = ACTIONS(206),
    [anon_sym_Parameter_Collection] = ACTIONS(206),
    [anon_sym_Query_Condition] = ACTIONS(206),
    [anon_sym_Manual_Condition] = ACTIONS(206),
    [anon_sym_Dynamic_Element] = ACTIONS(206),
    [anon_sym_Dynamic_Integer] = ACTIONS(206),
    [anon_sym_Dynamic_Real] = ACTIONS(206),
    [anon_sym_Dynamic_Text] = ACTIONS(206),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_compound_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(62),
    [sym_case_statement] = STATE(62),
    [sym_break_statement] = STATE(62),
    [sym_labeled_statement] = STATE(62),
    [sym_continue_statement] = STATE(62),
    [sym_goto_statement] = STATE(62),
    [sym_switch_statement] = STATE(62),
    [sym__non_case_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_for_statement] = STATE(62),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(62),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(62),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(62),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(14),
    [sym_labeled_statement] = STATE(14),
    [sym_continue_statement] = STATE(14),
    [sym_goto_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(125),
    [anon_sym_default] = ACTIONS(125),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_compound_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(35),
    [sym_case_statement] = STATE(35),
    [sym_break_statement] = STATE(35),
    [sym_labeled_statement] = STATE(35),
    [sym_continue_statement] = STATE(35),
    [sym_goto_statement] = STATE(35),
    [sym_switch_statement] = STATE(35),
    [sym__non_case_statement] = STATE(35),
    [sym_if_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(35),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(35),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(35),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_compound_statement] = STATE(38),
    [sym_while_statement] = STATE(38),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(38),
    [sym_case_statement] = STATE(38),
    [sym_break_statement] = STATE(38),
    [sym_labeled_statement] = STATE(38),
    [sym_continue_statement] = STATE(38),
    [sym_goto_statement] = STATE(38),
    [sym_switch_statement] = STATE(38),
    [sym__non_case_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym_for_statement] = STATE(38),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(38),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(38),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(38),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_compound_statement] = STATE(16),
    [sym_while_statement] = STATE(16),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(16),
    [sym_labeled_statement] = STATE(16),
    [sym_continue_statement] = STATE(16),
    [sym_goto_statement] = STATE(16),
    [sym_switch_statement] = STATE(16),
    [sym__non_case_statement] = STATE(16),
    [sym_if_statement] = STATE(16),
    [sym_for_statement] = STATE(16),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(16),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(16),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(16),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(16),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(147),
    [anon_sym_default] = ACTIONS(147),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_compound_statement] = STATE(43),
    [sym_while_statement] = STATE(43),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(43),
    [sym_case_statement] = STATE(43),
    [sym_break_statement] = STATE(43),
    [sym_labeled_statement] = STATE(43),
    [sym_continue_statement] = STATE(43),
    [sym_goto_statement] = STATE(43),
    [sym_switch_statement] = STATE(43),
    [sym__non_case_statement] = STATE(43),
    [sym_if_statement] = STATE(43),
    [sym_for_statement] = STATE(43),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(43),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(43),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(43),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_compound_statement] = STATE(26),
    [sym_while_statement] = STATE(26),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(26),
    [sym_labeled_statement] = STATE(26),
    [sym_continue_statement] = STATE(26),
    [sym_goto_statement] = STATE(26),
    [sym_switch_statement] = STATE(26),
    [sym__non_case_statement] = STATE(26),
    [sym_if_statement] = STATE(26),
    [sym_for_statement] = STATE(26),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(26),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(26),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(26),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(26),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(153),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(155),
    [anon_sym_default] = ACTIONS(155),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_compound_statement] = STATE(39),
    [sym_while_statement] = STATE(39),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(39),
    [sym_case_statement] = STATE(39),
    [sym_break_statement] = STATE(39),
    [sym_labeled_statement] = STATE(39),
    [sym_continue_statement] = STATE(39),
    [sym_goto_statement] = STATE(39),
    [sym_switch_statement] = STATE(39),
    [sym__non_case_statement] = STATE(39),
    [sym_if_statement] = STATE(39),
    [sym_for_statement] = STATE(39),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(39),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(39),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(39),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_compound_statement] = STATE(58),
    [sym_while_statement] = STATE(58),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(58),
    [sym_case_statement] = STATE(58),
    [sym_break_statement] = STATE(58),
    [sym_labeled_statement] = STATE(58),
    [sym_continue_statement] = STATE(58),
    [sym_goto_statement] = STATE(58),
    [sym_switch_statement] = STATE(58),
    [sym__non_case_statement] = STATE(58),
    [sym_if_statement] = STATE(58),
    [sym_for_statement] = STATE(58),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(58),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(58),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(58),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_compound_statement] = STATE(42),
    [sym_while_statement] = STATE(42),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(42),
    [sym_case_statement] = STATE(42),
    [sym_break_statement] = STATE(42),
    [sym_labeled_statement] = STATE(42),
    [sym_continue_statement] = STATE(42),
    [sym_goto_statement] = STATE(42),
    [sym_switch_statement] = STATE(42),
    [sym__non_case_statement] = STATE(42),
    [sym_if_statement] = STATE(42),
    [sym_for_statement] = STATE(42),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(42),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(42),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(42),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_compound_statement] = STATE(61),
    [sym_while_statement] = STATE(61),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(61),
    [sym_case_statement] = STATE(61),
    [sym_break_statement] = STATE(61),
    [sym_labeled_statement] = STATE(61),
    [sym_continue_statement] = STATE(61),
    [sym_goto_statement] = STATE(61),
    [sym_switch_statement] = STATE(61),
    [sym__non_case_statement] = STATE(61),
    [sym_if_statement] = STATE(61),
    [sym_for_statement] = STATE(61),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(61),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(61),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(61),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym_break_statement] = STATE(14),
    [sym_labeled_statement] = STATE(14),
    [sym_continue_statement] = STATE(14),
    [sym_goto_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(197),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(151),
    [anon_sym_default] = ACTIONS(151),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [sym_compound_statement] = STATE(41),
    [sym_while_statement] = STATE(41),
    [sym__declaration_specifiers] = STATE(173),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(41),
    [sym_case_statement] = STATE(41),
    [sym_break_statement] = STATE(41),
    [sym_labeled_statement] = STATE(41),
    [sym_continue_statement] = STATE(41),
    [sym_goto_statement] = STATE(41),
    [sym_switch_statement] = STATE(41),
    [sym__non_case_statement] = STATE(41),
    [sym_if_statement] = STATE(41),
    [sym_for_statement] = STATE(41),
    [sym_unary_expression] = STATE(109),
    [sym_expression_statement] = STATE(41),
    [sym_comma_expression] = STATE(230),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(109),
    [sym_assignment_expression] = STATE(109),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(109),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(41),
    [sym__expression] = STATE(109),
    [sym__statement_identifier] = STATE(236),
    [sym_string_literal] = STATE(109),
    [sym_declaration] = STATE(41),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(119),
    [anon_sym_while] = ACTIONS(123),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_continue] = ACTIONS(131),
    [anon_sym_goto] = ACTIONS(133),
    [anon_sym_switch] = ACTIONS(135),
    [anon_sym_if] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(141),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(143),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [sym_compound_statement] = STATE(54),
    [sym_while_statement] = STATE(54),
    [sym__declaration_specifiers] = STATE(177),
    [sym__type_specifier] = STATE(197),
    [sym__statement] = STATE(54),
    [sym_case_statement] = STATE(54),
    [sym_break_statement] = STATE(54),
    [sym_labeled_statement] = STATE(54),
    [sym_continue_statement] = STATE(54),
    [sym_goto_statement] = STATE(54),
    [sym_switch_statement] = STATE(54),
    [sym__non_case_statement] = STATE(54),
    [sym_if_statement] = STATE(54),
    [sym_for_statement] = STATE(54),
    [sym_unary_expression] = STATE(115),
    [sym_expression_statement] = STATE(54),
    [sym_comma_expression] = STATE(223),
    [sym_call_expression] = STATE(82),
    [sym_binary_expression] = STATE(115),
    [sym_assignment_expression] = STATE(115),
    [sym__assignment_left_expression] = STATE(158),
    [sym_subscript_expression] = STATE(82),
    [sym_update_expression] = STATE(115),
    [sym_parenthesized_expression] = STATE(158),
    [sym_return_statement] = STATE(54),
    [sym__expression] = STATE(115),
    [sym__statement_identifier] = STATE(222),
    [sym_string_literal] = STATE(115),
    [sym_declaration] = STATE(54),
    [sym_primitive_type] = STATE(197),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_while] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_case] = ACTIONS(25),
    [anon_sym_default] = ACTIONS(27),
    [anon_sym_break] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(31),
    [anon_sym_continue] = ACTIONS(33),
    [anon_sym_goto] = ACTIONS(35),
    [anon_sym_switch] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_return] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_number_literal] = ACTIONS(49),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [anon_sym_void] = ACTIONS(15),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(15),
    [anon_sym_Vector3] = ACTIONS(15),
    [anon_sym_Vector4] = ACTIONS(15),
    [anon_sym_Matrix3] = ACTIONS(15),
    [anon_sym_Matrix4] = ACTIONS(15),
    [anon_sym_Point] = ACTIONS(15),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(15),
    [anon_sym_Spiral] = ACTIONS(15),
    [anon_sym_Parabola] = ACTIONS(15),
    [anon_sym_Segment] = ACTIONS(15),
    [anon_sym_Element] = ACTIONS(15),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(15),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(15),
    [anon_sym_Guid] = ACTIONS(15),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(15),
    [anon_sym_Blob] = ACTIONS(15),
    [anon_sym_Screen_Text] = ACTIONS(15),
    [anon_sym_Textstyle_Data] = ACTIONS(15),
    [anon_sym_Equality_Label] = ACTIONS(15),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(15),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(15),
    [anon_sym_Panel] = ACTIONS(15),
    [anon_sym_Overlay_Widget] = ACTIONS(15),
    [anon_sym_Vertical_Group] = ACTIONS(15),
    [anon_sym_Horizontal_Group] = ACTIONS(15),
    [anon_sym_Widget_Pages] = ACTIONS(15),
    [anon_sym_Button] = ACTIONS(15),
    [anon_sym_Select_Button] = ACTIONS(15),
    [anon_sym_Angle_Box] = ACTIONS(15),
    [anon_sym_Attributes_Box] = ACTIONS(15),
    [anon_sym_Billboard_Box] = ACTIONS(15),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(15),
    [anon_sym_Bitmap_List_Box] = ACTIONS(15),
    [anon_sym_Chainage_Box] = ACTIONS(15),
    [anon_sym_Choice_Box] = ACTIONS(15),
    [anon_sym_Colour_Box] = ACTIONS(15),
    [anon_sym_Colour_Message_Box] = ACTIONS(15),
    [anon_sym_Date_Time_Box] = ACTIONS(15),
    [anon_sym_Directory_Box] = ACTIONS(15),
    [anon_sym_Draw_Box] = ACTIONS(15),
    [anon_sym_File_Box] = ACTIONS(15),
    [anon_sym_Function_Box] = ACTIONS(15),
    [anon_sym_Graph_Box] = ACTIONS(15),
    [anon_sym_GridCtrl_Box] = ACTIONS(15),
    [anon_sym_HyperLink_Box] = ACTIONS(15),
    [anon_sym_Input_Box] = ACTIONS(15),
    [anon_sym_Integer_Box] = ACTIONS(15),
    [anon_sym_Justify_Box] = ACTIONS(15),
    [anon_sym_Linestyle_Box] = ACTIONS(15),
    [anon_sym_List_Box] = ACTIONS(15),
    [anon_sym_ListCtrl_Box] = ACTIONS(15),
    [anon_sym_Map_File_Box] = ACTIONS(15),
    [anon_sym_Message_Box] = ACTIONS(15),
    [anon_sym_Model_Box] = ACTIONS(15),
    [anon_sym_Name_Box] = ACTIONS(15),
    [anon_sym_Named_Tick_Box] = ACTIONS(15),
    [anon_sym_New_Select_Box] = ACTIONS(15),
    [anon_sym_New_XYZ_Box] = ACTIONS(15),
    [anon_sym_Plotter_Box] = ACTIONS(15),
    [anon_sym_Polygon_Box] = ACTIONS(15),
    [anon_sym_Real_Box] = ACTIONS(15),
    [anon_sym_Report_Box] = ACTIONS(15),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(15),
    [anon_sym_Sheet_Size_Box] = ACTIONS(15),
    [anon_sym_Source_Box] = ACTIONS(15),
    [anon_sym_Symbol_Box] = ACTIONS(15),
    [anon_sym_Tab_Box] = ACTIONS(15),
    [anon_sym_Target_Box] = ACTIONS(15),
    [anon_sym_Template_Box] = ACTIONS(15),
    [anon_sym_Text_Edit_Box] = ACTIONS(15),
    [anon_sym_Text_Style_Box] = ACTIONS(15),
    [anon_sym_Texture_Box] = ACTIONS(15),
    [anon_sym_Tree_Box] = ACTIONS(15),
    [anon_sym_Tree_Page] = ACTIONS(15),
    [anon_sym_Tick_Box] = ACTIONS(15),
    [anon_sym_Tin_Box] = ACTIONS(15),
    [anon_sym_View_Box] = ACTIONS(15),
    [anon_sym_XYZ_Box] = ACTIONS(15),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(15),
    [anon_sym_XML_Document] = ACTIONS(15),
    [anon_sym_XML_Node] = ACTIONS(15),
    [anon_sym_Connection] = ACTIONS(15),
    [anon_sym_Select_Query] = ACTIONS(15),
    [anon_sym_Insert_Query] = ACTIONS(15),
    [anon_sym_Update_Query] = ACTIONS(15),
    [anon_sym_Delete_Query] = ACTIONS(15),
    [anon_sym_Database_Results] = ACTIONS(15),
    [anon_sym_Transactions] = ACTIONS(15),
    [anon_sym_Parameter_Collection] = ACTIONS(15),
    [anon_sym_Query_Condition] = ACTIONS(15),
    [anon_sym_Manual_Condition] = ACTIONS(15),
    [anon_sym_Dynamic_Element] = ACTIONS(15),
    [anon_sym_Dynamic_Integer] = ACTIONS(15),
    [anon_sym_Dynamic_Real] = ACTIONS(15),
    [anon_sym_Dynamic_Text] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_while] = ACTIONS(248),
    [anon_sym_LPAREN] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(248),
    [anon_sym_default] = ACTIONS(248),
    [anon_sym_break] = ACTIONS(248),
    [anon_sym_SEMI] = ACTIONS(246),
    [anon_sym_continue] = ACTIONS(248),
    [anon_sym_goto] = ACTIONS(248),
    [anon_sym_switch] = ACTIONS(248),
    [anon_sym_if] = ACTIONS(248),
    [anon_sym_for] = ACTIONS(248),
    [anon_sym_BANG] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(248),
    [anon_sym_PLUS] = ACTIONS(248),
    [anon_sym_EQ] = ACTIONS(246),
    [anon_sym_STAR_EQ] = ACTIONS(246),
    [anon_sym_SLASH_EQ] = ACTIONS(246),
    [anon_sym_PERCENT_EQ] = ACTIONS(246),
    [anon_sym_PLUS_EQ] = ACTIONS(246),
    [anon_sym_DASH_EQ] = ACTIONS(246),
    [anon_sym_AMP_EQ] = ACTIONS(246),
    [anon_sym_CARET_EQ] = ACTIONS(246),
    [anon_sym_PIPE_EQ] = ACTIONS(246),
    [anon_sym_return] = ACTIONS(248),
    [sym_identifier] = ACTIONS(248),
    [sym_number_literal] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(246),
    [anon_sym_void] = ACTIONS(248),
    [anon_sym_Integer] = ACTIONS(248),
    [anon_sym_Real] = ACTIONS(248),
    [anon_sym_Text] = ACTIONS(248),
    [anon_sym_Vector2] = ACTIONS(248),
    [anon_sym_Vector3] = ACTIONS(248),
    [anon_sym_Vector4] = ACTIONS(248),
    [anon_sym_Matrix3] = ACTIONS(248),
    [anon_sym_Matrix4] = ACTIONS(248),
    [anon_sym_Point] = ACTIONS(248),
    [anon_sym_Line] = ACTIONS(248),
    [anon_sym_Arc] = ACTIONS(248),
    [anon_sym_Spiral] = ACTIONS(248),
    [anon_sym_Parabola] = ACTIONS(248),
    [anon_sym_Segment] = ACTIONS(248),
    [anon_sym_Element] = ACTIONS(248),
    [anon_sym_Model] = ACTIONS(248),
    [anon_sym_View] = ACTIONS(248),
    [anon_sym_Macro_Function] = ACTIONS(248),
    [anon_sym_Function] = ACTIONS(248),
    [anon_sym_Uid] = ACTIONS(248),
    [anon_sym_Guid] = ACTIONS(248),
    [anon_sym_Attributes] = ACTIONS(248),
    [anon_sym_SDR_Attribute] = ACTIONS(248),
    [anon_sym_Blob] = ACTIONS(248),
    [anon_sym_Screen_Text] = ACTIONS(248),
    [anon_sym_Textstyle_Data] = ACTIONS(248),
    [anon_sym_Equality_Label] = ACTIONS(248),
    [anon_sym_Undo] = ACTIONS(248),
    [anon_sym_Undo_List] = ACTIONS(248),
    [anon_sym_Widget] = ACTIONS(248),
    [anon_sym_Menu] = ACTIONS(248),
    [anon_sym_Panel] = ACTIONS(248),
    [anon_sym_Overlay_Widget] = ACTIONS(248),
    [anon_sym_Vertical_Group] = ACTIONS(248),
    [anon_sym_Horizontal_Group] = ACTIONS(248),
    [anon_sym_Widget_Pages] = ACTIONS(248),
    [anon_sym_Button] = ACTIONS(248),
    [anon_sym_Select_Button] = ACTIONS(248),
    [anon_sym_Angle_Box] = ACTIONS(248),
    [anon_sym_Attributes_Box] = ACTIONS(248),
    [anon_sym_Billboard_Box] = ACTIONS(248),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(248),
    [anon_sym_Bitmap_List_Box] = ACTIONS(248),
    [anon_sym_Chainage_Box] = ACTIONS(248),
    [anon_sym_Choice_Box] = ACTIONS(248),
    [anon_sym_Colour_Box] = ACTIONS(248),
    [anon_sym_Colour_Message_Box] = ACTIONS(248),
    [anon_sym_Date_Time_Box] = ACTIONS(248),
    [anon_sym_Directory_Box] = ACTIONS(248),
    [anon_sym_Draw_Box] = ACTIONS(248),
    [anon_sym_File_Box] = ACTIONS(248),
    [anon_sym_Function_Box] = ACTIONS(248),
    [anon_sym_Graph_Box] = ACTIONS(248),
    [anon_sym_GridCtrl_Box] = ACTIONS(248),
    [anon_sym_HyperLink_Box] = ACTIONS(248),
    [anon_sym_Input_Box] = ACTIONS(248),
    [anon_sym_Integer_Box] = ACTIONS(248),
    [anon_sym_Justify_Box] = ACTIONS(248),
    [anon_sym_Linestyle_Box] = ACTIONS(248),
    [anon_sym_List_Box] = ACTIONS(248),
    [anon_sym_ListCtrl_Box] = ACTIONS(248),
    [anon_sym_Map_File_Box] = ACTIONS(248),
    [anon_sym_Message_Box] = ACTIONS(248),
    [anon_sym_Model_Box] = ACTIONS(248),
    [anon_sym_Name_Box] = ACTIONS(248),
    [anon_sym_Named_Tick_Box] = ACTIONS(248),
    [anon_sym_New_Select_Box] = ACTIONS(248),
    [anon_sym_New_XYZ_Box] = ACTIONS(248),
    [anon_sym_Plotter_Box] = ACTIONS(248),
    [anon_sym_Polygon_Box] = ACTIONS(248),
    [anon_sym_Real_Box] = ACTIONS(248),
    [anon_sym_Report_Box] = ACTIONS(248),
    [anon_sym_Select_Box] = ACTIONS(248),
    [anon_sym_Select_Boxes] = ACTIONS(248),
    [anon_sym_Sheet_Size_Box] = ACTIONS(248),
    [anon_sym_Source_Box] = ACTIONS(248),
    [anon_sym_Symbol_Box] = ACTIONS(248),
    [anon_sym_Tab_Box] = ACTIONS(248),
    [anon_sym_Target_Box] = ACTIONS(248),
    [anon_sym_Template_Box] = ACTIONS(248),
    [anon_sym_Text_Edit_Box] = ACTIONS(248),
    [anon_sym_Text_Style_Box] = ACTIONS(248),
    [anon_sym_Texture_Box] = ACTIONS(248),
    [anon_sym_Tree_Box] = ACTIONS(248),
    [anon_sym_Tree_Page] = ACTIONS(248),
    [anon_sym_Tick_Box] = ACTIONS(248),
    [anon_sym_Tin_Box] = ACTIONS(248),
    [anon_sym_View_Box] = ACTIONS(248),
    [anon_sym_XYZ_Box] = ACTIONS(248),
    [anon_sym_File] = ACTIONS(248),
    [anon_sym_Map_File] = ACTIONS(248),
    [anon_sym_Plot_Parameter_File] = ACTIONS(248),
    [anon_sym_XML_Document] = ACTIONS(248),
    [anon_sym_XML_Node] = ACTIONS(248),
    [anon_sym_Connection] = ACTIONS(248),
    [anon_sym_Select_Query] = ACTIONS(248),
    [anon_sym_Insert_Query] = ACTIONS(248),
    [anon_sym_Update_Query] = ACTIONS(248),
    [anon_sym_Delete_Query] = ACTIONS(248),
    [anon_sym_Database_Results] = ACTIONS(248),
    [anon_sym_Transactions] = ACTIONS(248),
    [anon_sym_Parameter_Collection] = ACTIONS(248),
    [anon_sym_Query_Condition] = ACTIONS(248),
    [anon_sym_Manual_Condition] = ACTIONS(248),
    [anon_sym_Dynamic_Element] = ACTIONS(248),
    [anon_sym_Dynamic_Integer] = ACTIONS(248),
    [anon_sym_Dynamic_Real] = ACTIONS(248),
    [anon_sym_Dynamic_Text] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_while] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_case] = ACTIONS(252),
    [anon_sym_default] = ACTIONS(252),
    [anon_sym_break] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_continue] = ACTIONS(252),
    [anon_sym_goto] = ACTIONS(252),
    [anon_sym_switch] = ACTIONS(252),
    [anon_sym_if] = ACTIONS(252),
    [anon_sym_else] = ACTIONS(252),
    [anon_sym_for] = ACTIONS(252),
    [anon_sym_BANG] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_return] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [anon_sym_void] = ACTIONS(252),
    [anon_sym_Integer] = ACTIONS(252),
    [anon_sym_Real] = ACTIONS(252),
    [anon_sym_Text] = ACTIONS(252),
    [anon_sym_Vector2] = ACTIONS(252),
    [anon_sym_Vector3] = ACTIONS(252),
    [anon_sym_Vector4] = ACTIONS(252),
    [anon_sym_Matrix3] = ACTIONS(252),
    [anon_sym_Matrix4] = ACTIONS(252),
    [anon_sym_Point] = ACTIONS(252),
    [anon_sym_Line] = ACTIONS(252),
    [anon_sym_Arc] = ACTIONS(252),
    [anon_sym_Spiral] = ACTIONS(252),
    [anon_sym_Parabola] = ACTIONS(252),
    [anon_sym_Segment] = ACTIONS(252),
    [anon_sym_Element] = ACTIONS(252),
    [anon_sym_Model] = ACTIONS(252),
    [anon_sym_View] = ACTIONS(252),
    [anon_sym_Macro_Function] = ACTIONS(252),
    [anon_sym_Function] = ACTIONS(252),
    [anon_sym_Uid] = ACTIONS(252),
    [anon_sym_Guid] = ACTIONS(252),
    [anon_sym_Attributes] = ACTIONS(252),
    [anon_sym_SDR_Attribute] = ACTIONS(252),
    [anon_sym_Blob] = ACTIONS(252),
    [anon_sym_Screen_Text] = ACTIONS(252),
    [anon_sym_Textstyle_Data] = ACTIONS(252),
    [anon_sym_Equality_Label] = ACTIONS(252),
    [anon_sym_Undo] = ACTIONS(252),
    [anon_sym_Undo_List] = ACTIONS(252),
    [anon_sym_Widget] = ACTIONS(252),
    [anon_sym_Menu] = ACTIONS(252),
    [anon_sym_Panel] = ACTIONS(252),
    [anon_sym_Overlay_Widget] = ACTIONS(252),
    [anon_sym_Vertical_Group] = ACTIONS(252),
    [anon_sym_Horizontal_Group] = ACTIONS(252),
    [anon_sym_Widget_Pages] = ACTIONS(252),
    [anon_sym_Button] = ACTIONS(252),
    [anon_sym_Select_Button] = ACTIONS(252),
    [anon_sym_Angle_Box] = ACTIONS(252),
    [anon_sym_Attributes_Box] = ACTIONS(252),
    [anon_sym_Billboard_Box] = ACTIONS(252),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(252),
    [anon_sym_Bitmap_List_Box] = ACTIONS(252),
    [anon_sym_Chainage_Box] = ACTIONS(252),
    [anon_sym_Choice_Box] = ACTIONS(252),
    [anon_sym_Colour_Box] = ACTIONS(252),
    [anon_sym_Colour_Message_Box] = ACTIONS(252),
    [anon_sym_Date_Time_Box] = ACTIONS(252),
    [anon_sym_Directory_Box] = ACTIONS(252),
    [anon_sym_Draw_Box] = ACTIONS(252),
    [anon_sym_File_Box] = ACTIONS(252),
    [anon_sym_Function_Box] = ACTIONS(252),
    [anon_sym_Graph_Box] = ACTIONS(252),
    [anon_sym_GridCtrl_Box] = ACTIONS(252),
    [anon_sym_HyperLink_Box] = ACTIONS(252),
    [anon_sym_Input_Box] = ACTIONS(252),
    [anon_sym_Integer_Box] = ACTIONS(252),
    [anon_sym_Justify_Box] = ACTIONS(252),
    [anon_sym_Linestyle_Box] = ACTIONS(252),
    [anon_sym_List_Box] = ACTIONS(252),
    [anon_sym_ListCtrl_Box] = ACTIONS(252),
    [anon_sym_Map_File_Box] = ACTIONS(252),
    [anon_sym_Message_Box] = ACTIONS(252),
    [anon_sym_Model_Box] = ACTIONS(252),
    [anon_sym_Name_Box] = ACTIONS(252),
    [anon_sym_Named_Tick_Box] = ACTIONS(252),
    [anon_sym_New_Select_Box] = ACTIONS(252),
    [anon_sym_New_XYZ_Box] = ACTIONS(252),
    [anon_sym_Plotter_Box] = ACTIONS(252),
    [anon_sym_Polygon_Box] = ACTIONS(252),
    [anon_sym_Real_Box] = ACTIONS(252),
    [anon_sym_Report_Box] = ACTIONS(252),
    [anon_sym_Select_Box] = ACTIONS(252),
    [anon_sym_Select_Boxes] = ACTIONS(252),
    [anon_sym_Sheet_Size_Box] = ACTIONS(252),
    [anon_sym_Source_Box] = ACTIONS(252),
    [anon_sym_Symbol_Box] = ACTIONS(252),
    [anon_sym_Tab_Box] = ACTIONS(252),
    [anon_sym_Target_Box] = ACTIONS(252),
    [anon_sym_Template_Box] = ACTIONS(252),
    [anon_sym_Text_Edit_Box] = ACTIONS(252),
    [anon_sym_Text_Style_Box] = ACTIONS(252),
    [anon_sym_Texture_Box] = ACTIONS(252),
    [anon_sym_Tree_Box] = ACTIONS(252),
    [anon_sym_Tree_Page] = ACTIONS(252),
    [anon_sym_Tick_Box] = ACTIONS(252),
    [anon_sym_Tin_Box] = ACTIONS(252),
    [anon_sym_View_Box] = ACTIONS(252),
    [anon_sym_XYZ_Box] = ACTIONS(252),
    [anon_sym_File] = ACTIONS(252),
    [anon_sym_Map_File] = ACTIONS(252),
    [anon_sym_Plot_Parameter_File] = ACTIONS(252),
    [anon_sym_XML_Document] = ACTIONS(252),
    [anon_sym_XML_Node] = ACTIONS(252),
    [anon_sym_Connection] = ACTIONS(252),
    [anon_sym_Select_Query] = ACTIONS(252),
    [anon_sym_Insert_Query] = ACTIONS(252),
    [anon_sym_Update_Query] = ACTIONS(252),
    [anon_sym_Delete_Query] = ACTIONS(252),
    [anon_sym_Database_Results] = ACTIONS(252),
    [anon_sym_Transactions] = ACTIONS(252),
    [anon_sym_Parameter_Collection] = ACTIONS(252),
    [anon_sym_Query_Condition] = ACTIONS(252),
    [anon_sym_Manual_Condition] = ACTIONS(252),
    [anon_sym_Dynamic_Element] = ACTIONS(252),
    [anon_sym_Dynamic_Integer] = ACTIONS(252),
    [anon_sym_Dynamic_Real] = ACTIONS(252),
    [anon_sym_Dynamic_Text] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_while] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
    [anon_sym_break] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_continue] = ACTIONS(256),
    [anon_sym_goto] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_else] = ACTIONS(256),
    [anon_sym_for] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_return] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_number_literal] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_void] = ACTIONS(256),
    [anon_sym_Integer] = ACTIONS(256),
    [anon_sym_Real] = ACTIONS(256),
    [anon_sym_Text] = ACTIONS(256),
    [anon_sym_Vector2] = ACTIONS(256),
    [anon_sym_Vector3] = ACTIONS(256),
    [anon_sym_Vector4] = ACTIONS(256),
    [anon_sym_Matrix3] = ACTIONS(256),
    [anon_sym_Matrix4] = ACTIONS(256),
    [anon_sym_Point] = ACTIONS(256),
    [anon_sym_Line] = ACTIONS(256),
    [anon_sym_Arc] = ACTIONS(256),
    [anon_sym_Spiral] = ACTIONS(256),
    [anon_sym_Parabola] = ACTIONS(256),
    [anon_sym_Segment] = ACTIONS(256),
    [anon_sym_Element] = ACTIONS(256),
    [anon_sym_Model] = ACTIONS(256),
    [anon_sym_View] = ACTIONS(256),
    [anon_sym_Macro_Function] = ACTIONS(256),
    [anon_sym_Function] = ACTIONS(256),
    [anon_sym_Uid] = ACTIONS(256),
    [anon_sym_Guid] = ACTIONS(256),
    [anon_sym_Attributes] = ACTIONS(256),
    [anon_sym_SDR_Attribute] = ACTIONS(256),
    [anon_sym_Blob] = ACTIONS(256),
    [anon_sym_Screen_Text] = ACTIONS(256),
    [anon_sym_Textstyle_Data] = ACTIONS(256),
    [anon_sym_Equality_Label] = ACTIONS(256),
    [anon_sym_Undo] = ACTIONS(256),
    [anon_sym_Undo_List] = ACTIONS(256),
    [anon_sym_Widget] = ACTIONS(256),
    [anon_sym_Menu] = ACTIONS(256),
    [anon_sym_Panel] = ACTIONS(256),
    [anon_sym_Overlay_Widget] = ACTIONS(256),
    [anon_sym_Vertical_Group] = ACTIONS(256),
    [anon_sym_Horizontal_Group] = ACTIONS(256),
    [anon_sym_Widget_Pages] = ACTIONS(256),
    [anon_sym_Button] = ACTIONS(256),
    [anon_sym_Select_Button] = ACTIONS(256),
    [anon_sym_Angle_Box] = ACTIONS(256),
    [anon_sym_Attributes_Box] = ACTIONS(256),
    [anon_sym_Billboard_Box] = ACTIONS(256),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(256),
    [anon_sym_Bitmap_List_Box] = ACTIONS(256),
    [anon_sym_Chainage_Box] = ACTIONS(256),
    [anon_sym_Choice_Box] = ACTIONS(256),
    [anon_sym_Colour_Box] = ACTIONS(256),
    [anon_sym_Colour_Message_Box] = ACTIONS(256),
    [anon_sym_Date_Time_Box] = ACTIONS(256),
    [anon_sym_Directory_Box] = ACTIONS(256),
    [anon_sym_Draw_Box] = ACTIONS(256),
    [anon_sym_File_Box] = ACTIONS(256),
    [anon_sym_Function_Box] = ACTIONS(256),
    [anon_sym_Graph_Box] = ACTIONS(256),
    [anon_sym_GridCtrl_Box] = ACTIONS(256),
    [anon_sym_HyperLink_Box] = ACTIONS(256),
    [anon_sym_Input_Box] = ACTIONS(256),
    [anon_sym_Integer_Box] = ACTIONS(256),
    [anon_sym_Justify_Box] = ACTIONS(256),
    [anon_sym_Linestyle_Box] = ACTIONS(256),
    [anon_sym_List_Box] = ACTIONS(256),
    [anon_sym_ListCtrl_Box] = ACTIONS(256),
    [anon_sym_Map_File_Box] = ACTIONS(256),
    [anon_sym_Message_Box] = ACTIONS(256),
    [anon_sym_Model_Box] = ACTIONS(256),
    [anon_sym_Name_Box] = ACTIONS(256),
    [anon_sym_Named_Tick_Box] = ACTIONS(256),
    [anon_sym_New_Select_Box] = ACTIONS(256),
    [anon_sym_New_XYZ_Box] = ACTIONS(256),
    [anon_sym_Plotter_Box] = ACTIONS(256),
    [anon_sym_Polygon_Box] = ACTIONS(256),
    [anon_sym_Real_Box] = ACTIONS(256),
    [anon_sym_Report_Box] = ACTIONS(256),
    [anon_sym_Select_Box] = ACTIONS(256),
    [anon_sym_Select_Boxes] = ACTIONS(256),
    [anon_sym_Sheet_Size_Box] = ACTIONS(256),
    [anon_sym_Source_Box] = ACTIONS(256),
    [anon_sym_Symbol_Box] = ACTIONS(256),
    [anon_sym_Tab_Box] = ACTIONS(256),
    [anon_sym_Target_Box] = ACTIONS(256),
    [anon_sym_Template_Box] = ACTIONS(256),
    [anon_sym_Text_Edit_Box] = ACTIONS(256),
    [anon_sym_Text_Style_Box] = ACTIONS(256),
    [anon_sym_Texture_Box] = ACTIONS(256),
    [anon_sym_Tree_Box] = ACTIONS(256),
    [anon_sym_Tree_Page] = ACTIONS(256),
    [anon_sym_Tick_Box] = ACTIONS(256),
    [anon_sym_Tin_Box] = ACTIONS(256),
    [anon_sym_View_Box] = ACTIONS(256),
    [anon_sym_XYZ_Box] = ACTIONS(256),
    [anon_sym_File] = ACTIONS(256),
    [anon_sym_Map_File] = ACTIONS(256),
    [anon_sym_Plot_Parameter_File] = ACTIONS(256),
    [anon_sym_XML_Document] = ACTIONS(256),
    [anon_sym_XML_Node] = ACTIONS(256),
    [anon_sym_Connection] = ACTIONS(256),
    [anon_sym_Select_Query] = ACTIONS(256),
    [anon_sym_Insert_Query] = ACTIONS(256),
    [anon_sym_Update_Query] = ACTIONS(256),
    [anon_sym_Delete_Query] = ACTIONS(256),
    [anon_sym_Database_Results] = ACTIONS(256),
    [anon_sym_Transactions] = ACTIONS(256),
    [anon_sym_Parameter_Collection] = ACTIONS(256),
    [anon_sym_Query_Condition] = ACTIONS(256),
    [anon_sym_Manual_Condition] = ACTIONS(256),
    [anon_sym_Dynamic_Element] = ACTIONS(256),
    [anon_sym_Dynamic_Integer] = ACTIONS(256),
    [anon_sym_Dynamic_Real] = ACTIONS(256),
    [anon_sym_Dynamic_Text] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_while] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
    [anon_sym_break] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_continue] = ACTIONS(260),
    [anon_sym_goto] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [anon_sym_else] = ACTIONS(260),
    [anon_sym_for] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_return] = ACTIONS(260),
    [sym_identifier] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_void] = ACTIONS(260),
    [anon_sym_Integer] = ACTIONS(260),
    [anon_sym_Real] = ACTIONS(260),
    [anon_sym_Text] = ACTIONS(260),
    [anon_sym_Vector2] = ACTIONS(260),
    [anon_sym_Vector3] = ACTIONS(260),
    [anon_sym_Vector4] = ACTIONS(260),
    [anon_sym_Matrix3] = ACTIONS(260),
    [anon_sym_Matrix4] = ACTIONS(260),
    [anon_sym_Point] = ACTIONS(260),
    [anon_sym_Line] = ACTIONS(260),
    [anon_sym_Arc] = ACTIONS(260),
    [anon_sym_Spiral] = ACTIONS(260),
    [anon_sym_Parabola] = ACTIONS(260),
    [anon_sym_Segment] = ACTIONS(260),
    [anon_sym_Element] = ACTIONS(260),
    [anon_sym_Model] = ACTIONS(260),
    [anon_sym_View] = ACTIONS(260),
    [anon_sym_Macro_Function] = ACTIONS(260),
    [anon_sym_Function] = ACTIONS(260),
    [anon_sym_Uid] = ACTIONS(260),
    [anon_sym_Guid] = ACTIONS(260),
    [anon_sym_Attributes] = ACTIONS(260),
    [anon_sym_SDR_Attribute] = ACTIONS(260),
    [anon_sym_Blob] = ACTIONS(260),
    [anon_sym_Screen_Text] = ACTIONS(260),
    [anon_sym_Textstyle_Data] = ACTIONS(260),
    [anon_sym_Equality_Label] = ACTIONS(260),
    [anon_sym_Undo] = ACTIONS(260),
    [anon_sym_Undo_List] = ACTIONS(260),
    [anon_sym_Widget] = ACTIONS(260),
    [anon_sym_Menu] = ACTIONS(260),
    [anon_sym_Panel] = ACTIONS(260),
    [anon_sym_Overlay_Widget] = ACTIONS(260),
    [anon_sym_Vertical_Group] = ACTIONS(260),
    [anon_sym_Horizontal_Group] = ACTIONS(260),
    [anon_sym_Widget_Pages] = ACTIONS(260),
    [anon_sym_Button] = ACTIONS(260),
    [anon_sym_Select_Button] = ACTIONS(260),
    [anon_sym_Angle_Box] = ACTIONS(260),
    [anon_sym_Attributes_Box] = ACTIONS(260),
    [anon_sym_Billboard_Box] = ACTIONS(260),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(260),
    [anon_sym_Bitmap_List_Box] = ACTIONS(260),
    [anon_sym_Chainage_Box] = ACTIONS(260),
    [anon_sym_Choice_Box] = ACTIONS(260),
    [anon_sym_Colour_Box] = ACTIONS(260),
    [anon_sym_Colour_Message_Box] = ACTIONS(260),
    [anon_sym_Date_Time_Box] = ACTIONS(260),
    [anon_sym_Directory_Box] = ACTIONS(260),
    [anon_sym_Draw_Box] = ACTIONS(260),
    [anon_sym_File_Box] = ACTIONS(260),
    [anon_sym_Function_Box] = ACTIONS(260),
    [anon_sym_Graph_Box] = ACTIONS(260),
    [anon_sym_GridCtrl_Box] = ACTIONS(260),
    [anon_sym_HyperLink_Box] = ACTIONS(260),
    [anon_sym_Input_Box] = ACTIONS(260),
    [anon_sym_Integer_Box] = ACTIONS(260),
    [anon_sym_Justify_Box] = ACTIONS(260),
    [anon_sym_Linestyle_Box] = ACTIONS(260),
    [anon_sym_List_Box] = ACTIONS(260),
    [anon_sym_ListCtrl_Box] = ACTIONS(260),
    [anon_sym_Map_File_Box] = ACTIONS(260),
    [anon_sym_Message_Box] = ACTIONS(260),
    [anon_sym_Model_Box] = ACTIONS(260),
    [anon_sym_Name_Box] = ACTIONS(260),
    [anon_sym_Named_Tick_Box] = ACTIONS(260),
    [anon_sym_New_Select_Box] = ACTIONS(260),
    [anon_sym_New_XYZ_Box] = ACTIONS(260),
    [anon_sym_Plotter_Box] = ACTIONS(260),
    [anon_sym_Polygon_Box] = ACTIONS(260),
    [anon_sym_Real_Box] = ACTIONS(260),
    [anon_sym_Report_Box] = ACTIONS(260),
    [anon_sym_Select_Box] = ACTIONS(260),
    [anon_sym_Select_Boxes] = ACTIONS(260),
    [anon_sym_Sheet_Size_Box] = ACTIONS(260),
    [anon_sym_Source_Box] = ACTIONS(260),
    [anon_sym_Symbol_Box] = ACTIONS(260),
    [anon_sym_Tab_Box] = ACTIONS(260),
    [anon_sym_Target_Box] = ACTIONS(260),
    [anon_sym_Template_Box] = ACTIONS(260),
    [anon_sym_Text_Edit_Box] = ACTIONS(260),
    [anon_sym_Text_Style_Box] = ACTIONS(260),
    [anon_sym_Texture_Box] = ACTIONS(260),
    [anon_sym_Tree_Box] = ACTIONS(260),
    [anon_sym_Tree_Page] = ACTIONS(260),
    [anon_sym_Tick_Box] = ACTIONS(260),
    [anon_sym_Tin_Box] = ACTIONS(260),
    [anon_sym_View_Box] = ACTIONS(260),
    [anon_sym_XYZ_Box] = ACTIONS(260),
    [anon_sym_File] = ACTIONS(260),
    [anon_sym_Map_File] = ACTIONS(260),
    [anon_sym_Plot_Parameter_File] = ACTIONS(260),
    [anon_sym_XML_Document] = ACTIONS(260),
    [anon_sym_XML_Node] = ACTIONS(260),
    [anon_sym_Connection] = ACTIONS(260),
    [anon_sym_Select_Query] = ACTIONS(260),
    [anon_sym_Insert_Query] = ACTIONS(260),
    [anon_sym_Update_Query] = ACTIONS(260),
    [anon_sym_Delete_Query] = ACTIONS(260),
    [anon_sym_Database_Results] = ACTIONS(260),
    [anon_sym_Transactions] = ACTIONS(260),
    [anon_sym_Parameter_Collection] = ACTIONS(260),
    [anon_sym_Query_Condition] = ACTIONS(260),
    [anon_sym_Manual_Condition] = ACTIONS(260),
    [anon_sym_Dynamic_Element] = ACTIONS(260),
    [anon_sym_Dynamic_Integer] = ACTIONS(260),
    [anon_sym_Dynamic_Real] = ACTIONS(260),
    [anon_sym_Dynamic_Text] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_while] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
    [anon_sym_break] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_continue] = ACTIONS(260),
    [anon_sym_goto] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [anon_sym_else] = ACTIONS(260),
    [anon_sym_for] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_return] = ACTIONS(260),
    [sym_identifier] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_void] = ACTIONS(260),
    [anon_sym_Integer] = ACTIONS(260),
    [anon_sym_Real] = ACTIONS(260),
    [anon_sym_Text] = ACTIONS(260),
    [anon_sym_Vector2] = ACTIONS(260),
    [anon_sym_Vector3] = ACTIONS(260),
    [anon_sym_Vector4] = ACTIONS(260),
    [anon_sym_Matrix3] = ACTIONS(260),
    [anon_sym_Matrix4] = ACTIONS(260),
    [anon_sym_Point] = ACTIONS(260),
    [anon_sym_Line] = ACTIONS(260),
    [anon_sym_Arc] = ACTIONS(260),
    [anon_sym_Spiral] = ACTIONS(260),
    [anon_sym_Parabola] = ACTIONS(260),
    [anon_sym_Segment] = ACTIONS(260),
    [anon_sym_Element] = ACTIONS(260),
    [anon_sym_Model] = ACTIONS(260),
    [anon_sym_View] = ACTIONS(260),
    [anon_sym_Macro_Function] = ACTIONS(260),
    [anon_sym_Function] = ACTIONS(260),
    [anon_sym_Uid] = ACTIONS(260),
    [anon_sym_Guid] = ACTIONS(260),
    [anon_sym_Attributes] = ACTIONS(260),
    [anon_sym_SDR_Attribute] = ACTIONS(260),
    [anon_sym_Blob] = ACTIONS(260),
    [anon_sym_Screen_Text] = ACTIONS(260),
    [anon_sym_Textstyle_Data] = ACTIONS(260),
    [anon_sym_Equality_Label] = ACTIONS(260),
    [anon_sym_Undo] = ACTIONS(260),
    [anon_sym_Undo_List] = ACTIONS(260),
    [anon_sym_Widget] = ACTIONS(260),
    [anon_sym_Menu] = ACTIONS(260),
    [anon_sym_Panel] = ACTIONS(260),
    [anon_sym_Overlay_Widget] = ACTIONS(260),
    [anon_sym_Vertical_Group] = ACTIONS(260),
    [anon_sym_Horizontal_Group] = ACTIONS(260),
    [anon_sym_Widget_Pages] = ACTIONS(260),
    [anon_sym_Button] = ACTIONS(260),
    [anon_sym_Select_Button] = ACTIONS(260),
    [anon_sym_Angle_Box] = ACTIONS(260),
    [anon_sym_Attributes_Box] = ACTIONS(260),
    [anon_sym_Billboard_Box] = ACTIONS(260),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(260),
    [anon_sym_Bitmap_List_Box] = ACTIONS(260),
    [anon_sym_Chainage_Box] = ACTIONS(260),
    [anon_sym_Choice_Box] = ACTIONS(260),
    [anon_sym_Colour_Box] = ACTIONS(260),
    [anon_sym_Colour_Message_Box] = ACTIONS(260),
    [anon_sym_Date_Time_Box] = ACTIONS(260),
    [anon_sym_Directory_Box] = ACTIONS(260),
    [anon_sym_Draw_Box] = ACTIONS(260),
    [anon_sym_File_Box] = ACTIONS(260),
    [anon_sym_Function_Box] = ACTIONS(260),
    [anon_sym_Graph_Box] = ACTIONS(260),
    [anon_sym_GridCtrl_Box] = ACTIONS(260),
    [anon_sym_HyperLink_Box] = ACTIONS(260),
    [anon_sym_Input_Box] = ACTIONS(260),
    [anon_sym_Integer_Box] = ACTIONS(260),
    [anon_sym_Justify_Box] = ACTIONS(260),
    [anon_sym_Linestyle_Box] = ACTIONS(260),
    [anon_sym_List_Box] = ACTIONS(260),
    [anon_sym_ListCtrl_Box] = ACTIONS(260),
    [anon_sym_Map_File_Box] = ACTIONS(260),
    [anon_sym_Message_Box] = ACTIONS(260),
    [anon_sym_Model_Box] = ACTIONS(260),
    [anon_sym_Name_Box] = ACTIONS(260),
    [anon_sym_Named_Tick_Box] = ACTIONS(260),
    [anon_sym_New_Select_Box] = ACTIONS(260),
    [anon_sym_New_XYZ_Box] = ACTIONS(260),
    [anon_sym_Plotter_Box] = ACTIONS(260),
    [anon_sym_Polygon_Box] = ACTIONS(260),
    [anon_sym_Real_Box] = ACTIONS(260),
    [anon_sym_Report_Box] = ACTIONS(260),
    [anon_sym_Select_Box] = ACTIONS(260),
    [anon_sym_Select_Boxes] = ACTIONS(260),
    [anon_sym_Sheet_Size_Box] = ACTIONS(260),
    [anon_sym_Source_Box] = ACTIONS(260),
    [anon_sym_Symbol_Box] = ACTIONS(260),
    [anon_sym_Tab_Box] = ACTIONS(260),
    [anon_sym_Target_Box] = ACTIONS(260),
    [anon_sym_Template_Box] = ACTIONS(260),
    [anon_sym_Text_Edit_Box] = ACTIONS(260),
    [anon_sym_Text_Style_Box] = ACTIONS(260),
    [anon_sym_Texture_Box] = ACTIONS(260),
    [anon_sym_Tree_Box] = ACTIONS(260),
    [anon_sym_Tree_Page] = ACTIONS(260),
    [anon_sym_Tick_Box] = ACTIONS(260),
    [anon_sym_Tin_Box] = ACTIONS(260),
    [anon_sym_View_Box] = ACTIONS(260),
    [anon_sym_XYZ_Box] = ACTIONS(260),
    [anon_sym_File] = ACTIONS(260),
    [anon_sym_Map_File] = ACTIONS(260),
    [anon_sym_Plot_Parameter_File] = ACTIONS(260),
    [anon_sym_XML_Document] = ACTIONS(260),
    [anon_sym_XML_Node] = ACTIONS(260),
    [anon_sym_Connection] = ACTIONS(260),
    [anon_sym_Select_Query] = ACTIONS(260),
    [anon_sym_Insert_Query] = ACTIONS(260),
    [anon_sym_Update_Query] = ACTIONS(260),
    [anon_sym_Delete_Query] = ACTIONS(260),
    [anon_sym_Database_Results] = ACTIONS(260),
    [anon_sym_Transactions] = ACTIONS(260),
    [anon_sym_Parameter_Collection] = ACTIONS(260),
    [anon_sym_Query_Condition] = ACTIONS(260),
    [anon_sym_Manual_Condition] = ACTIONS(260),
    [anon_sym_Dynamic_Element] = ACTIONS(260),
    [anon_sym_Dynamic_Integer] = ACTIONS(260),
    [anon_sym_Dynamic_Real] = ACTIONS(260),
    [anon_sym_Dynamic_Text] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_case] = ACTIONS(264),
    [anon_sym_default] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_continue] = ACTIONS(264),
    [anon_sym_goto] = ACTIONS(264),
    [anon_sym_switch] = ACTIONS(264),
    [anon_sym_if] = ACTIONS(264),
    [anon_sym_else] = ACTIONS(264),
    [anon_sym_for] = ACTIONS(264),
    [anon_sym_BANG] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_return] = ACTIONS(264),
    [sym_identifier] = ACTIONS(264),
    [sym_number_literal] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_void] = ACTIONS(264),
    [anon_sym_Integer] = ACTIONS(264),
    [anon_sym_Real] = ACTIONS(264),
    [anon_sym_Text] = ACTIONS(264),
    [anon_sym_Vector2] = ACTIONS(264),
    [anon_sym_Vector3] = ACTIONS(264),
    [anon_sym_Vector4] = ACTIONS(264),
    [anon_sym_Matrix3] = ACTIONS(264),
    [anon_sym_Matrix4] = ACTIONS(264),
    [anon_sym_Point] = ACTIONS(264),
    [anon_sym_Line] = ACTIONS(264),
    [anon_sym_Arc] = ACTIONS(264),
    [anon_sym_Spiral] = ACTIONS(264),
    [anon_sym_Parabola] = ACTIONS(264),
    [anon_sym_Segment] = ACTIONS(264),
    [anon_sym_Element] = ACTIONS(264),
    [anon_sym_Model] = ACTIONS(264),
    [anon_sym_View] = ACTIONS(264),
    [anon_sym_Macro_Function] = ACTIONS(264),
    [anon_sym_Function] = ACTIONS(264),
    [anon_sym_Uid] = ACTIONS(264),
    [anon_sym_Guid] = ACTIONS(264),
    [anon_sym_Attributes] = ACTIONS(264),
    [anon_sym_SDR_Attribute] = ACTIONS(264),
    [anon_sym_Blob] = ACTIONS(264),
    [anon_sym_Screen_Text] = ACTIONS(264),
    [anon_sym_Textstyle_Data] = ACTIONS(264),
    [anon_sym_Equality_Label] = ACTIONS(264),
    [anon_sym_Undo] = ACTIONS(264),
    [anon_sym_Undo_List] = ACTIONS(264),
    [anon_sym_Widget] = ACTIONS(264),
    [anon_sym_Menu] = ACTIONS(264),
    [anon_sym_Panel] = ACTIONS(264),
    [anon_sym_Overlay_Widget] = ACTIONS(264),
    [anon_sym_Vertical_Group] = ACTIONS(264),
    [anon_sym_Horizontal_Group] = ACTIONS(264),
    [anon_sym_Widget_Pages] = ACTIONS(264),
    [anon_sym_Button] = ACTIONS(264),
    [anon_sym_Select_Button] = ACTIONS(264),
    [anon_sym_Angle_Box] = ACTIONS(264),
    [anon_sym_Attributes_Box] = ACTIONS(264),
    [anon_sym_Billboard_Box] = ACTIONS(264),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(264),
    [anon_sym_Bitmap_List_Box] = ACTIONS(264),
    [anon_sym_Chainage_Box] = ACTIONS(264),
    [anon_sym_Choice_Box] = ACTIONS(264),
    [anon_sym_Colour_Box] = ACTIONS(264),
    [anon_sym_Colour_Message_Box] = ACTIONS(264),
    [anon_sym_Date_Time_Box] = ACTIONS(264),
    [anon_sym_Directory_Box] = ACTIONS(264),
    [anon_sym_Draw_Box] = ACTIONS(264),
    [anon_sym_File_Box] = ACTIONS(264),
    [anon_sym_Function_Box] = ACTIONS(264),
    [anon_sym_Graph_Box] = ACTIONS(264),
    [anon_sym_GridCtrl_Box] = ACTIONS(264),
    [anon_sym_HyperLink_Box] = ACTIONS(264),
    [anon_sym_Input_Box] = ACTIONS(264),
    [anon_sym_Integer_Box] = ACTIONS(264),
    [anon_sym_Justify_Box] = ACTIONS(264),
    [anon_sym_Linestyle_Box] = ACTIONS(264),
    [anon_sym_List_Box] = ACTIONS(264),
    [anon_sym_ListCtrl_Box] = ACTIONS(264),
    [anon_sym_Map_File_Box] = ACTIONS(264),
    [anon_sym_Message_Box] = ACTIONS(264),
    [anon_sym_Model_Box] = ACTIONS(264),
    [anon_sym_Name_Box] = ACTIONS(264),
    [anon_sym_Named_Tick_Box] = ACTIONS(264),
    [anon_sym_New_Select_Box] = ACTIONS(264),
    [anon_sym_New_XYZ_Box] = ACTIONS(264),
    [anon_sym_Plotter_Box] = ACTIONS(264),
    [anon_sym_Polygon_Box] = ACTIONS(264),
    [anon_sym_Real_Box] = ACTIONS(264),
    [anon_sym_Report_Box] = ACTIONS(264),
    [anon_sym_Select_Box] = ACTIONS(264),
    [anon_sym_Select_Boxes] = ACTIONS(264),
    [anon_sym_Sheet_Size_Box] = ACTIONS(264),
    [anon_sym_Source_Box] = ACTIONS(264),
    [anon_sym_Symbol_Box] = ACTIONS(264),
    [anon_sym_Tab_Box] = ACTIONS(264),
    [anon_sym_Target_Box] = ACTIONS(264),
    [anon_sym_Template_Box] = ACTIONS(264),
    [anon_sym_Text_Edit_Box] = ACTIONS(264),
    [anon_sym_Text_Style_Box] = ACTIONS(264),
    [anon_sym_Texture_Box] = ACTIONS(264),
    [anon_sym_Tree_Box] = ACTIONS(264),
    [anon_sym_Tree_Page] = ACTIONS(264),
    [anon_sym_Tick_Box] = ACTIONS(264),
    [anon_sym_Tin_Box] = ACTIONS(264),
    [anon_sym_View_Box] = ACTIONS(264),
    [anon_sym_XYZ_Box] = ACTIONS(264),
    [anon_sym_File] = ACTIONS(264),
    [anon_sym_Map_File] = ACTIONS(264),
    [anon_sym_Plot_Parameter_File] = ACTIONS(264),
    [anon_sym_XML_Document] = ACTIONS(264),
    [anon_sym_XML_Node] = ACTIONS(264),
    [anon_sym_Connection] = ACTIONS(264),
    [anon_sym_Select_Query] = ACTIONS(264),
    [anon_sym_Insert_Query] = ACTIONS(264),
    [anon_sym_Update_Query] = ACTIONS(264),
    [anon_sym_Delete_Query] = ACTIONS(264),
    [anon_sym_Database_Results] = ACTIONS(264),
    [anon_sym_Transactions] = ACTIONS(264),
    [anon_sym_Parameter_Collection] = ACTIONS(264),
    [anon_sym_Query_Condition] = ACTIONS(264),
    [anon_sym_Manual_Condition] = ACTIONS(264),
    [anon_sym_Dynamic_Element] = ACTIONS(264),
    [anon_sym_Dynamic_Integer] = ACTIONS(264),
    [anon_sym_Dynamic_Real] = ACTIONS(264),
    [anon_sym_Dynamic_Text] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_while] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_case] = ACTIONS(268),
    [anon_sym_default] = ACTIONS(268),
    [anon_sym_break] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_continue] = ACTIONS(268),
    [anon_sym_goto] = ACTIONS(268),
    [anon_sym_switch] = ACTIONS(268),
    [anon_sym_if] = ACTIONS(268),
    [anon_sym_else] = ACTIONS(270),
    [anon_sym_for] = ACTIONS(268),
    [anon_sym_BANG] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_return] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [sym_number_literal] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(268),
    [anon_sym_Integer] = ACTIONS(268),
    [anon_sym_Real] = ACTIONS(268),
    [anon_sym_Text] = ACTIONS(268),
    [anon_sym_Vector2] = ACTIONS(268),
    [anon_sym_Vector3] = ACTIONS(268),
    [anon_sym_Vector4] = ACTIONS(268),
    [anon_sym_Matrix3] = ACTIONS(268),
    [anon_sym_Matrix4] = ACTIONS(268),
    [anon_sym_Point] = ACTIONS(268),
    [anon_sym_Line] = ACTIONS(268),
    [anon_sym_Arc] = ACTIONS(268),
    [anon_sym_Spiral] = ACTIONS(268),
    [anon_sym_Parabola] = ACTIONS(268),
    [anon_sym_Segment] = ACTIONS(268),
    [anon_sym_Element] = ACTIONS(268),
    [anon_sym_Model] = ACTIONS(268),
    [anon_sym_View] = ACTIONS(268),
    [anon_sym_Macro_Function] = ACTIONS(268),
    [anon_sym_Function] = ACTIONS(268),
    [anon_sym_Uid] = ACTIONS(268),
    [anon_sym_Guid] = ACTIONS(268),
    [anon_sym_Attributes] = ACTIONS(268),
    [anon_sym_SDR_Attribute] = ACTIONS(268),
    [anon_sym_Blob] = ACTIONS(268),
    [anon_sym_Screen_Text] = ACTIONS(268),
    [anon_sym_Textstyle_Data] = ACTIONS(268),
    [anon_sym_Equality_Label] = ACTIONS(268),
    [anon_sym_Undo] = ACTIONS(268),
    [anon_sym_Undo_List] = ACTIONS(268),
    [anon_sym_Widget] = ACTIONS(268),
    [anon_sym_Menu] = ACTIONS(268),
    [anon_sym_Panel] = ACTIONS(268),
    [anon_sym_Overlay_Widget] = ACTIONS(268),
    [anon_sym_Vertical_Group] = ACTIONS(268),
    [anon_sym_Horizontal_Group] = ACTIONS(268),
    [anon_sym_Widget_Pages] = ACTIONS(268),
    [anon_sym_Button] = ACTIONS(268),
    [anon_sym_Select_Button] = ACTIONS(268),
    [anon_sym_Angle_Box] = ACTIONS(268),
    [anon_sym_Attributes_Box] = ACTIONS(268),
    [anon_sym_Billboard_Box] = ACTIONS(268),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(268),
    [anon_sym_Bitmap_List_Box] = ACTIONS(268),
    [anon_sym_Chainage_Box] = ACTIONS(268),
    [anon_sym_Choice_Box] = ACTIONS(268),
    [anon_sym_Colour_Box] = ACTIONS(268),
    [anon_sym_Colour_Message_Box] = ACTIONS(268),
    [anon_sym_Date_Time_Box] = ACTIONS(268),
    [anon_sym_Directory_Box] = ACTIONS(268),
    [anon_sym_Draw_Box] = ACTIONS(268),
    [anon_sym_File_Box] = ACTIONS(268),
    [anon_sym_Function_Box] = ACTIONS(268),
    [anon_sym_Graph_Box] = ACTIONS(268),
    [anon_sym_GridCtrl_Box] = ACTIONS(268),
    [anon_sym_HyperLink_Box] = ACTIONS(268),
    [anon_sym_Input_Box] = ACTIONS(268),
    [anon_sym_Integer_Box] = ACTIONS(268),
    [anon_sym_Justify_Box] = ACTIONS(268),
    [anon_sym_Linestyle_Box] = ACTIONS(268),
    [anon_sym_List_Box] = ACTIONS(268),
    [anon_sym_ListCtrl_Box] = ACTIONS(268),
    [anon_sym_Map_File_Box] = ACTIONS(268),
    [anon_sym_Message_Box] = ACTIONS(268),
    [anon_sym_Model_Box] = ACTIONS(268),
    [anon_sym_Name_Box] = ACTIONS(268),
    [anon_sym_Named_Tick_Box] = ACTIONS(268),
    [anon_sym_New_Select_Box] = ACTIONS(268),
    [anon_sym_New_XYZ_Box] = ACTIONS(268),
    [anon_sym_Plotter_Box] = ACTIONS(268),
    [anon_sym_Polygon_Box] = ACTIONS(268),
    [anon_sym_Real_Box] = ACTIONS(268),
    [anon_sym_Report_Box] = ACTIONS(268),
    [anon_sym_Select_Box] = ACTIONS(268),
    [anon_sym_Select_Boxes] = ACTIONS(268),
    [anon_sym_Sheet_Size_Box] = ACTIONS(268),
    [anon_sym_Source_Box] = ACTIONS(268),
    [anon_sym_Symbol_Box] = ACTIONS(268),
    [anon_sym_Tab_Box] = ACTIONS(268),
    [anon_sym_Target_Box] = ACTIONS(268),
    [anon_sym_Template_Box] = ACTIONS(268),
    [anon_sym_Text_Edit_Box] = ACTIONS(268),
    [anon_sym_Text_Style_Box] = ACTIONS(268),
    [anon_sym_Texture_Box] = ACTIONS(268),
    [anon_sym_Tree_Box] = ACTIONS(268),
    [anon_sym_Tree_Page] = ACTIONS(268),
    [anon_sym_Tick_Box] = ACTIONS(268),
    [anon_sym_Tin_Box] = ACTIONS(268),
    [anon_sym_View_Box] = ACTIONS(268),
    [anon_sym_XYZ_Box] = ACTIONS(268),
    [anon_sym_File] = ACTIONS(268),
    [anon_sym_Map_File] = ACTIONS(268),
    [anon_sym_Plot_Parameter_File] = ACTIONS(268),
    [anon_sym_XML_Document] = ACTIONS(268),
    [anon_sym_XML_Node] = ACTIONS(268),
    [anon_sym_Connection] = ACTIONS(268),
    [anon_sym_Select_Query] = ACTIONS(268),
    [anon_sym_Insert_Query] = ACTIONS(268),
    [anon_sym_Update_Query] = ACTIONS(268),
    [anon_sym_Delete_Query] = ACTIONS(268),
    [anon_sym_Database_Results] = ACTIONS(268),
    [anon_sym_Transactions] = ACTIONS(268),
    [anon_sym_Parameter_Collection] = ACTIONS(268),
    [anon_sym_Query_Condition] = ACTIONS(268),
    [anon_sym_Manual_Condition] = ACTIONS(268),
    [anon_sym_Dynamic_Element] = ACTIONS(268),
    [anon_sym_Dynamic_Integer] = ACTIONS(268),
    [anon_sym_Dynamic_Real] = ACTIONS(268),
    [anon_sym_Dynamic_Text] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_while] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_break] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_continue] = ACTIONS(274),
    [anon_sym_goto] = ACTIONS(274),
    [anon_sym_switch] = ACTIONS(274),
    [anon_sym_if] = ACTIONS(274),
    [anon_sym_else] = ACTIONS(274),
    [anon_sym_for] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_return] = ACTIONS(274),
    [sym_identifier] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_void] = ACTIONS(274),
    [anon_sym_Integer] = ACTIONS(274),
    [anon_sym_Real] = ACTIONS(274),
    [anon_sym_Text] = ACTIONS(274),
    [anon_sym_Vector2] = ACTIONS(274),
    [anon_sym_Vector3] = ACTIONS(274),
    [anon_sym_Vector4] = ACTIONS(274),
    [anon_sym_Matrix3] = ACTIONS(274),
    [anon_sym_Matrix4] = ACTIONS(274),
    [anon_sym_Point] = ACTIONS(274),
    [anon_sym_Line] = ACTIONS(274),
    [anon_sym_Arc] = ACTIONS(274),
    [anon_sym_Spiral] = ACTIONS(274),
    [anon_sym_Parabola] = ACTIONS(274),
    [anon_sym_Segment] = ACTIONS(274),
    [anon_sym_Element] = ACTIONS(274),
    [anon_sym_Model] = ACTIONS(274),
    [anon_sym_View] = ACTIONS(274),
    [anon_sym_Macro_Function] = ACTIONS(274),
    [anon_sym_Function] = ACTIONS(274),
    [anon_sym_Uid] = ACTIONS(274),
    [anon_sym_Guid] = ACTIONS(274),
    [anon_sym_Attributes] = ACTIONS(274),
    [anon_sym_SDR_Attribute] = ACTIONS(274),
    [anon_sym_Blob] = ACTIONS(274),
    [anon_sym_Screen_Text] = ACTIONS(274),
    [anon_sym_Textstyle_Data] = ACTIONS(274),
    [anon_sym_Equality_Label] = ACTIONS(274),
    [anon_sym_Undo] = ACTIONS(274),
    [anon_sym_Undo_List] = ACTIONS(274),
    [anon_sym_Widget] = ACTIONS(274),
    [anon_sym_Menu] = ACTIONS(274),
    [anon_sym_Panel] = ACTIONS(274),
    [anon_sym_Overlay_Widget] = ACTIONS(274),
    [anon_sym_Vertical_Group] = ACTIONS(274),
    [anon_sym_Horizontal_Group] = ACTIONS(274),
    [anon_sym_Widget_Pages] = ACTIONS(274),
    [anon_sym_Button] = ACTIONS(274),
    [anon_sym_Select_Button] = ACTIONS(274),
    [anon_sym_Angle_Box] = ACTIONS(274),
    [anon_sym_Attributes_Box] = ACTIONS(274),
    [anon_sym_Billboard_Box] = ACTIONS(274),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(274),
    [anon_sym_Bitmap_List_Box] = ACTIONS(274),
    [anon_sym_Chainage_Box] = ACTIONS(274),
    [anon_sym_Choice_Box] = ACTIONS(274),
    [anon_sym_Colour_Box] = ACTIONS(274),
    [anon_sym_Colour_Message_Box] = ACTIONS(274),
    [anon_sym_Date_Time_Box] = ACTIONS(274),
    [anon_sym_Directory_Box] = ACTIONS(274),
    [anon_sym_Draw_Box] = ACTIONS(274),
    [anon_sym_File_Box] = ACTIONS(274),
    [anon_sym_Function_Box] = ACTIONS(274),
    [anon_sym_Graph_Box] = ACTIONS(274),
    [anon_sym_GridCtrl_Box] = ACTIONS(274),
    [anon_sym_HyperLink_Box] = ACTIONS(274),
    [anon_sym_Input_Box] = ACTIONS(274),
    [anon_sym_Integer_Box] = ACTIONS(274),
    [anon_sym_Justify_Box] = ACTIONS(274),
    [anon_sym_Linestyle_Box] = ACTIONS(274),
    [anon_sym_List_Box] = ACTIONS(274),
    [anon_sym_ListCtrl_Box] = ACTIONS(274),
    [anon_sym_Map_File_Box] = ACTIONS(274),
    [anon_sym_Message_Box] = ACTIONS(274),
    [anon_sym_Model_Box] = ACTIONS(274),
    [anon_sym_Name_Box] = ACTIONS(274),
    [anon_sym_Named_Tick_Box] = ACTIONS(274),
    [anon_sym_New_Select_Box] = ACTIONS(274),
    [anon_sym_New_XYZ_Box] = ACTIONS(274),
    [anon_sym_Plotter_Box] = ACTIONS(274),
    [anon_sym_Polygon_Box] = ACTIONS(274),
    [anon_sym_Real_Box] = ACTIONS(274),
    [anon_sym_Report_Box] = ACTIONS(274),
    [anon_sym_Select_Box] = ACTIONS(274),
    [anon_sym_Select_Boxes] = ACTIONS(274),
    [anon_sym_Sheet_Size_Box] = ACTIONS(274),
    [anon_sym_Source_Box] = ACTIONS(274),
    [anon_sym_Symbol_Box] = ACTIONS(274),
    [anon_sym_Tab_Box] = ACTIONS(274),
    [anon_sym_Target_Box] = ACTIONS(274),
    [anon_sym_Template_Box] = ACTIONS(274),
    [anon_sym_Text_Edit_Box] = ACTIONS(274),
    [anon_sym_Text_Style_Box] = ACTIONS(274),
    [anon_sym_Texture_Box] = ACTIONS(274),
    [anon_sym_Tree_Box] = ACTIONS(274),
    [anon_sym_Tree_Page] = ACTIONS(274),
    [anon_sym_Tick_Box] = ACTIONS(274),
    [anon_sym_Tin_Box] = ACTIONS(274),
    [anon_sym_View_Box] = ACTIONS(274),
    [anon_sym_XYZ_Box] = ACTIONS(274),
    [anon_sym_File] = ACTIONS(274),
    [anon_sym_Map_File] = ACTIONS(274),
    [anon_sym_Plot_Parameter_File] = ACTIONS(274),
    [anon_sym_XML_Document] = ACTIONS(274),
    [anon_sym_XML_Node] = ACTIONS(274),
    [anon_sym_Connection] = ACTIONS(274),
    [anon_sym_Select_Query] = ACTIONS(274),
    [anon_sym_Insert_Query] = ACTIONS(274),
    [anon_sym_Update_Query] = ACTIONS(274),
    [anon_sym_Delete_Query] = ACTIONS(274),
    [anon_sym_Database_Results] = ACTIONS(274),
    [anon_sym_Transactions] = ACTIONS(274),
    [anon_sym_Parameter_Collection] = ACTIONS(274),
    [anon_sym_Query_Condition] = ACTIONS(274),
    [anon_sym_Manual_Condition] = ACTIONS(274),
    [anon_sym_Dynamic_Element] = ACTIONS(274),
    [anon_sym_Dynamic_Integer] = ACTIONS(274),
    [anon_sym_Dynamic_Real] = ACTIONS(274),
    [anon_sym_Dynamic_Text] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_break] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_continue] = ACTIONS(278),
    [anon_sym_goto] = ACTIONS(278),
    [anon_sym_switch] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_else] = ACTIONS(278),
    [anon_sym_for] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_return] = ACTIONS(278),
    [sym_identifier] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_void] = ACTIONS(278),
    [anon_sym_Integer] = ACTIONS(278),
    [anon_sym_Real] = ACTIONS(278),
    [anon_sym_Text] = ACTIONS(278),
    [anon_sym_Vector2] = ACTIONS(278),
    [anon_sym_Vector3] = ACTIONS(278),
    [anon_sym_Vector4] = ACTIONS(278),
    [anon_sym_Matrix3] = ACTIONS(278),
    [anon_sym_Matrix4] = ACTIONS(278),
    [anon_sym_Point] = ACTIONS(278),
    [anon_sym_Line] = ACTIONS(278),
    [anon_sym_Arc] = ACTIONS(278),
    [anon_sym_Spiral] = ACTIONS(278),
    [anon_sym_Parabola] = ACTIONS(278),
    [anon_sym_Segment] = ACTIONS(278),
    [anon_sym_Element] = ACTIONS(278),
    [anon_sym_Model] = ACTIONS(278),
    [anon_sym_View] = ACTIONS(278),
    [anon_sym_Macro_Function] = ACTIONS(278),
    [anon_sym_Function] = ACTIONS(278),
    [anon_sym_Uid] = ACTIONS(278),
    [anon_sym_Guid] = ACTIONS(278),
    [anon_sym_Attributes] = ACTIONS(278),
    [anon_sym_SDR_Attribute] = ACTIONS(278),
    [anon_sym_Blob] = ACTIONS(278),
    [anon_sym_Screen_Text] = ACTIONS(278),
    [anon_sym_Textstyle_Data] = ACTIONS(278),
    [anon_sym_Equality_Label] = ACTIONS(278),
    [anon_sym_Undo] = ACTIONS(278),
    [anon_sym_Undo_List] = ACTIONS(278),
    [anon_sym_Widget] = ACTIONS(278),
    [anon_sym_Menu] = ACTIONS(278),
    [anon_sym_Panel] = ACTIONS(278),
    [anon_sym_Overlay_Widget] = ACTIONS(278),
    [anon_sym_Vertical_Group] = ACTIONS(278),
    [anon_sym_Horizontal_Group] = ACTIONS(278),
    [anon_sym_Widget_Pages] = ACTIONS(278),
    [anon_sym_Button] = ACTIONS(278),
    [anon_sym_Select_Button] = ACTIONS(278),
    [anon_sym_Angle_Box] = ACTIONS(278),
    [anon_sym_Attributes_Box] = ACTIONS(278),
    [anon_sym_Billboard_Box] = ACTIONS(278),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(278),
    [anon_sym_Bitmap_List_Box] = ACTIONS(278),
    [anon_sym_Chainage_Box] = ACTIONS(278),
    [anon_sym_Choice_Box] = ACTIONS(278),
    [anon_sym_Colour_Box] = ACTIONS(278),
    [anon_sym_Colour_Message_Box] = ACTIONS(278),
    [anon_sym_Date_Time_Box] = ACTIONS(278),
    [anon_sym_Directory_Box] = ACTIONS(278),
    [anon_sym_Draw_Box] = ACTIONS(278),
    [anon_sym_File_Box] = ACTIONS(278),
    [anon_sym_Function_Box] = ACTIONS(278),
    [anon_sym_Graph_Box] = ACTIONS(278),
    [anon_sym_GridCtrl_Box] = ACTIONS(278),
    [anon_sym_HyperLink_Box] = ACTIONS(278),
    [anon_sym_Input_Box] = ACTIONS(278),
    [anon_sym_Integer_Box] = ACTIONS(278),
    [anon_sym_Justify_Box] = ACTIONS(278),
    [anon_sym_Linestyle_Box] = ACTIONS(278),
    [anon_sym_List_Box] = ACTIONS(278),
    [anon_sym_ListCtrl_Box] = ACTIONS(278),
    [anon_sym_Map_File_Box] = ACTIONS(278),
    [anon_sym_Message_Box] = ACTIONS(278),
    [anon_sym_Model_Box] = ACTIONS(278),
    [anon_sym_Name_Box] = ACTIONS(278),
    [anon_sym_Named_Tick_Box] = ACTIONS(278),
    [anon_sym_New_Select_Box] = ACTIONS(278),
    [anon_sym_New_XYZ_Box] = ACTIONS(278),
    [anon_sym_Plotter_Box] = ACTIONS(278),
    [anon_sym_Polygon_Box] = ACTIONS(278),
    [anon_sym_Real_Box] = ACTIONS(278),
    [anon_sym_Report_Box] = ACTIONS(278),
    [anon_sym_Select_Box] = ACTIONS(278),
    [anon_sym_Select_Boxes] = ACTIONS(278),
    [anon_sym_Sheet_Size_Box] = ACTIONS(278),
    [anon_sym_Source_Box] = ACTIONS(278),
    [anon_sym_Symbol_Box] = ACTIONS(278),
    [anon_sym_Tab_Box] = ACTIONS(278),
    [anon_sym_Target_Box] = ACTIONS(278),
    [anon_sym_Template_Box] = ACTIONS(278),
    [anon_sym_Text_Edit_Box] = ACTIONS(278),
    [anon_sym_Text_Style_Box] = ACTIONS(278),
    [anon_sym_Texture_Box] = ACTIONS(278),
    [anon_sym_Tree_Box] = ACTIONS(278),
    [anon_sym_Tree_Page] = ACTIONS(278),
    [anon_sym_Tick_Box] = ACTIONS(278),
    [anon_sym_Tin_Box] = ACTIONS(278),
    [anon_sym_View_Box] = ACTIONS(278),
    [anon_sym_XYZ_Box] = ACTIONS(278),
    [anon_sym_File] = ACTIONS(278),
    [anon_sym_Map_File] = ACTIONS(278),
    [anon_sym_Plot_Parameter_File] = ACTIONS(278),
    [anon_sym_XML_Document] = ACTIONS(278),
    [anon_sym_XML_Node] = ACTIONS(278),
    [anon_sym_Connection] = ACTIONS(278),
    [anon_sym_Select_Query] = ACTIONS(278),
    [anon_sym_Insert_Query] = ACTIONS(278),
    [anon_sym_Update_Query] = ACTIONS(278),
    [anon_sym_Delete_Query] = ACTIONS(278),
    [anon_sym_Database_Results] = ACTIONS(278),
    [anon_sym_Transactions] = ACTIONS(278),
    [anon_sym_Parameter_Collection] = ACTIONS(278),
    [anon_sym_Query_Condition] = ACTIONS(278),
    [anon_sym_Manual_Condition] = ACTIONS(278),
    [anon_sym_Dynamic_Element] = ACTIONS(278),
    [anon_sym_Dynamic_Integer] = ACTIONS(278),
    [anon_sym_Dynamic_Real] = ACTIONS(278),
    [anon_sym_Dynamic_Text] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_while] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(282),
    [anon_sym_default] = ACTIONS(282),
    [anon_sym_break] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_continue] = ACTIONS(282),
    [anon_sym_goto] = ACTIONS(282),
    [anon_sym_switch] = ACTIONS(282),
    [anon_sym_if] = ACTIONS(282),
    [anon_sym_else] = ACTIONS(282),
    [anon_sym_for] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_return] = ACTIONS(282),
    [sym_identifier] = ACTIONS(282),
    [sym_number_literal] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [anon_sym_void] = ACTIONS(282),
    [anon_sym_Integer] = ACTIONS(282),
    [anon_sym_Real] = ACTIONS(282),
    [anon_sym_Text] = ACTIONS(282),
    [anon_sym_Vector2] = ACTIONS(282),
    [anon_sym_Vector3] = ACTIONS(282),
    [anon_sym_Vector4] = ACTIONS(282),
    [anon_sym_Matrix3] = ACTIONS(282),
    [anon_sym_Matrix4] = ACTIONS(282),
    [anon_sym_Point] = ACTIONS(282),
    [anon_sym_Line] = ACTIONS(282),
    [anon_sym_Arc] = ACTIONS(282),
    [anon_sym_Spiral] = ACTIONS(282),
    [anon_sym_Parabola] = ACTIONS(282),
    [anon_sym_Segment] = ACTIONS(282),
    [anon_sym_Element] = ACTIONS(282),
    [anon_sym_Model] = ACTIONS(282),
    [anon_sym_View] = ACTIONS(282),
    [anon_sym_Macro_Function] = ACTIONS(282),
    [anon_sym_Function] = ACTIONS(282),
    [anon_sym_Uid] = ACTIONS(282),
    [anon_sym_Guid] = ACTIONS(282),
    [anon_sym_Attributes] = ACTIONS(282),
    [anon_sym_SDR_Attribute] = ACTIONS(282),
    [anon_sym_Blob] = ACTIONS(282),
    [anon_sym_Screen_Text] = ACTIONS(282),
    [anon_sym_Textstyle_Data] = ACTIONS(282),
    [anon_sym_Equality_Label] = ACTIONS(282),
    [anon_sym_Undo] = ACTIONS(282),
    [anon_sym_Undo_List] = ACTIONS(282),
    [anon_sym_Widget] = ACTIONS(282),
    [anon_sym_Menu] = ACTIONS(282),
    [anon_sym_Panel] = ACTIONS(282),
    [anon_sym_Overlay_Widget] = ACTIONS(282),
    [anon_sym_Vertical_Group] = ACTIONS(282),
    [anon_sym_Horizontal_Group] = ACTIONS(282),
    [anon_sym_Widget_Pages] = ACTIONS(282),
    [anon_sym_Button] = ACTIONS(282),
    [anon_sym_Select_Button] = ACTIONS(282),
    [anon_sym_Angle_Box] = ACTIONS(282),
    [anon_sym_Attributes_Box] = ACTIONS(282),
    [anon_sym_Billboard_Box] = ACTIONS(282),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(282),
    [anon_sym_Bitmap_List_Box] = ACTIONS(282),
    [anon_sym_Chainage_Box] = ACTIONS(282),
    [anon_sym_Choice_Box] = ACTIONS(282),
    [anon_sym_Colour_Box] = ACTIONS(282),
    [anon_sym_Colour_Message_Box] = ACTIONS(282),
    [anon_sym_Date_Time_Box] = ACTIONS(282),
    [anon_sym_Directory_Box] = ACTIONS(282),
    [anon_sym_Draw_Box] = ACTIONS(282),
    [anon_sym_File_Box] = ACTIONS(282),
    [anon_sym_Function_Box] = ACTIONS(282),
    [anon_sym_Graph_Box] = ACTIONS(282),
    [anon_sym_GridCtrl_Box] = ACTIONS(282),
    [anon_sym_HyperLink_Box] = ACTIONS(282),
    [anon_sym_Input_Box] = ACTIONS(282),
    [anon_sym_Integer_Box] = ACTIONS(282),
    [anon_sym_Justify_Box] = ACTIONS(282),
    [anon_sym_Linestyle_Box] = ACTIONS(282),
    [anon_sym_List_Box] = ACTIONS(282),
    [anon_sym_ListCtrl_Box] = ACTIONS(282),
    [anon_sym_Map_File_Box] = ACTIONS(282),
    [anon_sym_Message_Box] = ACTIONS(282),
    [anon_sym_Model_Box] = ACTIONS(282),
    [anon_sym_Name_Box] = ACTIONS(282),
    [anon_sym_Named_Tick_Box] = ACTIONS(282),
    [anon_sym_New_Select_Box] = ACTIONS(282),
    [anon_sym_New_XYZ_Box] = ACTIONS(282),
    [anon_sym_Plotter_Box] = ACTIONS(282),
    [anon_sym_Polygon_Box] = ACTIONS(282),
    [anon_sym_Real_Box] = ACTIONS(282),
    [anon_sym_Report_Box] = ACTIONS(282),
    [anon_sym_Select_Box] = ACTIONS(282),
    [anon_sym_Select_Boxes] = ACTIONS(282),
    [anon_sym_Sheet_Size_Box] = ACTIONS(282),
    [anon_sym_Source_Box] = ACTIONS(282),
    [anon_sym_Symbol_Box] = ACTIONS(282),
    [anon_sym_Tab_Box] = ACTIONS(282),
    [anon_sym_Target_Box] = ACTIONS(282),
    [anon_sym_Template_Box] = ACTIONS(282),
    [anon_sym_Text_Edit_Box] = ACTIONS(282),
    [anon_sym_Text_Style_Box] = ACTIONS(282),
    [anon_sym_Texture_Box] = ACTIONS(282),
    [anon_sym_Tree_Box] = ACTIONS(282),
    [anon_sym_Tree_Page] = ACTIONS(282),
    [anon_sym_Tick_Box] = ACTIONS(282),
    [anon_sym_Tin_Box] = ACTIONS(282),
    [anon_sym_View_Box] = ACTIONS(282),
    [anon_sym_XYZ_Box] = ACTIONS(282),
    [anon_sym_File] = ACTIONS(282),
    [anon_sym_Map_File] = ACTIONS(282),
    [anon_sym_Plot_Parameter_File] = ACTIONS(282),
    [anon_sym_XML_Document] = ACTIONS(282),
    [anon_sym_XML_Node] = ACTIONS(282),
    [anon_sym_Connection] = ACTIONS(282),
    [anon_sym_Select_Query] = ACTIONS(282),
    [anon_sym_Insert_Query] = ACTIONS(282),
    [anon_sym_Update_Query] = ACTIONS(282),
    [anon_sym_Delete_Query] = ACTIONS(282),
    [anon_sym_Database_Results] = ACTIONS(282),
    [anon_sym_Transactions] = ACTIONS(282),
    [anon_sym_Parameter_Collection] = ACTIONS(282),
    [anon_sym_Query_Condition] = ACTIONS(282),
    [anon_sym_Manual_Condition] = ACTIONS(282),
    [anon_sym_Dynamic_Element] = ACTIONS(282),
    [anon_sym_Dynamic_Integer] = ACTIONS(282),
    [anon_sym_Dynamic_Real] = ACTIONS(282),
    [anon_sym_Dynamic_Text] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_while] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_case] = ACTIONS(286),
    [anon_sym_default] = ACTIONS(286),
    [anon_sym_break] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_continue] = ACTIONS(286),
    [anon_sym_goto] = ACTIONS(286),
    [anon_sym_switch] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_else] = ACTIONS(286),
    [anon_sym_for] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_return] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_void] = ACTIONS(286),
    [anon_sym_Integer] = ACTIONS(286),
    [anon_sym_Real] = ACTIONS(286),
    [anon_sym_Text] = ACTIONS(286),
    [anon_sym_Vector2] = ACTIONS(286),
    [anon_sym_Vector3] = ACTIONS(286),
    [anon_sym_Vector4] = ACTIONS(286),
    [anon_sym_Matrix3] = ACTIONS(286),
    [anon_sym_Matrix4] = ACTIONS(286),
    [anon_sym_Point] = ACTIONS(286),
    [anon_sym_Line] = ACTIONS(286),
    [anon_sym_Arc] = ACTIONS(286),
    [anon_sym_Spiral] = ACTIONS(286),
    [anon_sym_Parabola] = ACTIONS(286),
    [anon_sym_Segment] = ACTIONS(286),
    [anon_sym_Element] = ACTIONS(286),
    [anon_sym_Model] = ACTIONS(286),
    [anon_sym_View] = ACTIONS(286),
    [anon_sym_Macro_Function] = ACTIONS(286),
    [anon_sym_Function] = ACTIONS(286),
    [anon_sym_Uid] = ACTIONS(286),
    [anon_sym_Guid] = ACTIONS(286),
    [anon_sym_Attributes] = ACTIONS(286),
    [anon_sym_SDR_Attribute] = ACTIONS(286),
    [anon_sym_Blob] = ACTIONS(286),
    [anon_sym_Screen_Text] = ACTIONS(286),
    [anon_sym_Textstyle_Data] = ACTIONS(286),
    [anon_sym_Equality_Label] = ACTIONS(286),
    [anon_sym_Undo] = ACTIONS(286),
    [anon_sym_Undo_List] = ACTIONS(286),
    [anon_sym_Widget] = ACTIONS(286),
    [anon_sym_Menu] = ACTIONS(286),
    [anon_sym_Panel] = ACTIONS(286),
    [anon_sym_Overlay_Widget] = ACTIONS(286),
    [anon_sym_Vertical_Group] = ACTIONS(286),
    [anon_sym_Horizontal_Group] = ACTIONS(286),
    [anon_sym_Widget_Pages] = ACTIONS(286),
    [anon_sym_Button] = ACTIONS(286),
    [anon_sym_Select_Button] = ACTIONS(286),
    [anon_sym_Angle_Box] = ACTIONS(286),
    [anon_sym_Attributes_Box] = ACTIONS(286),
    [anon_sym_Billboard_Box] = ACTIONS(286),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(286),
    [anon_sym_Bitmap_List_Box] = ACTIONS(286),
    [anon_sym_Chainage_Box] = ACTIONS(286),
    [anon_sym_Choice_Box] = ACTIONS(286),
    [anon_sym_Colour_Box] = ACTIONS(286),
    [anon_sym_Colour_Message_Box] = ACTIONS(286),
    [anon_sym_Date_Time_Box] = ACTIONS(286),
    [anon_sym_Directory_Box] = ACTIONS(286),
    [anon_sym_Draw_Box] = ACTIONS(286),
    [anon_sym_File_Box] = ACTIONS(286),
    [anon_sym_Function_Box] = ACTIONS(286),
    [anon_sym_Graph_Box] = ACTIONS(286),
    [anon_sym_GridCtrl_Box] = ACTIONS(286),
    [anon_sym_HyperLink_Box] = ACTIONS(286),
    [anon_sym_Input_Box] = ACTIONS(286),
    [anon_sym_Integer_Box] = ACTIONS(286),
    [anon_sym_Justify_Box] = ACTIONS(286),
    [anon_sym_Linestyle_Box] = ACTIONS(286),
    [anon_sym_List_Box] = ACTIONS(286),
    [anon_sym_ListCtrl_Box] = ACTIONS(286),
    [anon_sym_Map_File_Box] = ACTIONS(286),
    [anon_sym_Message_Box] = ACTIONS(286),
    [anon_sym_Model_Box] = ACTIONS(286),
    [anon_sym_Name_Box] = ACTIONS(286),
    [anon_sym_Named_Tick_Box] = ACTIONS(286),
    [anon_sym_New_Select_Box] = ACTIONS(286),
    [anon_sym_New_XYZ_Box] = ACTIONS(286),
    [anon_sym_Plotter_Box] = ACTIONS(286),
    [anon_sym_Polygon_Box] = ACTIONS(286),
    [anon_sym_Real_Box] = ACTIONS(286),
    [anon_sym_Report_Box] = ACTIONS(286),
    [anon_sym_Select_Box] = ACTIONS(286),
    [anon_sym_Select_Boxes] = ACTIONS(286),
    [anon_sym_Sheet_Size_Box] = ACTIONS(286),
    [anon_sym_Source_Box] = ACTIONS(286),
    [anon_sym_Symbol_Box] = ACTIONS(286),
    [anon_sym_Tab_Box] = ACTIONS(286),
    [anon_sym_Target_Box] = ACTIONS(286),
    [anon_sym_Template_Box] = ACTIONS(286),
    [anon_sym_Text_Edit_Box] = ACTIONS(286),
    [anon_sym_Text_Style_Box] = ACTIONS(286),
    [anon_sym_Texture_Box] = ACTIONS(286),
    [anon_sym_Tree_Box] = ACTIONS(286),
    [anon_sym_Tree_Page] = ACTIONS(286),
    [anon_sym_Tick_Box] = ACTIONS(286),
    [anon_sym_Tin_Box] = ACTIONS(286),
    [anon_sym_View_Box] = ACTIONS(286),
    [anon_sym_XYZ_Box] = ACTIONS(286),
    [anon_sym_File] = ACTIONS(286),
    [anon_sym_Map_File] = ACTIONS(286),
    [anon_sym_Plot_Parameter_File] = ACTIONS(286),
    [anon_sym_XML_Document] = ACTIONS(286),
    [anon_sym_XML_Node] = ACTIONS(286),
    [anon_sym_Connection] = ACTIONS(286),
    [anon_sym_Select_Query] = ACTIONS(286),
    [anon_sym_Insert_Query] = ACTIONS(286),
    [anon_sym_Update_Query] = ACTIONS(286),
    [anon_sym_Delete_Query] = ACTIONS(286),
    [anon_sym_Database_Results] = ACTIONS(286),
    [anon_sym_Transactions] = ACTIONS(286),
    [anon_sym_Parameter_Collection] = ACTIONS(286),
    [anon_sym_Query_Condition] = ACTIONS(286),
    [anon_sym_Manual_Condition] = ACTIONS(286),
    [anon_sym_Dynamic_Element] = ACTIONS(286),
    [anon_sym_Dynamic_Integer] = ACTIONS(286),
    [anon_sym_Dynamic_Real] = ACTIONS(286),
    [anon_sym_Dynamic_Text] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_while] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
    [anon_sym_break] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_continue] = ACTIONS(256),
    [anon_sym_goto] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_else] = ACTIONS(256),
    [anon_sym_for] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_return] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_number_literal] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_void] = ACTIONS(256),
    [anon_sym_Integer] = ACTIONS(256),
    [anon_sym_Real] = ACTIONS(256),
    [anon_sym_Text] = ACTIONS(256),
    [anon_sym_Vector2] = ACTIONS(256),
    [anon_sym_Vector3] = ACTIONS(256),
    [anon_sym_Vector4] = ACTIONS(256),
    [anon_sym_Matrix3] = ACTIONS(256),
    [anon_sym_Matrix4] = ACTIONS(256),
    [anon_sym_Point] = ACTIONS(256),
    [anon_sym_Line] = ACTIONS(256),
    [anon_sym_Arc] = ACTIONS(256),
    [anon_sym_Spiral] = ACTIONS(256),
    [anon_sym_Parabola] = ACTIONS(256),
    [anon_sym_Segment] = ACTIONS(256),
    [anon_sym_Element] = ACTIONS(256),
    [anon_sym_Model] = ACTIONS(256),
    [anon_sym_View] = ACTIONS(256),
    [anon_sym_Macro_Function] = ACTIONS(256),
    [anon_sym_Function] = ACTIONS(256),
    [anon_sym_Uid] = ACTIONS(256),
    [anon_sym_Guid] = ACTIONS(256),
    [anon_sym_Attributes] = ACTIONS(256),
    [anon_sym_SDR_Attribute] = ACTIONS(256),
    [anon_sym_Blob] = ACTIONS(256),
    [anon_sym_Screen_Text] = ACTIONS(256),
    [anon_sym_Textstyle_Data] = ACTIONS(256),
    [anon_sym_Equality_Label] = ACTIONS(256),
    [anon_sym_Undo] = ACTIONS(256),
    [anon_sym_Undo_List] = ACTIONS(256),
    [anon_sym_Widget] = ACTIONS(256),
    [anon_sym_Menu] = ACTIONS(256),
    [anon_sym_Panel] = ACTIONS(256),
    [anon_sym_Overlay_Widget] = ACTIONS(256),
    [anon_sym_Vertical_Group] = ACTIONS(256),
    [anon_sym_Horizontal_Group] = ACTIONS(256),
    [anon_sym_Widget_Pages] = ACTIONS(256),
    [anon_sym_Button] = ACTIONS(256),
    [anon_sym_Select_Button] = ACTIONS(256),
    [anon_sym_Angle_Box] = ACTIONS(256),
    [anon_sym_Attributes_Box] = ACTIONS(256),
    [anon_sym_Billboard_Box] = ACTIONS(256),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(256),
    [anon_sym_Bitmap_List_Box] = ACTIONS(256),
    [anon_sym_Chainage_Box] = ACTIONS(256),
    [anon_sym_Choice_Box] = ACTIONS(256),
    [anon_sym_Colour_Box] = ACTIONS(256),
    [anon_sym_Colour_Message_Box] = ACTIONS(256),
    [anon_sym_Date_Time_Box] = ACTIONS(256),
    [anon_sym_Directory_Box] = ACTIONS(256),
    [anon_sym_Draw_Box] = ACTIONS(256),
    [anon_sym_File_Box] = ACTIONS(256),
    [anon_sym_Function_Box] = ACTIONS(256),
    [anon_sym_Graph_Box] = ACTIONS(256),
    [anon_sym_GridCtrl_Box] = ACTIONS(256),
    [anon_sym_HyperLink_Box] = ACTIONS(256),
    [anon_sym_Input_Box] = ACTIONS(256),
    [anon_sym_Integer_Box] = ACTIONS(256),
    [anon_sym_Justify_Box] = ACTIONS(256),
    [anon_sym_Linestyle_Box] = ACTIONS(256),
    [anon_sym_List_Box] = ACTIONS(256),
    [anon_sym_ListCtrl_Box] = ACTIONS(256),
    [anon_sym_Map_File_Box] = ACTIONS(256),
    [anon_sym_Message_Box] = ACTIONS(256),
    [anon_sym_Model_Box] = ACTIONS(256),
    [anon_sym_Name_Box] = ACTIONS(256),
    [anon_sym_Named_Tick_Box] = ACTIONS(256),
    [anon_sym_New_Select_Box] = ACTIONS(256),
    [anon_sym_New_XYZ_Box] = ACTIONS(256),
    [anon_sym_Plotter_Box] = ACTIONS(256),
    [anon_sym_Polygon_Box] = ACTIONS(256),
    [anon_sym_Real_Box] = ACTIONS(256),
    [anon_sym_Report_Box] = ACTIONS(256),
    [anon_sym_Select_Box] = ACTIONS(256),
    [anon_sym_Select_Boxes] = ACTIONS(256),
    [anon_sym_Sheet_Size_Box] = ACTIONS(256),
    [anon_sym_Source_Box] = ACTIONS(256),
    [anon_sym_Symbol_Box] = ACTIONS(256),
    [anon_sym_Tab_Box] = ACTIONS(256),
    [anon_sym_Target_Box] = ACTIONS(256),
    [anon_sym_Template_Box] = ACTIONS(256),
    [anon_sym_Text_Edit_Box] = ACTIONS(256),
    [anon_sym_Text_Style_Box] = ACTIONS(256),
    [anon_sym_Texture_Box] = ACTIONS(256),
    [anon_sym_Tree_Box] = ACTIONS(256),
    [anon_sym_Tree_Page] = ACTIONS(256),
    [anon_sym_Tick_Box] = ACTIONS(256),
    [anon_sym_Tin_Box] = ACTIONS(256),
    [anon_sym_View_Box] = ACTIONS(256),
    [anon_sym_XYZ_Box] = ACTIONS(256),
    [anon_sym_File] = ACTIONS(256),
    [anon_sym_Map_File] = ACTIONS(256),
    [anon_sym_Plot_Parameter_File] = ACTIONS(256),
    [anon_sym_XML_Document] = ACTIONS(256),
    [anon_sym_XML_Node] = ACTIONS(256),
    [anon_sym_Connection] = ACTIONS(256),
    [anon_sym_Select_Query] = ACTIONS(256),
    [anon_sym_Insert_Query] = ACTIONS(256),
    [anon_sym_Update_Query] = ACTIONS(256),
    [anon_sym_Delete_Query] = ACTIONS(256),
    [anon_sym_Database_Results] = ACTIONS(256),
    [anon_sym_Transactions] = ACTIONS(256),
    [anon_sym_Parameter_Collection] = ACTIONS(256),
    [anon_sym_Query_Condition] = ACTIONS(256),
    [anon_sym_Manual_Condition] = ACTIONS(256),
    [anon_sym_Dynamic_Element] = ACTIONS(256),
    [anon_sym_Dynamic_Integer] = ACTIONS(256),
    [anon_sym_Dynamic_Real] = ACTIONS(256),
    [anon_sym_Dynamic_Text] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_while] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(290),
    [anon_sym_default] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_continue] = ACTIONS(290),
    [anon_sym_goto] = ACTIONS(290),
    [anon_sym_switch] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
    [anon_sym_else] = ACTIONS(290),
    [anon_sym_for] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_return] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_void] = ACTIONS(290),
    [anon_sym_Integer] = ACTIONS(290),
    [anon_sym_Real] = ACTIONS(290),
    [anon_sym_Text] = ACTIONS(290),
    [anon_sym_Vector2] = ACTIONS(290),
    [anon_sym_Vector3] = ACTIONS(290),
    [anon_sym_Vector4] = ACTIONS(290),
    [anon_sym_Matrix3] = ACTIONS(290),
    [anon_sym_Matrix4] = ACTIONS(290),
    [anon_sym_Point] = ACTIONS(290),
    [anon_sym_Line] = ACTIONS(290),
    [anon_sym_Arc] = ACTIONS(290),
    [anon_sym_Spiral] = ACTIONS(290),
    [anon_sym_Parabola] = ACTIONS(290),
    [anon_sym_Segment] = ACTIONS(290),
    [anon_sym_Element] = ACTIONS(290),
    [anon_sym_Model] = ACTIONS(290),
    [anon_sym_View] = ACTIONS(290),
    [anon_sym_Macro_Function] = ACTIONS(290),
    [anon_sym_Function] = ACTIONS(290),
    [anon_sym_Uid] = ACTIONS(290),
    [anon_sym_Guid] = ACTIONS(290),
    [anon_sym_Attributes] = ACTIONS(290),
    [anon_sym_SDR_Attribute] = ACTIONS(290),
    [anon_sym_Blob] = ACTIONS(290),
    [anon_sym_Screen_Text] = ACTIONS(290),
    [anon_sym_Textstyle_Data] = ACTIONS(290),
    [anon_sym_Equality_Label] = ACTIONS(290),
    [anon_sym_Undo] = ACTIONS(290),
    [anon_sym_Undo_List] = ACTIONS(290),
    [anon_sym_Widget] = ACTIONS(290),
    [anon_sym_Menu] = ACTIONS(290),
    [anon_sym_Panel] = ACTIONS(290),
    [anon_sym_Overlay_Widget] = ACTIONS(290),
    [anon_sym_Vertical_Group] = ACTIONS(290),
    [anon_sym_Horizontal_Group] = ACTIONS(290),
    [anon_sym_Widget_Pages] = ACTIONS(290),
    [anon_sym_Button] = ACTIONS(290),
    [anon_sym_Select_Button] = ACTIONS(290),
    [anon_sym_Angle_Box] = ACTIONS(290),
    [anon_sym_Attributes_Box] = ACTIONS(290),
    [anon_sym_Billboard_Box] = ACTIONS(290),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(290),
    [anon_sym_Bitmap_List_Box] = ACTIONS(290),
    [anon_sym_Chainage_Box] = ACTIONS(290),
    [anon_sym_Choice_Box] = ACTIONS(290),
    [anon_sym_Colour_Box] = ACTIONS(290),
    [anon_sym_Colour_Message_Box] = ACTIONS(290),
    [anon_sym_Date_Time_Box] = ACTIONS(290),
    [anon_sym_Directory_Box] = ACTIONS(290),
    [anon_sym_Draw_Box] = ACTIONS(290),
    [anon_sym_File_Box] = ACTIONS(290),
    [anon_sym_Function_Box] = ACTIONS(290),
    [anon_sym_Graph_Box] = ACTIONS(290),
    [anon_sym_GridCtrl_Box] = ACTIONS(290),
    [anon_sym_HyperLink_Box] = ACTIONS(290),
    [anon_sym_Input_Box] = ACTIONS(290),
    [anon_sym_Integer_Box] = ACTIONS(290),
    [anon_sym_Justify_Box] = ACTIONS(290),
    [anon_sym_Linestyle_Box] = ACTIONS(290),
    [anon_sym_List_Box] = ACTIONS(290),
    [anon_sym_ListCtrl_Box] = ACTIONS(290),
    [anon_sym_Map_File_Box] = ACTIONS(290),
    [anon_sym_Message_Box] = ACTIONS(290),
    [anon_sym_Model_Box] = ACTIONS(290),
    [anon_sym_Name_Box] = ACTIONS(290),
    [anon_sym_Named_Tick_Box] = ACTIONS(290),
    [anon_sym_New_Select_Box] = ACTIONS(290),
    [anon_sym_New_XYZ_Box] = ACTIONS(290),
    [anon_sym_Plotter_Box] = ACTIONS(290),
    [anon_sym_Polygon_Box] = ACTIONS(290),
    [anon_sym_Real_Box] = ACTIONS(290),
    [anon_sym_Report_Box] = ACTIONS(290),
    [anon_sym_Select_Box] = ACTIONS(290),
    [anon_sym_Select_Boxes] = ACTIONS(290),
    [anon_sym_Sheet_Size_Box] = ACTIONS(290),
    [anon_sym_Source_Box] = ACTIONS(290),
    [anon_sym_Symbol_Box] = ACTIONS(290),
    [anon_sym_Tab_Box] = ACTIONS(290),
    [anon_sym_Target_Box] = ACTIONS(290),
    [anon_sym_Template_Box] = ACTIONS(290),
    [anon_sym_Text_Edit_Box] = ACTIONS(290),
    [anon_sym_Text_Style_Box] = ACTIONS(290),
    [anon_sym_Texture_Box] = ACTIONS(290),
    [anon_sym_Tree_Box] = ACTIONS(290),
    [anon_sym_Tree_Page] = ACTIONS(290),
    [anon_sym_Tick_Box] = ACTIONS(290),
    [anon_sym_Tin_Box] = ACTIONS(290),
    [anon_sym_View_Box] = ACTIONS(290),
    [anon_sym_XYZ_Box] = ACTIONS(290),
    [anon_sym_File] = ACTIONS(290),
    [anon_sym_Map_File] = ACTIONS(290),
    [anon_sym_Plot_Parameter_File] = ACTIONS(290),
    [anon_sym_XML_Document] = ACTIONS(290),
    [anon_sym_XML_Node] = ACTIONS(290),
    [anon_sym_Connection] = ACTIONS(290),
    [anon_sym_Select_Query] = ACTIONS(290),
    [anon_sym_Insert_Query] = ACTIONS(290),
    [anon_sym_Update_Query] = ACTIONS(290),
    [anon_sym_Delete_Query] = ACTIONS(290),
    [anon_sym_Database_Results] = ACTIONS(290),
    [anon_sym_Transactions] = ACTIONS(290),
    [anon_sym_Parameter_Collection] = ACTIONS(290),
    [anon_sym_Query_Condition] = ACTIONS(290),
    [anon_sym_Manual_Condition] = ACTIONS(290),
    [anon_sym_Dynamic_Element] = ACTIONS(290),
    [anon_sym_Dynamic_Integer] = ACTIONS(290),
    [anon_sym_Dynamic_Real] = ACTIONS(290),
    [anon_sym_Dynamic_Text] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
    [anon_sym_while] = ACTIONS(268),
    [anon_sym_LPAREN] = ACTIONS(266),
    [anon_sym_case] = ACTIONS(268),
    [anon_sym_default] = ACTIONS(268),
    [anon_sym_break] = ACTIONS(268),
    [anon_sym_SEMI] = ACTIONS(266),
    [anon_sym_continue] = ACTIONS(268),
    [anon_sym_goto] = ACTIONS(268),
    [anon_sym_switch] = ACTIONS(268),
    [anon_sym_if] = ACTIONS(268),
    [anon_sym_else] = ACTIONS(292),
    [anon_sym_for] = ACTIONS(268),
    [anon_sym_BANG] = ACTIONS(266),
    [anon_sym_DASH] = ACTIONS(266),
    [anon_sym_PLUS] = ACTIONS(266),
    [anon_sym_return] = ACTIONS(268),
    [sym_identifier] = ACTIONS(268),
    [sym_number_literal] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [anon_sym_void] = ACTIONS(268),
    [anon_sym_Integer] = ACTIONS(268),
    [anon_sym_Real] = ACTIONS(268),
    [anon_sym_Text] = ACTIONS(268),
    [anon_sym_Vector2] = ACTIONS(268),
    [anon_sym_Vector3] = ACTIONS(268),
    [anon_sym_Vector4] = ACTIONS(268),
    [anon_sym_Matrix3] = ACTIONS(268),
    [anon_sym_Matrix4] = ACTIONS(268),
    [anon_sym_Point] = ACTIONS(268),
    [anon_sym_Line] = ACTIONS(268),
    [anon_sym_Arc] = ACTIONS(268),
    [anon_sym_Spiral] = ACTIONS(268),
    [anon_sym_Parabola] = ACTIONS(268),
    [anon_sym_Segment] = ACTIONS(268),
    [anon_sym_Element] = ACTIONS(268),
    [anon_sym_Model] = ACTIONS(268),
    [anon_sym_View] = ACTIONS(268),
    [anon_sym_Macro_Function] = ACTIONS(268),
    [anon_sym_Function] = ACTIONS(268),
    [anon_sym_Uid] = ACTIONS(268),
    [anon_sym_Guid] = ACTIONS(268),
    [anon_sym_Attributes] = ACTIONS(268),
    [anon_sym_SDR_Attribute] = ACTIONS(268),
    [anon_sym_Blob] = ACTIONS(268),
    [anon_sym_Screen_Text] = ACTIONS(268),
    [anon_sym_Textstyle_Data] = ACTIONS(268),
    [anon_sym_Equality_Label] = ACTIONS(268),
    [anon_sym_Undo] = ACTIONS(268),
    [anon_sym_Undo_List] = ACTIONS(268),
    [anon_sym_Widget] = ACTIONS(268),
    [anon_sym_Menu] = ACTIONS(268),
    [anon_sym_Panel] = ACTIONS(268),
    [anon_sym_Overlay_Widget] = ACTIONS(268),
    [anon_sym_Vertical_Group] = ACTIONS(268),
    [anon_sym_Horizontal_Group] = ACTIONS(268),
    [anon_sym_Widget_Pages] = ACTIONS(268),
    [anon_sym_Button] = ACTIONS(268),
    [anon_sym_Select_Button] = ACTIONS(268),
    [anon_sym_Angle_Box] = ACTIONS(268),
    [anon_sym_Attributes_Box] = ACTIONS(268),
    [anon_sym_Billboard_Box] = ACTIONS(268),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(268),
    [anon_sym_Bitmap_List_Box] = ACTIONS(268),
    [anon_sym_Chainage_Box] = ACTIONS(268),
    [anon_sym_Choice_Box] = ACTIONS(268),
    [anon_sym_Colour_Box] = ACTIONS(268),
    [anon_sym_Colour_Message_Box] = ACTIONS(268),
    [anon_sym_Date_Time_Box] = ACTIONS(268),
    [anon_sym_Directory_Box] = ACTIONS(268),
    [anon_sym_Draw_Box] = ACTIONS(268),
    [anon_sym_File_Box] = ACTIONS(268),
    [anon_sym_Function_Box] = ACTIONS(268),
    [anon_sym_Graph_Box] = ACTIONS(268),
    [anon_sym_GridCtrl_Box] = ACTIONS(268),
    [anon_sym_HyperLink_Box] = ACTIONS(268),
    [anon_sym_Input_Box] = ACTIONS(268),
    [anon_sym_Integer_Box] = ACTIONS(268),
    [anon_sym_Justify_Box] = ACTIONS(268),
    [anon_sym_Linestyle_Box] = ACTIONS(268),
    [anon_sym_List_Box] = ACTIONS(268),
    [anon_sym_ListCtrl_Box] = ACTIONS(268),
    [anon_sym_Map_File_Box] = ACTIONS(268),
    [anon_sym_Message_Box] = ACTIONS(268),
    [anon_sym_Model_Box] = ACTIONS(268),
    [anon_sym_Name_Box] = ACTIONS(268),
    [anon_sym_Named_Tick_Box] = ACTIONS(268),
    [anon_sym_New_Select_Box] = ACTIONS(268),
    [anon_sym_New_XYZ_Box] = ACTIONS(268),
    [anon_sym_Plotter_Box] = ACTIONS(268),
    [anon_sym_Polygon_Box] = ACTIONS(268),
    [anon_sym_Real_Box] = ACTIONS(268),
    [anon_sym_Report_Box] = ACTIONS(268),
    [anon_sym_Select_Box] = ACTIONS(268),
    [anon_sym_Select_Boxes] = ACTIONS(268),
    [anon_sym_Sheet_Size_Box] = ACTIONS(268),
    [anon_sym_Source_Box] = ACTIONS(268),
    [anon_sym_Symbol_Box] = ACTIONS(268),
    [anon_sym_Tab_Box] = ACTIONS(268),
    [anon_sym_Target_Box] = ACTIONS(268),
    [anon_sym_Template_Box] = ACTIONS(268),
    [anon_sym_Text_Edit_Box] = ACTIONS(268),
    [anon_sym_Text_Style_Box] = ACTIONS(268),
    [anon_sym_Texture_Box] = ACTIONS(268),
    [anon_sym_Tree_Box] = ACTIONS(268),
    [anon_sym_Tree_Page] = ACTIONS(268),
    [anon_sym_Tick_Box] = ACTIONS(268),
    [anon_sym_Tin_Box] = ACTIONS(268),
    [anon_sym_View_Box] = ACTIONS(268),
    [anon_sym_XYZ_Box] = ACTIONS(268),
    [anon_sym_File] = ACTIONS(268),
    [anon_sym_Map_File] = ACTIONS(268),
    [anon_sym_Plot_Parameter_File] = ACTIONS(268),
    [anon_sym_XML_Document] = ACTIONS(268),
    [anon_sym_XML_Node] = ACTIONS(268),
    [anon_sym_Connection] = ACTIONS(268),
    [anon_sym_Select_Query] = ACTIONS(268),
    [anon_sym_Insert_Query] = ACTIONS(268),
    [anon_sym_Update_Query] = ACTIONS(268),
    [anon_sym_Delete_Query] = ACTIONS(268),
    [anon_sym_Database_Results] = ACTIONS(268),
    [anon_sym_Transactions] = ACTIONS(268),
    [anon_sym_Parameter_Collection] = ACTIONS(268),
    [anon_sym_Query_Condition] = ACTIONS(268),
    [anon_sym_Manual_Condition] = ACTIONS(268),
    [anon_sym_Dynamic_Element] = ACTIONS(268),
    [anon_sym_Dynamic_Integer] = ACTIONS(268),
    [anon_sym_Dynamic_Real] = ACTIONS(268),
    [anon_sym_Dynamic_Text] = ACTIONS(268),
    [sym_comment] = ACTIONS(3),
  },
  [43] = {
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_while] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_case] = ACTIONS(296),
    [anon_sym_default] = ACTIONS(296),
    [anon_sym_break] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_continue] = ACTIONS(296),
    [anon_sym_goto] = ACTIONS(296),
    [anon_sym_switch] = ACTIONS(296),
    [anon_sym_if] = ACTIONS(296),
    [anon_sym_else] = ACTIONS(296),
    [anon_sym_for] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_return] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_number_literal] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_void] = ACTIONS(296),
    [anon_sym_Integer] = ACTIONS(296),
    [anon_sym_Real] = ACTIONS(296),
    [anon_sym_Text] = ACTIONS(296),
    [anon_sym_Vector2] = ACTIONS(296),
    [anon_sym_Vector3] = ACTIONS(296),
    [anon_sym_Vector4] = ACTIONS(296),
    [anon_sym_Matrix3] = ACTIONS(296),
    [anon_sym_Matrix4] = ACTIONS(296),
    [anon_sym_Point] = ACTIONS(296),
    [anon_sym_Line] = ACTIONS(296),
    [anon_sym_Arc] = ACTIONS(296),
    [anon_sym_Spiral] = ACTIONS(296),
    [anon_sym_Parabola] = ACTIONS(296),
    [anon_sym_Segment] = ACTIONS(296),
    [anon_sym_Element] = ACTIONS(296),
    [anon_sym_Model] = ACTIONS(296),
    [anon_sym_View] = ACTIONS(296),
    [anon_sym_Macro_Function] = ACTIONS(296),
    [anon_sym_Function] = ACTIONS(296),
    [anon_sym_Uid] = ACTIONS(296),
    [anon_sym_Guid] = ACTIONS(296),
    [anon_sym_Attributes] = ACTIONS(296),
    [anon_sym_SDR_Attribute] = ACTIONS(296),
    [anon_sym_Blob] = ACTIONS(296),
    [anon_sym_Screen_Text] = ACTIONS(296),
    [anon_sym_Textstyle_Data] = ACTIONS(296),
    [anon_sym_Equality_Label] = ACTIONS(296),
    [anon_sym_Undo] = ACTIONS(296),
    [anon_sym_Undo_List] = ACTIONS(296),
    [anon_sym_Widget] = ACTIONS(296),
    [anon_sym_Menu] = ACTIONS(296),
    [anon_sym_Panel] = ACTIONS(296),
    [anon_sym_Overlay_Widget] = ACTIONS(296),
    [anon_sym_Vertical_Group] = ACTIONS(296),
    [anon_sym_Horizontal_Group] = ACTIONS(296),
    [anon_sym_Widget_Pages] = ACTIONS(296),
    [anon_sym_Button] = ACTIONS(296),
    [anon_sym_Select_Button] = ACTIONS(296),
    [anon_sym_Angle_Box] = ACTIONS(296),
    [anon_sym_Attributes_Box] = ACTIONS(296),
    [anon_sym_Billboard_Box] = ACTIONS(296),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(296),
    [anon_sym_Bitmap_List_Box] = ACTIONS(296),
    [anon_sym_Chainage_Box] = ACTIONS(296),
    [anon_sym_Choice_Box] = ACTIONS(296),
    [anon_sym_Colour_Box] = ACTIONS(296),
    [anon_sym_Colour_Message_Box] = ACTIONS(296),
    [anon_sym_Date_Time_Box] = ACTIONS(296),
    [anon_sym_Directory_Box] = ACTIONS(296),
    [anon_sym_Draw_Box] = ACTIONS(296),
    [anon_sym_File_Box] = ACTIONS(296),
    [anon_sym_Function_Box] = ACTIONS(296),
    [anon_sym_Graph_Box] = ACTIONS(296),
    [anon_sym_GridCtrl_Box] = ACTIONS(296),
    [anon_sym_HyperLink_Box] = ACTIONS(296),
    [anon_sym_Input_Box] = ACTIONS(296),
    [anon_sym_Integer_Box] = ACTIONS(296),
    [anon_sym_Justify_Box] = ACTIONS(296),
    [anon_sym_Linestyle_Box] = ACTIONS(296),
    [anon_sym_List_Box] = ACTIONS(296),
    [anon_sym_ListCtrl_Box] = ACTIONS(296),
    [anon_sym_Map_File_Box] = ACTIONS(296),
    [anon_sym_Message_Box] = ACTIONS(296),
    [anon_sym_Model_Box] = ACTIONS(296),
    [anon_sym_Name_Box] = ACTIONS(296),
    [anon_sym_Named_Tick_Box] = ACTIONS(296),
    [anon_sym_New_Select_Box] = ACTIONS(296),
    [anon_sym_New_XYZ_Box] = ACTIONS(296),
    [anon_sym_Plotter_Box] = ACTIONS(296),
    [anon_sym_Polygon_Box] = ACTIONS(296),
    [anon_sym_Real_Box] = ACTIONS(296),
    [anon_sym_Report_Box] = ACTIONS(296),
    [anon_sym_Select_Box] = ACTIONS(296),
    [anon_sym_Select_Boxes] = ACTIONS(296),
    [anon_sym_Sheet_Size_Box] = ACTIONS(296),
    [anon_sym_Source_Box] = ACTIONS(296),
    [anon_sym_Symbol_Box] = ACTIONS(296),
    [anon_sym_Tab_Box] = ACTIONS(296),
    [anon_sym_Target_Box] = ACTIONS(296),
    [anon_sym_Template_Box] = ACTIONS(296),
    [anon_sym_Text_Edit_Box] = ACTIONS(296),
    [anon_sym_Text_Style_Box] = ACTIONS(296),
    [anon_sym_Texture_Box] = ACTIONS(296),
    [anon_sym_Tree_Box] = ACTIONS(296),
    [anon_sym_Tree_Page] = ACTIONS(296),
    [anon_sym_Tick_Box] = ACTIONS(296),
    [anon_sym_Tin_Box] = ACTIONS(296),
    [anon_sym_View_Box] = ACTIONS(296),
    [anon_sym_XYZ_Box] = ACTIONS(296),
    [anon_sym_File] = ACTIONS(296),
    [anon_sym_Map_File] = ACTIONS(296),
    [anon_sym_Plot_Parameter_File] = ACTIONS(296),
    [anon_sym_XML_Document] = ACTIONS(296),
    [anon_sym_XML_Node] = ACTIONS(296),
    [anon_sym_Connection] = ACTIONS(296),
    [anon_sym_Select_Query] = ACTIONS(296),
    [anon_sym_Insert_Query] = ACTIONS(296),
    [anon_sym_Update_Query] = ACTIONS(296),
    [anon_sym_Delete_Query] = ACTIONS(296),
    [anon_sym_Database_Results] = ACTIONS(296),
    [anon_sym_Transactions] = ACTIONS(296),
    [anon_sym_Parameter_Collection] = ACTIONS(296),
    [anon_sym_Query_Condition] = ACTIONS(296),
    [anon_sym_Manual_Condition] = ACTIONS(296),
    [anon_sym_Dynamic_Element] = ACTIONS(296),
    [anon_sym_Dynamic_Integer] = ACTIONS(296),
    [anon_sym_Dynamic_Real] = ACTIONS(296),
    [anon_sym_Dynamic_Text] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [44] = {
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_while] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_case] = ACTIONS(300),
    [anon_sym_default] = ACTIONS(300),
    [anon_sym_break] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_continue] = ACTIONS(300),
    [anon_sym_goto] = ACTIONS(300),
    [anon_sym_switch] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(300),
    [anon_sym_else] = ACTIONS(300),
    [anon_sym_for] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_return] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number_literal] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_void] = ACTIONS(300),
    [anon_sym_Integer] = ACTIONS(300),
    [anon_sym_Real] = ACTIONS(300),
    [anon_sym_Text] = ACTIONS(300),
    [anon_sym_Vector2] = ACTIONS(300),
    [anon_sym_Vector3] = ACTIONS(300),
    [anon_sym_Vector4] = ACTIONS(300),
    [anon_sym_Matrix3] = ACTIONS(300),
    [anon_sym_Matrix4] = ACTIONS(300),
    [anon_sym_Point] = ACTIONS(300),
    [anon_sym_Line] = ACTIONS(300),
    [anon_sym_Arc] = ACTIONS(300),
    [anon_sym_Spiral] = ACTIONS(300),
    [anon_sym_Parabola] = ACTIONS(300),
    [anon_sym_Segment] = ACTIONS(300),
    [anon_sym_Element] = ACTIONS(300),
    [anon_sym_Model] = ACTIONS(300),
    [anon_sym_View] = ACTIONS(300),
    [anon_sym_Macro_Function] = ACTIONS(300),
    [anon_sym_Function] = ACTIONS(300),
    [anon_sym_Uid] = ACTIONS(300),
    [anon_sym_Guid] = ACTIONS(300),
    [anon_sym_Attributes] = ACTIONS(300),
    [anon_sym_SDR_Attribute] = ACTIONS(300),
    [anon_sym_Blob] = ACTIONS(300),
    [anon_sym_Screen_Text] = ACTIONS(300),
    [anon_sym_Textstyle_Data] = ACTIONS(300),
    [anon_sym_Equality_Label] = ACTIONS(300),
    [anon_sym_Undo] = ACTIONS(300),
    [anon_sym_Undo_List] = ACTIONS(300),
    [anon_sym_Widget] = ACTIONS(300),
    [anon_sym_Menu] = ACTIONS(300),
    [anon_sym_Panel] = ACTIONS(300),
    [anon_sym_Overlay_Widget] = ACTIONS(300),
    [anon_sym_Vertical_Group] = ACTIONS(300),
    [anon_sym_Horizontal_Group] = ACTIONS(300),
    [anon_sym_Widget_Pages] = ACTIONS(300),
    [anon_sym_Button] = ACTIONS(300),
    [anon_sym_Select_Button] = ACTIONS(300),
    [anon_sym_Angle_Box] = ACTIONS(300),
    [anon_sym_Attributes_Box] = ACTIONS(300),
    [anon_sym_Billboard_Box] = ACTIONS(300),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(300),
    [anon_sym_Bitmap_List_Box] = ACTIONS(300),
    [anon_sym_Chainage_Box] = ACTIONS(300),
    [anon_sym_Choice_Box] = ACTIONS(300),
    [anon_sym_Colour_Box] = ACTIONS(300),
    [anon_sym_Colour_Message_Box] = ACTIONS(300),
    [anon_sym_Date_Time_Box] = ACTIONS(300),
    [anon_sym_Directory_Box] = ACTIONS(300),
    [anon_sym_Draw_Box] = ACTIONS(300),
    [anon_sym_File_Box] = ACTIONS(300),
    [anon_sym_Function_Box] = ACTIONS(300),
    [anon_sym_Graph_Box] = ACTIONS(300),
    [anon_sym_GridCtrl_Box] = ACTIONS(300),
    [anon_sym_HyperLink_Box] = ACTIONS(300),
    [anon_sym_Input_Box] = ACTIONS(300),
    [anon_sym_Integer_Box] = ACTIONS(300),
    [anon_sym_Justify_Box] = ACTIONS(300),
    [anon_sym_Linestyle_Box] = ACTIONS(300),
    [anon_sym_List_Box] = ACTIONS(300),
    [anon_sym_ListCtrl_Box] = ACTIONS(300),
    [anon_sym_Map_File_Box] = ACTIONS(300),
    [anon_sym_Message_Box] = ACTIONS(300),
    [anon_sym_Model_Box] = ACTIONS(300),
    [anon_sym_Name_Box] = ACTIONS(300),
    [anon_sym_Named_Tick_Box] = ACTIONS(300),
    [anon_sym_New_Select_Box] = ACTIONS(300),
    [anon_sym_New_XYZ_Box] = ACTIONS(300),
    [anon_sym_Plotter_Box] = ACTIONS(300),
    [anon_sym_Polygon_Box] = ACTIONS(300),
    [anon_sym_Real_Box] = ACTIONS(300),
    [anon_sym_Report_Box] = ACTIONS(300),
    [anon_sym_Select_Box] = ACTIONS(300),
    [anon_sym_Select_Boxes] = ACTIONS(300),
    [anon_sym_Sheet_Size_Box] = ACTIONS(300),
    [anon_sym_Source_Box] = ACTIONS(300),
    [anon_sym_Symbol_Box] = ACTIONS(300),
    [anon_sym_Tab_Box] = ACTIONS(300),
    [anon_sym_Target_Box] = ACTIONS(300),
    [anon_sym_Template_Box] = ACTIONS(300),
    [anon_sym_Text_Edit_Box] = ACTIONS(300),
    [anon_sym_Text_Style_Box] = ACTIONS(300),
    [anon_sym_Texture_Box] = ACTIONS(300),
    [anon_sym_Tree_Box] = ACTIONS(300),
    [anon_sym_Tree_Page] = ACTIONS(300),
    [anon_sym_Tick_Box] = ACTIONS(300),
    [anon_sym_Tin_Box] = ACTIONS(300),
    [anon_sym_View_Box] = ACTIONS(300),
    [anon_sym_XYZ_Box] = ACTIONS(300),
    [anon_sym_File] = ACTIONS(300),
    [anon_sym_Map_File] = ACTIONS(300),
    [anon_sym_Plot_Parameter_File] = ACTIONS(300),
    [anon_sym_XML_Document] = ACTIONS(300),
    [anon_sym_XML_Node] = ACTIONS(300),
    [anon_sym_Connection] = ACTIONS(300),
    [anon_sym_Select_Query] = ACTIONS(300),
    [anon_sym_Insert_Query] = ACTIONS(300),
    [anon_sym_Update_Query] = ACTIONS(300),
    [anon_sym_Delete_Query] = ACTIONS(300),
    [anon_sym_Database_Results] = ACTIONS(300),
    [anon_sym_Transactions] = ACTIONS(300),
    [anon_sym_Parameter_Collection] = ACTIONS(300),
    [anon_sym_Query_Condition] = ACTIONS(300),
    [anon_sym_Manual_Condition] = ACTIONS(300),
    [anon_sym_Dynamic_Element] = ACTIONS(300),
    [anon_sym_Dynamic_Integer] = ACTIONS(300),
    [anon_sym_Dynamic_Real] = ACTIONS(300),
    [anon_sym_Dynamic_Text] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_break] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_continue] = ACTIONS(304),
    [anon_sym_goto] = ACTIONS(304),
    [anon_sym_switch] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_else] = ACTIONS(304),
    [anon_sym_for] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_return] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_void] = ACTIONS(304),
    [anon_sym_Integer] = ACTIONS(304),
    [anon_sym_Real] = ACTIONS(304),
    [anon_sym_Text] = ACTIONS(304),
    [anon_sym_Vector2] = ACTIONS(304),
    [anon_sym_Vector3] = ACTIONS(304),
    [anon_sym_Vector4] = ACTIONS(304),
    [anon_sym_Matrix3] = ACTIONS(304),
    [anon_sym_Matrix4] = ACTIONS(304),
    [anon_sym_Point] = ACTIONS(304),
    [anon_sym_Line] = ACTIONS(304),
    [anon_sym_Arc] = ACTIONS(304),
    [anon_sym_Spiral] = ACTIONS(304),
    [anon_sym_Parabola] = ACTIONS(304),
    [anon_sym_Segment] = ACTIONS(304),
    [anon_sym_Element] = ACTIONS(304),
    [anon_sym_Model] = ACTIONS(304),
    [anon_sym_View] = ACTIONS(304),
    [anon_sym_Macro_Function] = ACTIONS(304),
    [anon_sym_Function] = ACTIONS(304),
    [anon_sym_Uid] = ACTIONS(304),
    [anon_sym_Guid] = ACTIONS(304),
    [anon_sym_Attributes] = ACTIONS(304),
    [anon_sym_SDR_Attribute] = ACTIONS(304),
    [anon_sym_Blob] = ACTIONS(304),
    [anon_sym_Screen_Text] = ACTIONS(304),
    [anon_sym_Textstyle_Data] = ACTIONS(304),
    [anon_sym_Equality_Label] = ACTIONS(304),
    [anon_sym_Undo] = ACTIONS(304),
    [anon_sym_Undo_List] = ACTIONS(304),
    [anon_sym_Widget] = ACTIONS(304),
    [anon_sym_Menu] = ACTIONS(304),
    [anon_sym_Panel] = ACTIONS(304),
    [anon_sym_Overlay_Widget] = ACTIONS(304),
    [anon_sym_Vertical_Group] = ACTIONS(304),
    [anon_sym_Horizontal_Group] = ACTIONS(304),
    [anon_sym_Widget_Pages] = ACTIONS(304),
    [anon_sym_Button] = ACTIONS(304),
    [anon_sym_Select_Button] = ACTIONS(304),
    [anon_sym_Angle_Box] = ACTIONS(304),
    [anon_sym_Attributes_Box] = ACTIONS(304),
    [anon_sym_Billboard_Box] = ACTIONS(304),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(304),
    [anon_sym_Bitmap_List_Box] = ACTIONS(304),
    [anon_sym_Chainage_Box] = ACTIONS(304),
    [anon_sym_Choice_Box] = ACTIONS(304),
    [anon_sym_Colour_Box] = ACTIONS(304),
    [anon_sym_Colour_Message_Box] = ACTIONS(304),
    [anon_sym_Date_Time_Box] = ACTIONS(304),
    [anon_sym_Directory_Box] = ACTIONS(304),
    [anon_sym_Draw_Box] = ACTIONS(304),
    [anon_sym_File_Box] = ACTIONS(304),
    [anon_sym_Function_Box] = ACTIONS(304),
    [anon_sym_Graph_Box] = ACTIONS(304),
    [anon_sym_GridCtrl_Box] = ACTIONS(304),
    [anon_sym_HyperLink_Box] = ACTIONS(304),
    [anon_sym_Input_Box] = ACTIONS(304),
    [anon_sym_Integer_Box] = ACTIONS(304),
    [anon_sym_Justify_Box] = ACTIONS(304),
    [anon_sym_Linestyle_Box] = ACTIONS(304),
    [anon_sym_List_Box] = ACTIONS(304),
    [anon_sym_ListCtrl_Box] = ACTIONS(304),
    [anon_sym_Map_File_Box] = ACTIONS(304),
    [anon_sym_Message_Box] = ACTIONS(304),
    [anon_sym_Model_Box] = ACTIONS(304),
    [anon_sym_Name_Box] = ACTIONS(304),
    [anon_sym_Named_Tick_Box] = ACTIONS(304),
    [anon_sym_New_Select_Box] = ACTIONS(304),
    [anon_sym_New_XYZ_Box] = ACTIONS(304),
    [anon_sym_Plotter_Box] = ACTIONS(304),
    [anon_sym_Polygon_Box] = ACTIONS(304),
    [anon_sym_Real_Box] = ACTIONS(304),
    [anon_sym_Report_Box] = ACTIONS(304),
    [anon_sym_Select_Box] = ACTIONS(304),
    [anon_sym_Select_Boxes] = ACTIONS(304),
    [anon_sym_Sheet_Size_Box] = ACTIONS(304),
    [anon_sym_Source_Box] = ACTIONS(304),
    [anon_sym_Symbol_Box] = ACTIONS(304),
    [anon_sym_Tab_Box] = ACTIONS(304),
    [anon_sym_Target_Box] = ACTIONS(304),
    [anon_sym_Template_Box] = ACTIONS(304),
    [anon_sym_Text_Edit_Box] = ACTIONS(304),
    [anon_sym_Text_Style_Box] = ACTIONS(304),
    [anon_sym_Texture_Box] = ACTIONS(304),
    [anon_sym_Tree_Box] = ACTIONS(304),
    [anon_sym_Tree_Page] = ACTIONS(304),
    [anon_sym_Tick_Box] = ACTIONS(304),
    [anon_sym_Tin_Box] = ACTIONS(304),
    [anon_sym_View_Box] = ACTIONS(304),
    [anon_sym_XYZ_Box] = ACTIONS(304),
    [anon_sym_File] = ACTIONS(304),
    [anon_sym_Map_File] = ACTIONS(304),
    [anon_sym_Plot_Parameter_File] = ACTIONS(304),
    [anon_sym_XML_Document] = ACTIONS(304),
    [anon_sym_XML_Node] = ACTIONS(304),
    [anon_sym_Connection] = ACTIONS(304),
    [anon_sym_Select_Query] = ACTIONS(304),
    [anon_sym_Insert_Query] = ACTIONS(304),
    [anon_sym_Update_Query] = ACTIONS(304),
    [anon_sym_Delete_Query] = ACTIONS(304),
    [anon_sym_Database_Results] = ACTIONS(304),
    [anon_sym_Transactions] = ACTIONS(304),
    [anon_sym_Parameter_Collection] = ACTIONS(304),
    [anon_sym_Query_Condition] = ACTIONS(304),
    [anon_sym_Manual_Condition] = ACTIONS(304),
    [anon_sym_Dynamic_Element] = ACTIONS(304),
    [anon_sym_Dynamic_Integer] = ACTIONS(304),
    [anon_sym_Dynamic_Real] = ACTIONS(304),
    [anon_sym_Dynamic_Text] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_while] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_case] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
    [anon_sym_break] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_continue] = ACTIONS(308),
    [anon_sym_goto] = ACTIONS(308),
    [anon_sym_switch] = ACTIONS(308),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_else] = ACTIONS(308),
    [anon_sym_for] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_return] = ACTIONS(308),
    [sym_identifier] = ACTIONS(308),
    [sym_number_literal] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_void] = ACTIONS(308),
    [anon_sym_Integer] = ACTIONS(308),
    [anon_sym_Real] = ACTIONS(308),
    [anon_sym_Text] = ACTIONS(308),
    [anon_sym_Vector2] = ACTIONS(308),
    [anon_sym_Vector3] = ACTIONS(308),
    [anon_sym_Vector4] = ACTIONS(308),
    [anon_sym_Matrix3] = ACTIONS(308),
    [anon_sym_Matrix4] = ACTIONS(308),
    [anon_sym_Point] = ACTIONS(308),
    [anon_sym_Line] = ACTIONS(308),
    [anon_sym_Arc] = ACTIONS(308),
    [anon_sym_Spiral] = ACTIONS(308),
    [anon_sym_Parabola] = ACTIONS(308),
    [anon_sym_Segment] = ACTIONS(308),
    [anon_sym_Element] = ACTIONS(308),
    [anon_sym_Model] = ACTIONS(308),
    [anon_sym_View] = ACTIONS(308),
    [anon_sym_Macro_Function] = ACTIONS(308),
    [anon_sym_Function] = ACTIONS(308),
    [anon_sym_Uid] = ACTIONS(308),
    [anon_sym_Guid] = ACTIONS(308),
    [anon_sym_Attributes] = ACTIONS(308),
    [anon_sym_SDR_Attribute] = ACTIONS(308),
    [anon_sym_Blob] = ACTIONS(308),
    [anon_sym_Screen_Text] = ACTIONS(308),
    [anon_sym_Textstyle_Data] = ACTIONS(308),
    [anon_sym_Equality_Label] = ACTIONS(308),
    [anon_sym_Undo] = ACTIONS(308),
    [anon_sym_Undo_List] = ACTIONS(308),
    [anon_sym_Widget] = ACTIONS(308),
    [anon_sym_Menu] = ACTIONS(308),
    [anon_sym_Panel] = ACTIONS(308),
    [anon_sym_Overlay_Widget] = ACTIONS(308),
    [anon_sym_Vertical_Group] = ACTIONS(308),
    [anon_sym_Horizontal_Group] = ACTIONS(308),
    [anon_sym_Widget_Pages] = ACTIONS(308),
    [anon_sym_Button] = ACTIONS(308),
    [anon_sym_Select_Button] = ACTIONS(308),
    [anon_sym_Angle_Box] = ACTIONS(308),
    [anon_sym_Attributes_Box] = ACTIONS(308),
    [anon_sym_Billboard_Box] = ACTIONS(308),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(308),
    [anon_sym_Bitmap_List_Box] = ACTIONS(308),
    [anon_sym_Chainage_Box] = ACTIONS(308),
    [anon_sym_Choice_Box] = ACTIONS(308),
    [anon_sym_Colour_Box] = ACTIONS(308),
    [anon_sym_Colour_Message_Box] = ACTIONS(308),
    [anon_sym_Date_Time_Box] = ACTIONS(308),
    [anon_sym_Directory_Box] = ACTIONS(308),
    [anon_sym_Draw_Box] = ACTIONS(308),
    [anon_sym_File_Box] = ACTIONS(308),
    [anon_sym_Function_Box] = ACTIONS(308),
    [anon_sym_Graph_Box] = ACTIONS(308),
    [anon_sym_GridCtrl_Box] = ACTIONS(308),
    [anon_sym_HyperLink_Box] = ACTIONS(308),
    [anon_sym_Input_Box] = ACTIONS(308),
    [anon_sym_Integer_Box] = ACTIONS(308),
    [anon_sym_Justify_Box] = ACTIONS(308),
    [anon_sym_Linestyle_Box] = ACTIONS(308),
    [anon_sym_List_Box] = ACTIONS(308),
    [anon_sym_ListCtrl_Box] = ACTIONS(308),
    [anon_sym_Map_File_Box] = ACTIONS(308),
    [anon_sym_Message_Box] = ACTIONS(308),
    [anon_sym_Model_Box] = ACTIONS(308),
    [anon_sym_Name_Box] = ACTIONS(308),
    [anon_sym_Named_Tick_Box] = ACTIONS(308),
    [anon_sym_New_Select_Box] = ACTIONS(308),
    [anon_sym_New_XYZ_Box] = ACTIONS(308),
    [anon_sym_Plotter_Box] = ACTIONS(308),
    [anon_sym_Polygon_Box] = ACTIONS(308),
    [anon_sym_Real_Box] = ACTIONS(308),
    [anon_sym_Report_Box] = ACTIONS(308),
    [anon_sym_Select_Box] = ACTIONS(308),
    [anon_sym_Select_Boxes] = ACTIONS(308),
    [anon_sym_Sheet_Size_Box] = ACTIONS(308),
    [anon_sym_Source_Box] = ACTIONS(308),
    [anon_sym_Symbol_Box] = ACTIONS(308),
    [anon_sym_Tab_Box] = ACTIONS(308),
    [anon_sym_Target_Box] = ACTIONS(308),
    [anon_sym_Template_Box] = ACTIONS(308),
    [anon_sym_Text_Edit_Box] = ACTIONS(308),
    [anon_sym_Text_Style_Box] = ACTIONS(308),
    [anon_sym_Texture_Box] = ACTIONS(308),
    [anon_sym_Tree_Box] = ACTIONS(308),
    [anon_sym_Tree_Page] = ACTIONS(308),
    [anon_sym_Tick_Box] = ACTIONS(308),
    [anon_sym_Tin_Box] = ACTIONS(308),
    [anon_sym_View_Box] = ACTIONS(308),
    [anon_sym_XYZ_Box] = ACTIONS(308),
    [anon_sym_File] = ACTIONS(308),
    [anon_sym_Map_File] = ACTIONS(308),
    [anon_sym_Plot_Parameter_File] = ACTIONS(308),
    [anon_sym_XML_Document] = ACTIONS(308),
    [anon_sym_XML_Node] = ACTIONS(308),
    [anon_sym_Connection] = ACTIONS(308),
    [anon_sym_Select_Query] = ACTIONS(308),
    [anon_sym_Insert_Query] = ACTIONS(308),
    [anon_sym_Update_Query] = ACTIONS(308),
    [anon_sym_Delete_Query] = ACTIONS(308),
    [anon_sym_Database_Results] = ACTIONS(308),
    [anon_sym_Transactions] = ACTIONS(308),
    [anon_sym_Parameter_Collection] = ACTIONS(308),
    [anon_sym_Query_Condition] = ACTIONS(308),
    [anon_sym_Manual_Condition] = ACTIONS(308),
    [anon_sym_Dynamic_Element] = ACTIONS(308),
    [anon_sym_Dynamic_Integer] = ACTIONS(308),
    [anon_sym_Dynamic_Real] = ACTIONS(308),
    [anon_sym_Dynamic_Text] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_while] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_case] = ACTIONS(312),
    [anon_sym_default] = ACTIONS(312),
    [anon_sym_break] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_continue] = ACTIONS(312),
    [anon_sym_goto] = ACTIONS(312),
    [anon_sym_switch] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [anon_sym_for] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_return] = ACTIONS(312),
    [sym_identifier] = ACTIONS(312),
    [sym_number_literal] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_void] = ACTIONS(312),
    [anon_sym_Integer] = ACTIONS(312),
    [anon_sym_Real] = ACTIONS(312),
    [anon_sym_Text] = ACTIONS(312),
    [anon_sym_Vector2] = ACTIONS(312),
    [anon_sym_Vector3] = ACTIONS(312),
    [anon_sym_Vector4] = ACTIONS(312),
    [anon_sym_Matrix3] = ACTIONS(312),
    [anon_sym_Matrix4] = ACTIONS(312),
    [anon_sym_Point] = ACTIONS(312),
    [anon_sym_Line] = ACTIONS(312),
    [anon_sym_Arc] = ACTIONS(312),
    [anon_sym_Spiral] = ACTIONS(312),
    [anon_sym_Parabola] = ACTIONS(312),
    [anon_sym_Segment] = ACTIONS(312),
    [anon_sym_Element] = ACTIONS(312),
    [anon_sym_Model] = ACTIONS(312),
    [anon_sym_View] = ACTIONS(312),
    [anon_sym_Macro_Function] = ACTIONS(312),
    [anon_sym_Function] = ACTIONS(312),
    [anon_sym_Uid] = ACTIONS(312),
    [anon_sym_Guid] = ACTIONS(312),
    [anon_sym_Attributes] = ACTIONS(312),
    [anon_sym_SDR_Attribute] = ACTIONS(312),
    [anon_sym_Blob] = ACTIONS(312),
    [anon_sym_Screen_Text] = ACTIONS(312),
    [anon_sym_Textstyle_Data] = ACTIONS(312),
    [anon_sym_Equality_Label] = ACTIONS(312),
    [anon_sym_Undo] = ACTIONS(312),
    [anon_sym_Undo_List] = ACTIONS(312),
    [anon_sym_Widget] = ACTIONS(312),
    [anon_sym_Menu] = ACTIONS(312),
    [anon_sym_Panel] = ACTIONS(312),
    [anon_sym_Overlay_Widget] = ACTIONS(312),
    [anon_sym_Vertical_Group] = ACTIONS(312),
    [anon_sym_Horizontal_Group] = ACTIONS(312),
    [anon_sym_Widget_Pages] = ACTIONS(312),
    [anon_sym_Button] = ACTIONS(312),
    [anon_sym_Select_Button] = ACTIONS(312),
    [anon_sym_Angle_Box] = ACTIONS(312),
    [anon_sym_Attributes_Box] = ACTIONS(312),
    [anon_sym_Billboard_Box] = ACTIONS(312),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(312),
    [anon_sym_Bitmap_List_Box] = ACTIONS(312),
    [anon_sym_Chainage_Box] = ACTIONS(312),
    [anon_sym_Choice_Box] = ACTIONS(312),
    [anon_sym_Colour_Box] = ACTIONS(312),
    [anon_sym_Colour_Message_Box] = ACTIONS(312),
    [anon_sym_Date_Time_Box] = ACTIONS(312),
    [anon_sym_Directory_Box] = ACTIONS(312),
    [anon_sym_Draw_Box] = ACTIONS(312),
    [anon_sym_File_Box] = ACTIONS(312),
    [anon_sym_Function_Box] = ACTIONS(312),
    [anon_sym_Graph_Box] = ACTIONS(312),
    [anon_sym_GridCtrl_Box] = ACTIONS(312),
    [anon_sym_HyperLink_Box] = ACTIONS(312),
    [anon_sym_Input_Box] = ACTIONS(312),
    [anon_sym_Integer_Box] = ACTIONS(312),
    [anon_sym_Justify_Box] = ACTIONS(312),
    [anon_sym_Linestyle_Box] = ACTIONS(312),
    [anon_sym_List_Box] = ACTIONS(312),
    [anon_sym_ListCtrl_Box] = ACTIONS(312),
    [anon_sym_Map_File_Box] = ACTIONS(312),
    [anon_sym_Message_Box] = ACTIONS(312),
    [anon_sym_Model_Box] = ACTIONS(312),
    [anon_sym_Name_Box] = ACTIONS(312),
    [anon_sym_Named_Tick_Box] = ACTIONS(312),
    [anon_sym_New_Select_Box] = ACTIONS(312),
    [anon_sym_New_XYZ_Box] = ACTIONS(312),
    [anon_sym_Plotter_Box] = ACTIONS(312),
    [anon_sym_Polygon_Box] = ACTIONS(312),
    [anon_sym_Real_Box] = ACTIONS(312),
    [anon_sym_Report_Box] = ACTIONS(312),
    [anon_sym_Select_Box] = ACTIONS(312),
    [anon_sym_Select_Boxes] = ACTIONS(312),
    [anon_sym_Sheet_Size_Box] = ACTIONS(312),
    [anon_sym_Source_Box] = ACTIONS(312),
    [anon_sym_Symbol_Box] = ACTIONS(312),
    [anon_sym_Tab_Box] = ACTIONS(312),
    [anon_sym_Target_Box] = ACTIONS(312),
    [anon_sym_Template_Box] = ACTIONS(312),
    [anon_sym_Text_Edit_Box] = ACTIONS(312),
    [anon_sym_Text_Style_Box] = ACTIONS(312),
    [anon_sym_Texture_Box] = ACTIONS(312),
    [anon_sym_Tree_Box] = ACTIONS(312),
    [anon_sym_Tree_Page] = ACTIONS(312),
    [anon_sym_Tick_Box] = ACTIONS(312),
    [anon_sym_Tin_Box] = ACTIONS(312),
    [anon_sym_View_Box] = ACTIONS(312),
    [anon_sym_XYZ_Box] = ACTIONS(312),
    [anon_sym_File] = ACTIONS(312),
    [anon_sym_Map_File] = ACTIONS(312),
    [anon_sym_Plot_Parameter_File] = ACTIONS(312),
    [anon_sym_XML_Document] = ACTIONS(312),
    [anon_sym_XML_Node] = ACTIONS(312),
    [anon_sym_Connection] = ACTIONS(312),
    [anon_sym_Select_Query] = ACTIONS(312),
    [anon_sym_Insert_Query] = ACTIONS(312),
    [anon_sym_Update_Query] = ACTIONS(312),
    [anon_sym_Delete_Query] = ACTIONS(312),
    [anon_sym_Database_Results] = ACTIONS(312),
    [anon_sym_Transactions] = ACTIONS(312),
    [anon_sym_Parameter_Collection] = ACTIONS(312),
    [anon_sym_Query_Condition] = ACTIONS(312),
    [anon_sym_Manual_Condition] = ACTIONS(312),
    [anon_sym_Dynamic_Element] = ACTIONS(312),
    [anon_sym_Dynamic_Integer] = ACTIONS(312),
    [anon_sym_Dynamic_Real] = ACTIONS(312),
    [anon_sym_Dynamic_Text] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_while] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_case] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_break] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(314),
    [anon_sym_continue] = ACTIONS(316),
    [anon_sym_goto] = ACTIONS(316),
    [anon_sym_switch] = ACTIONS(316),
    [anon_sym_if] = ACTIONS(316),
    [anon_sym_else] = ACTIONS(316),
    [anon_sym_for] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_return] = ACTIONS(316),
    [sym_identifier] = ACTIONS(316),
    [sym_number_literal] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_void] = ACTIONS(316),
    [anon_sym_Integer] = ACTIONS(316),
    [anon_sym_Real] = ACTIONS(316),
    [anon_sym_Text] = ACTIONS(316),
    [anon_sym_Vector2] = ACTIONS(316),
    [anon_sym_Vector3] = ACTIONS(316),
    [anon_sym_Vector4] = ACTIONS(316),
    [anon_sym_Matrix3] = ACTIONS(316),
    [anon_sym_Matrix4] = ACTIONS(316),
    [anon_sym_Point] = ACTIONS(316),
    [anon_sym_Line] = ACTIONS(316),
    [anon_sym_Arc] = ACTIONS(316),
    [anon_sym_Spiral] = ACTIONS(316),
    [anon_sym_Parabola] = ACTIONS(316),
    [anon_sym_Segment] = ACTIONS(316),
    [anon_sym_Element] = ACTIONS(316),
    [anon_sym_Model] = ACTIONS(316),
    [anon_sym_View] = ACTIONS(316),
    [anon_sym_Macro_Function] = ACTIONS(316),
    [anon_sym_Function] = ACTIONS(316),
    [anon_sym_Uid] = ACTIONS(316),
    [anon_sym_Guid] = ACTIONS(316),
    [anon_sym_Attributes] = ACTIONS(316),
    [anon_sym_SDR_Attribute] = ACTIONS(316),
    [anon_sym_Blob] = ACTIONS(316),
    [anon_sym_Screen_Text] = ACTIONS(316),
    [anon_sym_Textstyle_Data] = ACTIONS(316),
    [anon_sym_Equality_Label] = ACTIONS(316),
    [anon_sym_Undo] = ACTIONS(316),
    [anon_sym_Undo_List] = ACTIONS(316),
    [anon_sym_Widget] = ACTIONS(316),
    [anon_sym_Menu] = ACTIONS(316),
    [anon_sym_Panel] = ACTIONS(316),
    [anon_sym_Overlay_Widget] = ACTIONS(316),
    [anon_sym_Vertical_Group] = ACTIONS(316),
    [anon_sym_Horizontal_Group] = ACTIONS(316),
    [anon_sym_Widget_Pages] = ACTIONS(316),
    [anon_sym_Button] = ACTIONS(316),
    [anon_sym_Select_Button] = ACTIONS(316),
    [anon_sym_Angle_Box] = ACTIONS(316),
    [anon_sym_Attributes_Box] = ACTIONS(316),
    [anon_sym_Billboard_Box] = ACTIONS(316),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(316),
    [anon_sym_Bitmap_List_Box] = ACTIONS(316),
    [anon_sym_Chainage_Box] = ACTIONS(316),
    [anon_sym_Choice_Box] = ACTIONS(316),
    [anon_sym_Colour_Box] = ACTIONS(316),
    [anon_sym_Colour_Message_Box] = ACTIONS(316),
    [anon_sym_Date_Time_Box] = ACTIONS(316),
    [anon_sym_Directory_Box] = ACTIONS(316),
    [anon_sym_Draw_Box] = ACTIONS(316),
    [anon_sym_File_Box] = ACTIONS(316),
    [anon_sym_Function_Box] = ACTIONS(316),
    [anon_sym_Graph_Box] = ACTIONS(316),
    [anon_sym_GridCtrl_Box] = ACTIONS(316),
    [anon_sym_HyperLink_Box] = ACTIONS(316),
    [anon_sym_Input_Box] = ACTIONS(316),
    [anon_sym_Integer_Box] = ACTIONS(316),
    [anon_sym_Justify_Box] = ACTIONS(316),
    [anon_sym_Linestyle_Box] = ACTIONS(316),
    [anon_sym_List_Box] = ACTIONS(316),
    [anon_sym_ListCtrl_Box] = ACTIONS(316),
    [anon_sym_Map_File_Box] = ACTIONS(316),
    [anon_sym_Message_Box] = ACTIONS(316),
    [anon_sym_Model_Box] = ACTIONS(316),
    [anon_sym_Name_Box] = ACTIONS(316),
    [anon_sym_Named_Tick_Box] = ACTIONS(316),
    [anon_sym_New_Select_Box] = ACTIONS(316),
    [anon_sym_New_XYZ_Box] = ACTIONS(316),
    [anon_sym_Plotter_Box] = ACTIONS(316),
    [anon_sym_Polygon_Box] = ACTIONS(316),
    [anon_sym_Real_Box] = ACTIONS(316),
    [anon_sym_Report_Box] = ACTIONS(316),
    [anon_sym_Select_Box] = ACTIONS(316),
    [anon_sym_Select_Boxes] = ACTIONS(316),
    [anon_sym_Sheet_Size_Box] = ACTIONS(316),
    [anon_sym_Source_Box] = ACTIONS(316),
    [anon_sym_Symbol_Box] = ACTIONS(316),
    [anon_sym_Tab_Box] = ACTIONS(316),
    [anon_sym_Target_Box] = ACTIONS(316),
    [anon_sym_Template_Box] = ACTIONS(316),
    [anon_sym_Text_Edit_Box] = ACTIONS(316),
    [anon_sym_Text_Style_Box] = ACTIONS(316),
    [anon_sym_Texture_Box] = ACTIONS(316),
    [anon_sym_Tree_Box] = ACTIONS(316),
    [anon_sym_Tree_Page] = ACTIONS(316),
    [anon_sym_Tick_Box] = ACTIONS(316),
    [anon_sym_Tin_Box] = ACTIONS(316),
    [anon_sym_View_Box] = ACTIONS(316),
    [anon_sym_XYZ_Box] = ACTIONS(316),
    [anon_sym_File] = ACTIONS(316),
    [anon_sym_Map_File] = ACTIONS(316),
    [anon_sym_Plot_Parameter_File] = ACTIONS(316),
    [anon_sym_XML_Document] = ACTIONS(316),
    [anon_sym_XML_Node] = ACTIONS(316),
    [anon_sym_Connection] = ACTIONS(316),
    [anon_sym_Select_Query] = ACTIONS(316),
    [anon_sym_Insert_Query] = ACTIONS(316),
    [anon_sym_Update_Query] = ACTIONS(316),
    [anon_sym_Delete_Query] = ACTIONS(316),
    [anon_sym_Database_Results] = ACTIONS(316),
    [anon_sym_Transactions] = ACTIONS(316),
    [anon_sym_Parameter_Collection] = ACTIONS(316),
    [anon_sym_Query_Condition] = ACTIONS(316),
    [anon_sym_Manual_Condition] = ACTIONS(316),
    [anon_sym_Dynamic_Element] = ACTIONS(316),
    [anon_sym_Dynamic_Integer] = ACTIONS(316),
    [anon_sym_Dynamic_Real] = ACTIONS(316),
    [anon_sym_Dynamic_Text] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_while] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_case] = ACTIONS(320),
    [anon_sym_default] = ACTIONS(320),
    [anon_sym_break] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_continue] = ACTIONS(320),
    [anon_sym_goto] = ACTIONS(320),
    [anon_sym_switch] = ACTIONS(320),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_else] = ACTIONS(320),
    [anon_sym_for] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_return] = ACTIONS(320),
    [sym_identifier] = ACTIONS(320),
    [sym_number_literal] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [anon_sym_void] = ACTIONS(320),
    [anon_sym_Integer] = ACTIONS(320),
    [anon_sym_Real] = ACTIONS(320),
    [anon_sym_Text] = ACTIONS(320),
    [anon_sym_Vector2] = ACTIONS(320),
    [anon_sym_Vector3] = ACTIONS(320),
    [anon_sym_Vector4] = ACTIONS(320),
    [anon_sym_Matrix3] = ACTIONS(320),
    [anon_sym_Matrix4] = ACTIONS(320),
    [anon_sym_Point] = ACTIONS(320),
    [anon_sym_Line] = ACTIONS(320),
    [anon_sym_Arc] = ACTIONS(320),
    [anon_sym_Spiral] = ACTIONS(320),
    [anon_sym_Parabola] = ACTIONS(320),
    [anon_sym_Segment] = ACTIONS(320),
    [anon_sym_Element] = ACTIONS(320),
    [anon_sym_Model] = ACTIONS(320),
    [anon_sym_View] = ACTIONS(320),
    [anon_sym_Macro_Function] = ACTIONS(320),
    [anon_sym_Function] = ACTIONS(320),
    [anon_sym_Uid] = ACTIONS(320),
    [anon_sym_Guid] = ACTIONS(320),
    [anon_sym_Attributes] = ACTIONS(320),
    [anon_sym_SDR_Attribute] = ACTIONS(320),
    [anon_sym_Blob] = ACTIONS(320),
    [anon_sym_Screen_Text] = ACTIONS(320),
    [anon_sym_Textstyle_Data] = ACTIONS(320),
    [anon_sym_Equality_Label] = ACTIONS(320),
    [anon_sym_Undo] = ACTIONS(320),
    [anon_sym_Undo_List] = ACTIONS(320),
    [anon_sym_Widget] = ACTIONS(320),
    [anon_sym_Menu] = ACTIONS(320),
    [anon_sym_Panel] = ACTIONS(320),
    [anon_sym_Overlay_Widget] = ACTIONS(320),
    [anon_sym_Vertical_Group] = ACTIONS(320),
    [anon_sym_Horizontal_Group] = ACTIONS(320),
    [anon_sym_Widget_Pages] = ACTIONS(320),
    [anon_sym_Button] = ACTIONS(320),
    [anon_sym_Select_Button] = ACTIONS(320),
    [anon_sym_Angle_Box] = ACTIONS(320),
    [anon_sym_Attributes_Box] = ACTIONS(320),
    [anon_sym_Billboard_Box] = ACTIONS(320),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(320),
    [anon_sym_Bitmap_List_Box] = ACTIONS(320),
    [anon_sym_Chainage_Box] = ACTIONS(320),
    [anon_sym_Choice_Box] = ACTIONS(320),
    [anon_sym_Colour_Box] = ACTIONS(320),
    [anon_sym_Colour_Message_Box] = ACTIONS(320),
    [anon_sym_Date_Time_Box] = ACTIONS(320),
    [anon_sym_Directory_Box] = ACTIONS(320),
    [anon_sym_Draw_Box] = ACTIONS(320),
    [anon_sym_File_Box] = ACTIONS(320),
    [anon_sym_Function_Box] = ACTIONS(320),
    [anon_sym_Graph_Box] = ACTIONS(320),
    [anon_sym_GridCtrl_Box] = ACTIONS(320),
    [anon_sym_HyperLink_Box] = ACTIONS(320),
    [anon_sym_Input_Box] = ACTIONS(320),
    [anon_sym_Integer_Box] = ACTIONS(320),
    [anon_sym_Justify_Box] = ACTIONS(320),
    [anon_sym_Linestyle_Box] = ACTIONS(320),
    [anon_sym_List_Box] = ACTIONS(320),
    [anon_sym_ListCtrl_Box] = ACTIONS(320),
    [anon_sym_Map_File_Box] = ACTIONS(320),
    [anon_sym_Message_Box] = ACTIONS(320),
    [anon_sym_Model_Box] = ACTIONS(320),
    [anon_sym_Name_Box] = ACTIONS(320),
    [anon_sym_Named_Tick_Box] = ACTIONS(320),
    [anon_sym_New_Select_Box] = ACTIONS(320),
    [anon_sym_New_XYZ_Box] = ACTIONS(320),
    [anon_sym_Plotter_Box] = ACTIONS(320),
    [anon_sym_Polygon_Box] = ACTIONS(320),
    [anon_sym_Real_Box] = ACTIONS(320),
    [anon_sym_Report_Box] = ACTIONS(320),
    [anon_sym_Select_Box] = ACTIONS(320),
    [anon_sym_Select_Boxes] = ACTIONS(320),
    [anon_sym_Sheet_Size_Box] = ACTIONS(320),
    [anon_sym_Source_Box] = ACTIONS(320),
    [anon_sym_Symbol_Box] = ACTIONS(320),
    [anon_sym_Tab_Box] = ACTIONS(320),
    [anon_sym_Target_Box] = ACTIONS(320),
    [anon_sym_Template_Box] = ACTIONS(320),
    [anon_sym_Text_Edit_Box] = ACTIONS(320),
    [anon_sym_Text_Style_Box] = ACTIONS(320),
    [anon_sym_Texture_Box] = ACTIONS(320),
    [anon_sym_Tree_Box] = ACTIONS(320),
    [anon_sym_Tree_Page] = ACTIONS(320),
    [anon_sym_Tick_Box] = ACTIONS(320),
    [anon_sym_Tin_Box] = ACTIONS(320),
    [anon_sym_View_Box] = ACTIONS(320),
    [anon_sym_XYZ_Box] = ACTIONS(320),
    [anon_sym_File] = ACTIONS(320),
    [anon_sym_Map_File] = ACTIONS(320),
    [anon_sym_Plot_Parameter_File] = ACTIONS(320),
    [anon_sym_XML_Document] = ACTIONS(320),
    [anon_sym_XML_Node] = ACTIONS(320),
    [anon_sym_Connection] = ACTIONS(320),
    [anon_sym_Select_Query] = ACTIONS(320),
    [anon_sym_Insert_Query] = ACTIONS(320),
    [anon_sym_Update_Query] = ACTIONS(320),
    [anon_sym_Delete_Query] = ACTIONS(320),
    [anon_sym_Database_Results] = ACTIONS(320),
    [anon_sym_Transactions] = ACTIONS(320),
    [anon_sym_Parameter_Collection] = ACTIONS(320),
    [anon_sym_Query_Condition] = ACTIONS(320),
    [anon_sym_Manual_Condition] = ACTIONS(320),
    [anon_sym_Dynamic_Element] = ACTIONS(320),
    [anon_sym_Dynamic_Integer] = ACTIONS(320),
    [anon_sym_Dynamic_Real] = ACTIONS(320),
    [anon_sym_Dynamic_Text] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_while] = ACTIONS(316),
    [anon_sym_LPAREN] = ACTIONS(314),
    [anon_sym_case] = ACTIONS(316),
    [anon_sym_default] = ACTIONS(316),
    [anon_sym_break] = ACTIONS(316),
    [anon_sym_SEMI] = ACTIONS(314),
    [anon_sym_continue] = ACTIONS(316),
    [anon_sym_goto] = ACTIONS(316),
    [anon_sym_switch] = ACTIONS(316),
    [anon_sym_if] = ACTIONS(316),
    [anon_sym_for] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(314),
    [anon_sym_return] = ACTIONS(316),
    [sym_identifier] = ACTIONS(316),
    [sym_number_literal] = ACTIONS(314),
    [anon_sym_DQUOTE] = ACTIONS(314),
    [anon_sym_void] = ACTIONS(316),
    [anon_sym_Integer] = ACTIONS(316),
    [anon_sym_Real] = ACTIONS(316),
    [anon_sym_Text] = ACTIONS(316),
    [anon_sym_Vector2] = ACTIONS(316),
    [anon_sym_Vector3] = ACTIONS(316),
    [anon_sym_Vector4] = ACTIONS(316),
    [anon_sym_Matrix3] = ACTIONS(316),
    [anon_sym_Matrix4] = ACTIONS(316),
    [anon_sym_Point] = ACTIONS(316),
    [anon_sym_Line] = ACTIONS(316),
    [anon_sym_Arc] = ACTIONS(316),
    [anon_sym_Spiral] = ACTIONS(316),
    [anon_sym_Parabola] = ACTIONS(316),
    [anon_sym_Segment] = ACTIONS(316),
    [anon_sym_Element] = ACTIONS(316),
    [anon_sym_Model] = ACTIONS(316),
    [anon_sym_View] = ACTIONS(316),
    [anon_sym_Macro_Function] = ACTIONS(316),
    [anon_sym_Function] = ACTIONS(316),
    [anon_sym_Uid] = ACTIONS(316),
    [anon_sym_Guid] = ACTIONS(316),
    [anon_sym_Attributes] = ACTIONS(316),
    [anon_sym_SDR_Attribute] = ACTIONS(316),
    [anon_sym_Blob] = ACTIONS(316),
    [anon_sym_Screen_Text] = ACTIONS(316),
    [anon_sym_Textstyle_Data] = ACTIONS(316),
    [anon_sym_Equality_Label] = ACTIONS(316),
    [anon_sym_Undo] = ACTIONS(316),
    [anon_sym_Undo_List] = ACTIONS(316),
    [anon_sym_Widget] = ACTIONS(316),
    [anon_sym_Menu] = ACTIONS(316),
    [anon_sym_Panel] = ACTIONS(316),
    [anon_sym_Overlay_Widget] = ACTIONS(316),
    [anon_sym_Vertical_Group] = ACTIONS(316),
    [anon_sym_Horizontal_Group] = ACTIONS(316),
    [anon_sym_Widget_Pages] = ACTIONS(316),
    [anon_sym_Button] = ACTIONS(316),
    [anon_sym_Select_Button] = ACTIONS(316),
    [anon_sym_Angle_Box] = ACTIONS(316),
    [anon_sym_Attributes_Box] = ACTIONS(316),
    [anon_sym_Billboard_Box] = ACTIONS(316),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(316),
    [anon_sym_Bitmap_List_Box] = ACTIONS(316),
    [anon_sym_Chainage_Box] = ACTIONS(316),
    [anon_sym_Choice_Box] = ACTIONS(316),
    [anon_sym_Colour_Box] = ACTIONS(316),
    [anon_sym_Colour_Message_Box] = ACTIONS(316),
    [anon_sym_Date_Time_Box] = ACTIONS(316),
    [anon_sym_Directory_Box] = ACTIONS(316),
    [anon_sym_Draw_Box] = ACTIONS(316),
    [anon_sym_File_Box] = ACTIONS(316),
    [anon_sym_Function_Box] = ACTIONS(316),
    [anon_sym_Graph_Box] = ACTIONS(316),
    [anon_sym_GridCtrl_Box] = ACTIONS(316),
    [anon_sym_HyperLink_Box] = ACTIONS(316),
    [anon_sym_Input_Box] = ACTIONS(316),
    [anon_sym_Integer_Box] = ACTIONS(316),
    [anon_sym_Justify_Box] = ACTIONS(316),
    [anon_sym_Linestyle_Box] = ACTIONS(316),
    [anon_sym_List_Box] = ACTIONS(316),
    [anon_sym_ListCtrl_Box] = ACTIONS(316),
    [anon_sym_Map_File_Box] = ACTIONS(316),
    [anon_sym_Message_Box] = ACTIONS(316),
    [anon_sym_Model_Box] = ACTIONS(316),
    [anon_sym_Name_Box] = ACTIONS(316),
    [anon_sym_Named_Tick_Box] = ACTIONS(316),
    [anon_sym_New_Select_Box] = ACTIONS(316),
    [anon_sym_New_XYZ_Box] = ACTIONS(316),
    [anon_sym_Plotter_Box] = ACTIONS(316),
    [anon_sym_Polygon_Box] = ACTIONS(316),
    [anon_sym_Real_Box] = ACTIONS(316),
    [anon_sym_Report_Box] = ACTIONS(316),
    [anon_sym_Select_Box] = ACTIONS(316),
    [anon_sym_Select_Boxes] = ACTIONS(316),
    [anon_sym_Sheet_Size_Box] = ACTIONS(316),
    [anon_sym_Source_Box] = ACTIONS(316),
    [anon_sym_Symbol_Box] = ACTIONS(316),
    [anon_sym_Tab_Box] = ACTIONS(316),
    [anon_sym_Target_Box] = ACTIONS(316),
    [anon_sym_Template_Box] = ACTIONS(316),
    [anon_sym_Text_Edit_Box] = ACTIONS(316),
    [anon_sym_Text_Style_Box] = ACTIONS(316),
    [anon_sym_Texture_Box] = ACTIONS(316),
    [anon_sym_Tree_Box] = ACTIONS(316),
    [anon_sym_Tree_Page] = ACTIONS(316),
    [anon_sym_Tick_Box] = ACTIONS(316),
    [anon_sym_Tin_Box] = ACTIONS(316),
    [anon_sym_View_Box] = ACTIONS(316),
    [anon_sym_XYZ_Box] = ACTIONS(316),
    [anon_sym_File] = ACTIONS(316),
    [anon_sym_Map_File] = ACTIONS(316),
    [anon_sym_Plot_Parameter_File] = ACTIONS(316),
    [anon_sym_XML_Document] = ACTIONS(316),
    [anon_sym_XML_Node] = ACTIONS(316),
    [anon_sym_Connection] = ACTIONS(316),
    [anon_sym_Select_Query] = ACTIONS(316),
    [anon_sym_Insert_Query] = ACTIONS(316),
    [anon_sym_Update_Query] = ACTIONS(316),
    [anon_sym_Delete_Query] = ACTIONS(316),
    [anon_sym_Database_Results] = ACTIONS(316),
    [anon_sym_Transactions] = ACTIONS(316),
    [anon_sym_Parameter_Collection] = ACTIONS(316),
    [anon_sym_Query_Condition] = ACTIONS(316),
    [anon_sym_Manual_Condition] = ACTIONS(316),
    [anon_sym_Dynamic_Element] = ACTIONS(316),
    [anon_sym_Dynamic_Integer] = ACTIONS(316),
    [anon_sym_Dynamic_Real] = ACTIONS(316),
    [anon_sym_Dynamic_Text] = ACTIONS(316),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym_while] = ACTIONS(300),
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_case] = ACTIONS(300),
    [anon_sym_default] = ACTIONS(300),
    [anon_sym_break] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_continue] = ACTIONS(300),
    [anon_sym_goto] = ACTIONS(300),
    [anon_sym_switch] = ACTIONS(300),
    [anon_sym_if] = ACTIONS(300),
    [anon_sym_for] = ACTIONS(300),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_return] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_number_literal] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [anon_sym_void] = ACTIONS(300),
    [anon_sym_Integer] = ACTIONS(300),
    [anon_sym_Real] = ACTIONS(300),
    [anon_sym_Text] = ACTIONS(300),
    [anon_sym_Vector2] = ACTIONS(300),
    [anon_sym_Vector3] = ACTIONS(300),
    [anon_sym_Vector4] = ACTIONS(300),
    [anon_sym_Matrix3] = ACTIONS(300),
    [anon_sym_Matrix4] = ACTIONS(300),
    [anon_sym_Point] = ACTIONS(300),
    [anon_sym_Line] = ACTIONS(300),
    [anon_sym_Arc] = ACTIONS(300),
    [anon_sym_Spiral] = ACTIONS(300),
    [anon_sym_Parabola] = ACTIONS(300),
    [anon_sym_Segment] = ACTIONS(300),
    [anon_sym_Element] = ACTIONS(300),
    [anon_sym_Model] = ACTIONS(300),
    [anon_sym_View] = ACTIONS(300),
    [anon_sym_Macro_Function] = ACTIONS(300),
    [anon_sym_Function] = ACTIONS(300),
    [anon_sym_Uid] = ACTIONS(300),
    [anon_sym_Guid] = ACTIONS(300),
    [anon_sym_Attributes] = ACTIONS(300),
    [anon_sym_SDR_Attribute] = ACTIONS(300),
    [anon_sym_Blob] = ACTIONS(300),
    [anon_sym_Screen_Text] = ACTIONS(300),
    [anon_sym_Textstyle_Data] = ACTIONS(300),
    [anon_sym_Equality_Label] = ACTIONS(300),
    [anon_sym_Undo] = ACTIONS(300),
    [anon_sym_Undo_List] = ACTIONS(300),
    [anon_sym_Widget] = ACTIONS(300),
    [anon_sym_Menu] = ACTIONS(300),
    [anon_sym_Panel] = ACTIONS(300),
    [anon_sym_Overlay_Widget] = ACTIONS(300),
    [anon_sym_Vertical_Group] = ACTIONS(300),
    [anon_sym_Horizontal_Group] = ACTIONS(300),
    [anon_sym_Widget_Pages] = ACTIONS(300),
    [anon_sym_Button] = ACTIONS(300),
    [anon_sym_Select_Button] = ACTIONS(300),
    [anon_sym_Angle_Box] = ACTIONS(300),
    [anon_sym_Attributes_Box] = ACTIONS(300),
    [anon_sym_Billboard_Box] = ACTIONS(300),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(300),
    [anon_sym_Bitmap_List_Box] = ACTIONS(300),
    [anon_sym_Chainage_Box] = ACTIONS(300),
    [anon_sym_Choice_Box] = ACTIONS(300),
    [anon_sym_Colour_Box] = ACTIONS(300),
    [anon_sym_Colour_Message_Box] = ACTIONS(300),
    [anon_sym_Date_Time_Box] = ACTIONS(300),
    [anon_sym_Directory_Box] = ACTIONS(300),
    [anon_sym_Draw_Box] = ACTIONS(300),
    [anon_sym_File_Box] = ACTIONS(300),
    [anon_sym_Function_Box] = ACTIONS(300),
    [anon_sym_Graph_Box] = ACTIONS(300),
    [anon_sym_GridCtrl_Box] = ACTIONS(300),
    [anon_sym_HyperLink_Box] = ACTIONS(300),
    [anon_sym_Input_Box] = ACTIONS(300),
    [anon_sym_Integer_Box] = ACTIONS(300),
    [anon_sym_Justify_Box] = ACTIONS(300),
    [anon_sym_Linestyle_Box] = ACTIONS(300),
    [anon_sym_List_Box] = ACTIONS(300),
    [anon_sym_ListCtrl_Box] = ACTIONS(300),
    [anon_sym_Map_File_Box] = ACTIONS(300),
    [anon_sym_Message_Box] = ACTIONS(300),
    [anon_sym_Model_Box] = ACTIONS(300),
    [anon_sym_Name_Box] = ACTIONS(300),
    [anon_sym_Named_Tick_Box] = ACTIONS(300),
    [anon_sym_New_Select_Box] = ACTIONS(300),
    [anon_sym_New_XYZ_Box] = ACTIONS(300),
    [anon_sym_Plotter_Box] = ACTIONS(300),
    [anon_sym_Polygon_Box] = ACTIONS(300),
    [anon_sym_Real_Box] = ACTIONS(300),
    [anon_sym_Report_Box] = ACTIONS(300),
    [anon_sym_Select_Box] = ACTIONS(300),
    [anon_sym_Select_Boxes] = ACTIONS(300),
    [anon_sym_Sheet_Size_Box] = ACTIONS(300),
    [anon_sym_Source_Box] = ACTIONS(300),
    [anon_sym_Symbol_Box] = ACTIONS(300),
    [anon_sym_Tab_Box] = ACTIONS(300),
    [anon_sym_Target_Box] = ACTIONS(300),
    [anon_sym_Template_Box] = ACTIONS(300),
    [anon_sym_Text_Edit_Box] = ACTIONS(300),
    [anon_sym_Text_Style_Box] = ACTIONS(300),
    [anon_sym_Texture_Box] = ACTIONS(300),
    [anon_sym_Tree_Box] = ACTIONS(300),
    [anon_sym_Tree_Page] = ACTIONS(300),
    [anon_sym_Tick_Box] = ACTIONS(300),
    [anon_sym_Tin_Box] = ACTIONS(300),
    [anon_sym_View_Box] = ACTIONS(300),
    [anon_sym_XYZ_Box] = ACTIONS(300),
    [anon_sym_File] = ACTIONS(300),
    [anon_sym_Map_File] = ACTIONS(300),
    [anon_sym_Plot_Parameter_File] = ACTIONS(300),
    [anon_sym_XML_Document] = ACTIONS(300),
    [anon_sym_XML_Node] = ACTIONS(300),
    [anon_sym_Connection] = ACTIONS(300),
    [anon_sym_Select_Query] = ACTIONS(300),
    [anon_sym_Insert_Query] = ACTIONS(300),
    [anon_sym_Update_Query] = ACTIONS(300),
    [anon_sym_Delete_Query] = ACTIONS(300),
    [anon_sym_Database_Results] = ACTIONS(300),
    [anon_sym_Transactions] = ACTIONS(300),
    [anon_sym_Parameter_Collection] = ACTIONS(300),
    [anon_sym_Query_Condition] = ACTIONS(300),
    [anon_sym_Manual_Condition] = ACTIONS(300),
    [anon_sym_Dynamic_Element] = ACTIONS(300),
    [anon_sym_Dynamic_Integer] = ACTIONS(300),
    [anon_sym_Dynamic_Real] = ACTIONS(300),
    [anon_sym_Dynamic_Text] = ACTIONS(300),
    [sym_comment] = ACTIONS(3),
  },
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_while] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
    [anon_sym_break] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_continue] = ACTIONS(260),
    [anon_sym_goto] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [anon_sym_for] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_return] = ACTIONS(260),
    [sym_identifier] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_void] = ACTIONS(260),
    [anon_sym_Integer] = ACTIONS(260),
    [anon_sym_Real] = ACTIONS(260),
    [anon_sym_Text] = ACTIONS(260),
    [anon_sym_Vector2] = ACTIONS(260),
    [anon_sym_Vector3] = ACTIONS(260),
    [anon_sym_Vector4] = ACTIONS(260),
    [anon_sym_Matrix3] = ACTIONS(260),
    [anon_sym_Matrix4] = ACTIONS(260),
    [anon_sym_Point] = ACTIONS(260),
    [anon_sym_Line] = ACTIONS(260),
    [anon_sym_Arc] = ACTIONS(260),
    [anon_sym_Spiral] = ACTIONS(260),
    [anon_sym_Parabola] = ACTIONS(260),
    [anon_sym_Segment] = ACTIONS(260),
    [anon_sym_Element] = ACTIONS(260),
    [anon_sym_Model] = ACTIONS(260),
    [anon_sym_View] = ACTIONS(260),
    [anon_sym_Macro_Function] = ACTIONS(260),
    [anon_sym_Function] = ACTIONS(260),
    [anon_sym_Uid] = ACTIONS(260),
    [anon_sym_Guid] = ACTIONS(260),
    [anon_sym_Attributes] = ACTIONS(260),
    [anon_sym_SDR_Attribute] = ACTIONS(260),
    [anon_sym_Blob] = ACTIONS(260),
    [anon_sym_Screen_Text] = ACTIONS(260),
    [anon_sym_Textstyle_Data] = ACTIONS(260),
    [anon_sym_Equality_Label] = ACTIONS(260),
    [anon_sym_Undo] = ACTIONS(260),
    [anon_sym_Undo_List] = ACTIONS(260),
    [anon_sym_Widget] = ACTIONS(260),
    [anon_sym_Menu] = ACTIONS(260),
    [anon_sym_Panel] = ACTIONS(260),
    [anon_sym_Overlay_Widget] = ACTIONS(260),
    [anon_sym_Vertical_Group] = ACTIONS(260),
    [anon_sym_Horizontal_Group] = ACTIONS(260),
    [anon_sym_Widget_Pages] = ACTIONS(260),
    [anon_sym_Button] = ACTIONS(260),
    [anon_sym_Select_Button] = ACTIONS(260),
    [anon_sym_Angle_Box] = ACTIONS(260),
    [anon_sym_Attributes_Box] = ACTIONS(260),
    [anon_sym_Billboard_Box] = ACTIONS(260),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(260),
    [anon_sym_Bitmap_List_Box] = ACTIONS(260),
    [anon_sym_Chainage_Box] = ACTIONS(260),
    [anon_sym_Choice_Box] = ACTIONS(260),
    [anon_sym_Colour_Box] = ACTIONS(260),
    [anon_sym_Colour_Message_Box] = ACTIONS(260),
    [anon_sym_Date_Time_Box] = ACTIONS(260),
    [anon_sym_Directory_Box] = ACTIONS(260),
    [anon_sym_Draw_Box] = ACTIONS(260),
    [anon_sym_File_Box] = ACTIONS(260),
    [anon_sym_Function_Box] = ACTIONS(260),
    [anon_sym_Graph_Box] = ACTIONS(260),
    [anon_sym_GridCtrl_Box] = ACTIONS(260),
    [anon_sym_HyperLink_Box] = ACTIONS(260),
    [anon_sym_Input_Box] = ACTIONS(260),
    [anon_sym_Integer_Box] = ACTIONS(260),
    [anon_sym_Justify_Box] = ACTIONS(260),
    [anon_sym_Linestyle_Box] = ACTIONS(260),
    [anon_sym_List_Box] = ACTIONS(260),
    [anon_sym_ListCtrl_Box] = ACTIONS(260),
    [anon_sym_Map_File_Box] = ACTIONS(260),
    [anon_sym_Message_Box] = ACTIONS(260),
    [anon_sym_Model_Box] = ACTIONS(260),
    [anon_sym_Name_Box] = ACTIONS(260),
    [anon_sym_Named_Tick_Box] = ACTIONS(260),
    [anon_sym_New_Select_Box] = ACTIONS(260),
    [anon_sym_New_XYZ_Box] = ACTIONS(260),
    [anon_sym_Plotter_Box] = ACTIONS(260),
    [anon_sym_Polygon_Box] = ACTIONS(260),
    [anon_sym_Real_Box] = ACTIONS(260),
    [anon_sym_Report_Box] = ACTIONS(260),
    [anon_sym_Select_Box] = ACTIONS(260),
    [anon_sym_Select_Boxes] = ACTIONS(260),
    [anon_sym_Sheet_Size_Box] = ACTIONS(260),
    [anon_sym_Source_Box] = ACTIONS(260),
    [anon_sym_Symbol_Box] = ACTIONS(260),
    [anon_sym_Tab_Box] = ACTIONS(260),
    [anon_sym_Target_Box] = ACTIONS(260),
    [anon_sym_Template_Box] = ACTIONS(260),
    [anon_sym_Text_Edit_Box] = ACTIONS(260),
    [anon_sym_Text_Style_Box] = ACTIONS(260),
    [anon_sym_Texture_Box] = ACTIONS(260),
    [anon_sym_Tree_Box] = ACTIONS(260),
    [anon_sym_Tree_Page] = ACTIONS(260),
    [anon_sym_Tick_Box] = ACTIONS(260),
    [anon_sym_Tin_Box] = ACTIONS(260),
    [anon_sym_View_Box] = ACTIONS(260),
    [anon_sym_XYZ_Box] = ACTIONS(260),
    [anon_sym_File] = ACTIONS(260),
    [anon_sym_Map_File] = ACTIONS(260),
    [anon_sym_Plot_Parameter_File] = ACTIONS(260),
    [anon_sym_XML_Document] = ACTIONS(260),
    [anon_sym_XML_Node] = ACTIONS(260),
    [anon_sym_Connection] = ACTIONS(260),
    [anon_sym_Select_Query] = ACTIONS(260),
    [anon_sym_Insert_Query] = ACTIONS(260),
    [anon_sym_Update_Query] = ACTIONS(260),
    [anon_sym_Delete_Query] = ACTIONS(260),
    [anon_sym_Database_Results] = ACTIONS(260),
    [anon_sym_Transactions] = ACTIONS(260),
    [anon_sym_Parameter_Collection] = ACTIONS(260),
    [anon_sym_Query_Condition] = ACTIONS(260),
    [anon_sym_Manual_Condition] = ACTIONS(260),
    [anon_sym_Dynamic_Element] = ACTIONS(260),
    [anon_sym_Dynamic_Integer] = ACTIONS(260),
    [anon_sym_Dynamic_Real] = ACTIONS(260),
    [anon_sym_Dynamic_Text] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_RBRACE] = ACTIONS(262),
    [anon_sym_while] = ACTIONS(264),
    [anon_sym_LPAREN] = ACTIONS(262),
    [anon_sym_case] = ACTIONS(264),
    [anon_sym_default] = ACTIONS(264),
    [anon_sym_break] = ACTIONS(264),
    [anon_sym_SEMI] = ACTIONS(262),
    [anon_sym_continue] = ACTIONS(264),
    [anon_sym_goto] = ACTIONS(264),
    [anon_sym_switch] = ACTIONS(264),
    [anon_sym_if] = ACTIONS(264),
    [anon_sym_for] = ACTIONS(264),
    [anon_sym_BANG] = ACTIONS(262),
    [anon_sym_DASH] = ACTIONS(262),
    [anon_sym_PLUS] = ACTIONS(262),
    [anon_sym_return] = ACTIONS(264),
    [sym_identifier] = ACTIONS(264),
    [sym_number_literal] = ACTIONS(262),
    [anon_sym_DQUOTE] = ACTIONS(262),
    [anon_sym_void] = ACTIONS(264),
    [anon_sym_Integer] = ACTIONS(264),
    [anon_sym_Real] = ACTIONS(264),
    [anon_sym_Text] = ACTIONS(264),
    [anon_sym_Vector2] = ACTIONS(264),
    [anon_sym_Vector3] = ACTIONS(264),
    [anon_sym_Vector4] = ACTIONS(264),
    [anon_sym_Matrix3] = ACTIONS(264),
    [anon_sym_Matrix4] = ACTIONS(264),
    [anon_sym_Point] = ACTIONS(264),
    [anon_sym_Line] = ACTIONS(264),
    [anon_sym_Arc] = ACTIONS(264),
    [anon_sym_Spiral] = ACTIONS(264),
    [anon_sym_Parabola] = ACTIONS(264),
    [anon_sym_Segment] = ACTIONS(264),
    [anon_sym_Element] = ACTIONS(264),
    [anon_sym_Model] = ACTIONS(264),
    [anon_sym_View] = ACTIONS(264),
    [anon_sym_Macro_Function] = ACTIONS(264),
    [anon_sym_Function] = ACTIONS(264),
    [anon_sym_Uid] = ACTIONS(264),
    [anon_sym_Guid] = ACTIONS(264),
    [anon_sym_Attributes] = ACTIONS(264),
    [anon_sym_SDR_Attribute] = ACTIONS(264),
    [anon_sym_Blob] = ACTIONS(264),
    [anon_sym_Screen_Text] = ACTIONS(264),
    [anon_sym_Textstyle_Data] = ACTIONS(264),
    [anon_sym_Equality_Label] = ACTIONS(264),
    [anon_sym_Undo] = ACTIONS(264),
    [anon_sym_Undo_List] = ACTIONS(264),
    [anon_sym_Widget] = ACTIONS(264),
    [anon_sym_Menu] = ACTIONS(264),
    [anon_sym_Panel] = ACTIONS(264),
    [anon_sym_Overlay_Widget] = ACTIONS(264),
    [anon_sym_Vertical_Group] = ACTIONS(264),
    [anon_sym_Horizontal_Group] = ACTIONS(264),
    [anon_sym_Widget_Pages] = ACTIONS(264),
    [anon_sym_Button] = ACTIONS(264),
    [anon_sym_Select_Button] = ACTIONS(264),
    [anon_sym_Angle_Box] = ACTIONS(264),
    [anon_sym_Attributes_Box] = ACTIONS(264),
    [anon_sym_Billboard_Box] = ACTIONS(264),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(264),
    [anon_sym_Bitmap_List_Box] = ACTIONS(264),
    [anon_sym_Chainage_Box] = ACTIONS(264),
    [anon_sym_Choice_Box] = ACTIONS(264),
    [anon_sym_Colour_Box] = ACTIONS(264),
    [anon_sym_Colour_Message_Box] = ACTIONS(264),
    [anon_sym_Date_Time_Box] = ACTIONS(264),
    [anon_sym_Directory_Box] = ACTIONS(264),
    [anon_sym_Draw_Box] = ACTIONS(264),
    [anon_sym_File_Box] = ACTIONS(264),
    [anon_sym_Function_Box] = ACTIONS(264),
    [anon_sym_Graph_Box] = ACTIONS(264),
    [anon_sym_GridCtrl_Box] = ACTIONS(264),
    [anon_sym_HyperLink_Box] = ACTIONS(264),
    [anon_sym_Input_Box] = ACTIONS(264),
    [anon_sym_Integer_Box] = ACTIONS(264),
    [anon_sym_Justify_Box] = ACTIONS(264),
    [anon_sym_Linestyle_Box] = ACTIONS(264),
    [anon_sym_List_Box] = ACTIONS(264),
    [anon_sym_ListCtrl_Box] = ACTIONS(264),
    [anon_sym_Map_File_Box] = ACTIONS(264),
    [anon_sym_Message_Box] = ACTIONS(264),
    [anon_sym_Model_Box] = ACTIONS(264),
    [anon_sym_Name_Box] = ACTIONS(264),
    [anon_sym_Named_Tick_Box] = ACTIONS(264),
    [anon_sym_New_Select_Box] = ACTIONS(264),
    [anon_sym_New_XYZ_Box] = ACTIONS(264),
    [anon_sym_Plotter_Box] = ACTIONS(264),
    [anon_sym_Polygon_Box] = ACTIONS(264),
    [anon_sym_Real_Box] = ACTIONS(264),
    [anon_sym_Report_Box] = ACTIONS(264),
    [anon_sym_Select_Box] = ACTIONS(264),
    [anon_sym_Select_Boxes] = ACTIONS(264),
    [anon_sym_Sheet_Size_Box] = ACTIONS(264),
    [anon_sym_Source_Box] = ACTIONS(264),
    [anon_sym_Symbol_Box] = ACTIONS(264),
    [anon_sym_Tab_Box] = ACTIONS(264),
    [anon_sym_Target_Box] = ACTIONS(264),
    [anon_sym_Template_Box] = ACTIONS(264),
    [anon_sym_Text_Edit_Box] = ACTIONS(264),
    [anon_sym_Text_Style_Box] = ACTIONS(264),
    [anon_sym_Texture_Box] = ACTIONS(264),
    [anon_sym_Tree_Box] = ACTIONS(264),
    [anon_sym_Tree_Page] = ACTIONS(264),
    [anon_sym_Tick_Box] = ACTIONS(264),
    [anon_sym_Tin_Box] = ACTIONS(264),
    [anon_sym_View_Box] = ACTIONS(264),
    [anon_sym_XYZ_Box] = ACTIONS(264),
    [anon_sym_File] = ACTIONS(264),
    [anon_sym_Map_File] = ACTIONS(264),
    [anon_sym_Plot_Parameter_File] = ACTIONS(264),
    [anon_sym_XML_Document] = ACTIONS(264),
    [anon_sym_XML_Node] = ACTIONS(264),
    [anon_sym_Connection] = ACTIONS(264),
    [anon_sym_Select_Query] = ACTIONS(264),
    [anon_sym_Insert_Query] = ACTIONS(264),
    [anon_sym_Update_Query] = ACTIONS(264),
    [anon_sym_Delete_Query] = ACTIONS(264),
    [anon_sym_Database_Results] = ACTIONS(264),
    [anon_sym_Transactions] = ACTIONS(264),
    [anon_sym_Parameter_Collection] = ACTIONS(264),
    [anon_sym_Query_Condition] = ACTIONS(264),
    [anon_sym_Manual_Condition] = ACTIONS(264),
    [anon_sym_Dynamic_Element] = ACTIONS(264),
    [anon_sym_Dynamic_Integer] = ACTIONS(264),
    [anon_sym_Dynamic_Real] = ACTIONS(264),
    [anon_sym_Dynamic_Text] = ACTIONS(264),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(284),
    [anon_sym_while] = ACTIONS(286),
    [anon_sym_LPAREN] = ACTIONS(284),
    [anon_sym_case] = ACTIONS(286),
    [anon_sym_default] = ACTIONS(286),
    [anon_sym_break] = ACTIONS(286),
    [anon_sym_SEMI] = ACTIONS(284),
    [anon_sym_continue] = ACTIONS(286),
    [anon_sym_goto] = ACTIONS(286),
    [anon_sym_switch] = ACTIONS(286),
    [anon_sym_if] = ACTIONS(286),
    [anon_sym_for] = ACTIONS(286),
    [anon_sym_BANG] = ACTIONS(284),
    [anon_sym_DASH] = ACTIONS(284),
    [anon_sym_PLUS] = ACTIONS(284),
    [anon_sym_return] = ACTIONS(286),
    [sym_identifier] = ACTIONS(286),
    [sym_number_literal] = ACTIONS(284),
    [anon_sym_DQUOTE] = ACTIONS(284),
    [anon_sym_void] = ACTIONS(286),
    [anon_sym_Integer] = ACTIONS(286),
    [anon_sym_Real] = ACTIONS(286),
    [anon_sym_Text] = ACTIONS(286),
    [anon_sym_Vector2] = ACTIONS(286),
    [anon_sym_Vector3] = ACTIONS(286),
    [anon_sym_Vector4] = ACTIONS(286),
    [anon_sym_Matrix3] = ACTIONS(286),
    [anon_sym_Matrix4] = ACTIONS(286),
    [anon_sym_Point] = ACTIONS(286),
    [anon_sym_Line] = ACTIONS(286),
    [anon_sym_Arc] = ACTIONS(286),
    [anon_sym_Spiral] = ACTIONS(286),
    [anon_sym_Parabola] = ACTIONS(286),
    [anon_sym_Segment] = ACTIONS(286),
    [anon_sym_Element] = ACTIONS(286),
    [anon_sym_Model] = ACTIONS(286),
    [anon_sym_View] = ACTIONS(286),
    [anon_sym_Macro_Function] = ACTIONS(286),
    [anon_sym_Function] = ACTIONS(286),
    [anon_sym_Uid] = ACTIONS(286),
    [anon_sym_Guid] = ACTIONS(286),
    [anon_sym_Attributes] = ACTIONS(286),
    [anon_sym_SDR_Attribute] = ACTIONS(286),
    [anon_sym_Blob] = ACTIONS(286),
    [anon_sym_Screen_Text] = ACTIONS(286),
    [anon_sym_Textstyle_Data] = ACTIONS(286),
    [anon_sym_Equality_Label] = ACTIONS(286),
    [anon_sym_Undo] = ACTIONS(286),
    [anon_sym_Undo_List] = ACTIONS(286),
    [anon_sym_Widget] = ACTIONS(286),
    [anon_sym_Menu] = ACTIONS(286),
    [anon_sym_Panel] = ACTIONS(286),
    [anon_sym_Overlay_Widget] = ACTIONS(286),
    [anon_sym_Vertical_Group] = ACTIONS(286),
    [anon_sym_Horizontal_Group] = ACTIONS(286),
    [anon_sym_Widget_Pages] = ACTIONS(286),
    [anon_sym_Button] = ACTIONS(286),
    [anon_sym_Select_Button] = ACTIONS(286),
    [anon_sym_Angle_Box] = ACTIONS(286),
    [anon_sym_Attributes_Box] = ACTIONS(286),
    [anon_sym_Billboard_Box] = ACTIONS(286),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(286),
    [anon_sym_Bitmap_List_Box] = ACTIONS(286),
    [anon_sym_Chainage_Box] = ACTIONS(286),
    [anon_sym_Choice_Box] = ACTIONS(286),
    [anon_sym_Colour_Box] = ACTIONS(286),
    [anon_sym_Colour_Message_Box] = ACTIONS(286),
    [anon_sym_Date_Time_Box] = ACTIONS(286),
    [anon_sym_Directory_Box] = ACTIONS(286),
    [anon_sym_Draw_Box] = ACTIONS(286),
    [anon_sym_File_Box] = ACTIONS(286),
    [anon_sym_Function_Box] = ACTIONS(286),
    [anon_sym_Graph_Box] = ACTIONS(286),
    [anon_sym_GridCtrl_Box] = ACTIONS(286),
    [anon_sym_HyperLink_Box] = ACTIONS(286),
    [anon_sym_Input_Box] = ACTIONS(286),
    [anon_sym_Integer_Box] = ACTIONS(286),
    [anon_sym_Justify_Box] = ACTIONS(286),
    [anon_sym_Linestyle_Box] = ACTIONS(286),
    [anon_sym_List_Box] = ACTIONS(286),
    [anon_sym_ListCtrl_Box] = ACTIONS(286),
    [anon_sym_Map_File_Box] = ACTIONS(286),
    [anon_sym_Message_Box] = ACTIONS(286),
    [anon_sym_Model_Box] = ACTIONS(286),
    [anon_sym_Name_Box] = ACTIONS(286),
    [anon_sym_Named_Tick_Box] = ACTIONS(286),
    [anon_sym_New_Select_Box] = ACTIONS(286),
    [anon_sym_New_XYZ_Box] = ACTIONS(286),
    [anon_sym_Plotter_Box] = ACTIONS(286),
    [anon_sym_Polygon_Box] = ACTIONS(286),
    [anon_sym_Real_Box] = ACTIONS(286),
    [anon_sym_Report_Box] = ACTIONS(286),
    [anon_sym_Select_Box] = ACTIONS(286),
    [anon_sym_Select_Boxes] = ACTIONS(286),
    [anon_sym_Sheet_Size_Box] = ACTIONS(286),
    [anon_sym_Source_Box] = ACTIONS(286),
    [anon_sym_Symbol_Box] = ACTIONS(286),
    [anon_sym_Tab_Box] = ACTIONS(286),
    [anon_sym_Target_Box] = ACTIONS(286),
    [anon_sym_Template_Box] = ACTIONS(286),
    [anon_sym_Text_Edit_Box] = ACTIONS(286),
    [anon_sym_Text_Style_Box] = ACTIONS(286),
    [anon_sym_Texture_Box] = ACTIONS(286),
    [anon_sym_Tree_Box] = ACTIONS(286),
    [anon_sym_Tree_Page] = ACTIONS(286),
    [anon_sym_Tick_Box] = ACTIONS(286),
    [anon_sym_Tin_Box] = ACTIONS(286),
    [anon_sym_View_Box] = ACTIONS(286),
    [anon_sym_XYZ_Box] = ACTIONS(286),
    [anon_sym_File] = ACTIONS(286),
    [anon_sym_Map_File] = ACTIONS(286),
    [anon_sym_Plot_Parameter_File] = ACTIONS(286),
    [anon_sym_XML_Document] = ACTIONS(286),
    [anon_sym_XML_Node] = ACTIONS(286),
    [anon_sym_Connection] = ACTIONS(286),
    [anon_sym_Select_Query] = ACTIONS(286),
    [anon_sym_Insert_Query] = ACTIONS(286),
    [anon_sym_Update_Query] = ACTIONS(286),
    [anon_sym_Delete_Query] = ACTIONS(286),
    [anon_sym_Database_Results] = ACTIONS(286),
    [anon_sym_Transactions] = ACTIONS(286),
    [anon_sym_Parameter_Collection] = ACTIONS(286),
    [anon_sym_Query_Condition] = ACTIONS(286),
    [anon_sym_Manual_Condition] = ACTIONS(286),
    [anon_sym_Dynamic_Element] = ACTIONS(286),
    [anon_sym_Dynamic_Integer] = ACTIONS(286),
    [anon_sym_Dynamic_Real] = ACTIONS(286),
    [anon_sym_Dynamic_Text] = ACTIONS(286),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_while] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_break] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_continue] = ACTIONS(274),
    [anon_sym_goto] = ACTIONS(274),
    [anon_sym_switch] = ACTIONS(274),
    [anon_sym_if] = ACTIONS(274),
    [anon_sym_for] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(272),
    [anon_sym_DASH] = ACTIONS(272),
    [anon_sym_PLUS] = ACTIONS(272),
    [anon_sym_return] = ACTIONS(274),
    [sym_identifier] = ACTIONS(274),
    [sym_number_literal] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [anon_sym_void] = ACTIONS(274),
    [anon_sym_Integer] = ACTIONS(274),
    [anon_sym_Real] = ACTIONS(274),
    [anon_sym_Text] = ACTIONS(274),
    [anon_sym_Vector2] = ACTIONS(274),
    [anon_sym_Vector3] = ACTIONS(274),
    [anon_sym_Vector4] = ACTIONS(274),
    [anon_sym_Matrix3] = ACTIONS(274),
    [anon_sym_Matrix4] = ACTIONS(274),
    [anon_sym_Point] = ACTIONS(274),
    [anon_sym_Line] = ACTIONS(274),
    [anon_sym_Arc] = ACTIONS(274),
    [anon_sym_Spiral] = ACTIONS(274),
    [anon_sym_Parabola] = ACTIONS(274),
    [anon_sym_Segment] = ACTIONS(274),
    [anon_sym_Element] = ACTIONS(274),
    [anon_sym_Model] = ACTIONS(274),
    [anon_sym_View] = ACTIONS(274),
    [anon_sym_Macro_Function] = ACTIONS(274),
    [anon_sym_Function] = ACTIONS(274),
    [anon_sym_Uid] = ACTIONS(274),
    [anon_sym_Guid] = ACTIONS(274),
    [anon_sym_Attributes] = ACTIONS(274),
    [anon_sym_SDR_Attribute] = ACTIONS(274),
    [anon_sym_Blob] = ACTIONS(274),
    [anon_sym_Screen_Text] = ACTIONS(274),
    [anon_sym_Textstyle_Data] = ACTIONS(274),
    [anon_sym_Equality_Label] = ACTIONS(274),
    [anon_sym_Undo] = ACTIONS(274),
    [anon_sym_Undo_List] = ACTIONS(274),
    [anon_sym_Widget] = ACTIONS(274),
    [anon_sym_Menu] = ACTIONS(274),
    [anon_sym_Panel] = ACTIONS(274),
    [anon_sym_Overlay_Widget] = ACTIONS(274),
    [anon_sym_Vertical_Group] = ACTIONS(274),
    [anon_sym_Horizontal_Group] = ACTIONS(274),
    [anon_sym_Widget_Pages] = ACTIONS(274),
    [anon_sym_Button] = ACTIONS(274),
    [anon_sym_Select_Button] = ACTIONS(274),
    [anon_sym_Angle_Box] = ACTIONS(274),
    [anon_sym_Attributes_Box] = ACTIONS(274),
    [anon_sym_Billboard_Box] = ACTIONS(274),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(274),
    [anon_sym_Bitmap_List_Box] = ACTIONS(274),
    [anon_sym_Chainage_Box] = ACTIONS(274),
    [anon_sym_Choice_Box] = ACTIONS(274),
    [anon_sym_Colour_Box] = ACTIONS(274),
    [anon_sym_Colour_Message_Box] = ACTIONS(274),
    [anon_sym_Date_Time_Box] = ACTIONS(274),
    [anon_sym_Directory_Box] = ACTIONS(274),
    [anon_sym_Draw_Box] = ACTIONS(274),
    [anon_sym_File_Box] = ACTIONS(274),
    [anon_sym_Function_Box] = ACTIONS(274),
    [anon_sym_Graph_Box] = ACTIONS(274),
    [anon_sym_GridCtrl_Box] = ACTIONS(274),
    [anon_sym_HyperLink_Box] = ACTIONS(274),
    [anon_sym_Input_Box] = ACTIONS(274),
    [anon_sym_Integer_Box] = ACTIONS(274),
    [anon_sym_Justify_Box] = ACTIONS(274),
    [anon_sym_Linestyle_Box] = ACTIONS(274),
    [anon_sym_List_Box] = ACTIONS(274),
    [anon_sym_ListCtrl_Box] = ACTIONS(274),
    [anon_sym_Map_File_Box] = ACTIONS(274),
    [anon_sym_Message_Box] = ACTIONS(274),
    [anon_sym_Model_Box] = ACTIONS(274),
    [anon_sym_Name_Box] = ACTIONS(274),
    [anon_sym_Named_Tick_Box] = ACTIONS(274),
    [anon_sym_New_Select_Box] = ACTIONS(274),
    [anon_sym_New_XYZ_Box] = ACTIONS(274),
    [anon_sym_Plotter_Box] = ACTIONS(274),
    [anon_sym_Polygon_Box] = ACTIONS(274),
    [anon_sym_Real_Box] = ACTIONS(274),
    [anon_sym_Report_Box] = ACTIONS(274),
    [anon_sym_Select_Box] = ACTIONS(274),
    [anon_sym_Select_Boxes] = ACTIONS(274),
    [anon_sym_Sheet_Size_Box] = ACTIONS(274),
    [anon_sym_Source_Box] = ACTIONS(274),
    [anon_sym_Symbol_Box] = ACTIONS(274),
    [anon_sym_Tab_Box] = ACTIONS(274),
    [anon_sym_Target_Box] = ACTIONS(274),
    [anon_sym_Template_Box] = ACTIONS(274),
    [anon_sym_Text_Edit_Box] = ACTIONS(274),
    [anon_sym_Text_Style_Box] = ACTIONS(274),
    [anon_sym_Texture_Box] = ACTIONS(274),
    [anon_sym_Tree_Box] = ACTIONS(274),
    [anon_sym_Tree_Page] = ACTIONS(274),
    [anon_sym_Tick_Box] = ACTIONS(274),
    [anon_sym_Tin_Box] = ACTIONS(274),
    [anon_sym_View_Box] = ACTIONS(274),
    [anon_sym_XYZ_Box] = ACTIONS(274),
    [anon_sym_File] = ACTIONS(274),
    [anon_sym_Map_File] = ACTIONS(274),
    [anon_sym_Plot_Parameter_File] = ACTIONS(274),
    [anon_sym_XML_Document] = ACTIONS(274),
    [anon_sym_XML_Node] = ACTIONS(274),
    [anon_sym_Connection] = ACTIONS(274),
    [anon_sym_Select_Query] = ACTIONS(274),
    [anon_sym_Insert_Query] = ACTIONS(274),
    [anon_sym_Update_Query] = ACTIONS(274),
    [anon_sym_Delete_Query] = ACTIONS(274),
    [anon_sym_Database_Results] = ACTIONS(274),
    [anon_sym_Transactions] = ACTIONS(274),
    [anon_sym_Parameter_Collection] = ACTIONS(274),
    [anon_sym_Query_Condition] = ACTIONS(274),
    [anon_sym_Manual_Condition] = ACTIONS(274),
    [anon_sym_Dynamic_Element] = ACTIONS(274),
    [anon_sym_Dynamic_Integer] = ACTIONS(274),
    [anon_sym_Dynamic_Real] = ACTIONS(274),
    [anon_sym_Dynamic_Text] = ACTIONS(274),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(250),
    [anon_sym_while] = ACTIONS(252),
    [anon_sym_LPAREN] = ACTIONS(250),
    [anon_sym_case] = ACTIONS(252),
    [anon_sym_default] = ACTIONS(252),
    [anon_sym_break] = ACTIONS(252),
    [anon_sym_SEMI] = ACTIONS(250),
    [anon_sym_continue] = ACTIONS(252),
    [anon_sym_goto] = ACTIONS(252),
    [anon_sym_switch] = ACTIONS(252),
    [anon_sym_if] = ACTIONS(252),
    [anon_sym_for] = ACTIONS(252),
    [anon_sym_BANG] = ACTIONS(250),
    [anon_sym_DASH] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_return] = ACTIONS(252),
    [sym_identifier] = ACTIONS(252),
    [sym_number_literal] = ACTIONS(250),
    [anon_sym_DQUOTE] = ACTIONS(250),
    [anon_sym_void] = ACTIONS(252),
    [anon_sym_Integer] = ACTIONS(252),
    [anon_sym_Real] = ACTIONS(252),
    [anon_sym_Text] = ACTIONS(252),
    [anon_sym_Vector2] = ACTIONS(252),
    [anon_sym_Vector3] = ACTIONS(252),
    [anon_sym_Vector4] = ACTIONS(252),
    [anon_sym_Matrix3] = ACTIONS(252),
    [anon_sym_Matrix4] = ACTIONS(252),
    [anon_sym_Point] = ACTIONS(252),
    [anon_sym_Line] = ACTIONS(252),
    [anon_sym_Arc] = ACTIONS(252),
    [anon_sym_Spiral] = ACTIONS(252),
    [anon_sym_Parabola] = ACTIONS(252),
    [anon_sym_Segment] = ACTIONS(252),
    [anon_sym_Element] = ACTIONS(252),
    [anon_sym_Model] = ACTIONS(252),
    [anon_sym_View] = ACTIONS(252),
    [anon_sym_Macro_Function] = ACTIONS(252),
    [anon_sym_Function] = ACTIONS(252),
    [anon_sym_Uid] = ACTIONS(252),
    [anon_sym_Guid] = ACTIONS(252),
    [anon_sym_Attributes] = ACTIONS(252),
    [anon_sym_SDR_Attribute] = ACTIONS(252),
    [anon_sym_Blob] = ACTIONS(252),
    [anon_sym_Screen_Text] = ACTIONS(252),
    [anon_sym_Textstyle_Data] = ACTIONS(252),
    [anon_sym_Equality_Label] = ACTIONS(252),
    [anon_sym_Undo] = ACTIONS(252),
    [anon_sym_Undo_List] = ACTIONS(252),
    [anon_sym_Widget] = ACTIONS(252),
    [anon_sym_Menu] = ACTIONS(252),
    [anon_sym_Panel] = ACTIONS(252),
    [anon_sym_Overlay_Widget] = ACTIONS(252),
    [anon_sym_Vertical_Group] = ACTIONS(252),
    [anon_sym_Horizontal_Group] = ACTIONS(252),
    [anon_sym_Widget_Pages] = ACTIONS(252),
    [anon_sym_Button] = ACTIONS(252),
    [anon_sym_Select_Button] = ACTIONS(252),
    [anon_sym_Angle_Box] = ACTIONS(252),
    [anon_sym_Attributes_Box] = ACTIONS(252),
    [anon_sym_Billboard_Box] = ACTIONS(252),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(252),
    [anon_sym_Bitmap_List_Box] = ACTIONS(252),
    [anon_sym_Chainage_Box] = ACTIONS(252),
    [anon_sym_Choice_Box] = ACTIONS(252),
    [anon_sym_Colour_Box] = ACTIONS(252),
    [anon_sym_Colour_Message_Box] = ACTIONS(252),
    [anon_sym_Date_Time_Box] = ACTIONS(252),
    [anon_sym_Directory_Box] = ACTIONS(252),
    [anon_sym_Draw_Box] = ACTIONS(252),
    [anon_sym_File_Box] = ACTIONS(252),
    [anon_sym_Function_Box] = ACTIONS(252),
    [anon_sym_Graph_Box] = ACTIONS(252),
    [anon_sym_GridCtrl_Box] = ACTIONS(252),
    [anon_sym_HyperLink_Box] = ACTIONS(252),
    [anon_sym_Input_Box] = ACTIONS(252),
    [anon_sym_Integer_Box] = ACTIONS(252),
    [anon_sym_Justify_Box] = ACTIONS(252),
    [anon_sym_Linestyle_Box] = ACTIONS(252),
    [anon_sym_List_Box] = ACTIONS(252),
    [anon_sym_ListCtrl_Box] = ACTIONS(252),
    [anon_sym_Map_File_Box] = ACTIONS(252),
    [anon_sym_Message_Box] = ACTIONS(252),
    [anon_sym_Model_Box] = ACTIONS(252),
    [anon_sym_Name_Box] = ACTIONS(252),
    [anon_sym_Named_Tick_Box] = ACTIONS(252),
    [anon_sym_New_Select_Box] = ACTIONS(252),
    [anon_sym_New_XYZ_Box] = ACTIONS(252),
    [anon_sym_Plotter_Box] = ACTIONS(252),
    [anon_sym_Polygon_Box] = ACTIONS(252),
    [anon_sym_Real_Box] = ACTIONS(252),
    [anon_sym_Report_Box] = ACTIONS(252),
    [anon_sym_Select_Box] = ACTIONS(252),
    [anon_sym_Select_Boxes] = ACTIONS(252),
    [anon_sym_Sheet_Size_Box] = ACTIONS(252),
    [anon_sym_Source_Box] = ACTIONS(252),
    [anon_sym_Symbol_Box] = ACTIONS(252),
    [anon_sym_Tab_Box] = ACTIONS(252),
    [anon_sym_Target_Box] = ACTIONS(252),
    [anon_sym_Template_Box] = ACTIONS(252),
    [anon_sym_Text_Edit_Box] = ACTIONS(252),
    [anon_sym_Text_Style_Box] = ACTIONS(252),
    [anon_sym_Texture_Box] = ACTIONS(252),
    [anon_sym_Tree_Box] = ACTIONS(252),
    [anon_sym_Tree_Page] = ACTIONS(252),
    [anon_sym_Tick_Box] = ACTIONS(252),
    [anon_sym_Tin_Box] = ACTIONS(252),
    [anon_sym_View_Box] = ACTIONS(252),
    [anon_sym_XYZ_Box] = ACTIONS(252),
    [anon_sym_File] = ACTIONS(252),
    [anon_sym_Map_File] = ACTIONS(252),
    [anon_sym_Plot_Parameter_File] = ACTIONS(252),
    [anon_sym_XML_Document] = ACTIONS(252),
    [anon_sym_XML_Node] = ACTIONS(252),
    [anon_sym_Connection] = ACTIONS(252),
    [anon_sym_Select_Query] = ACTIONS(252),
    [anon_sym_Insert_Query] = ACTIONS(252),
    [anon_sym_Update_Query] = ACTIONS(252),
    [anon_sym_Delete_Query] = ACTIONS(252),
    [anon_sym_Database_Results] = ACTIONS(252),
    [anon_sym_Transactions] = ACTIONS(252),
    [anon_sym_Parameter_Collection] = ACTIONS(252),
    [anon_sym_Query_Condition] = ACTIONS(252),
    [anon_sym_Manual_Condition] = ACTIONS(252),
    [anon_sym_Dynamic_Element] = ACTIONS(252),
    [anon_sym_Dynamic_Integer] = ACTIONS(252),
    [anon_sym_Dynamic_Real] = ACTIONS(252),
    [anon_sym_Dynamic_Text] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(302),
    [anon_sym_RBRACE] = ACTIONS(302),
    [anon_sym_while] = ACTIONS(304),
    [anon_sym_LPAREN] = ACTIONS(302),
    [anon_sym_case] = ACTIONS(304),
    [anon_sym_default] = ACTIONS(304),
    [anon_sym_break] = ACTIONS(304),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_continue] = ACTIONS(304),
    [anon_sym_goto] = ACTIONS(304),
    [anon_sym_switch] = ACTIONS(304),
    [anon_sym_if] = ACTIONS(304),
    [anon_sym_for] = ACTIONS(304),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_return] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_number_literal] = ACTIONS(302),
    [anon_sym_DQUOTE] = ACTIONS(302),
    [anon_sym_void] = ACTIONS(304),
    [anon_sym_Integer] = ACTIONS(304),
    [anon_sym_Real] = ACTIONS(304),
    [anon_sym_Text] = ACTIONS(304),
    [anon_sym_Vector2] = ACTIONS(304),
    [anon_sym_Vector3] = ACTIONS(304),
    [anon_sym_Vector4] = ACTIONS(304),
    [anon_sym_Matrix3] = ACTIONS(304),
    [anon_sym_Matrix4] = ACTIONS(304),
    [anon_sym_Point] = ACTIONS(304),
    [anon_sym_Line] = ACTIONS(304),
    [anon_sym_Arc] = ACTIONS(304),
    [anon_sym_Spiral] = ACTIONS(304),
    [anon_sym_Parabola] = ACTIONS(304),
    [anon_sym_Segment] = ACTIONS(304),
    [anon_sym_Element] = ACTIONS(304),
    [anon_sym_Model] = ACTIONS(304),
    [anon_sym_View] = ACTIONS(304),
    [anon_sym_Macro_Function] = ACTIONS(304),
    [anon_sym_Function] = ACTIONS(304),
    [anon_sym_Uid] = ACTIONS(304),
    [anon_sym_Guid] = ACTIONS(304),
    [anon_sym_Attributes] = ACTIONS(304),
    [anon_sym_SDR_Attribute] = ACTIONS(304),
    [anon_sym_Blob] = ACTIONS(304),
    [anon_sym_Screen_Text] = ACTIONS(304),
    [anon_sym_Textstyle_Data] = ACTIONS(304),
    [anon_sym_Equality_Label] = ACTIONS(304),
    [anon_sym_Undo] = ACTIONS(304),
    [anon_sym_Undo_List] = ACTIONS(304),
    [anon_sym_Widget] = ACTIONS(304),
    [anon_sym_Menu] = ACTIONS(304),
    [anon_sym_Panel] = ACTIONS(304),
    [anon_sym_Overlay_Widget] = ACTIONS(304),
    [anon_sym_Vertical_Group] = ACTIONS(304),
    [anon_sym_Horizontal_Group] = ACTIONS(304),
    [anon_sym_Widget_Pages] = ACTIONS(304),
    [anon_sym_Button] = ACTIONS(304),
    [anon_sym_Select_Button] = ACTIONS(304),
    [anon_sym_Angle_Box] = ACTIONS(304),
    [anon_sym_Attributes_Box] = ACTIONS(304),
    [anon_sym_Billboard_Box] = ACTIONS(304),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(304),
    [anon_sym_Bitmap_List_Box] = ACTIONS(304),
    [anon_sym_Chainage_Box] = ACTIONS(304),
    [anon_sym_Choice_Box] = ACTIONS(304),
    [anon_sym_Colour_Box] = ACTIONS(304),
    [anon_sym_Colour_Message_Box] = ACTIONS(304),
    [anon_sym_Date_Time_Box] = ACTIONS(304),
    [anon_sym_Directory_Box] = ACTIONS(304),
    [anon_sym_Draw_Box] = ACTIONS(304),
    [anon_sym_File_Box] = ACTIONS(304),
    [anon_sym_Function_Box] = ACTIONS(304),
    [anon_sym_Graph_Box] = ACTIONS(304),
    [anon_sym_GridCtrl_Box] = ACTIONS(304),
    [anon_sym_HyperLink_Box] = ACTIONS(304),
    [anon_sym_Input_Box] = ACTIONS(304),
    [anon_sym_Integer_Box] = ACTIONS(304),
    [anon_sym_Justify_Box] = ACTIONS(304),
    [anon_sym_Linestyle_Box] = ACTIONS(304),
    [anon_sym_List_Box] = ACTIONS(304),
    [anon_sym_ListCtrl_Box] = ACTIONS(304),
    [anon_sym_Map_File_Box] = ACTIONS(304),
    [anon_sym_Message_Box] = ACTIONS(304),
    [anon_sym_Model_Box] = ACTIONS(304),
    [anon_sym_Name_Box] = ACTIONS(304),
    [anon_sym_Named_Tick_Box] = ACTIONS(304),
    [anon_sym_New_Select_Box] = ACTIONS(304),
    [anon_sym_New_XYZ_Box] = ACTIONS(304),
    [anon_sym_Plotter_Box] = ACTIONS(304),
    [anon_sym_Polygon_Box] = ACTIONS(304),
    [anon_sym_Real_Box] = ACTIONS(304),
    [anon_sym_Report_Box] = ACTIONS(304),
    [anon_sym_Select_Box] = ACTIONS(304),
    [anon_sym_Select_Boxes] = ACTIONS(304),
    [anon_sym_Sheet_Size_Box] = ACTIONS(304),
    [anon_sym_Source_Box] = ACTIONS(304),
    [anon_sym_Symbol_Box] = ACTIONS(304),
    [anon_sym_Tab_Box] = ACTIONS(304),
    [anon_sym_Target_Box] = ACTIONS(304),
    [anon_sym_Template_Box] = ACTIONS(304),
    [anon_sym_Text_Edit_Box] = ACTIONS(304),
    [anon_sym_Text_Style_Box] = ACTIONS(304),
    [anon_sym_Texture_Box] = ACTIONS(304),
    [anon_sym_Tree_Box] = ACTIONS(304),
    [anon_sym_Tree_Page] = ACTIONS(304),
    [anon_sym_Tick_Box] = ACTIONS(304),
    [anon_sym_Tin_Box] = ACTIONS(304),
    [anon_sym_View_Box] = ACTIONS(304),
    [anon_sym_XYZ_Box] = ACTIONS(304),
    [anon_sym_File] = ACTIONS(304),
    [anon_sym_Map_File] = ACTIONS(304),
    [anon_sym_Plot_Parameter_File] = ACTIONS(304),
    [anon_sym_XML_Document] = ACTIONS(304),
    [anon_sym_XML_Node] = ACTIONS(304),
    [anon_sym_Connection] = ACTIONS(304),
    [anon_sym_Select_Query] = ACTIONS(304),
    [anon_sym_Insert_Query] = ACTIONS(304),
    [anon_sym_Update_Query] = ACTIONS(304),
    [anon_sym_Delete_Query] = ACTIONS(304),
    [anon_sym_Database_Results] = ACTIONS(304),
    [anon_sym_Transactions] = ACTIONS(304),
    [anon_sym_Parameter_Collection] = ACTIONS(304),
    [anon_sym_Query_Condition] = ACTIONS(304),
    [anon_sym_Manual_Condition] = ACTIONS(304),
    [anon_sym_Dynamic_Element] = ACTIONS(304),
    [anon_sym_Dynamic_Integer] = ACTIONS(304),
    [anon_sym_Dynamic_Real] = ACTIONS(304),
    [anon_sym_Dynamic_Text] = ACTIONS(304),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(294),
    [anon_sym_RBRACE] = ACTIONS(294),
    [anon_sym_while] = ACTIONS(296),
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_case] = ACTIONS(296),
    [anon_sym_default] = ACTIONS(296),
    [anon_sym_break] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_continue] = ACTIONS(296),
    [anon_sym_goto] = ACTIONS(296),
    [anon_sym_switch] = ACTIONS(296),
    [anon_sym_if] = ACTIONS(296),
    [anon_sym_for] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_return] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_number_literal] = ACTIONS(294),
    [anon_sym_DQUOTE] = ACTIONS(294),
    [anon_sym_void] = ACTIONS(296),
    [anon_sym_Integer] = ACTIONS(296),
    [anon_sym_Real] = ACTIONS(296),
    [anon_sym_Text] = ACTIONS(296),
    [anon_sym_Vector2] = ACTIONS(296),
    [anon_sym_Vector3] = ACTIONS(296),
    [anon_sym_Vector4] = ACTIONS(296),
    [anon_sym_Matrix3] = ACTIONS(296),
    [anon_sym_Matrix4] = ACTIONS(296),
    [anon_sym_Point] = ACTIONS(296),
    [anon_sym_Line] = ACTIONS(296),
    [anon_sym_Arc] = ACTIONS(296),
    [anon_sym_Spiral] = ACTIONS(296),
    [anon_sym_Parabola] = ACTIONS(296),
    [anon_sym_Segment] = ACTIONS(296),
    [anon_sym_Element] = ACTIONS(296),
    [anon_sym_Model] = ACTIONS(296),
    [anon_sym_View] = ACTIONS(296),
    [anon_sym_Macro_Function] = ACTIONS(296),
    [anon_sym_Function] = ACTIONS(296),
    [anon_sym_Uid] = ACTIONS(296),
    [anon_sym_Guid] = ACTIONS(296),
    [anon_sym_Attributes] = ACTIONS(296),
    [anon_sym_SDR_Attribute] = ACTIONS(296),
    [anon_sym_Blob] = ACTIONS(296),
    [anon_sym_Screen_Text] = ACTIONS(296),
    [anon_sym_Textstyle_Data] = ACTIONS(296),
    [anon_sym_Equality_Label] = ACTIONS(296),
    [anon_sym_Undo] = ACTIONS(296),
    [anon_sym_Undo_List] = ACTIONS(296),
    [anon_sym_Widget] = ACTIONS(296),
    [anon_sym_Menu] = ACTIONS(296),
    [anon_sym_Panel] = ACTIONS(296),
    [anon_sym_Overlay_Widget] = ACTIONS(296),
    [anon_sym_Vertical_Group] = ACTIONS(296),
    [anon_sym_Horizontal_Group] = ACTIONS(296),
    [anon_sym_Widget_Pages] = ACTIONS(296),
    [anon_sym_Button] = ACTIONS(296),
    [anon_sym_Select_Button] = ACTIONS(296),
    [anon_sym_Angle_Box] = ACTIONS(296),
    [anon_sym_Attributes_Box] = ACTIONS(296),
    [anon_sym_Billboard_Box] = ACTIONS(296),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(296),
    [anon_sym_Bitmap_List_Box] = ACTIONS(296),
    [anon_sym_Chainage_Box] = ACTIONS(296),
    [anon_sym_Choice_Box] = ACTIONS(296),
    [anon_sym_Colour_Box] = ACTIONS(296),
    [anon_sym_Colour_Message_Box] = ACTIONS(296),
    [anon_sym_Date_Time_Box] = ACTIONS(296),
    [anon_sym_Directory_Box] = ACTIONS(296),
    [anon_sym_Draw_Box] = ACTIONS(296),
    [anon_sym_File_Box] = ACTIONS(296),
    [anon_sym_Function_Box] = ACTIONS(296),
    [anon_sym_Graph_Box] = ACTIONS(296),
    [anon_sym_GridCtrl_Box] = ACTIONS(296),
    [anon_sym_HyperLink_Box] = ACTIONS(296),
    [anon_sym_Input_Box] = ACTIONS(296),
    [anon_sym_Integer_Box] = ACTIONS(296),
    [anon_sym_Justify_Box] = ACTIONS(296),
    [anon_sym_Linestyle_Box] = ACTIONS(296),
    [anon_sym_List_Box] = ACTIONS(296),
    [anon_sym_ListCtrl_Box] = ACTIONS(296),
    [anon_sym_Map_File_Box] = ACTIONS(296),
    [anon_sym_Message_Box] = ACTIONS(296),
    [anon_sym_Model_Box] = ACTIONS(296),
    [anon_sym_Name_Box] = ACTIONS(296),
    [anon_sym_Named_Tick_Box] = ACTIONS(296),
    [anon_sym_New_Select_Box] = ACTIONS(296),
    [anon_sym_New_XYZ_Box] = ACTIONS(296),
    [anon_sym_Plotter_Box] = ACTIONS(296),
    [anon_sym_Polygon_Box] = ACTIONS(296),
    [anon_sym_Real_Box] = ACTIONS(296),
    [anon_sym_Report_Box] = ACTIONS(296),
    [anon_sym_Select_Box] = ACTIONS(296),
    [anon_sym_Select_Boxes] = ACTIONS(296),
    [anon_sym_Sheet_Size_Box] = ACTIONS(296),
    [anon_sym_Source_Box] = ACTIONS(296),
    [anon_sym_Symbol_Box] = ACTIONS(296),
    [anon_sym_Tab_Box] = ACTIONS(296),
    [anon_sym_Target_Box] = ACTIONS(296),
    [anon_sym_Template_Box] = ACTIONS(296),
    [anon_sym_Text_Edit_Box] = ACTIONS(296),
    [anon_sym_Text_Style_Box] = ACTIONS(296),
    [anon_sym_Texture_Box] = ACTIONS(296),
    [anon_sym_Tree_Box] = ACTIONS(296),
    [anon_sym_Tree_Page] = ACTIONS(296),
    [anon_sym_Tick_Box] = ACTIONS(296),
    [anon_sym_Tin_Box] = ACTIONS(296),
    [anon_sym_View_Box] = ACTIONS(296),
    [anon_sym_XYZ_Box] = ACTIONS(296),
    [anon_sym_File] = ACTIONS(296),
    [anon_sym_Map_File] = ACTIONS(296),
    [anon_sym_Plot_Parameter_File] = ACTIONS(296),
    [anon_sym_XML_Document] = ACTIONS(296),
    [anon_sym_XML_Node] = ACTIONS(296),
    [anon_sym_Connection] = ACTIONS(296),
    [anon_sym_Select_Query] = ACTIONS(296),
    [anon_sym_Insert_Query] = ACTIONS(296),
    [anon_sym_Update_Query] = ACTIONS(296),
    [anon_sym_Delete_Query] = ACTIONS(296),
    [anon_sym_Database_Results] = ACTIONS(296),
    [anon_sym_Transactions] = ACTIONS(296),
    [anon_sym_Parameter_Collection] = ACTIONS(296),
    [anon_sym_Query_Condition] = ACTIONS(296),
    [anon_sym_Manual_Condition] = ACTIONS(296),
    [anon_sym_Dynamic_Element] = ACTIONS(296),
    [anon_sym_Dynamic_Integer] = ACTIONS(296),
    [anon_sym_Dynamic_Real] = ACTIONS(296),
    [anon_sym_Dynamic_Text] = ACTIONS(296),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_LBRACE] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_while] = ACTIONS(312),
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_case] = ACTIONS(312),
    [anon_sym_default] = ACTIONS(312),
    [anon_sym_break] = ACTIONS(312),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_continue] = ACTIONS(312),
    [anon_sym_goto] = ACTIONS(312),
    [anon_sym_switch] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(312),
    [anon_sym_for] = ACTIONS(312),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_DASH] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_return] = ACTIONS(312),
    [sym_identifier] = ACTIONS(312),
    [sym_number_literal] = ACTIONS(310),
    [anon_sym_DQUOTE] = ACTIONS(310),
    [anon_sym_void] = ACTIONS(312),
    [anon_sym_Integer] = ACTIONS(312),
    [anon_sym_Real] = ACTIONS(312),
    [anon_sym_Text] = ACTIONS(312),
    [anon_sym_Vector2] = ACTIONS(312),
    [anon_sym_Vector3] = ACTIONS(312),
    [anon_sym_Vector4] = ACTIONS(312),
    [anon_sym_Matrix3] = ACTIONS(312),
    [anon_sym_Matrix4] = ACTIONS(312),
    [anon_sym_Point] = ACTIONS(312),
    [anon_sym_Line] = ACTIONS(312),
    [anon_sym_Arc] = ACTIONS(312),
    [anon_sym_Spiral] = ACTIONS(312),
    [anon_sym_Parabola] = ACTIONS(312),
    [anon_sym_Segment] = ACTIONS(312),
    [anon_sym_Element] = ACTIONS(312),
    [anon_sym_Model] = ACTIONS(312),
    [anon_sym_View] = ACTIONS(312),
    [anon_sym_Macro_Function] = ACTIONS(312),
    [anon_sym_Function] = ACTIONS(312),
    [anon_sym_Uid] = ACTIONS(312),
    [anon_sym_Guid] = ACTIONS(312),
    [anon_sym_Attributes] = ACTIONS(312),
    [anon_sym_SDR_Attribute] = ACTIONS(312),
    [anon_sym_Blob] = ACTIONS(312),
    [anon_sym_Screen_Text] = ACTIONS(312),
    [anon_sym_Textstyle_Data] = ACTIONS(312),
    [anon_sym_Equality_Label] = ACTIONS(312),
    [anon_sym_Undo] = ACTIONS(312),
    [anon_sym_Undo_List] = ACTIONS(312),
    [anon_sym_Widget] = ACTIONS(312),
    [anon_sym_Menu] = ACTIONS(312),
    [anon_sym_Panel] = ACTIONS(312),
    [anon_sym_Overlay_Widget] = ACTIONS(312),
    [anon_sym_Vertical_Group] = ACTIONS(312),
    [anon_sym_Horizontal_Group] = ACTIONS(312),
    [anon_sym_Widget_Pages] = ACTIONS(312),
    [anon_sym_Button] = ACTIONS(312),
    [anon_sym_Select_Button] = ACTIONS(312),
    [anon_sym_Angle_Box] = ACTIONS(312),
    [anon_sym_Attributes_Box] = ACTIONS(312),
    [anon_sym_Billboard_Box] = ACTIONS(312),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(312),
    [anon_sym_Bitmap_List_Box] = ACTIONS(312),
    [anon_sym_Chainage_Box] = ACTIONS(312),
    [anon_sym_Choice_Box] = ACTIONS(312),
    [anon_sym_Colour_Box] = ACTIONS(312),
    [anon_sym_Colour_Message_Box] = ACTIONS(312),
    [anon_sym_Date_Time_Box] = ACTIONS(312),
    [anon_sym_Directory_Box] = ACTIONS(312),
    [anon_sym_Draw_Box] = ACTIONS(312),
    [anon_sym_File_Box] = ACTIONS(312),
    [anon_sym_Function_Box] = ACTIONS(312),
    [anon_sym_Graph_Box] = ACTIONS(312),
    [anon_sym_GridCtrl_Box] = ACTIONS(312),
    [anon_sym_HyperLink_Box] = ACTIONS(312),
    [anon_sym_Input_Box] = ACTIONS(312),
    [anon_sym_Integer_Box] = ACTIONS(312),
    [anon_sym_Justify_Box] = ACTIONS(312),
    [anon_sym_Linestyle_Box] = ACTIONS(312),
    [anon_sym_List_Box] = ACTIONS(312),
    [anon_sym_ListCtrl_Box] = ACTIONS(312),
    [anon_sym_Map_File_Box] = ACTIONS(312),
    [anon_sym_Message_Box] = ACTIONS(312),
    [anon_sym_Model_Box] = ACTIONS(312),
    [anon_sym_Name_Box] = ACTIONS(312),
    [anon_sym_Named_Tick_Box] = ACTIONS(312),
    [anon_sym_New_Select_Box] = ACTIONS(312),
    [anon_sym_New_XYZ_Box] = ACTIONS(312),
    [anon_sym_Plotter_Box] = ACTIONS(312),
    [anon_sym_Polygon_Box] = ACTIONS(312),
    [anon_sym_Real_Box] = ACTIONS(312),
    [anon_sym_Report_Box] = ACTIONS(312),
    [anon_sym_Select_Box] = ACTIONS(312),
    [anon_sym_Select_Boxes] = ACTIONS(312),
    [anon_sym_Sheet_Size_Box] = ACTIONS(312),
    [anon_sym_Source_Box] = ACTIONS(312),
    [anon_sym_Symbol_Box] = ACTIONS(312),
    [anon_sym_Tab_Box] = ACTIONS(312),
    [anon_sym_Target_Box] = ACTIONS(312),
    [anon_sym_Template_Box] = ACTIONS(312),
    [anon_sym_Text_Edit_Box] = ACTIONS(312),
    [anon_sym_Text_Style_Box] = ACTIONS(312),
    [anon_sym_Texture_Box] = ACTIONS(312),
    [anon_sym_Tree_Box] = ACTIONS(312),
    [anon_sym_Tree_Page] = ACTIONS(312),
    [anon_sym_Tick_Box] = ACTIONS(312),
    [anon_sym_Tin_Box] = ACTIONS(312),
    [anon_sym_View_Box] = ACTIONS(312),
    [anon_sym_XYZ_Box] = ACTIONS(312),
    [anon_sym_File] = ACTIONS(312),
    [anon_sym_Map_File] = ACTIONS(312),
    [anon_sym_Plot_Parameter_File] = ACTIONS(312),
    [anon_sym_XML_Document] = ACTIONS(312),
    [anon_sym_XML_Node] = ACTIONS(312),
    [anon_sym_Connection] = ACTIONS(312),
    [anon_sym_Select_Query] = ACTIONS(312),
    [anon_sym_Insert_Query] = ACTIONS(312),
    [anon_sym_Update_Query] = ACTIONS(312),
    [anon_sym_Delete_Query] = ACTIONS(312),
    [anon_sym_Database_Results] = ACTIONS(312),
    [anon_sym_Transactions] = ACTIONS(312),
    [anon_sym_Parameter_Collection] = ACTIONS(312),
    [anon_sym_Query_Condition] = ACTIONS(312),
    [anon_sym_Manual_Condition] = ACTIONS(312),
    [anon_sym_Dynamic_Element] = ACTIONS(312),
    [anon_sym_Dynamic_Integer] = ACTIONS(312),
    [anon_sym_Dynamic_Real] = ACTIONS(312),
    [anon_sym_Dynamic_Text] = ACTIONS(312),
    [sym_comment] = ACTIONS(3),
  },
  [60] = {
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_while] = ACTIONS(308),
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_case] = ACTIONS(308),
    [anon_sym_default] = ACTIONS(308),
    [anon_sym_break] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_continue] = ACTIONS(308),
    [anon_sym_goto] = ACTIONS(308),
    [anon_sym_switch] = ACTIONS(308),
    [anon_sym_if] = ACTIONS(308),
    [anon_sym_for] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_return] = ACTIONS(308),
    [sym_identifier] = ACTIONS(308),
    [sym_number_literal] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [anon_sym_void] = ACTIONS(308),
    [anon_sym_Integer] = ACTIONS(308),
    [anon_sym_Real] = ACTIONS(308),
    [anon_sym_Text] = ACTIONS(308),
    [anon_sym_Vector2] = ACTIONS(308),
    [anon_sym_Vector3] = ACTIONS(308),
    [anon_sym_Vector4] = ACTIONS(308),
    [anon_sym_Matrix3] = ACTIONS(308),
    [anon_sym_Matrix4] = ACTIONS(308),
    [anon_sym_Point] = ACTIONS(308),
    [anon_sym_Line] = ACTIONS(308),
    [anon_sym_Arc] = ACTIONS(308),
    [anon_sym_Spiral] = ACTIONS(308),
    [anon_sym_Parabola] = ACTIONS(308),
    [anon_sym_Segment] = ACTIONS(308),
    [anon_sym_Element] = ACTIONS(308),
    [anon_sym_Model] = ACTIONS(308),
    [anon_sym_View] = ACTIONS(308),
    [anon_sym_Macro_Function] = ACTIONS(308),
    [anon_sym_Function] = ACTIONS(308),
    [anon_sym_Uid] = ACTIONS(308),
    [anon_sym_Guid] = ACTIONS(308),
    [anon_sym_Attributes] = ACTIONS(308),
    [anon_sym_SDR_Attribute] = ACTIONS(308),
    [anon_sym_Blob] = ACTIONS(308),
    [anon_sym_Screen_Text] = ACTIONS(308),
    [anon_sym_Textstyle_Data] = ACTIONS(308),
    [anon_sym_Equality_Label] = ACTIONS(308),
    [anon_sym_Undo] = ACTIONS(308),
    [anon_sym_Undo_List] = ACTIONS(308),
    [anon_sym_Widget] = ACTIONS(308),
    [anon_sym_Menu] = ACTIONS(308),
    [anon_sym_Panel] = ACTIONS(308),
    [anon_sym_Overlay_Widget] = ACTIONS(308),
    [anon_sym_Vertical_Group] = ACTIONS(308),
    [anon_sym_Horizontal_Group] = ACTIONS(308),
    [anon_sym_Widget_Pages] = ACTIONS(308),
    [anon_sym_Button] = ACTIONS(308),
    [anon_sym_Select_Button] = ACTIONS(308),
    [anon_sym_Angle_Box] = ACTIONS(308),
    [anon_sym_Attributes_Box] = ACTIONS(308),
    [anon_sym_Billboard_Box] = ACTIONS(308),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(308),
    [anon_sym_Bitmap_List_Box] = ACTIONS(308),
    [anon_sym_Chainage_Box] = ACTIONS(308),
    [anon_sym_Choice_Box] = ACTIONS(308),
    [anon_sym_Colour_Box] = ACTIONS(308),
    [anon_sym_Colour_Message_Box] = ACTIONS(308),
    [anon_sym_Date_Time_Box] = ACTIONS(308),
    [anon_sym_Directory_Box] = ACTIONS(308),
    [anon_sym_Draw_Box] = ACTIONS(308),
    [anon_sym_File_Box] = ACTIONS(308),
    [anon_sym_Function_Box] = ACTIONS(308),
    [anon_sym_Graph_Box] = ACTIONS(308),
    [anon_sym_GridCtrl_Box] = ACTIONS(308),
    [anon_sym_HyperLink_Box] = ACTIONS(308),
    [anon_sym_Input_Box] = ACTIONS(308),
    [anon_sym_Integer_Box] = ACTIONS(308),
    [anon_sym_Justify_Box] = ACTIONS(308),
    [anon_sym_Linestyle_Box] = ACTIONS(308),
    [anon_sym_List_Box] = ACTIONS(308),
    [anon_sym_ListCtrl_Box] = ACTIONS(308),
    [anon_sym_Map_File_Box] = ACTIONS(308),
    [anon_sym_Message_Box] = ACTIONS(308),
    [anon_sym_Model_Box] = ACTIONS(308),
    [anon_sym_Name_Box] = ACTIONS(308),
    [anon_sym_Named_Tick_Box] = ACTIONS(308),
    [anon_sym_New_Select_Box] = ACTIONS(308),
    [anon_sym_New_XYZ_Box] = ACTIONS(308),
    [anon_sym_Plotter_Box] = ACTIONS(308),
    [anon_sym_Polygon_Box] = ACTIONS(308),
    [anon_sym_Real_Box] = ACTIONS(308),
    [anon_sym_Report_Box] = ACTIONS(308),
    [anon_sym_Select_Box] = ACTIONS(308),
    [anon_sym_Select_Boxes] = ACTIONS(308),
    [anon_sym_Sheet_Size_Box] = ACTIONS(308),
    [anon_sym_Source_Box] = ACTIONS(308),
    [anon_sym_Symbol_Box] = ACTIONS(308),
    [anon_sym_Tab_Box] = ACTIONS(308),
    [anon_sym_Target_Box] = ACTIONS(308),
    [anon_sym_Template_Box] = ACTIONS(308),
    [anon_sym_Text_Edit_Box] = ACTIONS(308),
    [anon_sym_Text_Style_Box] = ACTIONS(308),
    [anon_sym_Texture_Box] = ACTIONS(308),
    [anon_sym_Tree_Box] = ACTIONS(308),
    [anon_sym_Tree_Page] = ACTIONS(308),
    [anon_sym_Tick_Box] = ACTIONS(308),
    [anon_sym_Tin_Box] = ACTIONS(308),
    [anon_sym_View_Box] = ACTIONS(308),
    [anon_sym_XYZ_Box] = ACTIONS(308),
    [anon_sym_File] = ACTIONS(308),
    [anon_sym_Map_File] = ACTIONS(308),
    [anon_sym_Plot_Parameter_File] = ACTIONS(308),
    [anon_sym_XML_Document] = ACTIONS(308),
    [anon_sym_XML_Node] = ACTIONS(308),
    [anon_sym_Connection] = ACTIONS(308),
    [anon_sym_Select_Query] = ACTIONS(308),
    [anon_sym_Insert_Query] = ACTIONS(308),
    [anon_sym_Update_Query] = ACTIONS(308),
    [anon_sym_Delete_Query] = ACTIONS(308),
    [anon_sym_Database_Results] = ACTIONS(308),
    [anon_sym_Transactions] = ACTIONS(308),
    [anon_sym_Parameter_Collection] = ACTIONS(308),
    [anon_sym_Query_Condition] = ACTIONS(308),
    [anon_sym_Manual_Condition] = ACTIONS(308),
    [anon_sym_Dynamic_Element] = ACTIONS(308),
    [anon_sym_Dynamic_Integer] = ACTIONS(308),
    [anon_sym_Dynamic_Real] = ACTIONS(308),
    [anon_sym_Dynamic_Text] = ACTIONS(308),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [anon_sym_LBRACE] = ACTIONS(280),
    [anon_sym_RBRACE] = ACTIONS(280),
    [anon_sym_while] = ACTIONS(282),
    [anon_sym_LPAREN] = ACTIONS(280),
    [anon_sym_case] = ACTIONS(282),
    [anon_sym_default] = ACTIONS(282),
    [anon_sym_break] = ACTIONS(282),
    [anon_sym_SEMI] = ACTIONS(280),
    [anon_sym_continue] = ACTIONS(282),
    [anon_sym_goto] = ACTIONS(282),
    [anon_sym_switch] = ACTIONS(282),
    [anon_sym_if] = ACTIONS(282),
    [anon_sym_for] = ACTIONS(282),
    [anon_sym_BANG] = ACTIONS(280),
    [anon_sym_DASH] = ACTIONS(280),
    [anon_sym_PLUS] = ACTIONS(280),
    [anon_sym_return] = ACTIONS(282),
    [sym_identifier] = ACTIONS(282),
    [sym_number_literal] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [anon_sym_void] = ACTIONS(282),
    [anon_sym_Integer] = ACTIONS(282),
    [anon_sym_Real] = ACTIONS(282),
    [anon_sym_Text] = ACTIONS(282),
    [anon_sym_Vector2] = ACTIONS(282),
    [anon_sym_Vector3] = ACTIONS(282),
    [anon_sym_Vector4] = ACTIONS(282),
    [anon_sym_Matrix3] = ACTIONS(282),
    [anon_sym_Matrix4] = ACTIONS(282),
    [anon_sym_Point] = ACTIONS(282),
    [anon_sym_Line] = ACTIONS(282),
    [anon_sym_Arc] = ACTIONS(282),
    [anon_sym_Spiral] = ACTIONS(282),
    [anon_sym_Parabola] = ACTIONS(282),
    [anon_sym_Segment] = ACTIONS(282),
    [anon_sym_Element] = ACTIONS(282),
    [anon_sym_Model] = ACTIONS(282),
    [anon_sym_View] = ACTIONS(282),
    [anon_sym_Macro_Function] = ACTIONS(282),
    [anon_sym_Function] = ACTIONS(282),
    [anon_sym_Uid] = ACTIONS(282),
    [anon_sym_Guid] = ACTIONS(282),
    [anon_sym_Attributes] = ACTIONS(282),
    [anon_sym_SDR_Attribute] = ACTIONS(282),
    [anon_sym_Blob] = ACTIONS(282),
    [anon_sym_Screen_Text] = ACTIONS(282),
    [anon_sym_Textstyle_Data] = ACTIONS(282),
    [anon_sym_Equality_Label] = ACTIONS(282),
    [anon_sym_Undo] = ACTIONS(282),
    [anon_sym_Undo_List] = ACTIONS(282),
    [anon_sym_Widget] = ACTIONS(282),
    [anon_sym_Menu] = ACTIONS(282),
    [anon_sym_Panel] = ACTIONS(282),
    [anon_sym_Overlay_Widget] = ACTIONS(282),
    [anon_sym_Vertical_Group] = ACTIONS(282),
    [anon_sym_Horizontal_Group] = ACTIONS(282),
    [anon_sym_Widget_Pages] = ACTIONS(282),
    [anon_sym_Button] = ACTIONS(282),
    [anon_sym_Select_Button] = ACTIONS(282),
    [anon_sym_Angle_Box] = ACTIONS(282),
    [anon_sym_Attributes_Box] = ACTIONS(282),
    [anon_sym_Billboard_Box] = ACTIONS(282),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(282),
    [anon_sym_Bitmap_List_Box] = ACTIONS(282),
    [anon_sym_Chainage_Box] = ACTIONS(282),
    [anon_sym_Choice_Box] = ACTIONS(282),
    [anon_sym_Colour_Box] = ACTIONS(282),
    [anon_sym_Colour_Message_Box] = ACTIONS(282),
    [anon_sym_Date_Time_Box] = ACTIONS(282),
    [anon_sym_Directory_Box] = ACTIONS(282),
    [anon_sym_Draw_Box] = ACTIONS(282),
    [anon_sym_File_Box] = ACTIONS(282),
    [anon_sym_Function_Box] = ACTIONS(282),
    [anon_sym_Graph_Box] = ACTIONS(282),
    [anon_sym_GridCtrl_Box] = ACTIONS(282),
    [anon_sym_HyperLink_Box] = ACTIONS(282),
    [anon_sym_Input_Box] = ACTIONS(282),
    [anon_sym_Integer_Box] = ACTIONS(282),
    [anon_sym_Justify_Box] = ACTIONS(282),
    [anon_sym_Linestyle_Box] = ACTIONS(282),
    [anon_sym_List_Box] = ACTIONS(282),
    [anon_sym_ListCtrl_Box] = ACTIONS(282),
    [anon_sym_Map_File_Box] = ACTIONS(282),
    [anon_sym_Message_Box] = ACTIONS(282),
    [anon_sym_Model_Box] = ACTIONS(282),
    [anon_sym_Name_Box] = ACTIONS(282),
    [anon_sym_Named_Tick_Box] = ACTIONS(282),
    [anon_sym_New_Select_Box] = ACTIONS(282),
    [anon_sym_New_XYZ_Box] = ACTIONS(282),
    [anon_sym_Plotter_Box] = ACTIONS(282),
    [anon_sym_Polygon_Box] = ACTIONS(282),
    [anon_sym_Real_Box] = ACTIONS(282),
    [anon_sym_Report_Box] = ACTIONS(282),
    [anon_sym_Select_Box] = ACTIONS(282),
    [anon_sym_Select_Boxes] = ACTIONS(282),
    [anon_sym_Sheet_Size_Box] = ACTIONS(282),
    [anon_sym_Source_Box] = ACTIONS(282),
    [anon_sym_Symbol_Box] = ACTIONS(282),
    [anon_sym_Tab_Box] = ACTIONS(282),
    [anon_sym_Target_Box] = ACTIONS(282),
    [anon_sym_Template_Box] = ACTIONS(282),
    [anon_sym_Text_Edit_Box] = ACTIONS(282),
    [anon_sym_Text_Style_Box] = ACTIONS(282),
    [anon_sym_Texture_Box] = ACTIONS(282),
    [anon_sym_Tree_Box] = ACTIONS(282),
    [anon_sym_Tree_Page] = ACTIONS(282),
    [anon_sym_Tick_Box] = ACTIONS(282),
    [anon_sym_Tin_Box] = ACTIONS(282),
    [anon_sym_View_Box] = ACTIONS(282),
    [anon_sym_XYZ_Box] = ACTIONS(282),
    [anon_sym_File] = ACTIONS(282),
    [anon_sym_Map_File] = ACTIONS(282),
    [anon_sym_Plot_Parameter_File] = ACTIONS(282),
    [anon_sym_XML_Document] = ACTIONS(282),
    [anon_sym_XML_Node] = ACTIONS(282),
    [anon_sym_Connection] = ACTIONS(282),
    [anon_sym_Select_Query] = ACTIONS(282),
    [anon_sym_Insert_Query] = ACTIONS(282),
    [anon_sym_Update_Query] = ACTIONS(282),
    [anon_sym_Delete_Query] = ACTIONS(282),
    [anon_sym_Database_Results] = ACTIONS(282),
    [anon_sym_Transactions] = ACTIONS(282),
    [anon_sym_Parameter_Collection] = ACTIONS(282),
    [anon_sym_Query_Condition] = ACTIONS(282),
    [anon_sym_Manual_Condition] = ACTIONS(282),
    [anon_sym_Dynamic_Element] = ACTIONS(282),
    [anon_sym_Dynamic_Integer] = ACTIONS(282),
    [anon_sym_Dynamic_Real] = ACTIONS(282),
    [anon_sym_Dynamic_Text] = ACTIONS(282),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [anon_sym_LBRACE] = ACTIONS(288),
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_while] = ACTIONS(290),
    [anon_sym_LPAREN] = ACTIONS(288),
    [anon_sym_case] = ACTIONS(290),
    [anon_sym_default] = ACTIONS(290),
    [anon_sym_break] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(288),
    [anon_sym_continue] = ACTIONS(290),
    [anon_sym_goto] = ACTIONS(290),
    [anon_sym_switch] = ACTIONS(290),
    [anon_sym_if] = ACTIONS(290),
    [anon_sym_for] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [anon_sym_PLUS] = ACTIONS(288),
    [anon_sym_return] = ACTIONS(290),
    [sym_identifier] = ACTIONS(290),
    [sym_number_literal] = ACTIONS(288),
    [anon_sym_DQUOTE] = ACTIONS(288),
    [anon_sym_void] = ACTIONS(290),
    [anon_sym_Integer] = ACTIONS(290),
    [anon_sym_Real] = ACTIONS(290),
    [anon_sym_Text] = ACTIONS(290),
    [anon_sym_Vector2] = ACTIONS(290),
    [anon_sym_Vector3] = ACTIONS(290),
    [anon_sym_Vector4] = ACTIONS(290),
    [anon_sym_Matrix3] = ACTIONS(290),
    [anon_sym_Matrix4] = ACTIONS(290),
    [anon_sym_Point] = ACTIONS(290),
    [anon_sym_Line] = ACTIONS(290),
    [anon_sym_Arc] = ACTIONS(290),
    [anon_sym_Spiral] = ACTIONS(290),
    [anon_sym_Parabola] = ACTIONS(290),
    [anon_sym_Segment] = ACTIONS(290),
    [anon_sym_Element] = ACTIONS(290),
    [anon_sym_Model] = ACTIONS(290),
    [anon_sym_View] = ACTIONS(290),
    [anon_sym_Macro_Function] = ACTIONS(290),
    [anon_sym_Function] = ACTIONS(290),
    [anon_sym_Uid] = ACTIONS(290),
    [anon_sym_Guid] = ACTIONS(290),
    [anon_sym_Attributes] = ACTIONS(290),
    [anon_sym_SDR_Attribute] = ACTIONS(290),
    [anon_sym_Blob] = ACTIONS(290),
    [anon_sym_Screen_Text] = ACTIONS(290),
    [anon_sym_Textstyle_Data] = ACTIONS(290),
    [anon_sym_Equality_Label] = ACTIONS(290),
    [anon_sym_Undo] = ACTIONS(290),
    [anon_sym_Undo_List] = ACTIONS(290),
    [anon_sym_Widget] = ACTIONS(290),
    [anon_sym_Menu] = ACTIONS(290),
    [anon_sym_Panel] = ACTIONS(290),
    [anon_sym_Overlay_Widget] = ACTIONS(290),
    [anon_sym_Vertical_Group] = ACTIONS(290),
    [anon_sym_Horizontal_Group] = ACTIONS(290),
    [anon_sym_Widget_Pages] = ACTIONS(290),
    [anon_sym_Button] = ACTIONS(290),
    [anon_sym_Select_Button] = ACTIONS(290),
    [anon_sym_Angle_Box] = ACTIONS(290),
    [anon_sym_Attributes_Box] = ACTIONS(290),
    [anon_sym_Billboard_Box] = ACTIONS(290),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(290),
    [anon_sym_Bitmap_List_Box] = ACTIONS(290),
    [anon_sym_Chainage_Box] = ACTIONS(290),
    [anon_sym_Choice_Box] = ACTIONS(290),
    [anon_sym_Colour_Box] = ACTIONS(290),
    [anon_sym_Colour_Message_Box] = ACTIONS(290),
    [anon_sym_Date_Time_Box] = ACTIONS(290),
    [anon_sym_Directory_Box] = ACTIONS(290),
    [anon_sym_Draw_Box] = ACTIONS(290),
    [anon_sym_File_Box] = ACTIONS(290),
    [anon_sym_Function_Box] = ACTIONS(290),
    [anon_sym_Graph_Box] = ACTIONS(290),
    [anon_sym_GridCtrl_Box] = ACTIONS(290),
    [anon_sym_HyperLink_Box] = ACTIONS(290),
    [anon_sym_Input_Box] = ACTIONS(290),
    [anon_sym_Integer_Box] = ACTIONS(290),
    [anon_sym_Justify_Box] = ACTIONS(290),
    [anon_sym_Linestyle_Box] = ACTIONS(290),
    [anon_sym_List_Box] = ACTIONS(290),
    [anon_sym_ListCtrl_Box] = ACTIONS(290),
    [anon_sym_Map_File_Box] = ACTIONS(290),
    [anon_sym_Message_Box] = ACTIONS(290),
    [anon_sym_Model_Box] = ACTIONS(290),
    [anon_sym_Name_Box] = ACTIONS(290),
    [anon_sym_Named_Tick_Box] = ACTIONS(290),
    [anon_sym_New_Select_Box] = ACTIONS(290),
    [anon_sym_New_XYZ_Box] = ACTIONS(290),
    [anon_sym_Plotter_Box] = ACTIONS(290),
    [anon_sym_Polygon_Box] = ACTIONS(290),
    [anon_sym_Real_Box] = ACTIONS(290),
    [anon_sym_Report_Box] = ACTIONS(290),
    [anon_sym_Select_Box] = ACTIONS(290),
    [anon_sym_Select_Boxes] = ACTIONS(290),
    [anon_sym_Sheet_Size_Box] = ACTIONS(290),
    [anon_sym_Source_Box] = ACTIONS(290),
    [anon_sym_Symbol_Box] = ACTIONS(290),
    [anon_sym_Tab_Box] = ACTIONS(290),
    [anon_sym_Target_Box] = ACTIONS(290),
    [anon_sym_Template_Box] = ACTIONS(290),
    [anon_sym_Text_Edit_Box] = ACTIONS(290),
    [anon_sym_Text_Style_Box] = ACTIONS(290),
    [anon_sym_Texture_Box] = ACTIONS(290),
    [anon_sym_Tree_Box] = ACTIONS(290),
    [anon_sym_Tree_Page] = ACTIONS(290),
    [anon_sym_Tick_Box] = ACTIONS(290),
    [anon_sym_Tin_Box] = ACTIONS(290),
    [anon_sym_View_Box] = ACTIONS(290),
    [anon_sym_XYZ_Box] = ACTIONS(290),
    [anon_sym_File] = ACTIONS(290),
    [anon_sym_Map_File] = ACTIONS(290),
    [anon_sym_Plot_Parameter_File] = ACTIONS(290),
    [anon_sym_XML_Document] = ACTIONS(290),
    [anon_sym_XML_Node] = ACTIONS(290),
    [anon_sym_Connection] = ACTIONS(290),
    [anon_sym_Select_Query] = ACTIONS(290),
    [anon_sym_Insert_Query] = ACTIONS(290),
    [anon_sym_Update_Query] = ACTIONS(290),
    [anon_sym_Delete_Query] = ACTIONS(290),
    [anon_sym_Database_Results] = ACTIONS(290),
    [anon_sym_Transactions] = ACTIONS(290),
    [anon_sym_Parameter_Collection] = ACTIONS(290),
    [anon_sym_Query_Condition] = ACTIONS(290),
    [anon_sym_Manual_Condition] = ACTIONS(290),
    [anon_sym_Dynamic_Element] = ACTIONS(290),
    [anon_sym_Dynamic_Integer] = ACTIONS(290),
    [anon_sym_Dynamic_Real] = ACTIONS(290),
    [anon_sym_Dynamic_Text] = ACTIONS(290),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_RBRACE] = ACTIONS(318),
    [anon_sym_while] = ACTIONS(320),
    [anon_sym_LPAREN] = ACTIONS(318),
    [anon_sym_case] = ACTIONS(320),
    [anon_sym_default] = ACTIONS(320),
    [anon_sym_break] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_continue] = ACTIONS(320),
    [anon_sym_goto] = ACTIONS(320),
    [anon_sym_switch] = ACTIONS(320),
    [anon_sym_if] = ACTIONS(320),
    [anon_sym_for] = ACTIONS(320),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_DASH] = ACTIONS(318),
    [anon_sym_PLUS] = ACTIONS(318),
    [anon_sym_return] = ACTIONS(320),
    [sym_identifier] = ACTIONS(320),
    [sym_number_literal] = ACTIONS(318),
    [anon_sym_DQUOTE] = ACTIONS(318),
    [anon_sym_void] = ACTIONS(320),
    [anon_sym_Integer] = ACTIONS(320),
    [anon_sym_Real] = ACTIONS(320),
    [anon_sym_Text] = ACTIONS(320),
    [anon_sym_Vector2] = ACTIONS(320),
    [anon_sym_Vector3] = ACTIONS(320),
    [anon_sym_Vector4] = ACTIONS(320),
    [anon_sym_Matrix3] = ACTIONS(320),
    [anon_sym_Matrix4] = ACTIONS(320),
    [anon_sym_Point] = ACTIONS(320),
    [anon_sym_Line] = ACTIONS(320),
    [anon_sym_Arc] = ACTIONS(320),
    [anon_sym_Spiral] = ACTIONS(320),
    [anon_sym_Parabola] = ACTIONS(320),
    [anon_sym_Segment] = ACTIONS(320),
    [anon_sym_Element] = ACTIONS(320),
    [anon_sym_Model] = ACTIONS(320),
    [anon_sym_View] = ACTIONS(320),
    [anon_sym_Macro_Function] = ACTIONS(320),
    [anon_sym_Function] = ACTIONS(320),
    [anon_sym_Uid] = ACTIONS(320),
    [anon_sym_Guid] = ACTIONS(320),
    [anon_sym_Attributes] = ACTIONS(320),
    [anon_sym_SDR_Attribute] = ACTIONS(320),
    [anon_sym_Blob] = ACTIONS(320),
    [anon_sym_Screen_Text] = ACTIONS(320),
    [anon_sym_Textstyle_Data] = ACTIONS(320),
    [anon_sym_Equality_Label] = ACTIONS(320),
    [anon_sym_Undo] = ACTIONS(320),
    [anon_sym_Undo_List] = ACTIONS(320),
    [anon_sym_Widget] = ACTIONS(320),
    [anon_sym_Menu] = ACTIONS(320),
    [anon_sym_Panel] = ACTIONS(320),
    [anon_sym_Overlay_Widget] = ACTIONS(320),
    [anon_sym_Vertical_Group] = ACTIONS(320),
    [anon_sym_Horizontal_Group] = ACTIONS(320),
    [anon_sym_Widget_Pages] = ACTIONS(320),
    [anon_sym_Button] = ACTIONS(320),
    [anon_sym_Select_Button] = ACTIONS(320),
    [anon_sym_Angle_Box] = ACTIONS(320),
    [anon_sym_Attributes_Box] = ACTIONS(320),
    [anon_sym_Billboard_Box] = ACTIONS(320),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(320),
    [anon_sym_Bitmap_List_Box] = ACTIONS(320),
    [anon_sym_Chainage_Box] = ACTIONS(320),
    [anon_sym_Choice_Box] = ACTIONS(320),
    [anon_sym_Colour_Box] = ACTIONS(320),
    [anon_sym_Colour_Message_Box] = ACTIONS(320),
    [anon_sym_Date_Time_Box] = ACTIONS(320),
    [anon_sym_Directory_Box] = ACTIONS(320),
    [anon_sym_Draw_Box] = ACTIONS(320),
    [anon_sym_File_Box] = ACTIONS(320),
    [anon_sym_Function_Box] = ACTIONS(320),
    [anon_sym_Graph_Box] = ACTIONS(320),
    [anon_sym_GridCtrl_Box] = ACTIONS(320),
    [anon_sym_HyperLink_Box] = ACTIONS(320),
    [anon_sym_Input_Box] = ACTIONS(320),
    [anon_sym_Integer_Box] = ACTIONS(320),
    [anon_sym_Justify_Box] = ACTIONS(320),
    [anon_sym_Linestyle_Box] = ACTIONS(320),
    [anon_sym_List_Box] = ACTIONS(320),
    [anon_sym_ListCtrl_Box] = ACTIONS(320),
    [anon_sym_Map_File_Box] = ACTIONS(320),
    [anon_sym_Message_Box] = ACTIONS(320),
    [anon_sym_Model_Box] = ACTIONS(320),
    [anon_sym_Name_Box] = ACTIONS(320),
    [anon_sym_Named_Tick_Box] = ACTIONS(320),
    [anon_sym_New_Select_Box] = ACTIONS(320),
    [anon_sym_New_XYZ_Box] = ACTIONS(320),
    [anon_sym_Plotter_Box] = ACTIONS(320),
    [anon_sym_Polygon_Box] = ACTIONS(320),
    [anon_sym_Real_Box] = ACTIONS(320),
    [anon_sym_Report_Box] = ACTIONS(320),
    [anon_sym_Select_Box] = ACTIONS(320),
    [anon_sym_Select_Boxes] = ACTIONS(320),
    [anon_sym_Sheet_Size_Box] = ACTIONS(320),
    [anon_sym_Source_Box] = ACTIONS(320),
    [anon_sym_Symbol_Box] = ACTIONS(320),
    [anon_sym_Tab_Box] = ACTIONS(320),
    [anon_sym_Target_Box] = ACTIONS(320),
    [anon_sym_Template_Box] = ACTIONS(320),
    [anon_sym_Text_Edit_Box] = ACTIONS(320),
    [anon_sym_Text_Style_Box] = ACTIONS(320),
    [anon_sym_Texture_Box] = ACTIONS(320),
    [anon_sym_Tree_Box] = ACTIONS(320),
    [anon_sym_Tree_Page] = ACTIONS(320),
    [anon_sym_Tick_Box] = ACTIONS(320),
    [anon_sym_Tin_Box] = ACTIONS(320),
    [anon_sym_View_Box] = ACTIONS(320),
    [anon_sym_XYZ_Box] = ACTIONS(320),
    [anon_sym_File] = ACTIONS(320),
    [anon_sym_Map_File] = ACTIONS(320),
    [anon_sym_Plot_Parameter_File] = ACTIONS(320),
    [anon_sym_XML_Document] = ACTIONS(320),
    [anon_sym_XML_Node] = ACTIONS(320),
    [anon_sym_Connection] = ACTIONS(320),
    [anon_sym_Select_Query] = ACTIONS(320),
    [anon_sym_Insert_Query] = ACTIONS(320),
    [anon_sym_Update_Query] = ACTIONS(320),
    [anon_sym_Delete_Query] = ACTIONS(320),
    [anon_sym_Database_Results] = ACTIONS(320),
    [anon_sym_Transactions] = ACTIONS(320),
    [anon_sym_Parameter_Collection] = ACTIONS(320),
    [anon_sym_Query_Condition] = ACTIONS(320),
    [anon_sym_Manual_Condition] = ACTIONS(320),
    [anon_sym_Dynamic_Element] = ACTIONS(320),
    [anon_sym_Dynamic_Integer] = ACTIONS(320),
    [anon_sym_Dynamic_Real] = ACTIONS(320),
    [anon_sym_Dynamic_Text] = ACTIONS(320),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_break] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_continue] = ACTIONS(278),
    [anon_sym_goto] = ACTIONS(278),
    [anon_sym_switch] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_for] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(276),
    [anon_sym_DASH] = ACTIONS(276),
    [anon_sym_PLUS] = ACTIONS(276),
    [anon_sym_return] = ACTIONS(278),
    [sym_identifier] = ACTIONS(278),
    [sym_number_literal] = ACTIONS(276),
    [anon_sym_DQUOTE] = ACTIONS(276),
    [anon_sym_void] = ACTIONS(278),
    [anon_sym_Integer] = ACTIONS(278),
    [anon_sym_Real] = ACTIONS(278),
    [anon_sym_Text] = ACTIONS(278),
    [anon_sym_Vector2] = ACTIONS(278),
    [anon_sym_Vector3] = ACTIONS(278),
    [anon_sym_Vector4] = ACTIONS(278),
    [anon_sym_Matrix3] = ACTIONS(278),
    [anon_sym_Matrix4] = ACTIONS(278),
    [anon_sym_Point] = ACTIONS(278),
    [anon_sym_Line] = ACTIONS(278),
    [anon_sym_Arc] = ACTIONS(278),
    [anon_sym_Spiral] = ACTIONS(278),
    [anon_sym_Parabola] = ACTIONS(278),
    [anon_sym_Segment] = ACTIONS(278),
    [anon_sym_Element] = ACTIONS(278),
    [anon_sym_Model] = ACTIONS(278),
    [anon_sym_View] = ACTIONS(278),
    [anon_sym_Macro_Function] = ACTIONS(278),
    [anon_sym_Function] = ACTIONS(278),
    [anon_sym_Uid] = ACTIONS(278),
    [anon_sym_Guid] = ACTIONS(278),
    [anon_sym_Attributes] = ACTIONS(278),
    [anon_sym_SDR_Attribute] = ACTIONS(278),
    [anon_sym_Blob] = ACTIONS(278),
    [anon_sym_Screen_Text] = ACTIONS(278),
    [anon_sym_Textstyle_Data] = ACTIONS(278),
    [anon_sym_Equality_Label] = ACTIONS(278),
    [anon_sym_Undo] = ACTIONS(278),
    [anon_sym_Undo_List] = ACTIONS(278),
    [anon_sym_Widget] = ACTIONS(278),
    [anon_sym_Menu] = ACTIONS(278),
    [anon_sym_Panel] = ACTIONS(278),
    [anon_sym_Overlay_Widget] = ACTIONS(278),
    [anon_sym_Vertical_Group] = ACTIONS(278),
    [anon_sym_Horizontal_Group] = ACTIONS(278),
    [anon_sym_Widget_Pages] = ACTIONS(278),
    [anon_sym_Button] = ACTIONS(278),
    [anon_sym_Select_Button] = ACTIONS(278),
    [anon_sym_Angle_Box] = ACTIONS(278),
    [anon_sym_Attributes_Box] = ACTIONS(278),
    [anon_sym_Billboard_Box] = ACTIONS(278),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(278),
    [anon_sym_Bitmap_List_Box] = ACTIONS(278),
    [anon_sym_Chainage_Box] = ACTIONS(278),
    [anon_sym_Choice_Box] = ACTIONS(278),
    [anon_sym_Colour_Box] = ACTIONS(278),
    [anon_sym_Colour_Message_Box] = ACTIONS(278),
    [anon_sym_Date_Time_Box] = ACTIONS(278),
    [anon_sym_Directory_Box] = ACTIONS(278),
    [anon_sym_Draw_Box] = ACTIONS(278),
    [anon_sym_File_Box] = ACTIONS(278),
    [anon_sym_Function_Box] = ACTIONS(278),
    [anon_sym_Graph_Box] = ACTIONS(278),
    [anon_sym_GridCtrl_Box] = ACTIONS(278),
    [anon_sym_HyperLink_Box] = ACTIONS(278),
    [anon_sym_Input_Box] = ACTIONS(278),
    [anon_sym_Integer_Box] = ACTIONS(278),
    [anon_sym_Justify_Box] = ACTIONS(278),
    [anon_sym_Linestyle_Box] = ACTIONS(278),
    [anon_sym_List_Box] = ACTIONS(278),
    [anon_sym_ListCtrl_Box] = ACTIONS(278),
    [anon_sym_Map_File_Box] = ACTIONS(278),
    [anon_sym_Message_Box] = ACTIONS(278),
    [anon_sym_Model_Box] = ACTIONS(278),
    [anon_sym_Name_Box] = ACTIONS(278),
    [anon_sym_Named_Tick_Box] = ACTIONS(278),
    [anon_sym_New_Select_Box] = ACTIONS(278),
    [anon_sym_New_XYZ_Box] = ACTIONS(278),
    [anon_sym_Plotter_Box] = ACTIONS(278),
    [anon_sym_Polygon_Box] = ACTIONS(278),
    [anon_sym_Real_Box] = ACTIONS(278),
    [anon_sym_Report_Box] = ACTIONS(278),
    [anon_sym_Select_Box] = ACTIONS(278),
    [anon_sym_Select_Boxes] = ACTIONS(278),
    [anon_sym_Sheet_Size_Box] = ACTIONS(278),
    [anon_sym_Source_Box] = ACTIONS(278),
    [anon_sym_Symbol_Box] = ACTIONS(278),
    [anon_sym_Tab_Box] = ACTIONS(278),
    [anon_sym_Target_Box] = ACTIONS(278),
    [anon_sym_Template_Box] = ACTIONS(278),
    [anon_sym_Text_Edit_Box] = ACTIONS(278),
    [anon_sym_Text_Style_Box] = ACTIONS(278),
    [anon_sym_Texture_Box] = ACTIONS(278),
    [anon_sym_Tree_Box] = ACTIONS(278),
    [anon_sym_Tree_Page] = ACTIONS(278),
    [anon_sym_Tick_Box] = ACTIONS(278),
    [anon_sym_Tin_Box] = ACTIONS(278),
    [anon_sym_View_Box] = ACTIONS(278),
    [anon_sym_XYZ_Box] = ACTIONS(278),
    [anon_sym_File] = ACTIONS(278),
    [anon_sym_Map_File] = ACTIONS(278),
    [anon_sym_Plot_Parameter_File] = ACTIONS(278),
    [anon_sym_XML_Document] = ACTIONS(278),
    [anon_sym_XML_Node] = ACTIONS(278),
    [anon_sym_Connection] = ACTIONS(278),
    [anon_sym_Select_Query] = ACTIONS(278),
    [anon_sym_Insert_Query] = ACTIONS(278),
    [anon_sym_Update_Query] = ACTIONS(278),
    [anon_sym_Delete_Query] = ACTIONS(278),
    [anon_sym_Database_Results] = ACTIONS(278),
    [anon_sym_Transactions] = ACTIONS(278),
    [anon_sym_Parameter_Collection] = ACTIONS(278),
    [anon_sym_Query_Condition] = ACTIONS(278),
    [anon_sym_Manual_Condition] = ACTIONS(278),
    [anon_sym_Dynamic_Element] = ACTIONS(278),
    [anon_sym_Dynamic_Integer] = ACTIONS(278),
    [anon_sym_Dynamic_Real] = ACTIONS(278),
    [anon_sym_Dynamic_Text] = ACTIONS(278),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [anon_sym_LBRACE] = ACTIONS(258),
    [anon_sym_RBRACE] = ACTIONS(258),
    [anon_sym_while] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(258),
    [anon_sym_case] = ACTIONS(260),
    [anon_sym_default] = ACTIONS(260),
    [anon_sym_break] = ACTIONS(260),
    [anon_sym_SEMI] = ACTIONS(258),
    [anon_sym_continue] = ACTIONS(260),
    [anon_sym_goto] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(260),
    [anon_sym_if] = ACTIONS(260),
    [anon_sym_for] = ACTIONS(260),
    [anon_sym_BANG] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(258),
    [anon_sym_PLUS] = ACTIONS(258),
    [anon_sym_return] = ACTIONS(260),
    [sym_identifier] = ACTIONS(260),
    [sym_number_literal] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [anon_sym_void] = ACTIONS(260),
    [anon_sym_Integer] = ACTIONS(260),
    [anon_sym_Real] = ACTIONS(260),
    [anon_sym_Text] = ACTIONS(260),
    [anon_sym_Vector2] = ACTIONS(260),
    [anon_sym_Vector3] = ACTIONS(260),
    [anon_sym_Vector4] = ACTIONS(260),
    [anon_sym_Matrix3] = ACTIONS(260),
    [anon_sym_Matrix4] = ACTIONS(260),
    [anon_sym_Point] = ACTIONS(260),
    [anon_sym_Line] = ACTIONS(260),
    [anon_sym_Arc] = ACTIONS(260),
    [anon_sym_Spiral] = ACTIONS(260),
    [anon_sym_Parabola] = ACTIONS(260),
    [anon_sym_Segment] = ACTIONS(260),
    [anon_sym_Element] = ACTIONS(260),
    [anon_sym_Model] = ACTIONS(260),
    [anon_sym_View] = ACTIONS(260),
    [anon_sym_Macro_Function] = ACTIONS(260),
    [anon_sym_Function] = ACTIONS(260),
    [anon_sym_Uid] = ACTIONS(260),
    [anon_sym_Guid] = ACTIONS(260),
    [anon_sym_Attributes] = ACTIONS(260),
    [anon_sym_SDR_Attribute] = ACTIONS(260),
    [anon_sym_Blob] = ACTIONS(260),
    [anon_sym_Screen_Text] = ACTIONS(260),
    [anon_sym_Textstyle_Data] = ACTIONS(260),
    [anon_sym_Equality_Label] = ACTIONS(260),
    [anon_sym_Undo] = ACTIONS(260),
    [anon_sym_Undo_List] = ACTIONS(260),
    [anon_sym_Widget] = ACTIONS(260),
    [anon_sym_Menu] = ACTIONS(260),
    [anon_sym_Panel] = ACTIONS(260),
    [anon_sym_Overlay_Widget] = ACTIONS(260),
    [anon_sym_Vertical_Group] = ACTIONS(260),
    [anon_sym_Horizontal_Group] = ACTIONS(260),
    [anon_sym_Widget_Pages] = ACTIONS(260),
    [anon_sym_Button] = ACTIONS(260),
    [anon_sym_Select_Button] = ACTIONS(260),
    [anon_sym_Angle_Box] = ACTIONS(260),
    [anon_sym_Attributes_Box] = ACTIONS(260),
    [anon_sym_Billboard_Box] = ACTIONS(260),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(260),
    [anon_sym_Bitmap_List_Box] = ACTIONS(260),
    [anon_sym_Chainage_Box] = ACTIONS(260),
    [anon_sym_Choice_Box] = ACTIONS(260),
    [anon_sym_Colour_Box] = ACTIONS(260),
    [anon_sym_Colour_Message_Box] = ACTIONS(260),
    [anon_sym_Date_Time_Box] = ACTIONS(260),
    [anon_sym_Directory_Box] = ACTIONS(260),
    [anon_sym_Draw_Box] = ACTIONS(260),
    [anon_sym_File_Box] = ACTIONS(260),
    [anon_sym_Function_Box] = ACTIONS(260),
    [anon_sym_Graph_Box] = ACTIONS(260),
    [anon_sym_GridCtrl_Box] = ACTIONS(260),
    [anon_sym_HyperLink_Box] = ACTIONS(260),
    [anon_sym_Input_Box] = ACTIONS(260),
    [anon_sym_Integer_Box] = ACTIONS(260),
    [anon_sym_Justify_Box] = ACTIONS(260),
    [anon_sym_Linestyle_Box] = ACTIONS(260),
    [anon_sym_List_Box] = ACTIONS(260),
    [anon_sym_ListCtrl_Box] = ACTIONS(260),
    [anon_sym_Map_File_Box] = ACTIONS(260),
    [anon_sym_Message_Box] = ACTIONS(260),
    [anon_sym_Model_Box] = ACTIONS(260),
    [anon_sym_Name_Box] = ACTIONS(260),
    [anon_sym_Named_Tick_Box] = ACTIONS(260),
    [anon_sym_New_Select_Box] = ACTIONS(260),
    [anon_sym_New_XYZ_Box] = ACTIONS(260),
    [anon_sym_Plotter_Box] = ACTIONS(260),
    [anon_sym_Polygon_Box] = ACTIONS(260),
    [anon_sym_Real_Box] = ACTIONS(260),
    [anon_sym_Report_Box] = ACTIONS(260),
    [anon_sym_Select_Box] = ACTIONS(260),
    [anon_sym_Select_Boxes] = ACTIONS(260),
    [anon_sym_Sheet_Size_Box] = ACTIONS(260),
    [anon_sym_Source_Box] = ACTIONS(260),
    [anon_sym_Symbol_Box] = ACTIONS(260),
    [anon_sym_Tab_Box] = ACTIONS(260),
    [anon_sym_Target_Box] = ACTIONS(260),
    [anon_sym_Template_Box] = ACTIONS(260),
    [anon_sym_Text_Edit_Box] = ACTIONS(260),
    [anon_sym_Text_Style_Box] = ACTIONS(260),
    [anon_sym_Texture_Box] = ACTIONS(260),
    [anon_sym_Tree_Box] = ACTIONS(260),
    [anon_sym_Tree_Page] = ACTIONS(260),
    [anon_sym_Tick_Box] = ACTIONS(260),
    [anon_sym_Tin_Box] = ACTIONS(260),
    [anon_sym_View_Box] = ACTIONS(260),
    [anon_sym_XYZ_Box] = ACTIONS(260),
    [anon_sym_File] = ACTIONS(260),
    [anon_sym_Map_File] = ACTIONS(260),
    [anon_sym_Plot_Parameter_File] = ACTIONS(260),
    [anon_sym_XML_Document] = ACTIONS(260),
    [anon_sym_XML_Node] = ACTIONS(260),
    [anon_sym_Connection] = ACTIONS(260),
    [anon_sym_Select_Query] = ACTIONS(260),
    [anon_sym_Insert_Query] = ACTIONS(260),
    [anon_sym_Update_Query] = ACTIONS(260),
    [anon_sym_Delete_Query] = ACTIONS(260),
    [anon_sym_Database_Results] = ACTIONS(260),
    [anon_sym_Transactions] = ACTIONS(260),
    [anon_sym_Parameter_Collection] = ACTIONS(260),
    [anon_sym_Query_Condition] = ACTIONS(260),
    [anon_sym_Manual_Condition] = ACTIONS(260),
    [anon_sym_Dynamic_Element] = ACTIONS(260),
    [anon_sym_Dynamic_Integer] = ACTIONS(260),
    [anon_sym_Dynamic_Real] = ACTIONS(260),
    [anon_sym_Dynamic_Text] = ACTIONS(260),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_while] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
    [anon_sym_break] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_continue] = ACTIONS(256),
    [anon_sym_goto] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_for] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_return] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_number_literal] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_void] = ACTIONS(256),
    [anon_sym_Integer] = ACTIONS(256),
    [anon_sym_Real] = ACTIONS(256),
    [anon_sym_Text] = ACTIONS(256),
    [anon_sym_Vector2] = ACTIONS(256),
    [anon_sym_Vector3] = ACTIONS(256),
    [anon_sym_Vector4] = ACTIONS(256),
    [anon_sym_Matrix3] = ACTIONS(256),
    [anon_sym_Matrix4] = ACTIONS(256),
    [anon_sym_Point] = ACTIONS(256),
    [anon_sym_Line] = ACTIONS(256),
    [anon_sym_Arc] = ACTIONS(256),
    [anon_sym_Spiral] = ACTIONS(256),
    [anon_sym_Parabola] = ACTIONS(256),
    [anon_sym_Segment] = ACTIONS(256),
    [anon_sym_Element] = ACTIONS(256),
    [anon_sym_Model] = ACTIONS(256),
    [anon_sym_View] = ACTIONS(256),
    [anon_sym_Macro_Function] = ACTIONS(256),
    [anon_sym_Function] = ACTIONS(256),
    [anon_sym_Uid] = ACTIONS(256),
    [anon_sym_Guid] = ACTIONS(256),
    [anon_sym_Attributes] = ACTIONS(256),
    [anon_sym_SDR_Attribute] = ACTIONS(256),
    [anon_sym_Blob] = ACTIONS(256),
    [anon_sym_Screen_Text] = ACTIONS(256),
    [anon_sym_Textstyle_Data] = ACTIONS(256),
    [anon_sym_Equality_Label] = ACTIONS(256),
    [anon_sym_Undo] = ACTIONS(256),
    [anon_sym_Undo_List] = ACTIONS(256),
    [anon_sym_Widget] = ACTIONS(256),
    [anon_sym_Menu] = ACTIONS(256),
    [anon_sym_Panel] = ACTIONS(256),
    [anon_sym_Overlay_Widget] = ACTIONS(256),
    [anon_sym_Vertical_Group] = ACTIONS(256),
    [anon_sym_Horizontal_Group] = ACTIONS(256),
    [anon_sym_Widget_Pages] = ACTIONS(256),
    [anon_sym_Button] = ACTIONS(256),
    [anon_sym_Select_Button] = ACTIONS(256),
    [anon_sym_Angle_Box] = ACTIONS(256),
    [anon_sym_Attributes_Box] = ACTIONS(256),
    [anon_sym_Billboard_Box] = ACTIONS(256),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(256),
    [anon_sym_Bitmap_List_Box] = ACTIONS(256),
    [anon_sym_Chainage_Box] = ACTIONS(256),
    [anon_sym_Choice_Box] = ACTIONS(256),
    [anon_sym_Colour_Box] = ACTIONS(256),
    [anon_sym_Colour_Message_Box] = ACTIONS(256),
    [anon_sym_Date_Time_Box] = ACTIONS(256),
    [anon_sym_Directory_Box] = ACTIONS(256),
    [anon_sym_Draw_Box] = ACTIONS(256),
    [anon_sym_File_Box] = ACTIONS(256),
    [anon_sym_Function_Box] = ACTIONS(256),
    [anon_sym_Graph_Box] = ACTIONS(256),
    [anon_sym_GridCtrl_Box] = ACTIONS(256),
    [anon_sym_HyperLink_Box] = ACTIONS(256),
    [anon_sym_Input_Box] = ACTIONS(256),
    [anon_sym_Integer_Box] = ACTIONS(256),
    [anon_sym_Justify_Box] = ACTIONS(256),
    [anon_sym_Linestyle_Box] = ACTIONS(256),
    [anon_sym_List_Box] = ACTIONS(256),
    [anon_sym_ListCtrl_Box] = ACTIONS(256),
    [anon_sym_Map_File_Box] = ACTIONS(256),
    [anon_sym_Message_Box] = ACTIONS(256),
    [anon_sym_Model_Box] = ACTIONS(256),
    [anon_sym_Name_Box] = ACTIONS(256),
    [anon_sym_Named_Tick_Box] = ACTIONS(256),
    [anon_sym_New_Select_Box] = ACTIONS(256),
    [anon_sym_New_XYZ_Box] = ACTIONS(256),
    [anon_sym_Plotter_Box] = ACTIONS(256),
    [anon_sym_Polygon_Box] = ACTIONS(256),
    [anon_sym_Real_Box] = ACTIONS(256),
    [anon_sym_Report_Box] = ACTIONS(256),
    [anon_sym_Select_Box] = ACTIONS(256),
    [anon_sym_Select_Boxes] = ACTIONS(256),
    [anon_sym_Sheet_Size_Box] = ACTIONS(256),
    [anon_sym_Source_Box] = ACTIONS(256),
    [anon_sym_Symbol_Box] = ACTIONS(256),
    [anon_sym_Tab_Box] = ACTIONS(256),
    [anon_sym_Target_Box] = ACTIONS(256),
    [anon_sym_Template_Box] = ACTIONS(256),
    [anon_sym_Text_Edit_Box] = ACTIONS(256),
    [anon_sym_Text_Style_Box] = ACTIONS(256),
    [anon_sym_Texture_Box] = ACTIONS(256),
    [anon_sym_Tree_Box] = ACTIONS(256),
    [anon_sym_Tree_Page] = ACTIONS(256),
    [anon_sym_Tick_Box] = ACTIONS(256),
    [anon_sym_Tin_Box] = ACTIONS(256),
    [anon_sym_View_Box] = ACTIONS(256),
    [anon_sym_XYZ_Box] = ACTIONS(256),
    [anon_sym_File] = ACTIONS(256),
    [anon_sym_Map_File] = ACTIONS(256),
    [anon_sym_Plot_Parameter_File] = ACTIONS(256),
    [anon_sym_XML_Document] = ACTIONS(256),
    [anon_sym_XML_Node] = ACTIONS(256),
    [anon_sym_Connection] = ACTIONS(256),
    [anon_sym_Select_Query] = ACTIONS(256),
    [anon_sym_Insert_Query] = ACTIONS(256),
    [anon_sym_Update_Query] = ACTIONS(256),
    [anon_sym_Delete_Query] = ACTIONS(256),
    [anon_sym_Database_Results] = ACTIONS(256),
    [anon_sym_Transactions] = ACTIONS(256),
    [anon_sym_Parameter_Collection] = ACTIONS(256),
    [anon_sym_Query_Condition] = ACTIONS(256),
    [anon_sym_Manual_Condition] = ACTIONS(256),
    [anon_sym_Dynamic_Element] = ACTIONS(256),
    [anon_sym_Dynamic_Integer] = ACTIONS(256),
    [anon_sym_Dynamic_Real] = ACTIONS(256),
    [anon_sym_Dynamic_Text] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [67] = {
    [anon_sym_LBRACE] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
    [anon_sym_while] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(254),
    [anon_sym_case] = ACTIONS(256),
    [anon_sym_default] = ACTIONS(256),
    [anon_sym_break] = ACTIONS(256),
    [anon_sym_SEMI] = ACTIONS(254),
    [anon_sym_continue] = ACTIONS(256),
    [anon_sym_goto] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(256),
    [anon_sym_if] = ACTIONS(256),
    [anon_sym_for] = ACTIONS(256),
    [anon_sym_BANG] = ACTIONS(254),
    [anon_sym_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(254),
    [anon_sym_return] = ACTIONS(256),
    [sym_identifier] = ACTIONS(256),
    [sym_number_literal] = ACTIONS(254),
    [anon_sym_DQUOTE] = ACTIONS(254),
    [anon_sym_void] = ACTIONS(256),
    [anon_sym_Integer] = ACTIONS(256),
    [anon_sym_Real] = ACTIONS(256),
    [anon_sym_Text] = ACTIONS(256),
    [anon_sym_Vector2] = ACTIONS(256),
    [anon_sym_Vector3] = ACTIONS(256),
    [anon_sym_Vector4] = ACTIONS(256),
    [anon_sym_Matrix3] = ACTIONS(256),
    [anon_sym_Matrix4] = ACTIONS(256),
    [anon_sym_Point] = ACTIONS(256),
    [anon_sym_Line] = ACTIONS(256),
    [anon_sym_Arc] = ACTIONS(256),
    [anon_sym_Spiral] = ACTIONS(256),
    [anon_sym_Parabola] = ACTIONS(256),
    [anon_sym_Segment] = ACTIONS(256),
    [anon_sym_Element] = ACTIONS(256),
    [anon_sym_Model] = ACTIONS(256),
    [anon_sym_View] = ACTIONS(256),
    [anon_sym_Macro_Function] = ACTIONS(256),
    [anon_sym_Function] = ACTIONS(256),
    [anon_sym_Uid] = ACTIONS(256),
    [anon_sym_Guid] = ACTIONS(256),
    [anon_sym_Attributes] = ACTIONS(256),
    [anon_sym_SDR_Attribute] = ACTIONS(256),
    [anon_sym_Blob] = ACTIONS(256),
    [anon_sym_Screen_Text] = ACTIONS(256),
    [anon_sym_Textstyle_Data] = ACTIONS(256),
    [anon_sym_Equality_Label] = ACTIONS(256),
    [anon_sym_Undo] = ACTIONS(256),
    [anon_sym_Undo_List] = ACTIONS(256),
    [anon_sym_Widget] = ACTIONS(256),
    [anon_sym_Menu] = ACTIONS(256),
    [anon_sym_Panel] = ACTIONS(256),
    [anon_sym_Overlay_Widget] = ACTIONS(256),
    [anon_sym_Vertical_Group] = ACTIONS(256),
    [anon_sym_Horizontal_Group] = ACTIONS(256),
    [anon_sym_Widget_Pages] = ACTIONS(256),
    [anon_sym_Button] = ACTIONS(256),
    [anon_sym_Select_Button] = ACTIONS(256),
    [anon_sym_Angle_Box] = ACTIONS(256),
    [anon_sym_Attributes_Box] = ACTIONS(256),
    [anon_sym_Billboard_Box] = ACTIONS(256),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(256),
    [anon_sym_Bitmap_List_Box] = ACTIONS(256),
    [anon_sym_Chainage_Box] = ACTIONS(256),
    [anon_sym_Choice_Box] = ACTIONS(256),
    [anon_sym_Colour_Box] = ACTIONS(256),
    [anon_sym_Colour_Message_Box] = ACTIONS(256),
    [anon_sym_Date_Time_Box] = ACTIONS(256),
    [anon_sym_Directory_Box] = ACTIONS(256),
    [anon_sym_Draw_Box] = ACTIONS(256),
    [anon_sym_File_Box] = ACTIONS(256),
    [anon_sym_Function_Box] = ACTIONS(256),
    [anon_sym_Graph_Box] = ACTIONS(256),
    [anon_sym_GridCtrl_Box] = ACTIONS(256),
    [anon_sym_HyperLink_Box] = ACTIONS(256),
    [anon_sym_Input_Box] = ACTIONS(256),
    [anon_sym_Integer_Box] = ACTIONS(256),
    [anon_sym_Justify_Box] = ACTIONS(256),
    [anon_sym_Linestyle_Box] = ACTIONS(256),
    [anon_sym_List_Box] = ACTIONS(256),
    [anon_sym_ListCtrl_Box] = ACTIONS(256),
    [anon_sym_Map_File_Box] = ACTIONS(256),
    [anon_sym_Message_Box] = ACTIONS(256),
    [anon_sym_Model_Box] = ACTIONS(256),
    [anon_sym_Name_Box] = ACTIONS(256),
    [anon_sym_Named_Tick_Box] = ACTIONS(256),
    [anon_sym_New_Select_Box] = ACTIONS(256),
    [anon_sym_New_XYZ_Box] = ACTIONS(256),
    [anon_sym_Plotter_Box] = ACTIONS(256),
    [anon_sym_Polygon_Box] = ACTIONS(256),
    [anon_sym_Real_Box] = ACTIONS(256),
    [anon_sym_Report_Box] = ACTIONS(256),
    [anon_sym_Select_Box] = ACTIONS(256),
    [anon_sym_Select_Boxes] = ACTIONS(256),
    [anon_sym_Sheet_Size_Box] = ACTIONS(256),
    [anon_sym_Source_Box] = ACTIONS(256),
    [anon_sym_Symbol_Box] = ACTIONS(256),
    [anon_sym_Tab_Box] = ACTIONS(256),
    [anon_sym_Target_Box] = ACTIONS(256),
    [anon_sym_Template_Box] = ACTIONS(256),
    [anon_sym_Text_Edit_Box] = ACTIONS(256),
    [anon_sym_Text_Style_Box] = ACTIONS(256),
    [anon_sym_Texture_Box] = ACTIONS(256),
    [anon_sym_Tree_Box] = ACTIONS(256),
    [anon_sym_Tree_Page] = ACTIONS(256),
    [anon_sym_Tick_Box] = ACTIONS(256),
    [anon_sym_Tin_Box] = ACTIONS(256),
    [anon_sym_View_Box] = ACTIONS(256),
    [anon_sym_XYZ_Box] = ACTIONS(256),
    [anon_sym_File] = ACTIONS(256),
    [anon_sym_Map_File] = ACTIONS(256),
    [anon_sym_Plot_Parameter_File] = ACTIONS(256),
    [anon_sym_XML_Document] = ACTIONS(256),
    [anon_sym_XML_Node] = ACTIONS(256),
    [anon_sym_Connection] = ACTIONS(256),
    [anon_sym_Select_Query] = ACTIONS(256),
    [anon_sym_Insert_Query] = ACTIONS(256),
    [anon_sym_Update_Query] = ACTIONS(256),
    [anon_sym_Delete_Query] = ACTIONS(256),
    [anon_sym_Database_Results] = ACTIONS(256),
    [anon_sym_Transactions] = ACTIONS(256),
    [anon_sym_Parameter_Collection] = ACTIONS(256),
    [anon_sym_Query_Condition] = ACTIONS(256),
    [anon_sym_Manual_Condition] = ACTIONS(256),
    [anon_sym_Dynamic_Element] = ACTIONS(256),
    [anon_sym_Dynamic_Integer] = ACTIONS(256),
    [anon_sym_Dynamic_Real] = ACTIONS(256),
    [anon_sym_Dynamic_Text] = ACTIONS(256),
    [sym_comment] = ACTIONS(3),
  },
  [68] = {
    [sym__definition] = STATE(68),
    [sym_function_definition] = STATE(68),
    [sym_compound_statement] = STATE(68),
    [sym__declaration_specifiers] = STATE(184),
    [sym__type_specifier] = STATE(197),
    [sym_preproc_include] = STATE(68),
    [sym_preproc_def] = STATE(68),
    [sym_primitive_type] = STATE(197),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(324),
    [aux_sym_preproc_include_token1] = ACTIONS(327),
    [aux_sym_preproc_def_token1] = ACTIONS(330),
    [anon_sym_void] = ACTIONS(333),
    [anon_sym_Integer] = ACTIONS(336),
    [anon_sym_Real] = ACTIONS(336),
    [anon_sym_Text] = ACTIONS(336),
    [anon_sym_Vector2] = ACTIONS(333),
    [anon_sym_Vector3] = ACTIONS(333),
    [anon_sym_Vector4] = ACTIONS(333),
    [anon_sym_Matrix3] = ACTIONS(333),
    [anon_sym_Matrix4] = ACTIONS(333),
    [anon_sym_Point] = ACTIONS(333),
    [anon_sym_Line] = ACTIONS(336),
    [anon_sym_Arc] = ACTIONS(333),
    [anon_sym_Spiral] = ACTIONS(333),
    [anon_sym_Parabola] = ACTIONS(333),
    [anon_sym_Segment] = ACTIONS(333),
    [anon_sym_Element] = ACTIONS(333),
    [anon_sym_Model] = ACTIONS(336),
    [anon_sym_View] = ACTIONS(336),
    [anon_sym_Macro_Function] = ACTIONS(333),
    [anon_sym_Function] = ACTIONS(336),
    [anon_sym_Uid] = ACTIONS(333),
    [anon_sym_Guid] = ACTIONS(333),
    [anon_sym_Attributes] = ACTIONS(336),
    [anon_sym_SDR_Attribute] = ACTIONS(333),
    [anon_sym_Blob] = ACTIONS(333),
    [anon_sym_Screen_Text] = ACTIONS(333),
    [anon_sym_Textstyle_Data] = ACTIONS(333),
    [anon_sym_Equality_Label] = ACTIONS(333),
    [anon_sym_Undo] = ACTIONS(336),
    [anon_sym_Undo_List] = ACTIONS(333),
    [anon_sym_Widget] = ACTIONS(336),
    [anon_sym_Menu] = ACTIONS(333),
    [anon_sym_Panel] = ACTIONS(333),
    [anon_sym_Overlay_Widget] = ACTIONS(333),
    [anon_sym_Vertical_Group] = ACTIONS(333),
    [anon_sym_Horizontal_Group] = ACTIONS(333),
    [anon_sym_Widget_Pages] = ACTIONS(333),
    [anon_sym_Button] = ACTIONS(333),
    [anon_sym_Select_Button] = ACTIONS(333),
    [anon_sym_Angle_Box] = ACTIONS(333),
    [anon_sym_Attributes_Box] = ACTIONS(333),
    [anon_sym_Billboard_Box] = ACTIONS(333),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(333),
    [anon_sym_Bitmap_List_Box] = ACTIONS(333),
    [anon_sym_Chainage_Box] = ACTIONS(333),
    [anon_sym_Choice_Box] = ACTIONS(333),
    [anon_sym_Colour_Box] = ACTIONS(333),
    [anon_sym_Colour_Message_Box] = ACTIONS(333),
    [anon_sym_Date_Time_Box] = ACTIONS(333),
    [anon_sym_Directory_Box] = ACTIONS(333),
    [anon_sym_Draw_Box] = ACTIONS(333),
    [anon_sym_File_Box] = ACTIONS(333),
    [anon_sym_Function_Box] = ACTIONS(333),
    [anon_sym_Graph_Box] = ACTIONS(333),
    [anon_sym_GridCtrl_Box] = ACTIONS(333),
    [anon_sym_HyperLink_Box] = ACTIONS(333),
    [anon_sym_Input_Box] = ACTIONS(333),
    [anon_sym_Integer_Box] = ACTIONS(333),
    [anon_sym_Justify_Box] = ACTIONS(333),
    [anon_sym_Linestyle_Box] = ACTIONS(333),
    [anon_sym_List_Box] = ACTIONS(333),
    [anon_sym_ListCtrl_Box] = ACTIONS(333),
    [anon_sym_Map_File_Box] = ACTIONS(333),
    [anon_sym_Message_Box] = ACTIONS(333),
    [anon_sym_Model_Box] = ACTIONS(333),
    [anon_sym_Name_Box] = ACTIONS(333),
    [anon_sym_Named_Tick_Box] = ACTIONS(333),
    [anon_sym_New_Select_Box] = ACTIONS(333),
    [anon_sym_New_XYZ_Box] = ACTIONS(333),
    [anon_sym_Plotter_Box] = ACTIONS(333),
    [anon_sym_Polygon_Box] = ACTIONS(333),
    [anon_sym_Real_Box] = ACTIONS(333),
    [anon_sym_Report_Box] = ACTIONS(333),
    [anon_sym_Select_Box] = ACTIONS(336),
    [anon_sym_Select_Boxes] = ACTIONS(333),
    [anon_sym_Sheet_Size_Box] = ACTIONS(333),
    [anon_sym_Source_Box] = ACTIONS(333),
    [anon_sym_Symbol_Box] = ACTIONS(333),
    [anon_sym_Tab_Box] = ACTIONS(333),
    [anon_sym_Target_Box] = ACTIONS(333),
    [anon_sym_Template_Box] = ACTIONS(333),
    [anon_sym_Text_Edit_Box] = ACTIONS(333),
    [anon_sym_Text_Style_Box] = ACTIONS(333),
    [anon_sym_Texture_Box] = ACTIONS(333),
    [anon_sym_Tree_Box] = ACTIONS(333),
    [anon_sym_Tree_Page] = ACTIONS(333),
    [anon_sym_Tick_Box] = ACTIONS(333),
    [anon_sym_Tin_Box] = ACTIONS(333),
    [anon_sym_View_Box] = ACTIONS(333),
    [anon_sym_XYZ_Box] = ACTIONS(333),
    [anon_sym_File] = ACTIONS(336),
    [anon_sym_Map_File] = ACTIONS(336),
    [anon_sym_Plot_Parameter_File] = ACTIONS(333),
    [anon_sym_XML_Document] = ACTIONS(333),
    [anon_sym_XML_Node] = ACTIONS(333),
    [anon_sym_Connection] = ACTIONS(333),
    [anon_sym_Select_Query] = ACTIONS(333),
    [anon_sym_Insert_Query] = ACTIONS(333),
    [anon_sym_Update_Query] = ACTIONS(333),
    [anon_sym_Delete_Query] = ACTIONS(333),
    [anon_sym_Database_Results] = ACTIONS(333),
    [anon_sym_Transactions] = ACTIONS(333),
    [anon_sym_Parameter_Collection] = ACTIONS(333),
    [anon_sym_Query_Condition] = ACTIONS(333),
    [anon_sym_Manual_Condition] = ACTIONS(333),
    [anon_sym_Dynamic_Element] = ACTIONS(333),
    [anon_sym_Dynamic_Integer] = ACTIONS(333),
    [anon_sym_Dynamic_Real] = ACTIONS(333),
    [anon_sym_Dynamic_Text] = ACTIONS(333),
    [sym_comment] = ACTIONS(3),
  },
  [69] = {
    [sym__definition] = STATE(68),
    [sym_function_definition] = STATE(68),
    [sym_compound_statement] = STATE(68),
    [sym__declaration_specifiers] = STATE(184),
    [sym__type_specifier] = STATE(197),
    [sym_preproc_include] = STATE(68),
    [sym_preproc_def] = STATE(68),
    [sym_primitive_type] = STATE(197),
    [aux_sym_source_file_repeat1] = STATE(68),
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_LBRACE] = ACTIONS(7),
    [aux_sym_preproc_include_token1] = ACTIONS(9),
    [aux_sym_preproc_def_token1] = ACTIONS(11),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [70] = {
    [sym_parameter_declaration] = STATE(185),
    [sym__declaration_specifiers] = STATE(171),
    [sym__type_specifier] = STATE(197),
    [sym_primitive_type] = STATE(197),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [71] = {
    [sym_parameter_declaration] = STATE(212),
    [sym__declaration_specifiers] = STATE(171),
    [sym__type_specifier] = STATE(197),
    [sym_primitive_type] = STATE(197),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [72] = {
    [sym__declaration_specifiers] = STATE(174),
    [sym__type_specifier] = STATE(197),
    [sym_declaration] = STATE(148),
    [sym_primitive_type] = STATE(197),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [aux_sym_preproc_include_token1] = ACTIONS(343),
    [aux_sym_preproc_def_token1] = ACTIONS(343),
    [anon_sym_void] = ACTIONS(343),
    [anon_sym_Integer] = ACTIONS(345),
    [anon_sym_Real] = ACTIONS(345),
    [anon_sym_Text] = ACTIONS(345),
    [anon_sym_Vector2] = ACTIONS(343),
    [anon_sym_Vector3] = ACTIONS(343),
    [anon_sym_Vector4] = ACTIONS(343),
    [anon_sym_Matrix3] = ACTIONS(343),
    [anon_sym_Matrix4] = ACTIONS(343),
    [anon_sym_Point] = ACTIONS(343),
    [anon_sym_Line] = ACTIONS(345),
    [anon_sym_Arc] = ACTIONS(343),
    [anon_sym_Spiral] = ACTIONS(343),
    [anon_sym_Parabola] = ACTIONS(343),
    [anon_sym_Segment] = ACTIONS(343),
    [anon_sym_Element] = ACTIONS(343),
    [anon_sym_Model] = ACTIONS(345),
    [anon_sym_View] = ACTIONS(345),
    [anon_sym_Macro_Function] = ACTIONS(343),
    [anon_sym_Function] = ACTIONS(345),
    [anon_sym_Uid] = ACTIONS(343),
    [anon_sym_Guid] = ACTIONS(343),
    [anon_sym_Attributes] = ACTIONS(345),
    [anon_sym_SDR_Attribute] = ACTIONS(343),
    [anon_sym_Blob] = ACTIONS(343),
    [anon_sym_Screen_Text] = ACTIONS(343),
    [anon_sym_Textstyle_Data] = ACTIONS(343),
    [anon_sym_Equality_Label] = ACTIONS(343),
    [anon_sym_Undo] = ACTIONS(345),
    [anon_sym_Undo_List] = ACTIONS(343),
    [anon_sym_Widget] = ACTIONS(345),
    [anon_sym_Menu] = ACTIONS(343),
    [anon_sym_Panel] = ACTIONS(343),
    [anon_sym_Overlay_Widget] = ACTIONS(343),
    [anon_sym_Vertical_Group] = ACTIONS(343),
    [anon_sym_Horizontal_Group] = ACTIONS(343),
    [anon_sym_Widget_Pages] = ACTIONS(343),
    [anon_sym_Button] = ACTIONS(343),
    [anon_sym_Select_Button] = ACTIONS(343),
    [anon_sym_Angle_Box] = ACTIONS(343),
    [anon_sym_Attributes_Box] = ACTIONS(343),
    [anon_sym_Billboard_Box] = ACTIONS(343),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(343),
    [anon_sym_Bitmap_List_Box] = ACTIONS(343),
    [anon_sym_Chainage_Box] = ACTIONS(343),
    [anon_sym_Choice_Box] = ACTIONS(343),
    [anon_sym_Colour_Box] = ACTIONS(343),
    [anon_sym_Colour_Message_Box] = ACTIONS(343),
    [anon_sym_Date_Time_Box] = ACTIONS(343),
    [anon_sym_Directory_Box] = ACTIONS(343),
    [anon_sym_Draw_Box] = ACTIONS(343),
    [anon_sym_File_Box] = ACTIONS(343),
    [anon_sym_Function_Box] = ACTIONS(343),
    [anon_sym_Graph_Box] = ACTIONS(343),
    [anon_sym_GridCtrl_Box] = ACTIONS(343),
    [anon_sym_HyperLink_Box] = ACTIONS(343),
    [anon_sym_Input_Box] = ACTIONS(343),
    [anon_sym_Integer_Box] = ACTIONS(343),
    [anon_sym_Justify_Box] = ACTIONS(343),
    [anon_sym_Linestyle_Box] = ACTIONS(343),
    [anon_sym_List_Box] = ACTIONS(343),
    [anon_sym_ListCtrl_Box] = ACTIONS(343),
    [anon_sym_Map_File_Box] = ACTIONS(343),
    [anon_sym_Message_Box] = ACTIONS(343),
    [anon_sym_Model_Box] = ACTIONS(343),
    [anon_sym_Name_Box] = ACTIONS(343),
    [anon_sym_Named_Tick_Box] = ACTIONS(343),
    [anon_sym_New_Select_Box] = ACTIONS(343),
    [anon_sym_New_XYZ_Box] = ACTIONS(343),
    [anon_sym_Plotter_Box] = ACTIONS(343),
    [anon_sym_Polygon_Box] = ACTIONS(343),
    [anon_sym_Real_Box] = ACTIONS(343),
    [anon_sym_Report_Box] = ACTIONS(343),
    [anon_sym_Select_Box] = ACTIONS(345),
    [anon_sym_Select_Boxes] = ACTIONS(343),
    [anon_sym_Sheet_Size_Box] = ACTIONS(343),
    [anon_sym_Source_Box] = ACTIONS(343),
    [anon_sym_Symbol_Box] = ACTIONS(343),
    [anon_sym_Tab_Box] = ACTIONS(343),
    [anon_sym_Target_Box] = ACTIONS(343),
    [anon_sym_Template_Box] = ACTIONS(343),
    [anon_sym_Text_Edit_Box] = ACTIONS(343),
    [anon_sym_Text_Style_Box] = ACTIONS(343),
    [anon_sym_Texture_Box] = ACTIONS(343),
    [anon_sym_Tree_Box] = ACTIONS(343),
    [anon_sym_Tree_Page] = ACTIONS(343),
    [anon_sym_Tick_Box] = ACTIONS(343),
    [anon_sym_Tin_Box] = ACTIONS(343),
    [anon_sym_View_Box] = ACTIONS(343),
    [anon_sym_XYZ_Box] = ACTIONS(343),
    [anon_sym_File] = ACTIONS(345),
    [anon_sym_Map_File] = ACTIONS(345),
    [anon_sym_Plot_Parameter_File] = ACTIONS(343),
    [anon_sym_XML_Document] = ACTIONS(343),
    [anon_sym_XML_Node] = ACTIONS(343),
    [anon_sym_Connection] = ACTIONS(343),
    [anon_sym_Select_Query] = ACTIONS(343),
    [anon_sym_Insert_Query] = ACTIONS(343),
    [anon_sym_Update_Query] = ACTIONS(343),
    [anon_sym_Delete_Query] = ACTIONS(343),
    [anon_sym_Database_Results] = ACTIONS(343),
    [anon_sym_Transactions] = ACTIONS(343),
    [anon_sym_Parameter_Collection] = ACTIONS(343),
    [anon_sym_Query_Condition] = ACTIONS(343),
    [anon_sym_Manual_Condition] = ACTIONS(343),
    [anon_sym_Dynamic_Element] = ACTIONS(343),
    [anon_sym_Dynamic_Integer] = ACTIONS(343),
    [anon_sym_Dynamic_Real] = ACTIONS(343),
    [anon_sym_Dynamic_Text] = ACTIONS(343),
    [sym_comment] = ACTIONS(3),
  },
  [74] = {
    [sym__declaration_specifiers] = STATE(174),
    [sym__type_specifier] = STATE(197),
    [sym_declaration] = STATE(142),
    [sym_primitive_type] = STATE(197),
    [anon_sym_void] = ACTIONS(13),
    [anon_sym_Integer] = ACTIONS(15),
    [anon_sym_Real] = ACTIONS(15),
    [anon_sym_Text] = ACTIONS(15),
    [anon_sym_Vector2] = ACTIONS(13),
    [anon_sym_Vector3] = ACTIONS(13),
    [anon_sym_Vector4] = ACTIONS(13),
    [anon_sym_Matrix3] = ACTIONS(13),
    [anon_sym_Matrix4] = ACTIONS(13),
    [anon_sym_Point] = ACTIONS(13),
    [anon_sym_Line] = ACTIONS(15),
    [anon_sym_Arc] = ACTIONS(13),
    [anon_sym_Spiral] = ACTIONS(13),
    [anon_sym_Parabola] = ACTIONS(13),
    [anon_sym_Segment] = ACTIONS(13),
    [anon_sym_Element] = ACTIONS(13),
    [anon_sym_Model] = ACTIONS(15),
    [anon_sym_View] = ACTIONS(15),
    [anon_sym_Macro_Function] = ACTIONS(13),
    [anon_sym_Function] = ACTIONS(15),
    [anon_sym_Uid] = ACTIONS(13),
    [anon_sym_Guid] = ACTIONS(13),
    [anon_sym_Attributes] = ACTIONS(15),
    [anon_sym_SDR_Attribute] = ACTIONS(13),
    [anon_sym_Blob] = ACTIONS(13),
    [anon_sym_Screen_Text] = ACTIONS(13),
    [anon_sym_Textstyle_Data] = ACTIONS(13),
    [anon_sym_Equality_Label] = ACTIONS(13),
    [anon_sym_Undo] = ACTIONS(15),
    [anon_sym_Undo_List] = ACTIONS(13),
    [anon_sym_Widget] = ACTIONS(15),
    [anon_sym_Menu] = ACTIONS(13),
    [anon_sym_Panel] = ACTIONS(13),
    [anon_sym_Overlay_Widget] = ACTIONS(13),
    [anon_sym_Vertical_Group] = ACTIONS(13),
    [anon_sym_Horizontal_Group] = ACTIONS(13),
    [anon_sym_Widget_Pages] = ACTIONS(13),
    [anon_sym_Button] = ACTIONS(13),
    [anon_sym_Select_Button] = ACTIONS(13),
    [anon_sym_Angle_Box] = ACTIONS(13),
    [anon_sym_Attributes_Box] = ACTIONS(13),
    [anon_sym_Billboard_Box] = ACTIONS(13),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(13),
    [anon_sym_Bitmap_List_Box] = ACTIONS(13),
    [anon_sym_Chainage_Box] = ACTIONS(13),
    [anon_sym_Choice_Box] = ACTIONS(13),
    [anon_sym_Colour_Box] = ACTIONS(13),
    [anon_sym_Colour_Message_Box] = ACTIONS(13),
    [anon_sym_Date_Time_Box] = ACTIONS(13),
    [anon_sym_Directory_Box] = ACTIONS(13),
    [anon_sym_Draw_Box] = ACTIONS(13),
    [anon_sym_File_Box] = ACTIONS(13),
    [anon_sym_Function_Box] = ACTIONS(13),
    [anon_sym_Graph_Box] = ACTIONS(13),
    [anon_sym_GridCtrl_Box] = ACTIONS(13),
    [anon_sym_HyperLink_Box] = ACTIONS(13),
    [anon_sym_Input_Box] = ACTIONS(13),
    [anon_sym_Integer_Box] = ACTIONS(13),
    [anon_sym_Justify_Box] = ACTIONS(13),
    [anon_sym_Linestyle_Box] = ACTIONS(13),
    [anon_sym_List_Box] = ACTIONS(13),
    [anon_sym_ListCtrl_Box] = ACTIONS(13),
    [anon_sym_Map_File_Box] = ACTIONS(13),
    [anon_sym_Message_Box] = ACTIONS(13),
    [anon_sym_Model_Box] = ACTIONS(13),
    [anon_sym_Name_Box] = ACTIONS(13),
    [anon_sym_Named_Tick_Box] = ACTIONS(13),
    [anon_sym_New_Select_Box] = ACTIONS(13),
    [anon_sym_New_XYZ_Box] = ACTIONS(13),
    [anon_sym_Plotter_Box] = ACTIONS(13),
    [anon_sym_Polygon_Box] = ACTIONS(13),
    [anon_sym_Real_Box] = ACTIONS(13),
    [anon_sym_Report_Box] = ACTIONS(13),
    [anon_sym_Select_Box] = ACTIONS(15),
    [anon_sym_Select_Boxes] = ACTIONS(13),
    [anon_sym_Sheet_Size_Box] = ACTIONS(13),
    [anon_sym_Source_Box] = ACTIONS(13),
    [anon_sym_Symbol_Box] = ACTIONS(13),
    [anon_sym_Tab_Box] = ACTIONS(13),
    [anon_sym_Target_Box] = ACTIONS(13),
    [anon_sym_Template_Box] = ACTIONS(13),
    [anon_sym_Text_Edit_Box] = ACTIONS(13),
    [anon_sym_Text_Style_Box] = ACTIONS(13),
    [anon_sym_Texture_Box] = ACTIONS(13),
    [anon_sym_Tree_Box] = ACTIONS(13),
    [anon_sym_Tree_Page] = ACTIONS(13),
    [anon_sym_Tick_Box] = ACTIONS(13),
    [anon_sym_Tin_Box] = ACTIONS(13),
    [anon_sym_View_Box] = ACTIONS(13),
    [anon_sym_XYZ_Box] = ACTIONS(13),
    [anon_sym_File] = ACTIONS(15),
    [anon_sym_Map_File] = ACTIONS(15),
    [anon_sym_Plot_Parameter_File] = ACTIONS(13),
    [anon_sym_XML_Document] = ACTIONS(13),
    [anon_sym_XML_Node] = ACTIONS(13),
    [anon_sym_Connection] = ACTIONS(13),
    [anon_sym_Select_Query] = ACTIONS(13),
    [anon_sym_Insert_Query] = ACTIONS(13),
    [anon_sym_Update_Query] = ACTIONS(13),
    [anon_sym_Delete_Query] = ACTIONS(13),
    [anon_sym_Database_Results] = ACTIONS(13),
    [anon_sym_Transactions] = ACTIONS(13),
    [anon_sym_Parameter_Collection] = ACTIONS(13),
    [anon_sym_Query_Condition] = ACTIONS(13),
    [anon_sym_Manual_Condition] = ACTIONS(13),
    [anon_sym_Dynamic_Element] = ACTIONS(13),
    [anon_sym_Dynamic_Integer] = ACTIONS(13),
    [anon_sym_Dynamic_Real] = ACTIONS(13),
    [anon_sym_Dynamic_Text] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [anon_sym_LBRACE] = ACTIONS(302),
    [aux_sym_preproc_include_token1] = ACTIONS(302),
    [aux_sym_preproc_def_token1] = ACTIONS(302),
    [anon_sym_void] = ACTIONS(302),
    [anon_sym_Integer] = ACTIONS(304),
    [anon_sym_Real] = ACTIONS(304),
    [anon_sym_Text] = ACTIONS(304),
    [anon_sym_Vector2] = ACTIONS(302),
    [anon_sym_Vector3] = ACTIONS(302),
    [anon_sym_Vector4] = ACTIONS(302),
    [anon_sym_Matrix3] = ACTIONS(302),
    [anon_sym_Matrix4] = ACTIONS(302),
    [anon_sym_Point] = ACTIONS(302),
    [anon_sym_Line] = ACTIONS(304),
    [anon_sym_Arc] = ACTIONS(302),
    [anon_sym_Spiral] = ACTIONS(302),
    [anon_sym_Parabola] = ACTIONS(302),
    [anon_sym_Segment] = ACTIONS(302),
    [anon_sym_Element] = ACTIONS(302),
    [anon_sym_Model] = ACTIONS(304),
    [anon_sym_View] = ACTIONS(304),
    [anon_sym_Macro_Function] = ACTIONS(302),
    [anon_sym_Function] = ACTIONS(304),
    [anon_sym_Uid] = ACTIONS(302),
    [anon_sym_Guid] = ACTIONS(302),
    [anon_sym_Attributes] = ACTIONS(304),
    [anon_sym_SDR_Attribute] = ACTIONS(302),
    [anon_sym_Blob] = ACTIONS(302),
    [anon_sym_Screen_Text] = ACTIONS(302),
    [anon_sym_Textstyle_Data] = ACTIONS(302),
    [anon_sym_Equality_Label] = ACTIONS(302),
    [anon_sym_Undo] = ACTIONS(304),
    [anon_sym_Undo_List] = ACTIONS(302),
    [anon_sym_Widget] = ACTIONS(304),
    [anon_sym_Menu] = ACTIONS(302),
    [anon_sym_Panel] = ACTIONS(302),
    [anon_sym_Overlay_Widget] = ACTIONS(302),
    [anon_sym_Vertical_Group] = ACTIONS(302),
    [anon_sym_Horizontal_Group] = ACTIONS(302),
    [anon_sym_Widget_Pages] = ACTIONS(302),
    [anon_sym_Button] = ACTIONS(302),
    [anon_sym_Select_Button] = ACTIONS(302),
    [anon_sym_Angle_Box] = ACTIONS(302),
    [anon_sym_Attributes_Box] = ACTIONS(302),
    [anon_sym_Billboard_Box] = ACTIONS(302),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(302),
    [anon_sym_Bitmap_List_Box] = ACTIONS(302),
    [anon_sym_Chainage_Box] = ACTIONS(302),
    [anon_sym_Choice_Box] = ACTIONS(302),
    [anon_sym_Colour_Box] = ACTIONS(302),
    [anon_sym_Colour_Message_Box] = ACTIONS(302),
    [anon_sym_Date_Time_Box] = ACTIONS(302),
    [anon_sym_Directory_Box] = ACTIONS(302),
    [anon_sym_Draw_Box] = ACTIONS(302),
    [anon_sym_File_Box] = ACTIONS(302),
    [anon_sym_Function_Box] = ACTIONS(302),
    [anon_sym_Graph_Box] = ACTIONS(302),
    [anon_sym_GridCtrl_Box] = ACTIONS(302),
    [anon_sym_HyperLink_Box] = ACTIONS(302),
    [anon_sym_Input_Box] = ACTIONS(302),
    [anon_sym_Integer_Box] = ACTIONS(302),
    [anon_sym_Justify_Box] = ACTIONS(302),
    [anon_sym_Linestyle_Box] = ACTIONS(302),
    [anon_sym_List_Box] = ACTIONS(302),
    [anon_sym_ListCtrl_Box] = ACTIONS(302),
    [anon_sym_Map_File_Box] = ACTIONS(302),
    [anon_sym_Message_Box] = ACTIONS(302),
    [anon_sym_Model_Box] = ACTIONS(302),
    [anon_sym_Name_Box] = ACTIONS(302),
    [anon_sym_Named_Tick_Box] = ACTIONS(302),
    [anon_sym_New_Select_Box] = ACTIONS(302),
    [anon_sym_New_XYZ_Box] = ACTIONS(302),
    [anon_sym_Plotter_Box] = ACTIONS(302),
    [anon_sym_Polygon_Box] = ACTIONS(302),
    [anon_sym_Real_Box] = ACTIONS(302),
    [anon_sym_Report_Box] = ACTIONS(302),
    [anon_sym_Select_Box] = ACTIONS(304),
    [anon_sym_Select_Boxes] = ACTIONS(302),
    [anon_sym_Sheet_Size_Box] = ACTIONS(302),
    [anon_sym_Source_Box] = ACTIONS(302),
    [anon_sym_Symbol_Box] = ACTIONS(302),
    [anon_sym_Tab_Box] = ACTIONS(302),
    [anon_sym_Target_Box] = ACTIONS(302),
    [anon_sym_Template_Box] = ACTIONS(302),
    [anon_sym_Text_Edit_Box] = ACTIONS(302),
    [anon_sym_Text_Style_Box] = ACTIONS(302),
    [anon_sym_Texture_Box] = ACTIONS(302),
    [anon_sym_Tree_Box] = ACTIONS(302),
    [anon_sym_Tree_Page] = ACTIONS(302),
    [anon_sym_Tick_Box] = ACTIONS(302),
    [anon_sym_Tin_Box] = ACTIONS(302),
    [anon_sym_View_Box] = ACTIONS(302),
    [anon_sym_XYZ_Box] = ACTIONS(302),
    [anon_sym_File] = ACTIONS(304),
    [anon_sym_Map_File] = ACTIONS(304),
    [anon_sym_Plot_Parameter_File] = ACTIONS(302),
    [anon_sym_XML_Document] = ACTIONS(302),
    [anon_sym_XML_Node] = ACTIONS(302),
    [anon_sym_Connection] = ACTIONS(302),
    [anon_sym_Select_Query] = ACTIONS(302),
    [anon_sym_Insert_Query] = ACTIONS(302),
    [anon_sym_Update_Query] = ACTIONS(302),
    [anon_sym_Delete_Query] = ACTIONS(302),
    [anon_sym_Database_Results] = ACTIONS(302),
    [anon_sym_Transactions] = ACTIONS(302),
    [anon_sym_Parameter_Collection] = ACTIONS(302),
    [anon_sym_Query_Condition] = ACTIONS(302),
    [anon_sym_Manual_Condition] = ACTIONS(302),
    [anon_sym_Dynamic_Element] = ACTIONS(302),
    [anon_sym_Dynamic_Integer] = ACTIONS(302),
    [anon_sym_Dynamic_Real] = ACTIONS(302),
    [anon_sym_Dynamic_Text] = ACTIONS(302),
    [sym_comment] = ACTIONS(3),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [aux_sym_preproc_include_token1] = ACTIONS(318),
    [aux_sym_preproc_def_token1] = ACTIONS(318),
    [anon_sym_void] = ACTIONS(318),
    [anon_sym_Integer] = ACTIONS(320),
    [anon_sym_Real] = ACTIONS(320),
    [anon_sym_Text] = ACTIONS(320),
    [anon_sym_Vector2] = ACTIONS(318),
    [anon_sym_Vector3] = ACTIONS(318),
    [anon_sym_Vector4] = ACTIONS(318),
    [anon_sym_Matrix3] = ACTIONS(318),
    [anon_sym_Matrix4] = ACTIONS(318),
    [anon_sym_Point] = ACTIONS(318),
    [anon_sym_Line] = ACTIONS(320),
    [anon_sym_Arc] = ACTIONS(318),
    [anon_sym_Spiral] = ACTIONS(318),
    [anon_sym_Parabola] = ACTIONS(318),
    [anon_sym_Segment] = ACTIONS(318),
    [anon_sym_Element] = ACTIONS(318),
    [anon_sym_Model] = ACTIONS(320),
    [anon_sym_View] = ACTIONS(320),
    [anon_sym_Macro_Function] = ACTIONS(318),
    [anon_sym_Function] = ACTIONS(320),
    [anon_sym_Uid] = ACTIONS(318),
    [anon_sym_Guid] = ACTIONS(318),
    [anon_sym_Attributes] = ACTIONS(320),
    [anon_sym_SDR_Attribute] = ACTIONS(318),
    [anon_sym_Blob] = ACTIONS(318),
    [anon_sym_Screen_Text] = ACTIONS(318),
    [anon_sym_Textstyle_Data] = ACTIONS(318),
    [anon_sym_Equality_Label] = ACTIONS(318),
    [anon_sym_Undo] = ACTIONS(320),
    [anon_sym_Undo_List] = ACTIONS(318),
    [anon_sym_Widget] = ACTIONS(320),
    [anon_sym_Menu] = ACTIONS(318),
    [anon_sym_Panel] = ACTIONS(318),
    [anon_sym_Overlay_Widget] = ACTIONS(318),
    [anon_sym_Vertical_Group] = ACTIONS(318),
    [anon_sym_Horizontal_Group] = ACTIONS(318),
    [anon_sym_Widget_Pages] = ACTIONS(318),
    [anon_sym_Button] = ACTIONS(318),
    [anon_sym_Select_Button] = ACTIONS(318),
    [anon_sym_Angle_Box] = ACTIONS(318),
    [anon_sym_Attributes_Box] = ACTIONS(318),
    [anon_sym_Billboard_Box] = ACTIONS(318),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(318),
    [anon_sym_Bitmap_List_Box] = ACTIONS(318),
    [anon_sym_Chainage_Box] = ACTIONS(318),
    [anon_sym_Choice_Box] = ACTIONS(318),
    [anon_sym_Colour_Box] = ACTIONS(318),
    [anon_sym_Colour_Message_Box] = ACTIONS(318),
    [anon_sym_Date_Time_Box] = ACTIONS(318),
    [anon_sym_Directory_Box] = ACTIONS(318),
    [anon_sym_Draw_Box] = ACTIONS(318),
    [anon_sym_File_Box] = ACTIONS(318),
    [anon_sym_Function_Box] = ACTIONS(318),
    [anon_sym_Graph_Box] = ACTIONS(318),
    [anon_sym_GridCtrl_Box] = ACTIONS(318),
    [anon_sym_HyperLink_Box] = ACTIONS(318),
    [anon_sym_Input_Box] = ACTIONS(318),
    [anon_sym_Integer_Box] = ACTIONS(318),
    [anon_sym_Justify_Box] = ACTIONS(318),
    [anon_sym_Linestyle_Box] = ACTIONS(318),
    [anon_sym_List_Box] = ACTIONS(318),
    [anon_sym_ListCtrl_Box] = ACTIONS(318),
    [anon_sym_Map_File_Box] = ACTIONS(318),
    [anon_sym_Message_Box] = ACTIONS(318),
    [anon_sym_Model_Box] = ACTIONS(318),
    [anon_sym_Name_Box] = ACTIONS(318),
    [anon_sym_Named_Tick_Box] = ACTIONS(318),
    [anon_sym_New_Select_Box] = ACTIONS(318),
    [anon_sym_New_XYZ_Box] = ACTIONS(318),
    [anon_sym_Plotter_Box] = ACTIONS(318),
    [anon_sym_Polygon_Box] = ACTIONS(318),
    [anon_sym_Real_Box] = ACTIONS(318),
    [anon_sym_Report_Box] = ACTIONS(318),
    [anon_sym_Select_Box] = ACTIONS(320),
    [anon_sym_Select_Boxes] = ACTIONS(318),
    [anon_sym_Sheet_Size_Box] = ACTIONS(318),
    [anon_sym_Source_Box] = ACTIONS(318),
    [anon_sym_Symbol_Box] = ACTIONS(318),
    [anon_sym_Tab_Box] = ACTIONS(318),
    [anon_sym_Target_Box] = ACTIONS(318),
    [anon_sym_Template_Box] = ACTIONS(318),
    [anon_sym_Text_Edit_Box] = ACTIONS(318),
    [anon_sym_Text_Style_Box] = ACTIONS(318),
    [anon_sym_Texture_Box] = ACTIONS(318),
    [anon_sym_Tree_Box] = ACTIONS(318),
    [anon_sym_Tree_Page] = ACTIONS(318),
    [anon_sym_Tick_Box] = ACTIONS(318),
    [anon_sym_Tin_Box] = ACTIONS(318),
    [anon_sym_View_Box] = ACTIONS(318),
    [anon_sym_XYZ_Box] = ACTIONS(318),
    [anon_sym_File] = ACTIONS(320),
    [anon_sym_Map_File] = ACTIONS(320),
    [anon_sym_Plot_Parameter_File] = ACTIONS(318),
    [anon_sym_XML_Document] = ACTIONS(318),
    [anon_sym_XML_Node] = ACTIONS(318),
    [anon_sym_Connection] = ACTIONS(318),
    [anon_sym_Select_Query] = ACTIONS(318),
    [anon_sym_Insert_Query] = ACTIONS(318),
    [anon_sym_Update_Query] = ACTIONS(318),
    [anon_sym_Delete_Query] = ACTIONS(318),
    [anon_sym_Database_Results] = ACTIONS(318),
    [anon_sym_Transactions] = ACTIONS(318),
    [anon_sym_Parameter_Collection] = ACTIONS(318),
    [anon_sym_Query_Condition] = ACTIONS(318),
    [anon_sym_Manual_Condition] = ACTIONS(318),
    [anon_sym_Dynamic_Element] = ACTIONS(318),
    [anon_sym_Dynamic_Integer] = ACTIONS(318),
    [anon_sym_Dynamic_Real] = ACTIONS(318),
    [anon_sym_Dynamic_Text] = ACTIONS(318),
    [sym_comment] = ACTIONS(3),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [aux_sym_preproc_include_token1] = ACTIONS(347),
    [aux_sym_preproc_def_token1] = ACTIONS(347),
    [anon_sym_void] = ACTIONS(347),
    [anon_sym_Integer] = ACTIONS(349),
    [anon_sym_Real] = ACTIONS(349),
    [anon_sym_Text] = ACTIONS(349),
    [anon_sym_Vector2] = ACTIONS(347),
    [anon_sym_Vector3] = ACTIONS(347),
    [anon_sym_Vector4] = ACTIONS(347),
    [anon_sym_Matrix3] = ACTIONS(347),
    [anon_sym_Matrix4] = ACTIONS(347),
    [anon_sym_Point] = ACTIONS(347),
    [anon_sym_Line] = ACTIONS(349),
    [anon_sym_Arc] = ACTIONS(347),
    [anon_sym_Spiral] = ACTIONS(347),
    [anon_sym_Parabola] = ACTIONS(347),
    [anon_sym_Segment] = ACTIONS(347),
    [anon_sym_Element] = ACTIONS(347),
    [anon_sym_Model] = ACTIONS(349),
    [anon_sym_View] = ACTIONS(349),
    [anon_sym_Macro_Function] = ACTIONS(347),
    [anon_sym_Function] = ACTIONS(349),
    [anon_sym_Uid] = ACTIONS(347),
    [anon_sym_Guid] = ACTIONS(347),
    [anon_sym_Attributes] = ACTIONS(349),
    [anon_sym_SDR_Attribute] = ACTIONS(347),
    [anon_sym_Blob] = ACTIONS(347),
    [anon_sym_Screen_Text] = ACTIONS(347),
    [anon_sym_Textstyle_Data] = ACTIONS(347),
    [anon_sym_Equality_Label] = ACTIONS(347),
    [anon_sym_Undo] = ACTIONS(349),
    [anon_sym_Undo_List] = ACTIONS(347),
    [anon_sym_Widget] = ACTIONS(349),
    [anon_sym_Menu] = ACTIONS(347),
    [anon_sym_Panel] = ACTIONS(347),
    [anon_sym_Overlay_Widget] = ACTIONS(347),
    [anon_sym_Vertical_Group] = ACTIONS(347),
    [anon_sym_Horizontal_Group] = ACTIONS(347),
    [anon_sym_Widget_Pages] = ACTIONS(347),
    [anon_sym_Button] = ACTIONS(347),
    [anon_sym_Select_Button] = ACTIONS(347),
    [anon_sym_Angle_Box] = ACTIONS(347),
    [anon_sym_Attributes_Box] = ACTIONS(347),
    [anon_sym_Billboard_Box] = ACTIONS(347),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(347),
    [anon_sym_Bitmap_List_Box] = ACTIONS(347),
    [anon_sym_Chainage_Box] = ACTIONS(347),
    [anon_sym_Choice_Box] = ACTIONS(347),
    [anon_sym_Colour_Box] = ACTIONS(347),
    [anon_sym_Colour_Message_Box] = ACTIONS(347),
    [anon_sym_Date_Time_Box] = ACTIONS(347),
    [anon_sym_Directory_Box] = ACTIONS(347),
    [anon_sym_Draw_Box] = ACTIONS(347),
    [anon_sym_File_Box] = ACTIONS(347),
    [anon_sym_Function_Box] = ACTIONS(347),
    [anon_sym_Graph_Box] = ACTIONS(347),
    [anon_sym_GridCtrl_Box] = ACTIONS(347),
    [anon_sym_HyperLink_Box] = ACTIONS(347),
    [anon_sym_Input_Box] = ACTIONS(347),
    [anon_sym_Integer_Box] = ACTIONS(347),
    [anon_sym_Justify_Box] = ACTIONS(347),
    [anon_sym_Linestyle_Box] = ACTIONS(347),
    [anon_sym_List_Box] = ACTIONS(347),
    [anon_sym_ListCtrl_Box] = ACTIONS(347),
    [anon_sym_Map_File_Box] = ACTIONS(347),
    [anon_sym_Message_Box] = ACTIONS(347),
    [anon_sym_Model_Box] = ACTIONS(347),
    [anon_sym_Name_Box] = ACTIONS(347),
    [anon_sym_Named_Tick_Box] = ACTIONS(347),
    [anon_sym_New_Select_Box] = ACTIONS(347),
    [anon_sym_New_XYZ_Box] = ACTIONS(347),
    [anon_sym_Plotter_Box] = ACTIONS(347),
    [anon_sym_Polygon_Box] = ACTIONS(347),
    [anon_sym_Real_Box] = ACTIONS(347),
    [anon_sym_Report_Box] = ACTIONS(347),
    [anon_sym_Select_Box] = ACTIONS(349),
    [anon_sym_Select_Boxes] = ACTIONS(347),
    [anon_sym_Sheet_Size_Box] = ACTIONS(347),
    [anon_sym_Source_Box] = ACTIONS(347),
    [anon_sym_Symbol_Box] = ACTIONS(347),
    [anon_sym_Tab_Box] = ACTIONS(347),
    [anon_sym_Target_Box] = ACTIONS(347),
    [anon_sym_Template_Box] = ACTIONS(347),
    [anon_sym_Text_Edit_Box] = ACTIONS(347),
    [anon_sym_Text_Style_Box] = ACTIONS(347),
    [anon_sym_Texture_Box] = ACTIONS(347),
    [anon_sym_Tree_Box] = ACTIONS(347),
    [anon_sym_Tree_Page] = ACTIONS(347),
    [anon_sym_Tick_Box] = ACTIONS(347),
    [anon_sym_Tin_Box] = ACTIONS(347),
    [anon_sym_View_Box] = ACTIONS(347),
    [anon_sym_XYZ_Box] = ACTIONS(347),
    [anon_sym_File] = ACTIONS(349),
    [anon_sym_Map_File] = ACTIONS(349),
    [anon_sym_Plot_Parameter_File] = ACTIONS(347),
    [anon_sym_XML_Document] = ACTIONS(347),
    [anon_sym_XML_Node] = ACTIONS(347),
    [anon_sym_Connection] = ACTIONS(347),
    [anon_sym_Select_Query] = ACTIONS(347),
    [anon_sym_Insert_Query] = ACTIONS(347),
    [anon_sym_Update_Query] = ACTIONS(347),
    [anon_sym_Delete_Query] = ACTIONS(347),
    [anon_sym_Database_Results] = ACTIONS(347),
    [anon_sym_Transactions] = ACTIONS(347),
    [anon_sym_Parameter_Collection] = ACTIONS(347),
    [anon_sym_Query_Condition] = ACTIONS(347),
    [anon_sym_Manual_Condition] = ACTIONS(347),
    [anon_sym_Dynamic_Element] = ACTIONS(347),
    [anon_sym_Dynamic_Integer] = ACTIONS(347),
    [anon_sym_Dynamic_Real] = ACTIONS(347),
    [anon_sym_Dynamic_Text] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACE] = ACTIONS(351),
    [aux_sym_preproc_include_token1] = ACTIONS(351),
    [aux_sym_preproc_def_token1] = ACTIONS(351),
    [anon_sym_void] = ACTIONS(351),
    [anon_sym_Integer] = ACTIONS(353),
    [anon_sym_Real] = ACTIONS(353),
    [anon_sym_Text] = ACTIONS(353),
    [anon_sym_Vector2] = ACTIONS(351),
    [anon_sym_Vector3] = ACTIONS(351),
    [anon_sym_Vector4] = ACTIONS(351),
    [anon_sym_Matrix3] = ACTIONS(351),
    [anon_sym_Matrix4] = ACTIONS(351),
    [anon_sym_Point] = ACTIONS(351),
    [anon_sym_Line] = ACTIONS(353),
    [anon_sym_Arc] = ACTIONS(351),
    [anon_sym_Spiral] = ACTIONS(351),
    [anon_sym_Parabola] = ACTIONS(351),
    [anon_sym_Segment] = ACTIONS(351),
    [anon_sym_Element] = ACTIONS(351),
    [anon_sym_Model] = ACTIONS(353),
    [anon_sym_View] = ACTIONS(353),
    [anon_sym_Macro_Function] = ACTIONS(351),
    [anon_sym_Function] = ACTIONS(353),
    [anon_sym_Uid] = ACTIONS(351),
    [anon_sym_Guid] = ACTIONS(351),
    [anon_sym_Attributes] = ACTIONS(353),
    [anon_sym_SDR_Attribute] = ACTIONS(351),
    [anon_sym_Blob] = ACTIONS(351),
    [anon_sym_Screen_Text] = ACTIONS(351),
    [anon_sym_Textstyle_Data] = ACTIONS(351),
    [anon_sym_Equality_Label] = ACTIONS(351),
    [anon_sym_Undo] = ACTIONS(353),
    [anon_sym_Undo_List] = ACTIONS(351),
    [anon_sym_Widget] = ACTIONS(353),
    [anon_sym_Menu] = ACTIONS(351),
    [anon_sym_Panel] = ACTIONS(351),
    [anon_sym_Overlay_Widget] = ACTIONS(351),
    [anon_sym_Vertical_Group] = ACTIONS(351),
    [anon_sym_Horizontal_Group] = ACTIONS(351),
    [anon_sym_Widget_Pages] = ACTIONS(351),
    [anon_sym_Button] = ACTIONS(351),
    [anon_sym_Select_Button] = ACTIONS(351),
    [anon_sym_Angle_Box] = ACTIONS(351),
    [anon_sym_Attributes_Box] = ACTIONS(351),
    [anon_sym_Billboard_Box] = ACTIONS(351),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(351),
    [anon_sym_Bitmap_List_Box] = ACTIONS(351),
    [anon_sym_Chainage_Box] = ACTIONS(351),
    [anon_sym_Choice_Box] = ACTIONS(351),
    [anon_sym_Colour_Box] = ACTIONS(351),
    [anon_sym_Colour_Message_Box] = ACTIONS(351),
    [anon_sym_Date_Time_Box] = ACTIONS(351),
    [anon_sym_Directory_Box] = ACTIONS(351),
    [anon_sym_Draw_Box] = ACTIONS(351),
    [anon_sym_File_Box] = ACTIONS(351),
    [anon_sym_Function_Box] = ACTIONS(351),
    [anon_sym_Graph_Box] = ACTIONS(351),
    [anon_sym_GridCtrl_Box] = ACTIONS(351),
    [anon_sym_HyperLink_Box] = ACTIONS(351),
    [anon_sym_Input_Box] = ACTIONS(351),
    [anon_sym_Integer_Box] = ACTIONS(351),
    [anon_sym_Justify_Box] = ACTIONS(351),
    [anon_sym_Linestyle_Box] = ACTIONS(351),
    [anon_sym_List_Box] = ACTIONS(351),
    [anon_sym_ListCtrl_Box] = ACTIONS(351),
    [anon_sym_Map_File_Box] = ACTIONS(351),
    [anon_sym_Message_Box] = ACTIONS(351),
    [anon_sym_Model_Box] = ACTIONS(351),
    [anon_sym_Name_Box] = ACTIONS(351),
    [anon_sym_Named_Tick_Box] = ACTIONS(351),
    [anon_sym_New_Select_Box] = ACTIONS(351),
    [anon_sym_New_XYZ_Box] = ACTIONS(351),
    [anon_sym_Plotter_Box] = ACTIONS(351),
    [anon_sym_Polygon_Box] = ACTIONS(351),
    [anon_sym_Real_Box] = ACTIONS(351),
    [anon_sym_Report_Box] = ACTIONS(351),
    [anon_sym_Select_Box] = ACTIONS(353),
    [anon_sym_Select_Boxes] = ACTIONS(351),
    [anon_sym_Sheet_Size_Box] = ACTIONS(351),
    [anon_sym_Source_Box] = ACTIONS(351),
    [anon_sym_Symbol_Box] = ACTIONS(351),
    [anon_sym_Tab_Box] = ACTIONS(351),
    [anon_sym_Target_Box] = ACTIONS(351),
    [anon_sym_Template_Box] = ACTIONS(351),
    [anon_sym_Text_Edit_Box] = ACTIONS(351),
    [anon_sym_Text_Style_Box] = ACTIONS(351),
    [anon_sym_Texture_Box] = ACTIONS(351),
    [anon_sym_Tree_Box] = ACTIONS(351),
    [anon_sym_Tree_Page] = ACTIONS(351),
    [anon_sym_Tick_Box] = ACTIONS(351),
    [anon_sym_Tin_Box] = ACTIONS(351),
    [anon_sym_View_Box] = ACTIONS(351),
    [anon_sym_XYZ_Box] = ACTIONS(351),
    [anon_sym_File] = ACTIONS(353),
    [anon_sym_Map_File] = ACTIONS(353),
    [anon_sym_Plot_Parameter_File] = ACTIONS(351),
    [anon_sym_XML_Document] = ACTIONS(351),
    [anon_sym_XML_Node] = ACTIONS(351),
    [anon_sym_Connection] = ACTIONS(351),
    [anon_sym_Select_Query] = ACTIONS(351),
    [anon_sym_Insert_Query] = ACTIONS(351),
    [anon_sym_Update_Query] = ACTIONS(351),
    [anon_sym_Delete_Query] = ACTIONS(351),
    [anon_sym_Database_Results] = ACTIONS(351),
    [anon_sym_Transactions] = ACTIONS(351),
    [anon_sym_Parameter_Collection] = ACTIONS(351),
    [anon_sym_Query_Condition] = ACTIONS(351),
    [anon_sym_Manual_Condition] = ACTIONS(351),
    [anon_sym_Dynamic_Element] = ACTIONS(351),
    [anon_sym_Dynamic_Integer] = ACTIONS(351),
    [anon_sym_Dynamic_Real] = ACTIONS(351),
    [anon_sym_Dynamic_Text] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [aux_sym_preproc_include_token1] = ACTIONS(355),
    [aux_sym_preproc_def_token1] = ACTIONS(355),
    [anon_sym_void] = ACTIONS(355),
    [anon_sym_Integer] = ACTIONS(357),
    [anon_sym_Real] = ACTIONS(357),
    [anon_sym_Text] = ACTIONS(357),
    [anon_sym_Vector2] = ACTIONS(355),
    [anon_sym_Vector3] = ACTIONS(355),
    [anon_sym_Vector4] = ACTIONS(355),
    [anon_sym_Matrix3] = ACTIONS(355),
    [anon_sym_Matrix4] = ACTIONS(355),
    [anon_sym_Point] = ACTIONS(355),
    [anon_sym_Line] = ACTIONS(357),
    [anon_sym_Arc] = ACTIONS(355),
    [anon_sym_Spiral] = ACTIONS(355),
    [anon_sym_Parabola] = ACTIONS(355),
    [anon_sym_Segment] = ACTIONS(355),
    [anon_sym_Element] = ACTIONS(355),
    [anon_sym_Model] = ACTIONS(357),
    [anon_sym_View] = ACTIONS(357),
    [anon_sym_Macro_Function] = ACTIONS(355),
    [anon_sym_Function] = ACTIONS(357),
    [anon_sym_Uid] = ACTIONS(355),
    [anon_sym_Guid] = ACTIONS(355),
    [anon_sym_Attributes] = ACTIONS(357),
    [anon_sym_SDR_Attribute] = ACTIONS(355),
    [anon_sym_Blob] = ACTIONS(355),
    [anon_sym_Screen_Text] = ACTIONS(355),
    [anon_sym_Textstyle_Data] = ACTIONS(355),
    [anon_sym_Equality_Label] = ACTIONS(355),
    [anon_sym_Undo] = ACTIONS(357),
    [anon_sym_Undo_List] = ACTIONS(355),
    [anon_sym_Widget] = ACTIONS(357),
    [anon_sym_Menu] = ACTIONS(355),
    [anon_sym_Panel] = ACTIONS(355),
    [anon_sym_Overlay_Widget] = ACTIONS(355),
    [anon_sym_Vertical_Group] = ACTIONS(355),
    [anon_sym_Horizontal_Group] = ACTIONS(355),
    [anon_sym_Widget_Pages] = ACTIONS(355),
    [anon_sym_Button] = ACTIONS(355),
    [anon_sym_Select_Button] = ACTIONS(355),
    [anon_sym_Angle_Box] = ACTIONS(355),
    [anon_sym_Attributes_Box] = ACTIONS(355),
    [anon_sym_Billboard_Box] = ACTIONS(355),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(355),
    [anon_sym_Bitmap_List_Box] = ACTIONS(355),
    [anon_sym_Chainage_Box] = ACTIONS(355),
    [anon_sym_Choice_Box] = ACTIONS(355),
    [anon_sym_Colour_Box] = ACTIONS(355),
    [anon_sym_Colour_Message_Box] = ACTIONS(355),
    [anon_sym_Date_Time_Box] = ACTIONS(355),
    [anon_sym_Directory_Box] = ACTIONS(355),
    [anon_sym_Draw_Box] = ACTIONS(355),
    [anon_sym_File_Box] = ACTIONS(355),
    [anon_sym_Function_Box] = ACTIONS(355),
    [anon_sym_Graph_Box] = ACTIONS(355),
    [anon_sym_GridCtrl_Box] = ACTIONS(355),
    [anon_sym_HyperLink_Box] = ACTIONS(355),
    [anon_sym_Input_Box] = ACTIONS(355),
    [anon_sym_Integer_Box] = ACTIONS(355),
    [anon_sym_Justify_Box] = ACTIONS(355),
    [anon_sym_Linestyle_Box] = ACTIONS(355),
    [anon_sym_List_Box] = ACTIONS(355),
    [anon_sym_ListCtrl_Box] = ACTIONS(355),
    [anon_sym_Map_File_Box] = ACTIONS(355),
    [anon_sym_Message_Box] = ACTIONS(355),
    [anon_sym_Model_Box] = ACTIONS(355),
    [anon_sym_Name_Box] = ACTIONS(355),
    [anon_sym_Named_Tick_Box] = ACTIONS(355),
    [anon_sym_New_Select_Box] = ACTIONS(355),
    [anon_sym_New_XYZ_Box] = ACTIONS(355),
    [anon_sym_Plotter_Box] = ACTIONS(355),
    [anon_sym_Polygon_Box] = ACTIONS(355),
    [anon_sym_Real_Box] = ACTIONS(355),
    [anon_sym_Report_Box] = ACTIONS(355),
    [anon_sym_Select_Box] = ACTIONS(357),
    [anon_sym_Select_Boxes] = ACTIONS(355),
    [anon_sym_Sheet_Size_Box] = ACTIONS(355),
    [anon_sym_Source_Box] = ACTIONS(355),
    [anon_sym_Symbol_Box] = ACTIONS(355),
    [anon_sym_Tab_Box] = ACTIONS(355),
    [anon_sym_Target_Box] = ACTIONS(355),
    [anon_sym_Template_Box] = ACTIONS(355),
    [anon_sym_Text_Edit_Box] = ACTIONS(355),
    [anon_sym_Text_Style_Box] = ACTIONS(355),
    [anon_sym_Texture_Box] = ACTIONS(355),
    [anon_sym_Tree_Box] = ACTIONS(355),
    [anon_sym_Tree_Page] = ACTIONS(355),
    [anon_sym_Tick_Box] = ACTIONS(355),
    [anon_sym_Tin_Box] = ACTIONS(355),
    [anon_sym_View_Box] = ACTIONS(355),
    [anon_sym_XYZ_Box] = ACTIONS(355),
    [anon_sym_File] = ACTIONS(357),
    [anon_sym_Map_File] = ACTIONS(357),
    [anon_sym_Plot_Parameter_File] = ACTIONS(355),
    [anon_sym_XML_Document] = ACTIONS(355),
    [anon_sym_XML_Node] = ACTIONS(355),
    [anon_sym_Connection] = ACTIONS(355),
    [anon_sym_Select_Query] = ACTIONS(355),
    [anon_sym_Insert_Query] = ACTIONS(355),
    [anon_sym_Update_Query] = ACTIONS(355),
    [anon_sym_Delete_Query] = ACTIONS(355),
    [anon_sym_Database_Results] = ACTIONS(355),
    [anon_sym_Transactions] = ACTIONS(355),
    [anon_sym_Parameter_Collection] = ACTIONS(355),
    [anon_sym_Query_Condition] = ACTIONS(355),
    [anon_sym_Manual_Condition] = ACTIONS(355),
    [anon_sym_Dynamic_Element] = ACTIONS(355),
    [anon_sym_Dynamic_Integer] = ACTIONS(355),
    [anon_sym_Dynamic_Real] = ACTIONS(355),
    [anon_sym_Dynamic_Text] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(359), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [44] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(363), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [88] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_EQ,
    ACTIONS(373), 8,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(369), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 17,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(375), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(379), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 11,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(383), 25,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_EQ,
    ACTIONS(387), 1,
      anon_sym_COLON,
    ACTIONS(373), 8,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(369), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 14,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [316] = 3,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(365), 31,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [356] = 3,
    ACTIONS(375), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(377), 31,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [396] = 3,
    ACTIONS(379), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(381), 31,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [436] = 3,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(361), 31,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [476] = 4,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(371), 9,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(369), 22,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [518] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(403), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACK,
  [568] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(403), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACK,
  [616] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(403), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RBRACK,
  [668] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(395), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
  [724] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(403), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [782] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_PIPE,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [842] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(403), 1,
      anon_sym_PIPE,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [904] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [966] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [1030] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(427), 7,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(425), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [1072] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(429), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [1138] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(403), 7,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(395), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_RBRACK,
  [1182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(433), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 7,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [1252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 7,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(441), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [1287] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_argument_list,
    STATE(193), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1355] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_argument_list,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1423] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1488] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1553] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(457), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1616] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(459), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1679] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1744] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1809] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1874] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(467), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1936] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1998] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2060] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2122] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2184] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(477), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2246] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2308] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(481), 1,
      anon_sym_COLON,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2370] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2432] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(369), 22,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [2463] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SLASH,
    ACTIONS(405), 1,
      anon_sym_LBRACK,
    ACTIONS(417), 1,
      anon_sym_AMP,
    ACTIONS(419), 1,
      anon_sym_CARET,
    ACTIONS(421), 1,
      anon_sym_PIPE,
    ACTIONS(423), 1,
      anon_sym_AMP_AMP,
    ACTIONS(431), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_argument_list,
    ACTIONS(397), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(407), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(409), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(411), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(415), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2522] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(443), 22,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [2553] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_LF,
    ACTIONS(439), 22,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACK,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
  [2584] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(487), 1,
      anon_sym_SEMI,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(491), 1,
      sym_number_literal,
    STATE(221), 1,
      sym_comma_expression,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(110), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2627] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      sym_number_literal,
    STATE(232), 1,
      sym_comma_expression,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(113), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2670] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(499), 1,
      sym_number_literal,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    ACTIONS(503), 1,
      sym_system_lib_string,
    STATE(82), 1,
      sym_subscript_expression,
    STATE(91), 1,
      sym_call_expression,
    STATE(125), 1,
      sym_string_literal,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(126), 5,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
  [2714] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(505), 1,
      anon_sym_RPAREN,
    ACTIONS(507), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(108), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2754] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(509), 1,
      sym_number_literal,
    STATE(231), 1,
      sym_comma_expression,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(114), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2794] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(513), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(107), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2834] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(515), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(112), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2871] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(517), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(94), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2908] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(519), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(123), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2945] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(521), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(100), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2982] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(523), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(103), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3019] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(525), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(101), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3056] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(527), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(118), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3093] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(529), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(117), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3130] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(531), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(119), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3167] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(533), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(93), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(535), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(120), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3241] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(537), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(98), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3278] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(539), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(97), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3315] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(541), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(116), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3352] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(543), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(111), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3389] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(545), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(122), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3426] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(547), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(124), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3463] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(549), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(96), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3500] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(551), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(95), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3537] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(553), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(102), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3574] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(555), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(121), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3611] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(557), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(99), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3648] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(489), 1,
      sym_identifier,
    ACTIONS(559), 1,
      sym_number_literal,
    STATE(82), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(158), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    ACTIONS(43), 3,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(92), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 9,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3726] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(571), 1,
      anon_sym_SEMI,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_parameter_list,
    STATE(188), 1,
      aux_sym_declaration_repeat1,
  [3751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3777] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_parameter_list,
    STATE(195), 1,
      aux_sym_declaration_repeat1,
  [3802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    STATE(165), 1,
      sym_parameter_list,
    STATE(202), 1,
      aux_sym_declaration_repeat1,
  [3853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 7,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 7,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(178), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3908] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_parameter_list,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      sym_identifier,
    STATE(199), 1,
      sym_init_declarator,
    STATE(164), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3943] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      sym_identifier,
    STATE(191), 1,
      sym_init_declarator,
    STATE(161), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3958] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_compound_statement,
    STATE(165), 1,
      sym_parameter_list,
  [3977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      sym_identifier,
    STATE(214), 1,
      sym_init_declarator,
    STATE(172), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3992] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      sym_identifier,
    STATE(187), 1,
      sym_init_declarator,
    STATE(167), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [4007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(165), 1,
      sym_parameter_list,
    ACTIONS(601), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4024] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    ACTIONS(605), 1,
      aux_sym_string_literal_token1,
    ACTIONS(607), 1,
      sym_escape_sequence,
    STATE(183), 1,
      aux_sym_string_literal_repeat1,
  [4040] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      aux_sym_string_literal_token1,
    ACTIONS(613), 1,
      sym_escape_sequence,
    STATE(182), 1,
      aux_sym_string_literal_repeat1,
  [4056] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      aux_sym_string_literal_token1,
    ACTIONS(620), 1,
      sym_escape_sequence,
    STATE(181), 1,
      aux_sym_string_literal_repeat1,
  [4072] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
    ACTIONS(625), 1,
      aux_sym_string_literal_token1,
    ACTIONS(627), 1,
      sym_escape_sequence,
    STATE(181), 1,
      aux_sym_string_literal_repeat1,
  [4088] = 5,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym_string_literal_token1,
    ACTIONS(627), 1,
      sym_escape_sequence,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      aux_sym_string_literal_repeat1,
  [4104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(175), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [4116] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_parameter_list_repeat1,
  [4129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [4138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_SEMI,
    STATE(200), 1,
      aux_sym_declaration_repeat1,
  [4151] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4177] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      aux_sym_declaration_repeat1,
  [4203] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [4216] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [4229] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym_parameter_list_repeat1,
  [4242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(658), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [4277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(664), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
  [4290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_declaration_repeat1,
  [4303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym_parameter_list_repeat1,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COMMA,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    STATE(190), 1,
      aux_sym_declaration_repeat1,
  [4342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_compound_statement,
  [4352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_parenthesized_expression,
  [4362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parenthesized_expression,
  [4372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parenthesized_expression,
  [4382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_parenthesized_expression,
  [4392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(213), 1,
      sym_parenthesized_expression,
  [4402] = 3,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_LF,
    ACTIONS(680), 1,
      sym_preproc_arg,
  [4412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_identifier,
    STATE(226), 1,
      sym__statement_identifier,
  [4422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      sym_identifier,
    STATE(234), 1,
      sym__statement_identifier,
  [4432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_compound_statement,
  [4450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4458] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parenthesized_expression,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_SEMI,
  [4475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      ts_builtin_sym_end,
  [4482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_COLON,
  [4489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [4496] = 2,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_LF,
  [4503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_SEMI,
  [4510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_COLON,
  [4517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_SEMI,
  [4524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(694), 1,
      anon_sym_COLON,
  [4531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_SEMI,
  [4538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_SEMI,
  [4545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
  [4552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      sym_identifier,
  [4559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_SEMI,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SEMI,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_SEMI,
  [4580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SEMI,
  [4587] = 2,
    ACTIONS(389), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LF,
  [4594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_SEMI,
  [4601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 1,
      anon_sym_LPAREN,
  [4608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 1,
      anon_sym_COLON,
  [4615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(80)] = 0,
  [SMALL_STATE(81)] = 44,
  [SMALL_STATE(82)] = 88,
  [SMALL_STATE(83)] = 136,
  [SMALL_STATE(84)] = 180,
  [SMALL_STATE(85)] = 224,
  [SMALL_STATE(86)] = 268,
  [SMALL_STATE(87)] = 316,
  [SMALL_STATE(88)] = 356,
  [SMALL_STATE(89)] = 396,
  [SMALL_STATE(90)] = 436,
  [SMALL_STATE(91)] = 476,
  [SMALL_STATE(92)] = 518,
  [SMALL_STATE(93)] = 568,
  [SMALL_STATE(94)] = 616,
  [SMALL_STATE(95)] = 668,
  [SMALL_STATE(96)] = 724,
  [SMALL_STATE(97)] = 782,
  [SMALL_STATE(98)] = 842,
  [SMALL_STATE(99)] = 904,
  [SMALL_STATE(100)] = 966,
  [SMALL_STATE(101)] = 1030,
  [SMALL_STATE(102)] = 1072,
  [SMALL_STATE(103)] = 1138,
  [SMALL_STATE(104)] = 1182,
  [SMALL_STATE(105)] = 1217,
  [SMALL_STATE(106)] = 1252,
  [SMALL_STATE(107)] = 1287,
  [SMALL_STATE(108)] = 1355,
  [SMALL_STATE(109)] = 1423,
  [SMALL_STATE(110)] = 1488,
  [SMALL_STATE(111)] = 1553,
  [SMALL_STATE(112)] = 1616,
  [SMALL_STATE(113)] = 1679,
  [SMALL_STATE(114)] = 1744,
  [SMALL_STATE(115)] = 1809,
  [SMALL_STATE(116)] = 1874,
  [SMALL_STATE(117)] = 1936,
  [SMALL_STATE(118)] = 1998,
  [SMALL_STATE(119)] = 2060,
  [SMALL_STATE(120)] = 2122,
  [SMALL_STATE(121)] = 2184,
  [SMALL_STATE(122)] = 2246,
  [SMALL_STATE(123)] = 2308,
  [SMALL_STATE(124)] = 2370,
  [SMALL_STATE(125)] = 2432,
  [SMALL_STATE(126)] = 2463,
  [SMALL_STATE(127)] = 2522,
  [SMALL_STATE(128)] = 2553,
  [SMALL_STATE(129)] = 2584,
  [SMALL_STATE(130)] = 2627,
  [SMALL_STATE(131)] = 2670,
  [SMALL_STATE(132)] = 2714,
  [SMALL_STATE(133)] = 2754,
  [SMALL_STATE(134)] = 2794,
  [SMALL_STATE(135)] = 2834,
  [SMALL_STATE(136)] = 2871,
  [SMALL_STATE(137)] = 2908,
  [SMALL_STATE(138)] = 2945,
  [SMALL_STATE(139)] = 2982,
  [SMALL_STATE(140)] = 3019,
  [SMALL_STATE(141)] = 3056,
  [SMALL_STATE(142)] = 3093,
  [SMALL_STATE(143)] = 3130,
  [SMALL_STATE(144)] = 3167,
  [SMALL_STATE(145)] = 3204,
  [SMALL_STATE(146)] = 3241,
  [SMALL_STATE(147)] = 3278,
  [SMALL_STATE(148)] = 3315,
  [SMALL_STATE(149)] = 3352,
  [SMALL_STATE(150)] = 3389,
  [SMALL_STATE(151)] = 3426,
  [SMALL_STATE(152)] = 3463,
  [SMALL_STATE(153)] = 3500,
  [SMALL_STATE(154)] = 3537,
  [SMALL_STATE(155)] = 3574,
  [SMALL_STATE(156)] = 3611,
  [SMALL_STATE(157)] = 3648,
  [SMALL_STATE(158)] = 3685,
  [SMALL_STATE(159)] = 3700,
  [SMALL_STATE(160)] = 3713,
  [SMALL_STATE(161)] = 3726,
  [SMALL_STATE(162)] = 3751,
  [SMALL_STATE(163)] = 3764,
  [SMALL_STATE(164)] = 3777,
  [SMALL_STATE(165)] = 3802,
  [SMALL_STATE(166)] = 3815,
  [SMALL_STATE(167)] = 3828,
  [SMALL_STATE(168)] = 3853,
  [SMALL_STATE(169)] = 3866,
  [SMALL_STATE(170)] = 3879,
  [SMALL_STATE(171)] = 3892,
  [SMALL_STATE(172)] = 3908,
  [SMALL_STATE(173)] = 3928,
  [SMALL_STATE(174)] = 3943,
  [SMALL_STATE(175)] = 3958,
  [SMALL_STATE(176)] = 3977,
  [SMALL_STATE(177)] = 3992,
  [SMALL_STATE(178)] = 4007,
  [SMALL_STATE(179)] = 4024,
  [SMALL_STATE(180)] = 4040,
  [SMALL_STATE(181)] = 4056,
  [SMALL_STATE(182)] = 4072,
  [SMALL_STATE(183)] = 4088,
  [SMALL_STATE(184)] = 4104,
  [SMALL_STATE(185)] = 4116,
  [SMALL_STATE(186)] = 4129,
  [SMALL_STATE(187)] = 4138,
  [SMALL_STATE(188)] = 4151,
  [SMALL_STATE(189)] = 4164,
  [SMALL_STATE(190)] = 4177,
  [SMALL_STATE(191)] = 4190,
  [SMALL_STATE(192)] = 4203,
  [SMALL_STATE(193)] = 4216,
  [SMALL_STATE(194)] = 4229,
  [SMALL_STATE(195)] = 4242,
  [SMALL_STATE(196)] = 4255,
  [SMALL_STATE(197)] = 4268,
  [SMALL_STATE(198)] = 4277,
  [SMALL_STATE(199)] = 4290,
  [SMALL_STATE(200)] = 4303,
  [SMALL_STATE(201)] = 4316,
  [SMALL_STATE(202)] = 4329,
  [SMALL_STATE(203)] = 4342,
  [SMALL_STATE(204)] = 4352,
  [SMALL_STATE(205)] = 4362,
  [SMALL_STATE(206)] = 4372,
  [SMALL_STATE(207)] = 4382,
  [SMALL_STATE(208)] = 4392,
  [SMALL_STATE(209)] = 4402,
  [SMALL_STATE(210)] = 4412,
  [SMALL_STATE(211)] = 4422,
  [SMALL_STATE(212)] = 4432,
  [SMALL_STATE(213)] = 4440,
  [SMALL_STATE(214)] = 4450,
  [SMALL_STATE(215)] = 4458,
  [SMALL_STATE(216)] = 4468,
  [SMALL_STATE(217)] = 4475,
  [SMALL_STATE(218)] = 4482,
  [SMALL_STATE(219)] = 4489,
  [SMALL_STATE(220)] = 4496,
  [SMALL_STATE(221)] = 4503,
  [SMALL_STATE(222)] = 4510,
  [SMALL_STATE(223)] = 4517,
  [SMALL_STATE(224)] = 4524,
  [SMALL_STATE(225)] = 4531,
  [SMALL_STATE(226)] = 4538,
  [SMALL_STATE(227)] = 4545,
  [SMALL_STATE(228)] = 4552,
  [SMALL_STATE(229)] = 4559,
  [SMALL_STATE(230)] = 4566,
  [SMALL_STATE(231)] = 4573,
  [SMALL_STATE(232)] = 4580,
  [SMALL_STATE(233)] = 4587,
  [SMALL_STATE(234)] = 4594,
  [SMALL_STATE(235)] = 4601,
  [SMALL_STATE(236)] = 4608,
  [SMALL_STATE(237)] = 4615,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(205),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(150),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(137),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(224),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(225),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(51),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(229),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(210),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(208),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(206),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(235),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(140),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(129),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(86),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(115),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(180),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(186),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 11),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 11),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, .production_id = 11),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, .production_id = 11),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(215),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(150),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(227),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(44),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(216),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(211),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(204),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(207),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(237),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(140),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(130),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(86),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(109),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(180),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(186),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(8),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(205),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(225),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(51),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(229),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(210),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(208),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(206),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(235),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(129),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(115),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 21),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 21),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 14),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 13),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 13),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3, .production_id = 10),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_goto_statement, 3, .production_id = 12),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_goto_statement, 3, .production_id = 12),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 10),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_labeled_statement, 3, .production_id = 17),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_labeled_statement, 3, .production_id = 17),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 25),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 25),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 26),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 26),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(186),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 18),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 18),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 3, .production_id = 6),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 3, .production_id = 6),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 7),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 8),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_left_expression, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_left_expression, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 5),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 24),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 24),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_identifier, 1, .production_id = 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 15),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 15),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 15),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 4),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 4),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_declarator, 3, .production_id = 23),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3, .production_id = 16),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarator, 2, .production_id = 9),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 19),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 20),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 14),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(181),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(181),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 22), SHIFT_REPEAT(176),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 22),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifiers, 1, .production_id = 1),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(135),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [671] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(71),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [686] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ProgrammingLanguage12d(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
