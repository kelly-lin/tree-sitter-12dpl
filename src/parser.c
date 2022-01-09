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
#define STATE_COUNT 198
#define LARGE_STATE_COUNT 69
#define SYMBOL_COUNT 207
#define ALIAS_COUNT 0
#define TOKEN_COUNT 164
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_switch = 12,
  anon_sym_if = 13,
  anon_sym_else = 14,
  anon_sym_for = 15,
  anon_sym_BANG = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_AMP_AMP = 23,
  anon_sym_PIPE = 24,
  anon_sym_CARET = 25,
  anon_sym_AMP = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_GT = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_LT = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_EQ = 35,
  anon_sym_STAR_EQ = 36,
  anon_sym_SLASH_EQ = 37,
  anon_sym_PERCENT_EQ = 38,
  anon_sym_PLUS_EQ = 39,
  anon_sym_DASH_EQ = 40,
  anon_sym_AMP_EQ = 41,
  anon_sym_CARET_EQ = 42,
  anon_sym_PIPE_EQ = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_DASH_DASH = 46,
  anon_sym_PLUS_PLUS = 47,
  anon_sym_return = 48,
  sym_identifier = 49,
  sym_number_literal = 50,
  anon_sym_DQUOTE = 51,
  aux_sym_string_literal_token1 = 52,
  sym_escape_sequence = 53,
  anon_sym_void = 54,
  anon_sym_Integer = 55,
  anon_sym_Real = 56,
  anon_sym_Text = 57,
  anon_sym_Vector2 = 58,
  anon_sym_Vector3 = 59,
  anon_sym_Vector4 = 60,
  anon_sym_Matrix3 = 61,
  anon_sym_Matrix4 = 62,
  anon_sym_Point = 63,
  anon_sym_Line = 64,
  anon_sym_Arc = 65,
  anon_sym_Spiral = 66,
  anon_sym_Parabola = 67,
  anon_sym_Segment = 68,
  anon_sym_Element = 69,
  anon_sym_Model = 70,
  anon_sym_View = 71,
  anon_sym_Macro_Function = 72,
  anon_sym_Function = 73,
  anon_sym_Uid = 74,
  anon_sym_Guid = 75,
  anon_sym_Attributes = 76,
  anon_sym_SDR_Attribute = 77,
  anon_sym_Blob = 78,
  anon_sym_Screen_Text = 79,
  anon_sym_Textstyle_Data = 80,
  anon_sym_Equality_Label = 81,
  anon_sym_Undo = 82,
  anon_sym_Undo_List = 83,
  anon_sym_Widget = 84,
  anon_sym_Menu = 85,
  anon_sym_Panel = 86,
  anon_sym_Overlay_Widget = 87,
  anon_sym_Vertical_Group = 88,
  anon_sym_Horizontal_Group = 89,
  anon_sym_Widget_Pages = 90,
  anon_sym_Button = 91,
  anon_sym_Select_Button = 92,
  anon_sym_Angle_Box = 93,
  anon_sym_Attributes_Box = 94,
  anon_sym_Billboard_Box = 95,
  anon_sym_Bitmap_Fill_Box = 96,
  anon_sym_Bitmap_List_Box = 97,
  anon_sym_Chainage_Box = 98,
  anon_sym_Choice_Box = 99,
  anon_sym_Colour_Box = 100,
  anon_sym_Colour_Message_Box = 101,
  anon_sym_Date_Time_Box = 102,
  anon_sym_Directory_Box = 103,
  anon_sym_Draw_Box = 104,
  anon_sym_File_Box = 105,
  anon_sym_Function_Box = 106,
  anon_sym_Graph_Box = 107,
  anon_sym_GridCtrl_Box = 108,
  anon_sym_HyperLink_Box = 109,
  anon_sym_Input_Box = 110,
  anon_sym_Integer_Box = 111,
  anon_sym_Justify_Box = 112,
  anon_sym_Linestyle_Box = 113,
  anon_sym_List_Box = 114,
  anon_sym_ListCtrl_Box = 115,
  anon_sym_Map_File_Box = 116,
  anon_sym_Message_Box = 117,
  anon_sym_Model_Box = 118,
  anon_sym_Name_Box = 119,
  anon_sym_Named_Tick_Box = 120,
  anon_sym_New_Select_Box = 121,
  anon_sym_New_XYZ_Box = 122,
  anon_sym_Plotter_Box = 123,
  anon_sym_Polygon_Box = 124,
  anon_sym_Real_Box = 125,
  anon_sym_Report_Box = 126,
  anon_sym_Select_Box = 127,
  anon_sym_Select_Boxes = 128,
  anon_sym_Sheet_Size_Box = 129,
  anon_sym_Source_Box = 130,
  anon_sym_Symbol_Box = 131,
  anon_sym_Tab_Box = 132,
  anon_sym_Target_Box = 133,
  anon_sym_Template_Box = 134,
  anon_sym_Text_Edit_Box = 135,
  anon_sym_Text_Style_Box = 136,
  anon_sym_Texture_Box = 137,
  anon_sym_Tree_Box = 138,
  anon_sym_Tree_Page = 139,
  anon_sym_Tick_Box = 140,
  anon_sym_Tin_Box = 141,
  anon_sym_View_Box = 142,
  anon_sym_XYZ_Box = 143,
  anon_sym_File = 144,
  anon_sym_Map_File = 145,
  anon_sym_Plot_Parameter_File = 146,
  anon_sym_XML_Document = 147,
  anon_sym_XML_Node = 148,
  anon_sym_Connection = 149,
  anon_sym_Select_Query = 150,
  anon_sym_Insert_Query = 151,
  anon_sym_Update_Query = 152,
  anon_sym_Delete_Query = 153,
  anon_sym_Database_Results = 154,
  anon_sym_Transactions = 155,
  anon_sym_Parameter_Collection = 156,
  anon_sym_Query_Condition = 157,
  anon_sym_Manual_Condition = 158,
  anon_sym_Dynamic_Element = 159,
  anon_sym_Dynamic_Integer = 160,
  anon_sym_Dynamic_Real = 161,
  anon_sym_Dynamic_Text = 162,
  sym_comment = 163,
  sym_source_file = 164,
  sym__definition = 165,
  sym_function_definition = 166,
  sym_compound_statement = 167,
  sym_while_statement = 168,
  sym_parameter_list = 169,
  sym_parameter_declaration = 170,
  sym__declaration_specifiers = 171,
  sym__type_specifier = 172,
  sym__statement = 173,
  sym_case_statement = 174,
  sym_break_statement = 175,
  sym_switch_statement = 176,
  sym__non_case_statement = 177,
  sym_if_statement = 178,
  sym_for_statement = 179,
  sym_unary_expression = 180,
  sym_expression_statement = 181,
  sym_comma_expression = 182,
  sym_call_expression = 183,
  sym_argument_list = 184,
  sym_binary_expression = 185,
  sym_assignment_expression = 186,
  sym__assignment_left_expression = 187,
  sym_subscript_expression = 188,
  sym_update_expression = 189,
  sym_parenthesized_expression = 190,
  sym_return_statement = 191,
  sym__expression = 192,
  sym_string_literal = 193,
  sym_declaration = 194,
  sym_init_declarator = 195,
  sym_array_declarator = 196,
  sym_function_declarator = 197,
  sym__declarator = 198,
  sym_primitive_type = 199,
  aux_sym_source_file_repeat1 = 200,
  aux_sym_compound_statement_repeat1 = 201,
  aux_sym_parameter_list_repeat1 = 202,
  aux_sym_case_statement_repeat1 = 203,
  aux_sym_argument_list_repeat1 = 204,
  aux_sym_string_literal_repeat1 = 205,
  aux_sym_declaration_repeat1 = 206,
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
  [anon_sym_switch] = "switch",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [sym_escape_sequence] = "escape_sequence",
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
  [sym_string_literal] = "string_literal",
  [sym_declaration] = "declaration",
  [sym_init_declarator] = "init_declarator",
  [sym_array_declarator] = "array_declarator",
  [sym_function_declarator] = "function_declarator",
  [sym__declarator] = "_declarator",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
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
  [anon_sym_switch] = anon_sym_switch,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_escape_sequence] = sym_escape_sequence,
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
  [sym_string_literal] = sym_string_literal,
  [sym_declaration] = sym_declaration,
  [sym_init_declarator] = sym_init_declarator,
  [sym_array_declarator] = sym_array_declarator,
  [sym_function_declarator] = sym_function_declarator,
  [sym__declarator] = sym__declarator,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_declaration_repeat1] = aux_sym_declaration_repeat1,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym_escape_sequence] = {
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
  field_left = 11,
  field_operator = 12,
  field_parameters = 13,
  field_right = 14,
  field_type = 15,
  field_update = 16,
  field_value = 17,
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
  [field_left] = "left",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_right] = "right",
  [field_type] = "type",
  [field_update] = "update",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 2},
  [10] = {.index = 17, .length = 2},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 1},
  [14] = {.index = 25, .length = 1},
  [15] = {.index = 26, .length = 3},
  [16] = {.index = 29, .length = 2},
  [17] = {.index = 31, .length = 2},
  [18] = {.index = 33, .length = 2},
  [19] = {.index = 35, .length = 3},
  [20] = {.index = 38, .length = 3},
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
    {field_body, 2},
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [10] =
    {field_declarator, 0},
    {field_parameters, 1},
  [12] =
    {field_body, 2},
    {field_condition, 1},
  [14] =
    {field_value, 1},
  [15] =
    {field_condition, 1},
    {field_consequence, 2},
  [17] =
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [19] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [22] =
    {field_left, 0},
    {field_right, 2},
  [24] =
    {field_type, 0, .inherited = true},
  [25] =
    {field_declarator, 1},
  [26] =
    {field_declarator, 1},
    {field_declarator, 2, .inherited = true},
    {field_type, 0, .inherited = true},
  [29] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [31] =
    {field_declarator, 0},
    {field_value, 2},
  [33] =
    {field_argument, 0},
    {field_index, 2},
  [35] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [38] =
    {field_condition, 3},
    {field_initializer, 2},
    {field_update, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(756);
      if (lookahead == '!') ADVANCE(773);
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '&') ADVANCE(783);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == ')') ADVANCE(762);
      if (lookahead == '*') ADVANCE(776);
      if (lookahead == '+') ADVANCE(774);
      if (lookahead == ',') ADVANCE(761);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead == '/') ADVANCE(777);
      if (lookahead == ':') ADVANCE(765);
      if (lookahead == ';') ADVANCE(767);
      if (lookahead == '<') ADVANCE(789);
      if (lookahead == '=') ADVANCE(793);
      if (lookahead == '>') ADVANCE(786);
      if (lookahead == 'A') ADVANCE(1238);
      if (lookahead == 'B') ADVANCE(1144);
      if (lookahead == 'C') ADVANCE(1140);
      if (lookahead == 'D') ADVANCE(971);
      if (lookahead == 'E') ADVANCE(1196);
      if (lookahead == 'F') ADVANCE(1174);
      if (lookahead == 'G') ADVANCE(1359);
      if (lookahead == 'H') ADVANCE(1273);
      if (lookahead == 'I') ADVANCE(1239);
      if (lookahead == 'J') ADVANCE(1473);
      if (lookahead == 'L') ADVANCE(1145);
      if (lookahead == 'M') ADVANCE(961);
      if (lookahead == 'N') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(1494);
      if (lookahead == 'P') ADVANCE(963);
      if (lookahead == 'Q') ADVANCE(1484);
      if (lookahead == 'R') ADVANCE(1043);
      if (lookahead == 'S') ADVANCE(864);
      if (lookahead == 'T') ADVANCE(964);
      if (lookahead == 'U') ADVANCE(1148);
      if (lookahead == 'V') ADVANCE(1044);
      if (lookahead == 'W') ADVANCE(1155);
      if (lookahead == 'X') ADVANCE(879);
      if (lookahead == '[') ADVANCE(802);
      if (lookahead == '\\') SKIP(752)
      if (lookahead == ']') ADVANCE(803);
      if (lookahead == '^') ADVANCE(782);
      if (lookahead == 'b') ADVANCE(1372);
      if (lookahead == 'c') ADVANCE(969);
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1209);
      if (lookahead == 'f') ADVANCE(1275);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(1497);
      if (lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'w') ADVANCE(1142);
      if (lookahead == '{') ADVANCE(757);
      if (lookahead == '|') ADVANCE(781);
      if (lookahead == '}') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (('K' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '/') ADVANCE(1569);
      if (lookahead == '\\') ADVANCE(1574);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1572);
      if (lookahead != 0) ADVANCE(1573);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(772);
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '%') ADVANCE(19);
      if (lookahead == '&') ADVANCE(20);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(767);
      if (lookahead == '=') ADVANCE(792);
      if (lookahead == 'A') ADVANCE(1238);
      if (lookahead == 'B') ADVANCE(1144);
      if (lookahead == 'C') ADVANCE(1140);
      if (lookahead == 'D') ADVANCE(971);
      if (lookahead == 'E') ADVANCE(1196);
      if (lookahead == 'F') ADVANCE(1174);
      if (lookahead == 'G') ADVANCE(1359);
      if (lookahead == 'H') ADVANCE(1273);
      if (lookahead == 'I') ADVANCE(1239);
      if (lookahead == 'J') ADVANCE(1473);
      if (lookahead == 'L') ADVANCE(1145);
      if (lookahead == 'M') ADVANCE(961);
      if (lookahead == 'N') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(1494);
      if (lookahead == 'P') ADVANCE(963);
      if (lookahead == 'Q') ADVANCE(1484);
      if (lookahead == 'R') ADVANCE(1043);
      if (lookahead == 'S') ADVANCE(864);
      if (lookahead == 'T') ADVANCE(964);
      if (lookahead == 'U') ADVANCE(1148);
      if (lookahead == 'V') ADVANCE(1044);
      if (lookahead == 'W') ADVANCE(1155);
      if (lookahead == 'X') ADVANCE(879);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(1372);
      if (lookahead == 'c') ADVANCE(969);
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == 'f') ADVANCE(1275);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(1497);
      if (lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'w') ADVANCE(1142);
      if (lookahead == '{') ADVANCE(757);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(772);
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == ')') ADVANCE(762);
      if (lookahead == ',') ADVANCE(761);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(767);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(772);
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(767);
      if (lookahead == 'A') ADVANCE(1238);
      if (lookahead == 'B') ADVANCE(1144);
      if (lookahead == 'C') ADVANCE(1140);
      if (lookahead == 'D') ADVANCE(971);
      if (lookahead == 'E') ADVANCE(1196);
      if (lookahead == 'F') ADVANCE(1174);
      if (lookahead == 'G') ADVANCE(1359);
      if (lookahead == 'H') ADVANCE(1273);
      if (lookahead == 'I') ADVANCE(1239);
      if (lookahead == 'J') ADVANCE(1473);
      if (lookahead == 'L') ADVANCE(1145);
      if (lookahead == 'M') ADVANCE(961);
      if (lookahead == 'N') ADVANCE(962);
      if (lookahead == 'O') ADVANCE(1494);
      if (lookahead == 'P') ADVANCE(963);
      if (lookahead == 'Q') ADVANCE(1484);
      if (lookahead == 'R') ADVANCE(1043);
      if (lookahead == 'S') ADVANCE(864);
      if (lookahead == 'T') ADVANCE(964);
      if (lookahead == 'U') ADVANCE(1148);
      if (lookahead == 'V') ADVANCE(1044);
      if (lookahead == 'W') ADVANCE(1155);
      if (lookahead == 'X') ADVANCE(879);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'b') ADVANCE(1372);
      if (lookahead == 'c') ADVANCE(969);
      if (lookahead == 'd') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1209);
      if (lookahead == 'f') ADVANCE(1275);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'r') ADVANCE(1058);
      if (lookahead == 's') ADVANCE(1497);
      if (lookahead == 'v') ADVANCE(1348);
      if (lookahead == 'w') ADVANCE(1142);
      if (lookahead == '{') ADVANCE(757);
      if (lookahead == '}') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(1568);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(1574);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(1794);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(1794);
      if (lookahead == '=') ADVANCE(795);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(1793);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(1583);
      if (lookahead == '3') ADVANCE(1585);
      if (lookahead == '4') ADVANCE(1587);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(1589);
      if (lookahead == '4') ADVANCE(1591);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(785);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(796);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(799);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(794);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(797);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(798);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(801);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(657);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(507);
      if (lookahead == 'Q') ADVANCE(675);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(470);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(471);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(472);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(473);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(475);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(478);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(479);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(481);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(484);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(489);
      if (lookahead == 'P') ADVANCE(208);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(491);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(495);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(498);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(500);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(502);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(504);
      if (lookahead == 'M') ADVANCE(271);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(506);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(508);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(509);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(510);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(511);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(512);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(513);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(514);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(515);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(516);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(517);
      END_STATE();
    case 56:
      if (lookahead == 'B') ADVANCE(518);
      END_STATE();
    case 57:
      if (lookahead == 'B') ADVANCE(519);
      END_STATE();
    case 58:
      if (lookahead == 'B') ADVANCE(520);
      END_STATE();
    case 59:
      if (lookahead == 'B') ADVANCE(521);
      END_STATE();
    case 60:
      if (lookahead == 'B') ADVANCE(522);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(523);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(524);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(525);
      END_STATE();
    case 64:
      if (lookahead == 'B') ADVANCE(526);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(527);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(528);
      END_STATE();
    case 67:
      if (lookahead == 'B') ADVANCE(529);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(530);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(531);
      END_STATE();
    case 70:
      if (lookahead == 'B') ADVANCE(532);
      END_STATE();
    case 71:
      if (lookahead == 'B') ADVANCE(533);
      END_STATE();
    case 72:
      if (lookahead == 'B') ADVANCE(534);
      END_STATE();
    case 73:
      if (lookahead == 'B') ADVANCE(535);
      END_STATE();
    case 74:
      if (lookahead == 'B') ADVANCE(536);
      END_STATE();
    case 75:
      if (lookahead == 'B') ADVANCE(537);
      END_STATE();
    case 76:
      if (lookahead == 'C') ADVANCE(490);
      END_STATE();
    case 77:
      if (lookahead == 'C') ADVANCE(631);
      END_STATE();
    case 78:
      if (lookahead == 'C') ADVANCE(497);
      END_STATE();
    case 79:
      if (lookahead == 'C') ADVANCE(546);
      END_STATE();
    case 80:
      if (lookahead == 'C') ADVANCE(658);
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(576);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead == 'h') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(664);
      if (lookahead == 'p') ADVANCE(361);
      if (lookahead == 'y') ADVANCE(424);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(474);
      if (lookahead == 'N') ADVANCE(538);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(202);
      END_STATE();
    case 84:
      if (lookahead == 'E') ADVANCE(249);
      if (lookahead == 'S') ADVANCE(659);
      END_STATE();
    case 85:
      if (lookahead == 'E') ADVANCE(418);
      if (lookahead == 'I') ADVANCE(456);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead == 'T') ADVANCE(304);
      END_STATE();
    case 86:
      if (lookahead == 'F') ADVANCE(677);
      END_STATE();
    case 87:
      if (lookahead == 'F') ADVANCE(379);
      END_STATE();
    case 88:
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'L') ADVANCE(377);
      END_STATE();
    case 89:
      if (lookahead == 'F') ADVANCE(382);
      END_STATE();
    case 90:
      if (lookahead == 'G') ADVANCE(574);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(575);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(117);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(194);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(364);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(375);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(92);
      if (lookahead == 'Y') ADVANCE(111);
      END_STATE();
    case 97:
      if (lookahead == 'P') ADVANCE(201);
      END_STATE();
    case 98:
      if (lookahead == 'P') ADVANCE(209);
      END_STATE();
    case 99:
      if (lookahead == 'Q') ADVANCE(673);
      END_STATE();
    case 100:
      if (lookahead == 'Q') ADVANCE(674);
      END_STATE();
    case 101:
      if (lookahead == 'Q') ADVANCE(676);
      END_STATE();
    case 102:
      if (lookahead == 'R') ADVANCE(115);
      END_STATE();
    case 103:
      if (lookahead == 'R') ADVANCE(272);
      END_STATE();
    case 104:
      if (lookahead == 'S') ADVANCE(353);
      END_STATE();
    case 105:
      if (lookahead == 'S') ADVANCE(308);
      if (lookahead == 'X') ADVANCE(110);
      END_STATE();
    case 106:
      if (lookahead == 'T') ADVANCE(378);
      END_STATE();
    case 107:
      if (lookahead == 'T') ADVANCE(360);
      END_STATE();
    case 108:
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 109:
      if (lookahead == 'W') ADVANCE(384);
      END_STATE();
    case 110:
      if (lookahead == 'Y') ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == 'Z') ADVANCE(138);
      END_STATE();
    case 112:
      if (lookahead == 'Z') ADVANCE(152);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(105);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(106);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(103);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(107);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(53);
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
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(64);
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
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 169:
      if (lookahead == '_') ADVANCE(72);
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
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 174:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 175:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 176:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 177:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == 'e') ADVANCE(447);
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(451);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == 'o') ADVANCE(357);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(1601);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(1627);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(615);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(566);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == 'y') ADVANCE(446);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'p') ADVANCE(543);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(376);
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(401);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(427);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(221);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(459);
      if (lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(423);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(393);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(570);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(625);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(342);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(431);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(412);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(343);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(344);
      END_STATE();
    case 215:
      if (lookahead == 'b') ADVANCE(1623);
      END_STATE();
    case 216:
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 217:
      if (lookahead == 'b') ADVANCE(188);
      END_STATE();
    case 218:
      if (lookahead == 'b') ADVANCE(486);
      END_STATE();
    case 219:
      if (lookahead == 'b') ADVANCE(488);
      END_STATE();
    case 220:
      if (lookahead == 'b') ADVANCE(542);
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 221:
      if (lookahead == 'b') ADVANCE(287);
      END_STATE();
    case 222:
      if (lookahead == 'b') ADVANCE(671);
      END_STATE();
    case 223:
      if (lookahead == 'b') ADVANCE(672);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(1597);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(386);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead == 'n') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(678);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(632);
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 233:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 234:
      if (lookahead == 'c') ADVANCE(636);
      END_STATE();
    case 235:
      if (lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 236:
      if (lookahead == 'c') ADVANCE(642);
      END_STATE();
    case 237:
      if (lookahead == 'c') ADVANCE(635);
      END_STATE();
    case 238:
      if (lookahead == 'c') ADVANCE(318);
      END_STATE();
    case 239:
      if (lookahead == 'c') ADVANCE(388);
      END_STATE();
    case 240:
      if (lookahead == 'c') ADVANCE(319);
      END_STATE();
    case 241:
      if (lookahead == 'c') ADVANCE(649);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(1615);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(1617);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(1575);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 247:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 248:
      if (lookahead == 'd') ADVANCE(269);
      END_STATE();
    case 249:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 250:
      if (lookahead == 'd') ADVANCE(380);
      END_STATE();
    case 251:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 252:
      if (lookahead == 'd') ADVANCE(337);
      END_STATE();
    case 253:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 254:
      if (lookahead == 'd') ADVANCE(339);
      END_STATE();
    case 255:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(266);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(1756);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(1595);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(1758);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(1745);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(1621);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(1759);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(601);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(338);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(453);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(458);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(340);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(744);
      END_STATE();
    case 332:
      if (lookahead == 'g') ADVANCE(480);
      END_STATE();
    case 333:
      if (lookahead == 'g') ADVANCE(263);
      END_STATE();
    case 334:
      if (lookahead == 'g') ADVANCE(279);
      END_STATE();
    case 335:
      if (lookahead == 'g') ADVANCE(403);
      END_STATE();
    case 336:
      if (lookahead == 'g') ADVANCE(329);
      END_STATE();
    case 337:
      if (lookahead == 'g') ADVANCE(286);
      END_STATE();
    case 338:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 339:
      if (lookahead == 'g') ADVANCE(298);
      END_STATE();
    case 340:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 341:
      if (lookahead == 'g') ADVANCE(430);
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 342:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 343:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 344:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 345:
      if (lookahead == 'h') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 346:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(396);
      if (lookahead == 'l') ADVANCE(467);
      if (lookahead == 'u') ADVANCE(617);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(331);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(683);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(238);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(450);
      if (lookahead == 'l') ADVANCE(739);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(252);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(578);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(420);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(499);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(501);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(503);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(505);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'u') ADVANCE(445);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 377:
      if (lookahead == 'i') ADVANCE(599);
      END_STATE();
    case 378:
      if (lookahead == 'i') ADVANCE(434);
      END_STATE();
    case 379:
      if (lookahead == 'i') ADVANCE(405);
      END_STATE();
    case 380:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(648);
      END_STATE();
    case 386:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 387:
      if (lookahead == 'k') ADVANCE(163);
      END_STATE();
    case 388:
      if (lookahead == 'k') ADVANCE(166);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(1580);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(1608);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(1639);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(1599);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(1789);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(1629);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'q') ADVANCE(662);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(409);
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'n') ADVANCE(460);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(258);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(366);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(315);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(622);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(419);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 415:
      if (lookahead == 'l') ADVANCE(157);
      END_STATE();
    case 416:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 417:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 418:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 419:
      if (lookahead == 'l') ADVANCE(317);
      END_STATE();
    case 420:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 421:
      if (lookahead == 'l') ADVANCE(325);
      END_STATE();
    case 422:
      if (lookahead == 'l') ADVANCE(327);
      END_STATE();
    case 423:
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 424:
      if (lookahead == 'm') ADVANCE(218);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(551);
      if (lookahead == 'x') ADVANCE(604);
      END_STATE();
    case 426:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 427:
      if (lookahead == 'm') ADVANCE(358);
      END_STATE();
    case 428:
      if (lookahead == 'm') ADVANCE(260);
      END_STATE();
    case 429:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 430:
      if (lookahead == 'm') ADVANCE(306);
      END_STATE();
    case 431:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 432:
      if (lookahead == 'm') ADVANCE(310);
      END_STATE();
    case 433:
      if (lookahead == 'm') ADVANCE(311);
      END_STATE();
    case 434:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(224);
      if (lookahead == 't') ADVANCE(630);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(550);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(1649);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(1614);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(1765);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(1651);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(1611);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(1781);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(1783);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(1779);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead == 's') ADVANCE(594);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == 's') ADVANCE(602);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(607);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(608);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(651);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(612);
      END_STATE();
    case 458:
      if (lookahead == 'n') ADVANCE(614);
      END_STATE();
    case 459:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 460:
      if (lookahead == 'n') ADVANCE(312);
      END_STATE();
    case 461:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 462:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 463:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 464:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 465:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 466:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(1632);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead == 'y') ADVANCE(553);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(464);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(414);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(461);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(444);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(702);
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(723);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(724);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(725);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(726);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(727);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(728);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(730);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(731);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 538:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 539:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 540:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 541:
      if (lookahead == 'o') ADVANCE(583);
      END_STATE();
    case 542:
      if (lookahead == 'o') ADVANCE(402);
      END_STATE();
    case 543:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(363);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(462);
      END_STATE();
    case 547:
      if (lookahead == 'p') ADVANCE(346);
      END_STATE();
    case 548:
      if (lookahead == 'p') ADVANCE(1643);
      END_STATE();
    case 549:
      if (lookahead == 'p') ADVANCE(1645);
      END_STATE();
    case 550:
      if (lookahead == 'p') ADVANCE(666);
      if (lookahead == 's') ADVANCE(278);
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 551:
      if (lookahead == 'p') ADVANCE(411);
      END_STATE();
    case 552:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 553:
      if (lookahead == 'p') ADVANCE(276);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(362);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(1578);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(735);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(400);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(737);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(738);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(351);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(652);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(483);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(415);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(416);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(1620);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(1723);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(1777);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(1647);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(1775);
      END_STATE();
    case 593:
      if (lookahead == 's') ADVANCE(619);
      END_STATE();
    case 594:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 595:
      if (lookahead == 's') ADVANCE(668);
      END_STATE();
    case 596:
      if (lookahead == 's') ADVANCE(210);
      END_STATE();
    case 597:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 598:
      if (lookahead == 's') ADVANCE(609);
      END_STATE();
    case 599:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 600:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 601:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(1636);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(1605);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(1603);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(1633);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(1625);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(1791);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(1761);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(1641);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(1785);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(592);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(742);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(584);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(593);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(1637);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(587);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 667:
      if (lookahead == 'u') ADVANCE(571);
      END_STATE();
    case 668:
      if (lookahead == 'u') ADVANCE(407);
      END_STATE();
    case 669:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 670:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 671:
      if (lookahead == 'u') ADVANCE(627);
      END_STATE();
    case 672:
      if (lookahead == 'u') ADVANCE(628);
      END_STATE();
    case 673:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 674:
      if (lookahead == 'u') ADVANCE(290);
      END_STATE();
    case 675:
      if (lookahead == 'u') ADVANCE(291);
      END_STATE();
    case 676:
      if (lookahead == 'u') ADVANCE(293);
      END_STATE();
    case 677:
      if (lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 678:
      if (lookahead == 'u') ADVANCE(432);
      END_STATE();
    case 679:
      if (lookahead == 'v') ADVANCE(267);
      END_STATE();
    case 680:
      if (lookahead == 'w') ADVANCE(1610);
      END_STATE();
    case 681:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 682:
      if (lookahead == 'w') ADVANCE(139);
      END_STATE();
    case 683:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 684:
      if (lookahead == 'x') ADVANCE(1731);
      END_STATE();
    case 685:
      if (lookahead == 'x') ADVANCE(1749);
      END_STATE();
    case 686:
      if (lookahead == 'x') ADVANCE(1753);
      END_STATE();
    case 687:
      if (lookahead == 'x') ADVANCE(1675);
      END_STATE();
    case 688:
      if (lookahead == 'x') ADVANCE(1677);
      END_STATE();
    case 689:
      if (lookahead == 'x') ADVANCE(1695);
      END_STATE();
    case 690:
      if (lookahead == 'x') ADVANCE(1705);
      END_STATE();
    case 691:
      if (lookahead == 'x') ADVANCE(1717);
      END_STATE();
    case 692:
      if (lookahead == 'x') ADVANCE(1747);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(1743);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(1751);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(1653);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(1681);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(1687);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(1703);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(1665);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(1667);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(1719);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(1722);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(1727);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(1729);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(1733);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(1689);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(1691);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(1701);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(1711);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(1713);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(1715);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(1741);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(1663);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(1679);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(1683);
      END_STATE();
    case 716:
      if (lookahead == 'x') ADVANCE(1697);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(1699);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(1735);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(1657);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(1671);
      END_STATE();
    case 721:
      if (lookahead == 'x') ADVANCE(1673);
      END_STATE();
    case 722:
      if (lookahead == 'x') ADVANCE(1685);
      END_STATE();
    case 723:
      if (lookahead == 'x') ADVANCE(1693);
      END_STATE();
    case 724:
      if (lookahead == 'x') ADVANCE(1737);
      END_STATE();
    case 725:
      if (lookahead == 'x') ADVANCE(1655);
      END_STATE();
    case 726:
      if (lookahead == 'x') ADVANCE(1707);
      END_STATE();
    case 727:
      if (lookahead == 'x') ADVANCE(1709);
      END_STATE();
    case 728:
      if (lookahead == 'x') ADVANCE(1725);
      END_STATE();
    case 729:
      if (lookahead == 'x') ADVANCE(1739);
      END_STATE();
    case 730:
      if (lookahead == 'x') ADVANCE(1659);
      END_STATE();
    case 731:
      if (lookahead == 'x') ADVANCE(1661);
      END_STATE();
    case 732:
      if (lookahead == 'x') ADVANCE(1669);
      END_STATE();
    case 733:
      if (lookahead == 'x') ADVANCE(610);
      END_STATE();
    case 734:
      if (lookahead == 'x') ADVANCE(611);
      END_STATE();
    case 735:
      if (lookahead == 'y') ADVANCE(1773);
      END_STATE();
    case 736:
      if (lookahead == 'y') ADVANCE(1769);
      END_STATE();
    case 737:
      if (lookahead == 'y') ADVANCE(1767);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(1771);
      END_STATE();
    case 739:
      if (lookahead == 'y') ADVANCE(332);
      END_STATE();
    case 740:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 741:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 742:
      if (lookahead == 'y') ADVANCE(134);
      END_STATE();
    case 743:
      if (lookahead == 'y') ADVANCE(406);
      END_STATE();
    case 744:
      if (lookahead == 'y') ADVANCE(150);
      END_STATE();
    case 745:
      if (lookahead == 'y') ADVANCE(162);
      END_STATE();
    case 746:
      if (lookahead == 'y') ADVANCE(421);
      END_STATE();
    case 747:
      if (lookahead == 'y') ADVANCE(422);
      END_STATE();
    case 748:
      if (lookahead == 'z') ADVANCE(545);
      END_STATE();
    case 749:
      if (lookahead == 'z') ADVANCE(326);
      END_STATE();
    case 750:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(1794);
      if (lookahead == '\r') ADVANCE(1795);
      END_STATE();
    case 751:
      if (eof) ADVANCE(756);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 752:
      if (eof) ADVANCE(756);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(751)
      END_STATE();
    case 753:
      if (eof) ADVANCE(756);
      if (lookahead == '\n') SKIP(755)
      END_STATE();
    case 754:
      if (eof) ADVANCE(756);
      if (lookahead == '\n') SKIP(755)
      if (lookahead == '\r') SKIP(753)
      END_STATE();
    case 755:
      if (eof) ADVANCE(756);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '%') ADVANCE(778);
      if (lookahead == '&') ADVANCE(783);
      if (lookahead == '(') ADVANCE(760);
      if (lookahead == ')') ADVANCE(762);
      if (lookahead == '*') ADVANCE(776);
      if (lookahead == '+') ADVANCE(774);
      if (lookahead == ',') ADVANCE(761);
      if (lookahead == '-') ADVANCE(775);
      if (lookahead == '/') ADVANCE(777);
      if (lookahead == ':') ADVANCE(765);
      if (lookahead == ';') ADVANCE(767);
      if (lookahead == '<') ADVANCE(789);
      if (lookahead == '=') ADVANCE(793);
      if (lookahead == '>') ADVANCE(786);
      if (lookahead == 'A') ADVANCE(435);
      if (lookahead == 'B') ADVANCE(347);
      if (lookahead == 'C') ADVANCE(345);
      if (lookahead == 'D') ADVANCE(186);
      if (lookahead == 'E') ADVANCE(395);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'G') ADVANCE(554);
      if (lookahead == 'H') ADVANCE(469);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead == 'J') ADVANCE(660);
      if (lookahead == 'L') ADVANCE(348);
      if (lookahead == 'M') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(679);
      if (lookahead == 'P') ADVANCE(180);
      if (lookahead == 'Q') ADVANCE(669);
      if (lookahead == 'R') ADVANCE(256);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'T') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(352);
      if (lookahead == 'V') ADVANCE(257);
      if (lookahead == 'W') ADVANCE(359);
      if (lookahead == 'X') ADVANCE(96);
      if (lookahead == '[') ADVANCE(802);
      if (lookahead == '\\') SKIP(754)
      if (lookahead == ']') ADVANCE(803);
      if (lookahead == '^') ADVANCE(782);
      if (lookahead == 'v') ADVANCE(544);
      if (lookahead == '{') ADVANCE(757);
      if (lookahead == '|') ADVANCE(781);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(755)
      END_STATE();
    case 756:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_default);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_switch);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(785);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(805);
      if (lookahead == '=') ADVANCE(797);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(804);
      if (lookahead == '=') ADVANCE(798);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(794);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(1794);
      if (lookahead == '=') ADVANCE(795);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(796);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(801);
      if (lookahead == '|') ADVANCE(779);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(800);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(780);
      if (lookahead == '=') ADVANCE(799);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(787);
      if (lookahead == '>') ADVANCE(791);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(790);
      if (lookahead == '=') ADVANCE(788);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(784);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1584);
      if (lookahead == '3') ADVANCE(1586);
      if (lookahead == '4') ADVANCE(1588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(1590);
      if (lookahead == '4') ADVANCE(1592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1312);
      if (lookahead == 'Q') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1291);
      if (lookahead == 'P') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1308);
      if (lookahead == 'M') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1471);
      if (lookahead == '_') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(885);
      if (lookahead == 'c') ADVANCE(1381);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead == 'h') ADVANCE(1098);
      if (lookahead == 'o') ADVANCE(1478);
      if (lookahead == 'p') ADVANCE(1158);
      if (lookahead == 'y') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(1281);
      if (lookahead == 'N') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1037);
      if (lookahead == 'S') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1221);
      if (lookahead == 'I') ADVANCE(1260);
      if (lookahead == 'R') ADVANCE(1101);
      if (lookahead == 'T') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1163);
      if (lookahead == 'L') ADVANCE(1175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(875);
      if (lookahead == 'Y') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1102);
      if (lookahead == 'X') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(880);
      if (lookahead == 't') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(817);
      if (lookahead == 'd') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1013);
      if (lookahead == 'e') ADVANCE(1251);
      if (lookahead == 'o') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1231);
      if (lookahead == 'e') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'l') ADVANCE(1283);
      if (lookahead == 'o') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1002);
      if (lookahead == 'e') ADVANCE(1228);
      if (lookahead == 'i') ADVANCE(1011);
      if (lookahead == 'r') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1354);
      if (lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1426);
      if (lookahead == 'e') ADVANCE(1211);
      if (lookahead == 'i') ADVANCE(1376);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == 'y') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1008);
      if (lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1189);
      if (lookahead == 'p') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1263);
      if (lookahead == 'e') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead == 'o') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(899);
      if (lookahead == 'r') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1346);
      if (lookahead == 'm') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1186);
      if (lookahead == 'n') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1373);
      if (lookahead == 'n') ADVANCE(1483);
      if (lookahead == 'p') ADVANCE(896);
      if (lookahead == 't') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1447);
      if (lookahead == 'r') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead == 'i') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1074);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1233);
      if (lookahead == 'l') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(979);
      if (lookahead == 'o') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1195);
      if (lookahead == 'l') ADVANCE(1271);
      if (lookahead == 'u') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1029);
      if (lookahead == 'n') ADVANCE(1034);
      if (lookahead == 'p') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1255);
      if (lookahead == 'l') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead == 'u') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead == 't') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'q') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1349);
      if (lookahead == 'n') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1356);
      if (lookahead == 'x') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1130);
      if (lookahead == 'r') ADVANCE(1010);
      if (lookahead == 't') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1474);
      if (lookahead == 's') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1046);
      if (lookahead == 's') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead == 'r') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1371);
      if (lookahead == 'y') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1518);
      if (lookahead == 'u') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1482);
      if (lookahead == 's') ADVANCE(1071);
      if (lookahead == 't') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(968);
      if (lookahead == 'u') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1566);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1566);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1567);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1571);
      if (lookahead == '/') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1573);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1570);
      if (lookahead == '/') ADVANCE(1573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1571);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(1570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1571);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(1569);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1573);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1573);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(867);
      if (lookahead == 's') ADVANCE(1457);
      if (lookahead == 'u') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 'u') ADVANCE(585);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_Vector4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_Point);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(616);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_Arc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_Spiral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_Parabola);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_Segment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_Uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_Guid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_Blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_Menu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_Panel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 1748:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1749:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 1750:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1751:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(anon_sym_View_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 1754:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1763:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 1764:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(anon_sym_Connection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1767:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 1768:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 1770:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1771:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(anon_sym_Transactions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1779:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 1780:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 1786:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 1788:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      END_STATE();
    case 1792:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1566);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1794);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(1794);
      if (lookahead == '\\') ADVANCE(750);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 755},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 755},
  [61] = {.lex_state = 755},
  [62] = {.lex_state = 755},
  [63] = {.lex_state = 755},
  [64] = {.lex_state = 755},
  [65] = {.lex_state = 755},
  [66] = {.lex_state = 755},
  [67] = {.lex_state = 755},
  [68] = {.lex_state = 755},
  [69] = {.lex_state = 755},
  [70] = {.lex_state = 755},
  [71] = {.lex_state = 755},
  [72] = {.lex_state = 755},
  [73] = {.lex_state = 755},
  [74] = {.lex_state = 755},
  [75] = {.lex_state = 755},
  [76] = {.lex_state = 755},
  [77] = {.lex_state = 755},
  [78] = {.lex_state = 755},
  [79] = {.lex_state = 755},
  [80] = {.lex_state = 755},
  [81] = {.lex_state = 755},
  [82] = {.lex_state = 755},
  [83] = {.lex_state = 755},
  [84] = {.lex_state = 755},
  [85] = {.lex_state = 755},
  [86] = {.lex_state = 755},
  [87] = {.lex_state = 755},
  [88] = {.lex_state = 755},
  [89] = {.lex_state = 755},
  [90] = {.lex_state = 755},
  [91] = {.lex_state = 755},
  [92] = {.lex_state = 755},
  [93] = {.lex_state = 755},
  [94] = {.lex_state = 755},
  [95] = {.lex_state = 755},
  [96] = {.lex_state = 755},
  [97] = {.lex_state = 755},
  [98] = {.lex_state = 755},
  [99] = {.lex_state = 755},
  [100] = {.lex_state = 755},
  [101] = {.lex_state = 755},
  [102] = {.lex_state = 755},
  [103] = {.lex_state = 755},
  [104] = {.lex_state = 755},
  [105] = {.lex_state = 755},
  [106] = {.lex_state = 755},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 9},
  [109] = {.lex_state = 9},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 9},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 9},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 9},
  [118] = {.lex_state = 9},
  [119] = {.lex_state = 9},
  [120] = {.lex_state = 9},
  [121] = {.lex_state = 9},
  [122] = {.lex_state = 9},
  [123] = {.lex_state = 9},
  [124] = {.lex_state = 9},
  [125] = {.lex_state = 9},
  [126] = {.lex_state = 9},
  [127] = {.lex_state = 9},
  [128] = {.lex_state = 9},
  [129] = {.lex_state = 9},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 9},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 9},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 9},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 9},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 9},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
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
  [197] = {.lex_state = 0},
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
    [anon_sym_switch] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(196),
    [sym__definition] = STATE(60),
    [sym_function_definition] = STATE(60),
    [sym_compound_statement] = STATE(60),
    [sym__declaration_specifiers] = STATE(157),
    [sym__type_specifier] = STATE(168),
    [sym_primitive_type] = STATE(168),
    [aux_sym_source_file_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_compound_statement] = STATE(3),
    [sym_while_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(3),
    [sym_case_statement] = STATE(3),
    [sym_break_statement] = STATE(3),
    [sym_switch_statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_compound_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(8),
    [sym_case_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(8),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(8),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(8),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_compound_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(8),
    [sym_case_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(8),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(8),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(8),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_compound_statement] = STATE(4),
    [sym_while_statement] = STATE(4),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(4),
    [sym_case_statement] = STATE(4),
    [sym_break_statement] = STATE(4),
    [sym_switch_statement] = STATE(4),
    [sym__non_case_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(4),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(4),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(4),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_compound_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(8),
    [sym_case_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(8),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(8),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(8),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym_compound_statement] = STATE(6),
    [sym_while_statement] = STATE(6),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(6),
    [sym_case_statement] = STATE(6),
    [sym_break_statement] = STATE(6),
    [sym_switch_statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(6),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(6),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(6),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym_compound_statement] = STATE(8),
    [sym_while_statement] = STATE(8),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(8),
    [sym_case_statement] = STATE(8),
    [sym_break_statement] = STATE(8),
    [sym_switch_statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(8),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(8),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(8),
    [sym_primitive_type] = STATE(168),
    [aux_sym_compound_statement_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(58),
    [anon_sym_while] = ACTIONS(60),
    [anon_sym_LPAREN] = ACTIONS(63),
    [anon_sym_case] = ACTIONS(66),
    [anon_sym_default] = ACTIONS(69),
    [anon_sym_break] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_switch] = ACTIONS(78),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_for] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(90),
    [sym_identifier] = ACTIONS(93),
    [sym_number_literal] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_void] = ACTIONS(102),
    [anon_sym_Integer] = ACTIONS(102),
    [anon_sym_Real] = ACTIONS(102),
    [anon_sym_Text] = ACTIONS(102),
    [anon_sym_Vector2] = ACTIONS(102),
    [anon_sym_Vector3] = ACTIONS(102),
    [anon_sym_Vector4] = ACTIONS(102),
    [anon_sym_Matrix3] = ACTIONS(102),
    [anon_sym_Matrix4] = ACTIONS(102),
    [anon_sym_Point] = ACTIONS(102),
    [anon_sym_Line] = ACTIONS(102),
    [anon_sym_Arc] = ACTIONS(102),
    [anon_sym_Spiral] = ACTIONS(102),
    [anon_sym_Parabola] = ACTIONS(102),
    [anon_sym_Segment] = ACTIONS(102),
    [anon_sym_Element] = ACTIONS(102),
    [anon_sym_Model] = ACTIONS(102),
    [anon_sym_View] = ACTIONS(102),
    [anon_sym_Macro_Function] = ACTIONS(102),
    [anon_sym_Function] = ACTIONS(102),
    [anon_sym_Uid] = ACTIONS(102),
    [anon_sym_Guid] = ACTIONS(102),
    [anon_sym_Attributes] = ACTIONS(102),
    [anon_sym_SDR_Attribute] = ACTIONS(102),
    [anon_sym_Blob] = ACTIONS(102),
    [anon_sym_Screen_Text] = ACTIONS(102),
    [anon_sym_Textstyle_Data] = ACTIONS(102),
    [anon_sym_Equality_Label] = ACTIONS(102),
    [anon_sym_Undo] = ACTIONS(102),
    [anon_sym_Undo_List] = ACTIONS(102),
    [anon_sym_Widget] = ACTIONS(102),
    [anon_sym_Menu] = ACTIONS(102),
    [anon_sym_Panel] = ACTIONS(102),
    [anon_sym_Overlay_Widget] = ACTIONS(102),
    [anon_sym_Vertical_Group] = ACTIONS(102),
    [anon_sym_Horizontal_Group] = ACTIONS(102),
    [anon_sym_Widget_Pages] = ACTIONS(102),
    [anon_sym_Button] = ACTIONS(102),
    [anon_sym_Select_Button] = ACTIONS(102),
    [anon_sym_Angle_Box] = ACTIONS(102),
    [anon_sym_Attributes_Box] = ACTIONS(102),
    [anon_sym_Billboard_Box] = ACTIONS(102),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(102),
    [anon_sym_Bitmap_List_Box] = ACTIONS(102),
    [anon_sym_Chainage_Box] = ACTIONS(102),
    [anon_sym_Choice_Box] = ACTIONS(102),
    [anon_sym_Colour_Box] = ACTIONS(102),
    [anon_sym_Colour_Message_Box] = ACTIONS(102),
    [anon_sym_Date_Time_Box] = ACTIONS(102),
    [anon_sym_Directory_Box] = ACTIONS(102),
    [anon_sym_Draw_Box] = ACTIONS(102),
    [anon_sym_File_Box] = ACTIONS(102),
    [anon_sym_Function_Box] = ACTIONS(102),
    [anon_sym_Graph_Box] = ACTIONS(102),
    [anon_sym_GridCtrl_Box] = ACTIONS(102),
    [anon_sym_HyperLink_Box] = ACTIONS(102),
    [anon_sym_Input_Box] = ACTIONS(102),
    [anon_sym_Integer_Box] = ACTIONS(102),
    [anon_sym_Justify_Box] = ACTIONS(102),
    [anon_sym_Linestyle_Box] = ACTIONS(102),
    [anon_sym_List_Box] = ACTIONS(102),
    [anon_sym_ListCtrl_Box] = ACTIONS(102),
    [anon_sym_Map_File_Box] = ACTIONS(102),
    [anon_sym_Message_Box] = ACTIONS(102),
    [anon_sym_Model_Box] = ACTIONS(102),
    [anon_sym_Name_Box] = ACTIONS(102),
    [anon_sym_Named_Tick_Box] = ACTIONS(102),
    [anon_sym_New_Select_Box] = ACTIONS(102),
    [anon_sym_New_XYZ_Box] = ACTIONS(102),
    [anon_sym_Plotter_Box] = ACTIONS(102),
    [anon_sym_Polygon_Box] = ACTIONS(102),
    [anon_sym_Real_Box] = ACTIONS(102),
    [anon_sym_Report_Box] = ACTIONS(102),
    [anon_sym_Select_Box] = ACTIONS(102),
    [anon_sym_Select_Boxes] = ACTIONS(102),
    [anon_sym_Sheet_Size_Box] = ACTIONS(102),
    [anon_sym_Source_Box] = ACTIONS(102),
    [anon_sym_Symbol_Box] = ACTIONS(102),
    [anon_sym_Tab_Box] = ACTIONS(102),
    [anon_sym_Target_Box] = ACTIONS(102),
    [anon_sym_Template_Box] = ACTIONS(102),
    [anon_sym_Text_Edit_Box] = ACTIONS(102),
    [anon_sym_Text_Style_Box] = ACTIONS(102),
    [anon_sym_Texture_Box] = ACTIONS(102),
    [anon_sym_Tree_Box] = ACTIONS(102),
    [anon_sym_Tree_Page] = ACTIONS(102),
    [anon_sym_Tick_Box] = ACTIONS(102),
    [anon_sym_Tin_Box] = ACTIONS(102),
    [anon_sym_View_Box] = ACTIONS(102),
    [anon_sym_XYZ_Box] = ACTIONS(102),
    [anon_sym_File] = ACTIONS(102),
    [anon_sym_Map_File] = ACTIONS(102),
    [anon_sym_Plot_Parameter_File] = ACTIONS(102),
    [anon_sym_XML_Document] = ACTIONS(102),
    [anon_sym_XML_Node] = ACTIONS(102),
    [anon_sym_Connection] = ACTIONS(102),
    [anon_sym_Select_Query] = ACTIONS(102),
    [anon_sym_Insert_Query] = ACTIONS(102),
    [anon_sym_Update_Query] = ACTIONS(102),
    [anon_sym_Delete_Query] = ACTIONS(102),
    [anon_sym_Database_Results] = ACTIONS(102),
    [anon_sym_Transactions] = ACTIONS(102),
    [anon_sym_Parameter_Collection] = ACTIONS(102),
    [anon_sym_Query_Condition] = ACTIONS(102),
    [anon_sym_Manual_Condition] = ACTIONS(102),
    [anon_sym_Dynamic_Element] = ACTIONS(102),
    [anon_sym_Dynamic_Integer] = ACTIONS(102),
    [anon_sym_Dynamic_Real] = ACTIONS(102),
    [anon_sym_Dynamic_Text] = ACTIONS(102),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym_compound_statement] = STATE(10),
    [sym_while_statement] = STATE(10),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(10),
    [sym_switch_statement] = STATE(10),
    [sym__non_case_statement] = STATE(10),
    [sym_if_statement] = STATE(10),
    [sym_for_statement] = STATE(10),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(10),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(10),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(10),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(10),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(111),
    [anon_sym_default] = ACTIONS(111),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(111),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(129),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym_compound_statement] = STATE(12),
    [sym_while_statement] = STATE(12),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(12),
    [sym_switch_statement] = STATE(12),
    [sym__non_case_statement] = STATE(12),
    [sym_if_statement] = STATE(12),
    [sym_for_statement] = STATE(12),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(12),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(12),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(12),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(12),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(133),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_else] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym_compound_statement] = STATE(13),
    [sym_while_statement] = STATE(13),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(13),
    [sym_switch_statement] = STATE(13),
    [sym__non_case_statement] = STATE(13),
    [sym_if_statement] = STATE(13),
    [sym_for_statement] = STATE(13),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(13),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(13),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(13),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(13),
    [anon_sym_LBRACE] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_while] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(150),
    [anon_sym_default] = ACTIONS(150),
    [anon_sym_break] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_switch] = ACTIONS(158),
    [anon_sym_if] = ACTIONS(161),
    [anon_sym_else] = ACTIONS(150),
    [anon_sym_for] = ACTIONS(164),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(170),
    [sym_identifier] = ACTIONS(173),
    [sym_number_literal] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_void] = ACTIONS(182),
    [anon_sym_Integer] = ACTIONS(182),
    [anon_sym_Real] = ACTIONS(182),
    [anon_sym_Text] = ACTIONS(182),
    [anon_sym_Vector2] = ACTIONS(182),
    [anon_sym_Vector3] = ACTIONS(182),
    [anon_sym_Vector4] = ACTIONS(182),
    [anon_sym_Matrix3] = ACTIONS(182),
    [anon_sym_Matrix4] = ACTIONS(182),
    [anon_sym_Point] = ACTIONS(182),
    [anon_sym_Line] = ACTIONS(182),
    [anon_sym_Arc] = ACTIONS(182),
    [anon_sym_Spiral] = ACTIONS(182),
    [anon_sym_Parabola] = ACTIONS(182),
    [anon_sym_Segment] = ACTIONS(182),
    [anon_sym_Element] = ACTIONS(182),
    [anon_sym_Model] = ACTIONS(182),
    [anon_sym_View] = ACTIONS(182),
    [anon_sym_Macro_Function] = ACTIONS(182),
    [anon_sym_Function] = ACTIONS(182),
    [anon_sym_Uid] = ACTIONS(182),
    [anon_sym_Guid] = ACTIONS(182),
    [anon_sym_Attributes] = ACTIONS(182),
    [anon_sym_SDR_Attribute] = ACTIONS(182),
    [anon_sym_Blob] = ACTIONS(182),
    [anon_sym_Screen_Text] = ACTIONS(182),
    [anon_sym_Textstyle_Data] = ACTIONS(182),
    [anon_sym_Equality_Label] = ACTIONS(182),
    [anon_sym_Undo] = ACTIONS(182),
    [anon_sym_Undo_List] = ACTIONS(182),
    [anon_sym_Widget] = ACTIONS(182),
    [anon_sym_Menu] = ACTIONS(182),
    [anon_sym_Panel] = ACTIONS(182),
    [anon_sym_Overlay_Widget] = ACTIONS(182),
    [anon_sym_Vertical_Group] = ACTIONS(182),
    [anon_sym_Horizontal_Group] = ACTIONS(182),
    [anon_sym_Widget_Pages] = ACTIONS(182),
    [anon_sym_Button] = ACTIONS(182),
    [anon_sym_Select_Button] = ACTIONS(182),
    [anon_sym_Angle_Box] = ACTIONS(182),
    [anon_sym_Attributes_Box] = ACTIONS(182),
    [anon_sym_Billboard_Box] = ACTIONS(182),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(182),
    [anon_sym_Bitmap_List_Box] = ACTIONS(182),
    [anon_sym_Chainage_Box] = ACTIONS(182),
    [anon_sym_Choice_Box] = ACTIONS(182),
    [anon_sym_Colour_Box] = ACTIONS(182),
    [anon_sym_Colour_Message_Box] = ACTIONS(182),
    [anon_sym_Date_Time_Box] = ACTIONS(182),
    [anon_sym_Directory_Box] = ACTIONS(182),
    [anon_sym_Draw_Box] = ACTIONS(182),
    [anon_sym_File_Box] = ACTIONS(182),
    [anon_sym_Function_Box] = ACTIONS(182),
    [anon_sym_Graph_Box] = ACTIONS(182),
    [anon_sym_GridCtrl_Box] = ACTIONS(182),
    [anon_sym_HyperLink_Box] = ACTIONS(182),
    [anon_sym_Input_Box] = ACTIONS(182),
    [anon_sym_Integer_Box] = ACTIONS(182),
    [anon_sym_Justify_Box] = ACTIONS(182),
    [anon_sym_Linestyle_Box] = ACTIONS(182),
    [anon_sym_List_Box] = ACTIONS(182),
    [anon_sym_ListCtrl_Box] = ACTIONS(182),
    [anon_sym_Map_File_Box] = ACTIONS(182),
    [anon_sym_Message_Box] = ACTIONS(182),
    [anon_sym_Model_Box] = ACTIONS(182),
    [anon_sym_Name_Box] = ACTIONS(182),
    [anon_sym_Named_Tick_Box] = ACTIONS(182),
    [anon_sym_New_Select_Box] = ACTIONS(182),
    [anon_sym_New_XYZ_Box] = ACTIONS(182),
    [anon_sym_Plotter_Box] = ACTIONS(182),
    [anon_sym_Polygon_Box] = ACTIONS(182),
    [anon_sym_Real_Box] = ACTIONS(182),
    [anon_sym_Report_Box] = ACTIONS(182),
    [anon_sym_Select_Box] = ACTIONS(182),
    [anon_sym_Select_Boxes] = ACTIONS(182),
    [anon_sym_Sheet_Size_Box] = ACTIONS(182),
    [anon_sym_Source_Box] = ACTIONS(182),
    [anon_sym_Symbol_Box] = ACTIONS(182),
    [anon_sym_Tab_Box] = ACTIONS(182),
    [anon_sym_Target_Box] = ACTIONS(182),
    [anon_sym_Template_Box] = ACTIONS(182),
    [anon_sym_Text_Edit_Box] = ACTIONS(182),
    [anon_sym_Text_Style_Box] = ACTIONS(182),
    [anon_sym_Texture_Box] = ACTIONS(182),
    [anon_sym_Tree_Box] = ACTIONS(182),
    [anon_sym_Tree_Page] = ACTIONS(182),
    [anon_sym_Tick_Box] = ACTIONS(182),
    [anon_sym_Tin_Box] = ACTIONS(182),
    [anon_sym_View_Box] = ACTIONS(182),
    [anon_sym_XYZ_Box] = ACTIONS(182),
    [anon_sym_File] = ACTIONS(182),
    [anon_sym_Map_File] = ACTIONS(182),
    [anon_sym_Plot_Parameter_File] = ACTIONS(182),
    [anon_sym_XML_Document] = ACTIONS(182),
    [anon_sym_XML_Node] = ACTIONS(182),
    [anon_sym_Connection] = ACTIONS(182),
    [anon_sym_Select_Query] = ACTIONS(182),
    [anon_sym_Insert_Query] = ACTIONS(182),
    [anon_sym_Update_Query] = ACTIONS(182),
    [anon_sym_Delete_Query] = ACTIONS(182),
    [anon_sym_Database_Results] = ACTIONS(182),
    [anon_sym_Transactions] = ACTIONS(182),
    [anon_sym_Parameter_Collection] = ACTIONS(182),
    [anon_sym_Query_Condition] = ACTIONS(182),
    [anon_sym_Manual_Condition] = ACTIONS(182),
    [anon_sym_Dynamic_Element] = ACTIONS(182),
    [anon_sym_Dynamic_Integer] = ACTIONS(182),
    [anon_sym_Dynamic_Real] = ACTIONS(182),
    [anon_sym_Dynamic_Text] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_RBRACE] = ACTIONS(142),
    [anon_sym_while] = ACTIONS(188),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_case] = ACTIONS(150),
    [anon_sym_default] = ACTIONS(150),
    [anon_sym_break] = ACTIONS(191),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_switch] = ACTIONS(197),
    [anon_sym_if] = ACTIONS(200),
    [anon_sym_for] = ACTIONS(203),
    [anon_sym_BANG] = ACTIONS(167),
    [anon_sym_return] = ACTIONS(206),
    [sym_identifier] = ACTIONS(173),
    [sym_number_literal] = ACTIONS(209),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_void] = ACTIONS(182),
    [anon_sym_Integer] = ACTIONS(182),
    [anon_sym_Real] = ACTIONS(182),
    [anon_sym_Text] = ACTIONS(182),
    [anon_sym_Vector2] = ACTIONS(182),
    [anon_sym_Vector3] = ACTIONS(182),
    [anon_sym_Vector4] = ACTIONS(182),
    [anon_sym_Matrix3] = ACTIONS(182),
    [anon_sym_Matrix4] = ACTIONS(182),
    [anon_sym_Point] = ACTIONS(182),
    [anon_sym_Line] = ACTIONS(182),
    [anon_sym_Arc] = ACTIONS(182),
    [anon_sym_Spiral] = ACTIONS(182),
    [anon_sym_Parabola] = ACTIONS(182),
    [anon_sym_Segment] = ACTIONS(182),
    [anon_sym_Element] = ACTIONS(182),
    [anon_sym_Model] = ACTIONS(182),
    [anon_sym_View] = ACTIONS(182),
    [anon_sym_Macro_Function] = ACTIONS(182),
    [anon_sym_Function] = ACTIONS(182),
    [anon_sym_Uid] = ACTIONS(182),
    [anon_sym_Guid] = ACTIONS(182),
    [anon_sym_Attributes] = ACTIONS(182),
    [anon_sym_SDR_Attribute] = ACTIONS(182),
    [anon_sym_Blob] = ACTIONS(182),
    [anon_sym_Screen_Text] = ACTIONS(182),
    [anon_sym_Textstyle_Data] = ACTIONS(182),
    [anon_sym_Equality_Label] = ACTIONS(182),
    [anon_sym_Undo] = ACTIONS(182),
    [anon_sym_Undo_List] = ACTIONS(182),
    [anon_sym_Widget] = ACTIONS(182),
    [anon_sym_Menu] = ACTIONS(182),
    [anon_sym_Panel] = ACTIONS(182),
    [anon_sym_Overlay_Widget] = ACTIONS(182),
    [anon_sym_Vertical_Group] = ACTIONS(182),
    [anon_sym_Horizontal_Group] = ACTIONS(182),
    [anon_sym_Widget_Pages] = ACTIONS(182),
    [anon_sym_Button] = ACTIONS(182),
    [anon_sym_Select_Button] = ACTIONS(182),
    [anon_sym_Angle_Box] = ACTIONS(182),
    [anon_sym_Attributes_Box] = ACTIONS(182),
    [anon_sym_Billboard_Box] = ACTIONS(182),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(182),
    [anon_sym_Bitmap_List_Box] = ACTIONS(182),
    [anon_sym_Chainage_Box] = ACTIONS(182),
    [anon_sym_Choice_Box] = ACTIONS(182),
    [anon_sym_Colour_Box] = ACTIONS(182),
    [anon_sym_Colour_Message_Box] = ACTIONS(182),
    [anon_sym_Date_Time_Box] = ACTIONS(182),
    [anon_sym_Directory_Box] = ACTIONS(182),
    [anon_sym_Draw_Box] = ACTIONS(182),
    [anon_sym_File_Box] = ACTIONS(182),
    [anon_sym_Function_Box] = ACTIONS(182),
    [anon_sym_Graph_Box] = ACTIONS(182),
    [anon_sym_GridCtrl_Box] = ACTIONS(182),
    [anon_sym_HyperLink_Box] = ACTIONS(182),
    [anon_sym_Input_Box] = ACTIONS(182),
    [anon_sym_Integer_Box] = ACTIONS(182),
    [anon_sym_Justify_Box] = ACTIONS(182),
    [anon_sym_Linestyle_Box] = ACTIONS(182),
    [anon_sym_List_Box] = ACTIONS(182),
    [anon_sym_ListCtrl_Box] = ACTIONS(182),
    [anon_sym_Map_File_Box] = ACTIONS(182),
    [anon_sym_Message_Box] = ACTIONS(182),
    [anon_sym_Model_Box] = ACTIONS(182),
    [anon_sym_Name_Box] = ACTIONS(182),
    [anon_sym_Named_Tick_Box] = ACTIONS(182),
    [anon_sym_New_Select_Box] = ACTIONS(182),
    [anon_sym_New_XYZ_Box] = ACTIONS(182),
    [anon_sym_Plotter_Box] = ACTIONS(182),
    [anon_sym_Polygon_Box] = ACTIONS(182),
    [anon_sym_Real_Box] = ACTIONS(182),
    [anon_sym_Report_Box] = ACTIONS(182),
    [anon_sym_Select_Box] = ACTIONS(182),
    [anon_sym_Select_Boxes] = ACTIONS(182),
    [anon_sym_Sheet_Size_Box] = ACTIONS(182),
    [anon_sym_Source_Box] = ACTIONS(182),
    [anon_sym_Symbol_Box] = ACTIONS(182),
    [anon_sym_Tab_Box] = ACTIONS(182),
    [anon_sym_Target_Box] = ACTIONS(182),
    [anon_sym_Template_Box] = ACTIONS(182),
    [anon_sym_Text_Edit_Box] = ACTIONS(182),
    [anon_sym_Text_Style_Box] = ACTIONS(182),
    [anon_sym_Texture_Box] = ACTIONS(182),
    [anon_sym_Tree_Box] = ACTIONS(182),
    [anon_sym_Tree_Page] = ACTIONS(182),
    [anon_sym_Tick_Box] = ACTIONS(182),
    [anon_sym_Tin_Box] = ACTIONS(182),
    [anon_sym_View_Box] = ACTIONS(182),
    [anon_sym_XYZ_Box] = ACTIONS(182),
    [anon_sym_File] = ACTIONS(182),
    [anon_sym_Map_File] = ACTIONS(182),
    [anon_sym_Plot_Parameter_File] = ACTIONS(182),
    [anon_sym_XML_Document] = ACTIONS(182),
    [anon_sym_XML_Node] = ACTIONS(182),
    [anon_sym_Connection] = ACTIONS(182),
    [anon_sym_Select_Query] = ACTIONS(182),
    [anon_sym_Insert_Query] = ACTIONS(182),
    [anon_sym_Update_Query] = ACTIONS(182),
    [anon_sym_Delete_Query] = ACTIONS(182),
    [anon_sym_Database_Results] = ACTIONS(182),
    [anon_sym_Transactions] = ACTIONS(182),
    [anon_sym_Parameter_Collection] = ACTIONS(182),
    [anon_sym_Query_Condition] = ACTIONS(182),
    [anon_sym_Manual_Condition] = ACTIONS(182),
    [anon_sym_Dynamic_Element] = ACTIONS(182),
    [anon_sym_Dynamic_Integer] = ACTIONS(182),
    [anon_sym_Dynamic_Real] = ACTIONS(182),
    [anon_sym_Dynamic_Text] = ACTIONS(182),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym_compound_statement] = STATE(45),
    [sym_while_statement] = STATE(45),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(45),
    [sym_case_statement] = STATE(45),
    [sym_break_statement] = STATE(45),
    [sym_switch_statement] = STATE(45),
    [sym__non_case_statement] = STATE(45),
    [sym_if_statement] = STATE(45),
    [sym_for_statement] = STATE(45),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(45),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(45),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(45),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym_compound_statement] = STATE(38),
    [sym_while_statement] = STATE(38),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(38),
    [sym_case_statement] = STATE(38),
    [sym_break_statement] = STATE(38),
    [sym_switch_statement] = STATE(38),
    [sym__non_case_statement] = STATE(38),
    [sym_if_statement] = STATE(38),
    [sym_for_statement] = STATE(38),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(38),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(38),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(38),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym_compound_statement] = STATE(49),
    [sym_while_statement] = STATE(49),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(49),
    [sym_case_statement] = STATE(49),
    [sym_break_statement] = STATE(49),
    [sym_switch_statement] = STATE(49),
    [sym__non_case_statement] = STATE(49),
    [sym_if_statement] = STATE(49),
    [sym_for_statement] = STATE(49),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(49),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(49),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(49),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym_compound_statement] = STATE(28),
    [sym_while_statement] = STATE(28),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(28),
    [sym_case_statement] = STATE(28),
    [sym_break_statement] = STATE(28),
    [sym_switch_statement] = STATE(28),
    [sym__non_case_statement] = STATE(28),
    [sym_if_statement] = STATE(28),
    [sym_for_statement] = STATE(28),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(28),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(28),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(28),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(129),
    [anon_sym_default] = ACTIONS(129),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_compound_statement] = STATE(52),
    [sym_while_statement] = STATE(52),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(52),
    [sym_case_statement] = STATE(52),
    [sym_break_statement] = STATE(52),
    [sym_switch_statement] = STATE(52),
    [sym__non_case_statement] = STATE(52),
    [sym_if_statement] = STATE(52),
    [sym_for_statement] = STATE(52),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(52),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(52),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(52),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(21),
    [anon_sym_default] = ACTIONS(23),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym_compound_statement] = STATE(39),
    [sym_while_statement] = STATE(39),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(39),
    [sym_case_statement] = STATE(39),
    [sym_break_statement] = STATE(39),
    [sym_switch_statement] = STATE(39),
    [sym__non_case_statement] = STATE(39),
    [sym_if_statement] = STATE(39),
    [sym_for_statement] = STATE(39),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(39),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(39),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(39),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym_compound_statement] = STATE(33),
    [sym_while_statement] = STATE(33),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(33),
    [sym_case_statement] = STATE(33),
    [sym_break_statement] = STATE(33),
    [sym_switch_statement] = STATE(33),
    [sym__non_case_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym_for_statement] = STATE(33),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(33),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(33),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(33),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym_compound_statement] = STATE(14),
    [sym_while_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(14),
    [sym_switch_statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(14),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(14),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(14),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(135),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(137),
    [anon_sym_default] = ACTIONS(137),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym_compound_statement] = STATE(23),
    [sym_while_statement] = STATE(23),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(23),
    [sym_switch_statement] = STATE(23),
    [sym__non_case_statement] = STATE(23),
    [sym_if_statement] = STATE(23),
    [sym_for_statement] = STATE(23),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(23),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(23),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(23),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(23),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(133),
    [anon_sym_default] = ACTIONS(133),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym_compound_statement] = STATE(35),
    [sym_while_statement] = STATE(35),
    [sym__declaration_specifiers] = STATE(148),
    [sym__type_specifier] = STATE(168),
    [sym__statement] = STATE(35),
    [sym_case_statement] = STATE(35),
    [sym_break_statement] = STATE(35),
    [sym_switch_statement] = STATE(35),
    [sym__non_case_statement] = STATE(35),
    [sym_if_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_unary_expression] = STATE(94),
    [sym_expression_statement] = STATE(35),
    [sym_comma_expression] = STATE(191),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(94),
    [sym_assignment_expression] = STATE(94),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(94),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(35),
    [sym__expression] = STATE(94),
    [sym_string_literal] = STATE(94),
    [sym_declaration] = STATE(35),
    [sym_primitive_type] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(212),
    [anon_sym_default] = ACTIONS(214),
    [anon_sym_break] = ACTIONS(113),
    [anon_sym_SEMI] = ACTIONS(115),
    [anon_sym_switch] = ACTIONS(117),
    [anon_sym_if] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(121),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(123),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym_compound_statement] = STATE(19),
    [sym_while_statement] = STATE(19),
    [sym__declaration_specifiers] = STATE(151),
    [sym__type_specifier] = STATE(168),
    [sym_break_statement] = STATE(19),
    [sym_switch_statement] = STATE(19),
    [sym__non_case_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_for_statement] = STATE(19),
    [sym_unary_expression] = STATE(91),
    [sym_expression_statement] = STATE(19),
    [sym_comma_expression] = STATE(192),
    [sym_call_expression] = STATE(74),
    [sym_binary_expression] = STATE(91),
    [sym_assignment_expression] = STATE(91),
    [sym__assignment_left_expression] = STATE(134),
    [sym_subscript_expression] = STATE(74),
    [sym_update_expression] = STATE(91),
    [sym_parenthesized_expression] = STATE(134),
    [sym_return_statement] = STATE(19),
    [sym__expression] = STATE(91),
    [sym_string_literal] = STATE(91),
    [sym_declaration] = STATE(19),
    [sym_primitive_type] = STATE(168),
    [aux_sym_case_statement_repeat1] = STATE(19),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_while] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_case] = ACTIONS(111),
    [anon_sym_default] = ACTIONS(111),
    [anon_sym_break] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_switch] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(31),
    [anon_sym_for] = ACTIONS(33),
    [anon_sym_BANG] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [sym_identifier] = ACTIONS(39),
    [sym_number_literal] = ACTIONS(41),
    [anon_sym_DQUOTE] = ACTIONS(43),
    [anon_sym_void] = ACTIONS(11),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(11),
    [anon_sym_Vector3] = ACTIONS(11),
    [anon_sym_Vector4] = ACTIONS(11),
    [anon_sym_Matrix3] = ACTIONS(11),
    [anon_sym_Matrix4] = ACTIONS(11),
    [anon_sym_Point] = ACTIONS(11),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(11),
    [anon_sym_Spiral] = ACTIONS(11),
    [anon_sym_Parabola] = ACTIONS(11),
    [anon_sym_Segment] = ACTIONS(11),
    [anon_sym_Element] = ACTIONS(11),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(11),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(11),
    [anon_sym_Guid] = ACTIONS(11),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(11),
    [anon_sym_Blob] = ACTIONS(11),
    [anon_sym_Screen_Text] = ACTIONS(11),
    [anon_sym_Textstyle_Data] = ACTIONS(11),
    [anon_sym_Equality_Label] = ACTIONS(11),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(11),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(11),
    [anon_sym_Panel] = ACTIONS(11),
    [anon_sym_Overlay_Widget] = ACTIONS(11),
    [anon_sym_Vertical_Group] = ACTIONS(11),
    [anon_sym_Horizontal_Group] = ACTIONS(11),
    [anon_sym_Widget_Pages] = ACTIONS(11),
    [anon_sym_Button] = ACTIONS(11),
    [anon_sym_Select_Button] = ACTIONS(11),
    [anon_sym_Angle_Box] = ACTIONS(11),
    [anon_sym_Attributes_Box] = ACTIONS(11),
    [anon_sym_Billboard_Box] = ACTIONS(11),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(11),
    [anon_sym_Bitmap_List_Box] = ACTIONS(11),
    [anon_sym_Chainage_Box] = ACTIONS(11),
    [anon_sym_Choice_Box] = ACTIONS(11),
    [anon_sym_Colour_Box] = ACTIONS(11),
    [anon_sym_Colour_Message_Box] = ACTIONS(11),
    [anon_sym_Date_Time_Box] = ACTIONS(11),
    [anon_sym_Directory_Box] = ACTIONS(11),
    [anon_sym_Draw_Box] = ACTIONS(11),
    [anon_sym_File_Box] = ACTIONS(11),
    [anon_sym_Function_Box] = ACTIONS(11),
    [anon_sym_Graph_Box] = ACTIONS(11),
    [anon_sym_GridCtrl_Box] = ACTIONS(11),
    [anon_sym_HyperLink_Box] = ACTIONS(11),
    [anon_sym_Input_Box] = ACTIONS(11),
    [anon_sym_Integer_Box] = ACTIONS(11),
    [anon_sym_Justify_Box] = ACTIONS(11),
    [anon_sym_Linestyle_Box] = ACTIONS(11),
    [anon_sym_List_Box] = ACTIONS(11),
    [anon_sym_ListCtrl_Box] = ACTIONS(11),
    [anon_sym_Map_File_Box] = ACTIONS(11),
    [anon_sym_Message_Box] = ACTIONS(11),
    [anon_sym_Model_Box] = ACTIONS(11),
    [anon_sym_Name_Box] = ACTIONS(11),
    [anon_sym_Named_Tick_Box] = ACTIONS(11),
    [anon_sym_New_Select_Box] = ACTIONS(11),
    [anon_sym_New_XYZ_Box] = ACTIONS(11),
    [anon_sym_Plotter_Box] = ACTIONS(11),
    [anon_sym_Polygon_Box] = ACTIONS(11),
    [anon_sym_Real_Box] = ACTIONS(11),
    [anon_sym_Report_Box] = ACTIONS(11),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(11),
    [anon_sym_Sheet_Size_Box] = ACTIONS(11),
    [anon_sym_Source_Box] = ACTIONS(11),
    [anon_sym_Symbol_Box] = ACTIONS(11),
    [anon_sym_Tab_Box] = ACTIONS(11),
    [anon_sym_Target_Box] = ACTIONS(11),
    [anon_sym_Template_Box] = ACTIONS(11),
    [anon_sym_Text_Edit_Box] = ACTIONS(11),
    [anon_sym_Text_Style_Box] = ACTIONS(11),
    [anon_sym_Texture_Box] = ACTIONS(11),
    [anon_sym_Tree_Box] = ACTIONS(11),
    [anon_sym_Tree_Page] = ACTIONS(11),
    [anon_sym_Tick_Box] = ACTIONS(11),
    [anon_sym_Tin_Box] = ACTIONS(11),
    [anon_sym_View_Box] = ACTIONS(11),
    [anon_sym_XYZ_Box] = ACTIONS(11),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(11),
    [anon_sym_XML_Document] = ACTIONS(11),
    [anon_sym_XML_Node] = ACTIONS(11),
    [anon_sym_Connection] = ACTIONS(11),
    [anon_sym_Select_Query] = ACTIONS(11),
    [anon_sym_Insert_Query] = ACTIONS(11),
    [anon_sym_Update_Query] = ACTIONS(11),
    [anon_sym_Delete_Query] = ACTIONS(11),
    [anon_sym_Database_Results] = ACTIONS(11),
    [anon_sym_Transactions] = ACTIONS(11),
    [anon_sym_Parameter_Collection] = ACTIONS(11),
    [anon_sym_Query_Condition] = ACTIONS(11),
    [anon_sym_Manual_Condition] = ACTIONS(11),
    [anon_sym_Dynamic_Element] = ACTIONS(11),
    [anon_sym_Dynamic_Integer] = ACTIONS(11),
    [anon_sym_Dynamic_Real] = ACTIONS(11),
    [anon_sym_Dynamic_Text] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [27] = {
    [anon_sym_LBRACE] = ACTIONS(216),
    [anon_sym_while] = ACTIONS(218),
    [anon_sym_LPAREN] = ACTIONS(216),
    [anon_sym_case] = ACTIONS(218),
    [anon_sym_default] = ACTIONS(218),
    [anon_sym_break] = ACTIONS(218),
    [anon_sym_SEMI] = ACTIONS(216),
    [anon_sym_switch] = ACTIONS(218),
    [anon_sym_if] = ACTIONS(218),
    [anon_sym_for] = ACTIONS(218),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_EQ] = ACTIONS(216),
    [anon_sym_STAR_EQ] = ACTIONS(216),
    [anon_sym_SLASH_EQ] = ACTIONS(216),
    [anon_sym_PERCENT_EQ] = ACTIONS(216),
    [anon_sym_PLUS_EQ] = ACTIONS(216),
    [anon_sym_DASH_EQ] = ACTIONS(216),
    [anon_sym_AMP_EQ] = ACTIONS(216),
    [anon_sym_CARET_EQ] = ACTIONS(216),
    [anon_sym_PIPE_EQ] = ACTIONS(216),
    [anon_sym_return] = ACTIONS(218),
    [sym_identifier] = ACTIONS(218),
    [sym_number_literal] = ACTIONS(216),
    [anon_sym_DQUOTE] = ACTIONS(216),
    [anon_sym_void] = ACTIONS(218),
    [anon_sym_Integer] = ACTIONS(218),
    [anon_sym_Real] = ACTIONS(218),
    [anon_sym_Text] = ACTIONS(218),
    [anon_sym_Vector2] = ACTIONS(218),
    [anon_sym_Vector3] = ACTIONS(218),
    [anon_sym_Vector4] = ACTIONS(218),
    [anon_sym_Matrix3] = ACTIONS(218),
    [anon_sym_Matrix4] = ACTIONS(218),
    [anon_sym_Point] = ACTIONS(218),
    [anon_sym_Line] = ACTIONS(218),
    [anon_sym_Arc] = ACTIONS(218),
    [anon_sym_Spiral] = ACTIONS(218),
    [anon_sym_Parabola] = ACTIONS(218),
    [anon_sym_Segment] = ACTIONS(218),
    [anon_sym_Element] = ACTIONS(218),
    [anon_sym_Model] = ACTIONS(218),
    [anon_sym_View] = ACTIONS(218),
    [anon_sym_Macro_Function] = ACTIONS(218),
    [anon_sym_Function] = ACTIONS(218),
    [anon_sym_Uid] = ACTIONS(218),
    [anon_sym_Guid] = ACTIONS(218),
    [anon_sym_Attributes] = ACTIONS(218),
    [anon_sym_SDR_Attribute] = ACTIONS(218),
    [anon_sym_Blob] = ACTIONS(218),
    [anon_sym_Screen_Text] = ACTIONS(218),
    [anon_sym_Textstyle_Data] = ACTIONS(218),
    [anon_sym_Equality_Label] = ACTIONS(218),
    [anon_sym_Undo] = ACTIONS(218),
    [anon_sym_Undo_List] = ACTIONS(218),
    [anon_sym_Widget] = ACTIONS(218),
    [anon_sym_Menu] = ACTIONS(218),
    [anon_sym_Panel] = ACTIONS(218),
    [anon_sym_Overlay_Widget] = ACTIONS(218),
    [anon_sym_Vertical_Group] = ACTIONS(218),
    [anon_sym_Horizontal_Group] = ACTIONS(218),
    [anon_sym_Widget_Pages] = ACTIONS(218),
    [anon_sym_Button] = ACTIONS(218),
    [anon_sym_Select_Button] = ACTIONS(218),
    [anon_sym_Angle_Box] = ACTIONS(218),
    [anon_sym_Attributes_Box] = ACTIONS(218),
    [anon_sym_Billboard_Box] = ACTIONS(218),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(218),
    [anon_sym_Bitmap_List_Box] = ACTIONS(218),
    [anon_sym_Chainage_Box] = ACTIONS(218),
    [anon_sym_Choice_Box] = ACTIONS(218),
    [anon_sym_Colour_Box] = ACTIONS(218),
    [anon_sym_Colour_Message_Box] = ACTIONS(218),
    [anon_sym_Date_Time_Box] = ACTIONS(218),
    [anon_sym_Directory_Box] = ACTIONS(218),
    [anon_sym_Draw_Box] = ACTIONS(218),
    [anon_sym_File_Box] = ACTIONS(218),
    [anon_sym_Function_Box] = ACTIONS(218),
    [anon_sym_Graph_Box] = ACTIONS(218),
    [anon_sym_GridCtrl_Box] = ACTIONS(218),
    [anon_sym_HyperLink_Box] = ACTIONS(218),
    [anon_sym_Input_Box] = ACTIONS(218),
    [anon_sym_Integer_Box] = ACTIONS(218),
    [anon_sym_Justify_Box] = ACTIONS(218),
    [anon_sym_Linestyle_Box] = ACTIONS(218),
    [anon_sym_List_Box] = ACTIONS(218),
    [anon_sym_ListCtrl_Box] = ACTIONS(218),
    [anon_sym_Map_File_Box] = ACTIONS(218),
    [anon_sym_Message_Box] = ACTIONS(218),
    [anon_sym_Model_Box] = ACTIONS(218),
    [anon_sym_Name_Box] = ACTIONS(218),
    [anon_sym_Named_Tick_Box] = ACTIONS(218),
    [anon_sym_New_Select_Box] = ACTIONS(218),
    [anon_sym_New_XYZ_Box] = ACTIONS(218),
    [anon_sym_Plotter_Box] = ACTIONS(218),
    [anon_sym_Polygon_Box] = ACTIONS(218),
    [anon_sym_Real_Box] = ACTIONS(218),
    [anon_sym_Report_Box] = ACTIONS(218),
    [anon_sym_Select_Box] = ACTIONS(218),
    [anon_sym_Select_Boxes] = ACTIONS(218),
    [anon_sym_Sheet_Size_Box] = ACTIONS(218),
    [anon_sym_Source_Box] = ACTIONS(218),
    [anon_sym_Symbol_Box] = ACTIONS(218),
    [anon_sym_Tab_Box] = ACTIONS(218),
    [anon_sym_Target_Box] = ACTIONS(218),
    [anon_sym_Template_Box] = ACTIONS(218),
    [anon_sym_Text_Edit_Box] = ACTIONS(218),
    [anon_sym_Text_Style_Box] = ACTIONS(218),
    [anon_sym_Texture_Box] = ACTIONS(218),
    [anon_sym_Tree_Box] = ACTIONS(218),
    [anon_sym_Tree_Page] = ACTIONS(218),
    [anon_sym_Tick_Box] = ACTIONS(218),
    [anon_sym_Tin_Box] = ACTIONS(218),
    [anon_sym_View_Box] = ACTIONS(218),
    [anon_sym_XYZ_Box] = ACTIONS(218),
    [anon_sym_File] = ACTIONS(218),
    [anon_sym_Map_File] = ACTIONS(218),
    [anon_sym_Plot_Parameter_File] = ACTIONS(218),
    [anon_sym_XML_Document] = ACTIONS(218),
    [anon_sym_XML_Node] = ACTIONS(218),
    [anon_sym_Connection] = ACTIONS(218),
    [anon_sym_Select_Query] = ACTIONS(218),
    [anon_sym_Insert_Query] = ACTIONS(218),
    [anon_sym_Update_Query] = ACTIONS(218),
    [anon_sym_Delete_Query] = ACTIONS(218),
    [anon_sym_Database_Results] = ACTIONS(218),
    [anon_sym_Transactions] = ACTIONS(218),
    [anon_sym_Parameter_Collection] = ACTIONS(218),
    [anon_sym_Query_Condition] = ACTIONS(218),
    [anon_sym_Manual_Condition] = ACTIONS(218),
    [anon_sym_Dynamic_Element] = ACTIONS(218),
    [anon_sym_Dynamic_Integer] = ACTIONS(218),
    [anon_sym_Dynamic_Real] = ACTIONS(218),
    [anon_sym_Dynamic_Text] = ACTIONS(218),
    [sym_comment] = ACTIONS(3),
  },
  [28] = {
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_while] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_case] = ACTIONS(222),
    [anon_sym_default] = ACTIONS(222),
    [anon_sym_break] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_switch] = ACTIONS(222),
    [anon_sym_if] = ACTIONS(222),
    [anon_sym_else] = ACTIONS(222),
    [anon_sym_for] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym_return] = ACTIONS(222),
    [sym_identifier] = ACTIONS(222),
    [sym_number_literal] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_void] = ACTIONS(222),
    [anon_sym_Integer] = ACTIONS(222),
    [anon_sym_Real] = ACTIONS(222),
    [anon_sym_Text] = ACTIONS(222),
    [anon_sym_Vector2] = ACTIONS(222),
    [anon_sym_Vector3] = ACTIONS(222),
    [anon_sym_Vector4] = ACTIONS(222),
    [anon_sym_Matrix3] = ACTIONS(222),
    [anon_sym_Matrix4] = ACTIONS(222),
    [anon_sym_Point] = ACTIONS(222),
    [anon_sym_Line] = ACTIONS(222),
    [anon_sym_Arc] = ACTIONS(222),
    [anon_sym_Spiral] = ACTIONS(222),
    [anon_sym_Parabola] = ACTIONS(222),
    [anon_sym_Segment] = ACTIONS(222),
    [anon_sym_Element] = ACTIONS(222),
    [anon_sym_Model] = ACTIONS(222),
    [anon_sym_View] = ACTIONS(222),
    [anon_sym_Macro_Function] = ACTIONS(222),
    [anon_sym_Function] = ACTIONS(222),
    [anon_sym_Uid] = ACTIONS(222),
    [anon_sym_Guid] = ACTIONS(222),
    [anon_sym_Attributes] = ACTIONS(222),
    [anon_sym_SDR_Attribute] = ACTIONS(222),
    [anon_sym_Blob] = ACTIONS(222),
    [anon_sym_Screen_Text] = ACTIONS(222),
    [anon_sym_Textstyle_Data] = ACTIONS(222),
    [anon_sym_Equality_Label] = ACTIONS(222),
    [anon_sym_Undo] = ACTIONS(222),
    [anon_sym_Undo_List] = ACTIONS(222),
    [anon_sym_Widget] = ACTIONS(222),
    [anon_sym_Menu] = ACTIONS(222),
    [anon_sym_Panel] = ACTIONS(222),
    [anon_sym_Overlay_Widget] = ACTIONS(222),
    [anon_sym_Vertical_Group] = ACTIONS(222),
    [anon_sym_Horizontal_Group] = ACTIONS(222),
    [anon_sym_Widget_Pages] = ACTIONS(222),
    [anon_sym_Button] = ACTIONS(222),
    [anon_sym_Select_Button] = ACTIONS(222),
    [anon_sym_Angle_Box] = ACTIONS(222),
    [anon_sym_Attributes_Box] = ACTIONS(222),
    [anon_sym_Billboard_Box] = ACTIONS(222),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(222),
    [anon_sym_Bitmap_List_Box] = ACTIONS(222),
    [anon_sym_Chainage_Box] = ACTIONS(222),
    [anon_sym_Choice_Box] = ACTIONS(222),
    [anon_sym_Colour_Box] = ACTIONS(222),
    [anon_sym_Colour_Message_Box] = ACTIONS(222),
    [anon_sym_Date_Time_Box] = ACTIONS(222),
    [anon_sym_Directory_Box] = ACTIONS(222),
    [anon_sym_Draw_Box] = ACTIONS(222),
    [anon_sym_File_Box] = ACTIONS(222),
    [anon_sym_Function_Box] = ACTIONS(222),
    [anon_sym_Graph_Box] = ACTIONS(222),
    [anon_sym_GridCtrl_Box] = ACTIONS(222),
    [anon_sym_HyperLink_Box] = ACTIONS(222),
    [anon_sym_Input_Box] = ACTIONS(222),
    [anon_sym_Integer_Box] = ACTIONS(222),
    [anon_sym_Justify_Box] = ACTIONS(222),
    [anon_sym_Linestyle_Box] = ACTIONS(222),
    [anon_sym_List_Box] = ACTIONS(222),
    [anon_sym_ListCtrl_Box] = ACTIONS(222),
    [anon_sym_Map_File_Box] = ACTIONS(222),
    [anon_sym_Message_Box] = ACTIONS(222),
    [anon_sym_Model_Box] = ACTIONS(222),
    [anon_sym_Name_Box] = ACTIONS(222),
    [anon_sym_Named_Tick_Box] = ACTIONS(222),
    [anon_sym_New_Select_Box] = ACTIONS(222),
    [anon_sym_New_XYZ_Box] = ACTIONS(222),
    [anon_sym_Plotter_Box] = ACTIONS(222),
    [anon_sym_Polygon_Box] = ACTIONS(222),
    [anon_sym_Real_Box] = ACTIONS(222),
    [anon_sym_Report_Box] = ACTIONS(222),
    [anon_sym_Select_Box] = ACTIONS(222),
    [anon_sym_Select_Boxes] = ACTIONS(222),
    [anon_sym_Sheet_Size_Box] = ACTIONS(222),
    [anon_sym_Source_Box] = ACTIONS(222),
    [anon_sym_Symbol_Box] = ACTIONS(222),
    [anon_sym_Tab_Box] = ACTIONS(222),
    [anon_sym_Target_Box] = ACTIONS(222),
    [anon_sym_Template_Box] = ACTIONS(222),
    [anon_sym_Text_Edit_Box] = ACTIONS(222),
    [anon_sym_Text_Style_Box] = ACTIONS(222),
    [anon_sym_Texture_Box] = ACTIONS(222),
    [anon_sym_Tree_Box] = ACTIONS(222),
    [anon_sym_Tree_Page] = ACTIONS(222),
    [anon_sym_Tick_Box] = ACTIONS(222),
    [anon_sym_Tin_Box] = ACTIONS(222),
    [anon_sym_View_Box] = ACTIONS(222),
    [anon_sym_XYZ_Box] = ACTIONS(222),
    [anon_sym_File] = ACTIONS(222),
    [anon_sym_Map_File] = ACTIONS(222),
    [anon_sym_Plot_Parameter_File] = ACTIONS(222),
    [anon_sym_XML_Document] = ACTIONS(222),
    [anon_sym_XML_Node] = ACTIONS(222),
    [anon_sym_Connection] = ACTIONS(222),
    [anon_sym_Select_Query] = ACTIONS(222),
    [anon_sym_Insert_Query] = ACTIONS(222),
    [anon_sym_Update_Query] = ACTIONS(222),
    [anon_sym_Delete_Query] = ACTIONS(222),
    [anon_sym_Database_Results] = ACTIONS(222),
    [anon_sym_Transactions] = ACTIONS(222),
    [anon_sym_Parameter_Collection] = ACTIONS(222),
    [anon_sym_Query_Condition] = ACTIONS(222),
    [anon_sym_Manual_Condition] = ACTIONS(222),
    [anon_sym_Dynamic_Element] = ACTIONS(222),
    [anon_sym_Dynamic_Integer] = ACTIONS(222),
    [anon_sym_Dynamic_Real] = ACTIONS(222),
    [anon_sym_Dynamic_Text] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
  },
  [29] = {
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_while] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
    [anon_sym_break] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [anon_sym_else] = ACTIONS(226),
    [anon_sym_for] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_return] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_number_literal] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_void] = ACTIONS(226),
    [anon_sym_Integer] = ACTIONS(226),
    [anon_sym_Real] = ACTIONS(226),
    [anon_sym_Text] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_Vector4] = ACTIONS(226),
    [anon_sym_Matrix3] = ACTIONS(226),
    [anon_sym_Matrix4] = ACTIONS(226),
    [anon_sym_Point] = ACTIONS(226),
    [anon_sym_Line] = ACTIONS(226),
    [anon_sym_Arc] = ACTIONS(226),
    [anon_sym_Spiral] = ACTIONS(226),
    [anon_sym_Parabola] = ACTIONS(226),
    [anon_sym_Segment] = ACTIONS(226),
    [anon_sym_Element] = ACTIONS(226),
    [anon_sym_Model] = ACTIONS(226),
    [anon_sym_View] = ACTIONS(226),
    [anon_sym_Macro_Function] = ACTIONS(226),
    [anon_sym_Function] = ACTIONS(226),
    [anon_sym_Uid] = ACTIONS(226),
    [anon_sym_Guid] = ACTIONS(226),
    [anon_sym_Attributes] = ACTIONS(226),
    [anon_sym_SDR_Attribute] = ACTIONS(226),
    [anon_sym_Blob] = ACTIONS(226),
    [anon_sym_Screen_Text] = ACTIONS(226),
    [anon_sym_Textstyle_Data] = ACTIONS(226),
    [anon_sym_Equality_Label] = ACTIONS(226),
    [anon_sym_Undo] = ACTIONS(226),
    [anon_sym_Undo_List] = ACTIONS(226),
    [anon_sym_Widget] = ACTIONS(226),
    [anon_sym_Menu] = ACTIONS(226),
    [anon_sym_Panel] = ACTIONS(226),
    [anon_sym_Overlay_Widget] = ACTIONS(226),
    [anon_sym_Vertical_Group] = ACTIONS(226),
    [anon_sym_Horizontal_Group] = ACTIONS(226),
    [anon_sym_Widget_Pages] = ACTIONS(226),
    [anon_sym_Button] = ACTIONS(226),
    [anon_sym_Select_Button] = ACTIONS(226),
    [anon_sym_Angle_Box] = ACTIONS(226),
    [anon_sym_Attributes_Box] = ACTIONS(226),
    [anon_sym_Billboard_Box] = ACTIONS(226),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(226),
    [anon_sym_Bitmap_List_Box] = ACTIONS(226),
    [anon_sym_Chainage_Box] = ACTIONS(226),
    [anon_sym_Choice_Box] = ACTIONS(226),
    [anon_sym_Colour_Box] = ACTIONS(226),
    [anon_sym_Colour_Message_Box] = ACTIONS(226),
    [anon_sym_Date_Time_Box] = ACTIONS(226),
    [anon_sym_Directory_Box] = ACTIONS(226),
    [anon_sym_Draw_Box] = ACTIONS(226),
    [anon_sym_File_Box] = ACTIONS(226),
    [anon_sym_Function_Box] = ACTIONS(226),
    [anon_sym_Graph_Box] = ACTIONS(226),
    [anon_sym_GridCtrl_Box] = ACTIONS(226),
    [anon_sym_HyperLink_Box] = ACTIONS(226),
    [anon_sym_Input_Box] = ACTIONS(226),
    [anon_sym_Integer_Box] = ACTIONS(226),
    [anon_sym_Justify_Box] = ACTIONS(226),
    [anon_sym_Linestyle_Box] = ACTIONS(226),
    [anon_sym_List_Box] = ACTIONS(226),
    [anon_sym_ListCtrl_Box] = ACTIONS(226),
    [anon_sym_Map_File_Box] = ACTIONS(226),
    [anon_sym_Message_Box] = ACTIONS(226),
    [anon_sym_Model_Box] = ACTIONS(226),
    [anon_sym_Name_Box] = ACTIONS(226),
    [anon_sym_Named_Tick_Box] = ACTIONS(226),
    [anon_sym_New_Select_Box] = ACTIONS(226),
    [anon_sym_New_XYZ_Box] = ACTIONS(226),
    [anon_sym_Plotter_Box] = ACTIONS(226),
    [anon_sym_Polygon_Box] = ACTIONS(226),
    [anon_sym_Real_Box] = ACTIONS(226),
    [anon_sym_Report_Box] = ACTIONS(226),
    [anon_sym_Select_Box] = ACTIONS(226),
    [anon_sym_Select_Boxes] = ACTIONS(226),
    [anon_sym_Sheet_Size_Box] = ACTIONS(226),
    [anon_sym_Source_Box] = ACTIONS(226),
    [anon_sym_Symbol_Box] = ACTIONS(226),
    [anon_sym_Tab_Box] = ACTIONS(226),
    [anon_sym_Target_Box] = ACTIONS(226),
    [anon_sym_Template_Box] = ACTIONS(226),
    [anon_sym_Text_Edit_Box] = ACTIONS(226),
    [anon_sym_Text_Style_Box] = ACTIONS(226),
    [anon_sym_Texture_Box] = ACTIONS(226),
    [anon_sym_Tree_Box] = ACTIONS(226),
    [anon_sym_Tree_Page] = ACTIONS(226),
    [anon_sym_Tick_Box] = ACTIONS(226),
    [anon_sym_Tin_Box] = ACTIONS(226),
    [anon_sym_View_Box] = ACTIONS(226),
    [anon_sym_XYZ_Box] = ACTIONS(226),
    [anon_sym_File] = ACTIONS(226),
    [anon_sym_Map_File] = ACTIONS(226),
    [anon_sym_Plot_Parameter_File] = ACTIONS(226),
    [anon_sym_XML_Document] = ACTIONS(226),
    [anon_sym_XML_Node] = ACTIONS(226),
    [anon_sym_Connection] = ACTIONS(226),
    [anon_sym_Select_Query] = ACTIONS(226),
    [anon_sym_Insert_Query] = ACTIONS(226),
    [anon_sym_Update_Query] = ACTIONS(226),
    [anon_sym_Delete_Query] = ACTIONS(226),
    [anon_sym_Database_Results] = ACTIONS(226),
    [anon_sym_Transactions] = ACTIONS(226),
    [anon_sym_Parameter_Collection] = ACTIONS(226),
    [anon_sym_Query_Condition] = ACTIONS(226),
    [anon_sym_Manual_Condition] = ACTIONS(226),
    [anon_sym_Dynamic_Element] = ACTIONS(226),
    [anon_sym_Dynamic_Integer] = ACTIONS(226),
    [anon_sym_Dynamic_Real] = ACTIONS(226),
    [anon_sym_Dynamic_Text] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_while] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_break] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_switch] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_else] = ACTIONS(230),
    [anon_sym_for] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_return] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_number_literal] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_void] = ACTIONS(230),
    [anon_sym_Integer] = ACTIONS(230),
    [anon_sym_Real] = ACTIONS(230),
    [anon_sym_Text] = ACTIONS(230),
    [anon_sym_Vector2] = ACTIONS(230),
    [anon_sym_Vector3] = ACTIONS(230),
    [anon_sym_Vector4] = ACTIONS(230),
    [anon_sym_Matrix3] = ACTIONS(230),
    [anon_sym_Matrix4] = ACTIONS(230),
    [anon_sym_Point] = ACTIONS(230),
    [anon_sym_Line] = ACTIONS(230),
    [anon_sym_Arc] = ACTIONS(230),
    [anon_sym_Spiral] = ACTIONS(230),
    [anon_sym_Parabola] = ACTIONS(230),
    [anon_sym_Segment] = ACTIONS(230),
    [anon_sym_Element] = ACTIONS(230),
    [anon_sym_Model] = ACTIONS(230),
    [anon_sym_View] = ACTIONS(230),
    [anon_sym_Macro_Function] = ACTIONS(230),
    [anon_sym_Function] = ACTIONS(230),
    [anon_sym_Uid] = ACTIONS(230),
    [anon_sym_Guid] = ACTIONS(230),
    [anon_sym_Attributes] = ACTIONS(230),
    [anon_sym_SDR_Attribute] = ACTIONS(230),
    [anon_sym_Blob] = ACTIONS(230),
    [anon_sym_Screen_Text] = ACTIONS(230),
    [anon_sym_Textstyle_Data] = ACTIONS(230),
    [anon_sym_Equality_Label] = ACTIONS(230),
    [anon_sym_Undo] = ACTIONS(230),
    [anon_sym_Undo_List] = ACTIONS(230),
    [anon_sym_Widget] = ACTIONS(230),
    [anon_sym_Menu] = ACTIONS(230),
    [anon_sym_Panel] = ACTIONS(230),
    [anon_sym_Overlay_Widget] = ACTIONS(230),
    [anon_sym_Vertical_Group] = ACTIONS(230),
    [anon_sym_Horizontal_Group] = ACTIONS(230),
    [anon_sym_Widget_Pages] = ACTIONS(230),
    [anon_sym_Button] = ACTIONS(230),
    [anon_sym_Select_Button] = ACTIONS(230),
    [anon_sym_Angle_Box] = ACTIONS(230),
    [anon_sym_Attributes_Box] = ACTIONS(230),
    [anon_sym_Billboard_Box] = ACTIONS(230),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(230),
    [anon_sym_Bitmap_List_Box] = ACTIONS(230),
    [anon_sym_Chainage_Box] = ACTIONS(230),
    [anon_sym_Choice_Box] = ACTIONS(230),
    [anon_sym_Colour_Box] = ACTIONS(230),
    [anon_sym_Colour_Message_Box] = ACTIONS(230),
    [anon_sym_Date_Time_Box] = ACTIONS(230),
    [anon_sym_Directory_Box] = ACTIONS(230),
    [anon_sym_Draw_Box] = ACTIONS(230),
    [anon_sym_File_Box] = ACTIONS(230),
    [anon_sym_Function_Box] = ACTIONS(230),
    [anon_sym_Graph_Box] = ACTIONS(230),
    [anon_sym_GridCtrl_Box] = ACTIONS(230),
    [anon_sym_HyperLink_Box] = ACTIONS(230),
    [anon_sym_Input_Box] = ACTIONS(230),
    [anon_sym_Integer_Box] = ACTIONS(230),
    [anon_sym_Justify_Box] = ACTIONS(230),
    [anon_sym_Linestyle_Box] = ACTIONS(230),
    [anon_sym_List_Box] = ACTIONS(230),
    [anon_sym_ListCtrl_Box] = ACTIONS(230),
    [anon_sym_Map_File_Box] = ACTIONS(230),
    [anon_sym_Message_Box] = ACTIONS(230),
    [anon_sym_Model_Box] = ACTIONS(230),
    [anon_sym_Name_Box] = ACTIONS(230),
    [anon_sym_Named_Tick_Box] = ACTIONS(230),
    [anon_sym_New_Select_Box] = ACTIONS(230),
    [anon_sym_New_XYZ_Box] = ACTIONS(230),
    [anon_sym_Plotter_Box] = ACTIONS(230),
    [anon_sym_Polygon_Box] = ACTIONS(230),
    [anon_sym_Real_Box] = ACTIONS(230),
    [anon_sym_Report_Box] = ACTIONS(230),
    [anon_sym_Select_Box] = ACTIONS(230),
    [anon_sym_Select_Boxes] = ACTIONS(230),
    [anon_sym_Sheet_Size_Box] = ACTIONS(230),
    [anon_sym_Source_Box] = ACTIONS(230),
    [anon_sym_Symbol_Box] = ACTIONS(230),
    [anon_sym_Tab_Box] = ACTIONS(230),
    [anon_sym_Target_Box] = ACTIONS(230),
    [anon_sym_Template_Box] = ACTIONS(230),
    [anon_sym_Text_Edit_Box] = ACTIONS(230),
    [anon_sym_Text_Style_Box] = ACTIONS(230),
    [anon_sym_Texture_Box] = ACTIONS(230),
    [anon_sym_Tree_Box] = ACTIONS(230),
    [anon_sym_Tree_Page] = ACTIONS(230),
    [anon_sym_Tick_Box] = ACTIONS(230),
    [anon_sym_Tin_Box] = ACTIONS(230),
    [anon_sym_View_Box] = ACTIONS(230),
    [anon_sym_XYZ_Box] = ACTIONS(230),
    [anon_sym_File] = ACTIONS(230),
    [anon_sym_Map_File] = ACTIONS(230),
    [anon_sym_Plot_Parameter_File] = ACTIONS(230),
    [anon_sym_XML_Document] = ACTIONS(230),
    [anon_sym_XML_Node] = ACTIONS(230),
    [anon_sym_Connection] = ACTIONS(230),
    [anon_sym_Select_Query] = ACTIONS(230),
    [anon_sym_Insert_Query] = ACTIONS(230),
    [anon_sym_Update_Query] = ACTIONS(230),
    [anon_sym_Delete_Query] = ACTIONS(230),
    [anon_sym_Database_Results] = ACTIONS(230),
    [anon_sym_Transactions] = ACTIONS(230),
    [anon_sym_Parameter_Collection] = ACTIONS(230),
    [anon_sym_Query_Condition] = ACTIONS(230),
    [anon_sym_Manual_Condition] = ACTIONS(230),
    [anon_sym_Dynamic_Element] = ACTIONS(230),
    [anon_sym_Dynamic_Integer] = ACTIONS(230),
    [anon_sym_Dynamic_Real] = ACTIONS(230),
    [anon_sym_Dynamic_Text] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [31] = {
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_while] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_break] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_switch] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_else] = ACTIONS(230),
    [anon_sym_for] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_return] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_number_literal] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_void] = ACTIONS(230),
    [anon_sym_Integer] = ACTIONS(230),
    [anon_sym_Real] = ACTIONS(230),
    [anon_sym_Text] = ACTIONS(230),
    [anon_sym_Vector2] = ACTIONS(230),
    [anon_sym_Vector3] = ACTIONS(230),
    [anon_sym_Vector4] = ACTIONS(230),
    [anon_sym_Matrix3] = ACTIONS(230),
    [anon_sym_Matrix4] = ACTIONS(230),
    [anon_sym_Point] = ACTIONS(230),
    [anon_sym_Line] = ACTIONS(230),
    [anon_sym_Arc] = ACTIONS(230),
    [anon_sym_Spiral] = ACTIONS(230),
    [anon_sym_Parabola] = ACTIONS(230),
    [anon_sym_Segment] = ACTIONS(230),
    [anon_sym_Element] = ACTIONS(230),
    [anon_sym_Model] = ACTIONS(230),
    [anon_sym_View] = ACTIONS(230),
    [anon_sym_Macro_Function] = ACTIONS(230),
    [anon_sym_Function] = ACTIONS(230),
    [anon_sym_Uid] = ACTIONS(230),
    [anon_sym_Guid] = ACTIONS(230),
    [anon_sym_Attributes] = ACTIONS(230),
    [anon_sym_SDR_Attribute] = ACTIONS(230),
    [anon_sym_Blob] = ACTIONS(230),
    [anon_sym_Screen_Text] = ACTIONS(230),
    [anon_sym_Textstyle_Data] = ACTIONS(230),
    [anon_sym_Equality_Label] = ACTIONS(230),
    [anon_sym_Undo] = ACTIONS(230),
    [anon_sym_Undo_List] = ACTIONS(230),
    [anon_sym_Widget] = ACTIONS(230),
    [anon_sym_Menu] = ACTIONS(230),
    [anon_sym_Panel] = ACTIONS(230),
    [anon_sym_Overlay_Widget] = ACTIONS(230),
    [anon_sym_Vertical_Group] = ACTIONS(230),
    [anon_sym_Horizontal_Group] = ACTIONS(230),
    [anon_sym_Widget_Pages] = ACTIONS(230),
    [anon_sym_Button] = ACTIONS(230),
    [anon_sym_Select_Button] = ACTIONS(230),
    [anon_sym_Angle_Box] = ACTIONS(230),
    [anon_sym_Attributes_Box] = ACTIONS(230),
    [anon_sym_Billboard_Box] = ACTIONS(230),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(230),
    [anon_sym_Bitmap_List_Box] = ACTIONS(230),
    [anon_sym_Chainage_Box] = ACTIONS(230),
    [anon_sym_Choice_Box] = ACTIONS(230),
    [anon_sym_Colour_Box] = ACTIONS(230),
    [anon_sym_Colour_Message_Box] = ACTIONS(230),
    [anon_sym_Date_Time_Box] = ACTIONS(230),
    [anon_sym_Directory_Box] = ACTIONS(230),
    [anon_sym_Draw_Box] = ACTIONS(230),
    [anon_sym_File_Box] = ACTIONS(230),
    [anon_sym_Function_Box] = ACTIONS(230),
    [anon_sym_Graph_Box] = ACTIONS(230),
    [anon_sym_GridCtrl_Box] = ACTIONS(230),
    [anon_sym_HyperLink_Box] = ACTIONS(230),
    [anon_sym_Input_Box] = ACTIONS(230),
    [anon_sym_Integer_Box] = ACTIONS(230),
    [anon_sym_Justify_Box] = ACTIONS(230),
    [anon_sym_Linestyle_Box] = ACTIONS(230),
    [anon_sym_List_Box] = ACTIONS(230),
    [anon_sym_ListCtrl_Box] = ACTIONS(230),
    [anon_sym_Map_File_Box] = ACTIONS(230),
    [anon_sym_Message_Box] = ACTIONS(230),
    [anon_sym_Model_Box] = ACTIONS(230),
    [anon_sym_Name_Box] = ACTIONS(230),
    [anon_sym_Named_Tick_Box] = ACTIONS(230),
    [anon_sym_New_Select_Box] = ACTIONS(230),
    [anon_sym_New_XYZ_Box] = ACTIONS(230),
    [anon_sym_Plotter_Box] = ACTIONS(230),
    [anon_sym_Polygon_Box] = ACTIONS(230),
    [anon_sym_Real_Box] = ACTIONS(230),
    [anon_sym_Report_Box] = ACTIONS(230),
    [anon_sym_Select_Box] = ACTIONS(230),
    [anon_sym_Select_Boxes] = ACTIONS(230),
    [anon_sym_Sheet_Size_Box] = ACTIONS(230),
    [anon_sym_Source_Box] = ACTIONS(230),
    [anon_sym_Symbol_Box] = ACTIONS(230),
    [anon_sym_Tab_Box] = ACTIONS(230),
    [anon_sym_Target_Box] = ACTIONS(230),
    [anon_sym_Template_Box] = ACTIONS(230),
    [anon_sym_Text_Edit_Box] = ACTIONS(230),
    [anon_sym_Text_Style_Box] = ACTIONS(230),
    [anon_sym_Texture_Box] = ACTIONS(230),
    [anon_sym_Tree_Box] = ACTIONS(230),
    [anon_sym_Tree_Page] = ACTIONS(230),
    [anon_sym_Tick_Box] = ACTIONS(230),
    [anon_sym_Tin_Box] = ACTIONS(230),
    [anon_sym_View_Box] = ACTIONS(230),
    [anon_sym_XYZ_Box] = ACTIONS(230),
    [anon_sym_File] = ACTIONS(230),
    [anon_sym_Map_File] = ACTIONS(230),
    [anon_sym_Plot_Parameter_File] = ACTIONS(230),
    [anon_sym_XML_Document] = ACTIONS(230),
    [anon_sym_XML_Node] = ACTIONS(230),
    [anon_sym_Connection] = ACTIONS(230),
    [anon_sym_Select_Query] = ACTIONS(230),
    [anon_sym_Insert_Query] = ACTIONS(230),
    [anon_sym_Update_Query] = ACTIONS(230),
    [anon_sym_Delete_Query] = ACTIONS(230),
    [anon_sym_Database_Results] = ACTIONS(230),
    [anon_sym_Transactions] = ACTIONS(230),
    [anon_sym_Parameter_Collection] = ACTIONS(230),
    [anon_sym_Query_Condition] = ACTIONS(230),
    [anon_sym_Manual_Condition] = ACTIONS(230),
    [anon_sym_Dynamic_Element] = ACTIONS(230),
    [anon_sym_Dynamic_Integer] = ACTIONS(230),
    [anon_sym_Dynamic_Real] = ACTIONS(230),
    [anon_sym_Dynamic_Text] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_while] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(234),
    [anon_sym_default] = ACTIONS(234),
    [anon_sym_break] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_switch] = ACTIONS(234),
    [anon_sym_if] = ACTIONS(234),
    [anon_sym_else] = ACTIONS(234),
    [anon_sym_for] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_return] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [sym_number_literal] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_void] = ACTIONS(234),
    [anon_sym_Integer] = ACTIONS(234),
    [anon_sym_Real] = ACTIONS(234),
    [anon_sym_Text] = ACTIONS(234),
    [anon_sym_Vector2] = ACTIONS(234),
    [anon_sym_Vector3] = ACTIONS(234),
    [anon_sym_Vector4] = ACTIONS(234),
    [anon_sym_Matrix3] = ACTIONS(234),
    [anon_sym_Matrix4] = ACTIONS(234),
    [anon_sym_Point] = ACTIONS(234),
    [anon_sym_Line] = ACTIONS(234),
    [anon_sym_Arc] = ACTIONS(234),
    [anon_sym_Spiral] = ACTIONS(234),
    [anon_sym_Parabola] = ACTIONS(234),
    [anon_sym_Segment] = ACTIONS(234),
    [anon_sym_Element] = ACTIONS(234),
    [anon_sym_Model] = ACTIONS(234),
    [anon_sym_View] = ACTIONS(234),
    [anon_sym_Macro_Function] = ACTIONS(234),
    [anon_sym_Function] = ACTIONS(234),
    [anon_sym_Uid] = ACTIONS(234),
    [anon_sym_Guid] = ACTIONS(234),
    [anon_sym_Attributes] = ACTIONS(234),
    [anon_sym_SDR_Attribute] = ACTIONS(234),
    [anon_sym_Blob] = ACTIONS(234),
    [anon_sym_Screen_Text] = ACTIONS(234),
    [anon_sym_Textstyle_Data] = ACTIONS(234),
    [anon_sym_Equality_Label] = ACTIONS(234),
    [anon_sym_Undo] = ACTIONS(234),
    [anon_sym_Undo_List] = ACTIONS(234),
    [anon_sym_Widget] = ACTIONS(234),
    [anon_sym_Menu] = ACTIONS(234),
    [anon_sym_Panel] = ACTIONS(234),
    [anon_sym_Overlay_Widget] = ACTIONS(234),
    [anon_sym_Vertical_Group] = ACTIONS(234),
    [anon_sym_Horizontal_Group] = ACTIONS(234),
    [anon_sym_Widget_Pages] = ACTIONS(234),
    [anon_sym_Button] = ACTIONS(234),
    [anon_sym_Select_Button] = ACTIONS(234),
    [anon_sym_Angle_Box] = ACTIONS(234),
    [anon_sym_Attributes_Box] = ACTIONS(234),
    [anon_sym_Billboard_Box] = ACTIONS(234),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(234),
    [anon_sym_Bitmap_List_Box] = ACTIONS(234),
    [anon_sym_Chainage_Box] = ACTIONS(234),
    [anon_sym_Choice_Box] = ACTIONS(234),
    [anon_sym_Colour_Box] = ACTIONS(234),
    [anon_sym_Colour_Message_Box] = ACTIONS(234),
    [anon_sym_Date_Time_Box] = ACTIONS(234),
    [anon_sym_Directory_Box] = ACTIONS(234),
    [anon_sym_Draw_Box] = ACTIONS(234),
    [anon_sym_File_Box] = ACTIONS(234),
    [anon_sym_Function_Box] = ACTIONS(234),
    [anon_sym_Graph_Box] = ACTIONS(234),
    [anon_sym_GridCtrl_Box] = ACTIONS(234),
    [anon_sym_HyperLink_Box] = ACTIONS(234),
    [anon_sym_Input_Box] = ACTIONS(234),
    [anon_sym_Integer_Box] = ACTIONS(234),
    [anon_sym_Justify_Box] = ACTIONS(234),
    [anon_sym_Linestyle_Box] = ACTIONS(234),
    [anon_sym_List_Box] = ACTIONS(234),
    [anon_sym_ListCtrl_Box] = ACTIONS(234),
    [anon_sym_Map_File_Box] = ACTIONS(234),
    [anon_sym_Message_Box] = ACTIONS(234),
    [anon_sym_Model_Box] = ACTIONS(234),
    [anon_sym_Name_Box] = ACTIONS(234),
    [anon_sym_Named_Tick_Box] = ACTIONS(234),
    [anon_sym_New_Select_Box] = ACTIONS(234),
    [anon_sym_New_XYZ_Box] = ACTIONS(234),
    [anon_sym_Plotter_Box] = ACTIONS(234),
    [anon_sym_Polygon_Box] = ACTIONS(234),
    [anon_sym_Real_Box] = ACTIONS(234),
    [anon_sym_Report_Box] = ACTIONS(234),
    [anon_sym_Select_Box] = ACTIONS(234),
    [anon_sym_Select_Boxes] = ACTIONS(234),
    [anon_sym_Sheet_Size_Box] = ACTIONS(234),
    [anon_sym_Source_Box] = ACTIONS(234),
    [anon_sym_Symbol_Box] = ACTIONS(234),
    [anon_sym_Tab_Box] = ACTIONS(234),
    [anon_sym_Target_Box] = ACTIONS(234),
    [anon_sym_Template_Box] = ACTIONS(234),
    [anon_sym_Text_Edit_Box] = ACTIONS(234),
    [anon_sym_Text_Style_Box] = ACTIONS(234),
    [anon_sym_Texture_Box] = ACTIONS(234),
    [anon_sym_Tree_Box] = ACTIONS(234),
    [anon_sym_Tree_Page] = ACTIONS(234),
    [anon_sym_Tick_Box] = ACTIONS(234),
    [anon_sym_Tin_Box] = ACTIONS(234),
    [anon_sym_View_Box] = ACTIONS(234),
    [anon_sym_XYZ_Box] = ACTIONS(234),
    [anon_sym_File] = ACTIONS(234),
    [anon_sym_Map_File] = ACTIONS(234),
    [anon_sym_Plot_Parameter_File] = ACTIONS(234),
    [anon_sym_XML_Document] = ACTIONS(234),
    [anon_sym_XML_Node] = ACTIONS(234),
    [anon_sym_Connection] = ACTIONS(234),
    [anon_sym_Select_Query] = ACTIONS(234),
    [anon_sym_Insert_Query] = ACTIONS(234),
    [anon_sym_Update_Query] = ACTIONS(234),
    [anon_sym_Delete_Query] = ACTIONS(234),
    [anon_sym_Database_Results] = ACTIONS(234),
    [anon_sym_Transactions] = ACTIONS(234),
    [anon_sym_Parameter_Collection] = ACTIONS(234),
    [anon_sym_Query_Condition] = ACTIONS(234),
    [anon_sym_Manual_Condition] = ACTIONS(234),
    [anon_sym_Dynamic_Element] = ACTIONS(234),
    [anon_sym_Dynamic_Integer] = ACTIONS(234),
    [anon_sym_Dynamic_Real] = ACTIONS(234),
    [anon_sym_Dynamic_Text] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_while] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_break] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_switch] = ACTIONS(238),
    [anon_sym_if] = ACTIONS(238),
    [anon_sym_else] = ACTIONS(240),
    [anon_sym_for] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym_return] = ACTIONS(238),
    [sym_identifier] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_void] = ACTIONS(238),
    [anon_sym_Integer] = ACTIONS(238),
    [anon_sym_Real] = ACTIONS(238),
    [anon_sym_Text] = ACTIONS(238),
    [anon_sym_Vector2] = ACTIONS(238),
    [anon_sym_Vector3] = ACTIONS(238),
    [anon_sym_Vector4] = ACTIONS(238),
    [anon_sym_Matrix3] = ACTIONS(238),
    [anon_sym_Matrix4] = ACTIONS(238),
    [anon_sym_Point] = ACTIONS(238),
    [anon_sym_Line] = ACTIONS(238),
    [anon_sym_Arc] = ACTIONS(238),
    [anon_sym_Spiral] = ACTIONS(238),
    [anon_sym_Parabola] = ACTIONS(238),
    [anon_sym_Segment] = ACTIONS(238),
    [anon_sym_Element] = ACTIONS(238),
    [anon_sym_Model] = ACTIONS(238),
    [anon_sym_View] = ACTIONS(238),
    [anon_sym_Macro_Function] = ACTIONS(238),
    [anon_sym_Function] = ACTIONS(238),
    [anon_sym_Uid] = ACTIONS(238),
    [anon_sym_Guid] = ACTIONS(238),
    [anon_sym_Attributes] = ACTIONS(238),
    [anon_sym_SDR_Attribute] = ACTIONS(238),
    [anon_sym_Blob] = ACTIONS(238),
    [anon_sym_Screen_Text] = ACTIONS(238),
    [anon_sym_Textstyle_Data] = ACTIONS(238),
    [anon_sym_Equality_Label] = ACTIONS(238),
    [anon_sym_Undo] = ACTIONS(238),
    [anon_sym_Undo_List] = ACTIONS(238),
    [anon_sym_Widget] = ACTIONS(238),
    [anon_sym_Menu] = ACTIONS(238),
    [anon_sym_Panel] = ACTIONS(238),
    [anon_sym_Overlay_Widget] = ACTIONS(238),
    [anon_sym_Vertical_Group] = ACTIONS(238),
    [anon_sym_Horizontal_Group] = ACTIONS(238),
    [anon_sym_Widget_Pages] = ACTIONS(238),
    [anon_sym_Button] = ACTIONS(238),
    [anon_sym_Select_Button] = ACTIONS(238),
    [anon_sym_Angle_Box] = ACTIONS(238),
    [anon_sym_Attributes_Box] = ACTIONS(238),
    [anon_sym_Billboard_Box] = ACTIONS(238),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(238),
    [anon_sym_Bitmap_List_Box] = ACTIONS(238),
    [anon_sym_Chainage_Box] = ACTIONS(238),
    [anon_sym_Choice_Box] = ACTIONS(238),
    [anon_sym_Colour_Box] = ACTIONS(238),
    [anon_sym_Colour_Message_Box] = ACTIONS(238),
    [anon_sym_Date_Time_Box] = ACTIONS(238),
    [anon_sym_Directory_Box] = ACTIONS(238),
    [anon_sym_Draw_Box] = ACTIONS(238),
    [anon_sym_File_Box] = ACTIONS(238),
    [anon_sym_Function_Box] = ACTIONS(238),
    [anon_sym_Graph_Box] = ACTIONS(238),
    [anon_sym_GridCtrl_Box] = ACTIONS(238),
    [anon_sym_HyperLink_Box] = ACTIONS(238),
    [anon_sym_Input_Box] = ACTIONS(238),
    [anon_sym_Integer_Box] = ACTIONS(238),
    [anon_sym_Justify_Box] = ACTIONS(238),
    [anon_sym_Linestyle_Box] = ACTIONS(238),
    [anon_sym_List_Box] = ACTIONS(238),
    [anon_sym_ListCtrl_Box] = ACTIONS(238),
    [anon_sym_Map_File_Box] = ACTIONS(238),
    [anon_sym_Message_Box] = ACTIONS(238),
    [anon_sym_Model_Box] = ACTIONS(238),
    [anon_sym_Name_Box] = ACTIONS(238),
    [anon_sym_Named_Tick_Box] = ACTIONS(238),
    [anon_sym_New_Select_Box] = ACTIONS(238),
    [anon_sym_New_XYZ_Box] = ACTIONS(238),
    [anon_sym_Plotter_Box] = ACTIONS(238),
    [anon_sym_Polygon_Box] = ACTIONS(238),
    [anon_sym_Real_Box] = ACTIONS(238),
    [anon_sym_Report_Box] = ACTIONS(238),
    [anon_sym_Select_Box] = ACTIONS(238),
    [anon_sym_Select_Boxes] = ACTIONS(238),
    [anon_sym_Sheet_Size_Box] = ACTIONS(238),
    [anon_sym_Source_Box] = ACTIONS(238),
    [anon_sym_Symbol_Box] = ACTIONS(238),
    [anon_sym_Tab_Box] = ACTIONS(238),
    [anon_sym_Target_Box] = ACTIONS(238),
    [anon_sym_Template_Box] = ACTIONS(238),
    [anon_sym_Text_Edit_Box] = ACTIONS(238),
    [anon_sym_Text_Style_Box] = ACTIONS(238),
    [anon_sym_Texture_Box] = ACTIONS(238),
    [anon_sym_Tree_Box] = ACTIONS(238),
    [anon_sym_Tree_Page] = ACTIONS(238),
    [anon_sym_Tick_Box] = ACTIONS(238),
    [anon_sym_Tin_Box] = ACTIONS(238),
    [anon_sym_View_Box] = ACTIONS(238),
    [anon_sym_XYZ_Box] = ACTIONS(238),
    [anon_sym_File] = ACTIONS(238),
    [anon_sym_Map_File] = ACTIONS(238),
    [anon_sym_Plot_Parameter_File] = ACTIONS(238),
    [anon_sym_XML_Document] = ACTIONS(238),
    [anon_sym_XML_Node] = ACTIONS(238),
    [anon_sym_Connection] = ACTIONS(238),
    [anon_sym_Select_Query] = ACTIONS(238),
    [anon_sym_Insert_Query] = ACTIONS(238),
    [anon_sym_Update_Query] = ACTIONS(238),
    [anon_sym_Delete_Query] = ACTIONS(238),
    [anon_sym_Database_Results] = ACTIONS(238),
    [anon_sym_Transactions] = ACTIONS(238),
    [anon_sym_Parameter_Collection] = ACTIONS(238),
    [anon_sym_Query_Condition] = ACTIONS(238),
    [anon_sym_Manual_Condition] = ACTIONS(238),
    [anon_sym_Dynamic_Element] = ACTIONS(238),
    [anon_sym_Dynamic_Integer] = ACTIONS(238),
    [anon_sym_Dynamic_Real] = ACTIONS(238),
    [anon_sym_Dynamic_Text] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_while] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_switch] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(244),
    [anon_sym_else] = ACTIONS(244),
    [anon_sym_for] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(242),
    [anon_sym_return] = ACTIONS(244),
    [sym_identifier] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_void] = ACTIONS(244),
    [anon_sym_Integer] = ACTIONS(244),
    [anon_sym_Real] = ACTIONS(244),
    [anon_sym_Text] = ACTIONS(244),
    [anon_sym_Vector2] = ACTIONS(244),
    [anon_sym_Vector3] = ACTIONS(244),
    [anon_sym_Vector4] = ACTIONS(244),
    [anon_sym_Matrix3] = ACTIONS(244),
    [anon_sym_Matrix4] = ACTIONS(244),
    [anon_sym_Point] = ACTIONS(244),
    [anon_sym_Line] = ACTIONS(244),
    [anon_sym_Arc] = ACTIONS(244),
    [anon_sym_Spiral] = ACTIONS(244),
    [anon_sym_Parabola] = ACTIONS(244),
    [anon_sym_Segment] = ACTIONS(244),
    [anon_sym_Element] = ACTIONS(244),
    [anon_sym_Model] = ACTIONS(244),
    [anon_sym_View] = ACTIONS(244),
    [anon_sym_Macro_Function] = ACTIONS(244),
    [anon_sym_Function] = ACTIONS(244),
    [anon_sym_Uid] = ACTIONS(244),
    [anon_sym_Guid] = ACTIONS(244),
    [anon_sym_Attributes] = ACTIONS(244),
    [anon_sym_SDR_Attribute] = ACTIONS(244),
    [anon_sym_Blob] = ACTIONS(244),
    [anon_sym_Screen_Text] = ACTIONS(244),
    [anon_sym_Textstyle_Data] = ACTIONS(244),
    [anon_sym_Equality_Label] = ACTIONS(244),
    [anon_sym_Undo] = ACTIONS(244),
    [anon_sym_Undo_List] = ACTIONS(244),
    [anon_sym_Widget] = ACTIONS(244),
    [anon_sym_Menu] = ACTIONS(244),
    [anon_sym_Panel] = ACTIONS(244),
    [anon_sym_Overlay_Widget] = ACTIONS(244),
    [anon_sym_Vertical_Group] = ACTIONS(244),
    [anon_sym_Horizontal_Group] = ACTIONS(244),
    [anon_sym_Widget_Pages] = ACTIONS(244),
    [anon_sym_Button] = ACTIONS(244),
    [anon_sym_Select_Button] = ACTIONS(244),
    [anon_sym_Angle_Box] = ACTIONS(244),
    [anon_sym_Attributes_Box] = ACTIONS(244),
    [anon_sym_Billboard_Box] = ACTIONS(244),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(244),
    [anon_sym_Bitmap_List_Box] = ACTIONS(244),
    [anon_sym_Chainage_Box] = ACTIONS(244),
    [anon_sym_Choice_Box] = ACTIONS(244),
    [anon_sym_Colour_Box] = ACTIONS(244),
    [anon_sym_Colour_Message_Box] = ACTIONS(244),
    [anon_sym_Date_Time_Box] = ACTIONS(244),
    [anon_sym_Directory_Box] = ACTIONS(244),
    [anon_sym_Draw_Box] = ACTIONS(244),
    [anon_sym_File_Box] = ACTIONS(244),
    [anon_sym_Function_Box] = ACTIONS(244),
    [anon_sym_Graph_Box] = ACTIONS(244),
    [anon_sym_GridCtrl_Box] = ACTIONS(244),
    [anon_sym_HyperLink_Box] = ACTIONS(244),
    [anon_sym_Input_Box] = ACTIONS(244),
    [anon_sym_Integer_Box] = ACTIONS(244),
    [anon_sym_Justify_Box] = ACTIONS(244),
    [anon_sym_Linestyle_Box] = ACTIONS(244),
    [anon_sym_List_Box] = ACTIONS(244),
    [anon_sym_ListCtrl_Box] = ACTIONS(244),
    [anon_sym_Map_File_Box] = ACTIONS(244),
    [anon_sym_Message_Box] = ACTIONS(244),
    [anon_sym_Model_Box] = ACTIONS(244),
    [anon_sym_Name_Box] = ACTIONS(244),
    [anon_sym_Named_Tick_Box] = ACTIONS(244),
    [anon_sym_New_Select_Box] = ACTIONS(244),
    [anon_sym_New_XYZ_Box] = ACTIONS(244),
    [anon_sym_Plotter_Box] = ACTIONS(244),
    [anon_sym_Polygon_Box] = ACTIONS(244),
    [anon_sym_Real_Box] = ACTIONS(244),
    [anon_sym_Report_Box] = ACTIONS(244),
    [anon_sym_Select_Box] = ACTIONS(244),
    [anon_sym_Select_Boxes] = ACTIONS(244),
    [anon_sym_Sheet_Size_Box] = ACTIONS(244),
    [anon_sym_Source_Box] = ACTIONS(244),
    [anon_sym_Symbol_Box] = ACTIONS(244),
    [anon_sym_Tab_Box] = ACTIONS(244),
    [anon_sym_Target_Box] = ACTIONS(244),
    [anon_sym_Template_Box] = ACTIONS(244),
    [anon_sym_Text_Edit_Box] = ACTIONS(244),
    [anon_sym_Text_Style_Box] = ACTIONS(244),
    [anon_sym_Texture_Box] = ACTIONS(244),
    [anon_sym_Tree_Box] = ACTIONS(244),
    [anon_sym_Tree_Page] = ACTIONS(244),
    [anon_sym_Tick_Box] = ACTIONS(244),
    [anon_sym_Tin_Box] = ACTIONS(244),
    [anon_sym_View_Box] = ACTIONS(244),
    [anon_sym_XYZ_Box] = ACTIONS(244),
    [anon_sym_File] = ACTIONS(244),
    [anon_sym_Map_File] = ACTIONS(244),
    [anon_sym_Plot_Parameter_File] = ACTIONS(244),
    [anon_sym_XML_Document] = ACTIONS(244),
    [anon_sym_XML_Node] = ACTIONS(244),
    [anon_sym_Connection] = ACTIONS(244),
    [anon_sym_Select_Query] = ACTIONS(244),
    [anon_sym_Insert_Query] = ACTIONS(244),
    [anon_sym_Update_Query] = ACTIONS(244),
    [anon_sym_Delete_Query] = ACTIONS(244),
    [anon_sym_Database_Results] = ACTIONS(244),
    [anon_sym_Transactions] = ACTIONS(244),
    [anon_sym_Parameter_Collection] = ACTIONS(244),
    [anon_sym_Query_Condition] = ACTIONS(244),
    [anon_sym_Manual_Condition] = ACTIONS(244),
    [anon_sym_Dynamic_Element] = ACTIONS(244),
    [anon_sym_Dynamic_Integer] = ACTIONS(244),
    [anon_sym_Dynamic_Real] = ACTIONS(244),
    [anon_sym_Dynamic_Text] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(236),
    [anon_sym_RBRACE] = ACTIONS(236),
    [anon_sym_while] = ACTIONS(238),
    [anon_sym_LPAREN] = ACTIONS(236),
    [anon_sym_case] = ACTIONS(238),
    [anon_sym_default] = ACTIONS(238),
    [anon_sym_break] = ACTIONS(238),
    [anon_sym_SEMI] = ACTIONS(236),
    [anon_sym_switch] = ACTIONS(238),
    [anon_sym_if] = ACTIONS(238),
    [anon_sym_else] = ACTIONS(246),
    [anon_sym_for] = ACTIONS(238),
    [anon_sym_BANG] = ACTIONS(236),
    [anon_sym_return] = ACTIONS(238),
    [sym_identifier] = ACTIONS(238),
    [sym_number_literal] = ACTIONS(236),
    [anon_sym_DQUOTE] = ACTIONS(236),
    [anon_sym_void] = ACTIONS(238),
    [anon_sym_Integer] = ACTIONS(238),
    [anon_sym_Real] = ACTIONS(238),
    [anon_sym_Text] = ACTIONS(238),
    [anon_sym_Vector2] = ACTIONS(238),
    [anon_sym_Vector3] = ACTIONS(238),
    [anon_sym_Vector4] = ACTIONS(238),
    [anon_sym_Matrix3] = ACTIONS(238),
    [anon_sym_Matrix4] = ACTIONS(238),
    [anon_sym_Point] = ACTIONS(238),
    [anon_sym_Line] = ACTIONS(238),
    [anon_sym_Arc] = ACTIONS(238),
    [anon_sym_Spiral] = ACTIONS(238),
    [anon_sym_Parabola] = ACTIONS(238),
    [anon_sym_Segment] = ACTIONS(238),
    [anon_sym_Element] = ACTIONS(238),
    [anon_sym_Model] = ACTIONS(238),
    [anon_sym_View] = ACTIONS(238),
    [anon_sym_Macro_Function] = ACTIONS(238),
    [anon_sym_Function] = ACTIONS(238),
    [anon_sym_Uid] = ACTIONS(238),
    [anon_sym_Guid] = ACTIONS(238),
    [anon_sym_Attributes] = ACTIONS(238),
    [anon_sym_SDR_Attribute] = ACTIONS(238),
    [anon_sym_Blob] = ACTIONS(238),
    [anon_sym_Screen_Text] = ACTIONS(238),
    [anon_sym_Textstyle_Data] = ACTIONS(238),
    [anon_sym_Equality_Label] = ACTIONS(238),
    [anon_sym_Undo] = ACTIONS(238),
    [anon_sym_Undo_List] = ACTIONS(238),
    [anon_sym_Widget] = ACTIONS(238),
    [anon_sym_Menu] = ACTIONS(238),
    [anon_sym_Panel] = ACTIONS(238),
    [anon_sym_Overlay_Widget] = ACTIONS(238),
    [anon_sym_Vertical_Group] = ACTIONS(238),
    [anon_sym_Horizontal_Group] = ACTIONS(238),
    [anon_sym_Widget_Pages] = ACTIONS(238),
    [anon_sym_Button] = ACTIONS(238),
    [anon_sym_Select_Button] = ACTIONS(238),
    [anon_sym_Angle_Box] = ACTIONS(238),
    [anon_sym_Attributes_Box] = ACTIONS(238),
    [anon_sym_Billboard_Box] = ACTIONS(238),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(238),
    [anon_sym_Bitmap_List_Box] = ACTIONS(238),
    [anon_sym_Chainage_Box] = ACTIONS(238),
    [anon_sym_Choice_Box] = ACTIONS(238),
    [anon_sym_Colour_Box] = ACTIONS(238),
    [anon_sym_Colour_Message_Box] = ACTIONS(238),
    [anon_sym_Date_Time_Box] = ACTIONS(238),
    [anon_sym_Directory_Box] = ACTIONS(238),
    [anon_sym_Draw_Box] = ACTIONS(238),
    [anon_sym_File_Box] = ACTIONS(238),
    [anon_sym_Function_Box] = ACTIONS(238),
    [anon_sym_Graph_Box] = ACTIONS(238),
    [anon_sym_GridCtrl_Box] = ACTIONS(238),
    [anon_sym_HyperLink_Box] = ACTIONS(238),
    [anon_sym_Input_Box] = ACTIONS(238),
    [anon_sym_Integer_Box] = ACTIONS(238),
    [anon_sym_Justify_Box] = ACTIONS(238),
    [anon_sym_Linestyle_Box] = ACTIONS(238),
    [anon_sym_List_Box] = ACTIONS(238),
    [anon_sym_ListCtrl_Box] = ACTIONS(238),
    [anon_sym_Map_File_Box] = ACTIONS(238),
    [anon_sym_Message_Box] = ACTIONS(238),
    [anon_sym_Model_Box] = ACTIONS(238),
    [anon_sym_Name_Box] = ACTIONS(238),
    [anon_sym_Named_Tick_Box] = ACTIONS(238),
    [anon_sym_New_Select_Box] = ACTIONS(238),
    [anon_sym_New_XYZ_Box] = ACTIONS(238),
    [anon_sym_Plotter_Box] = ACTIONS(238),
    [anon_sym_Polygon_Box] = ACTIONS(238),
    [anon_sym_Real_Box] = ACTIONS(238),
    [anon_sym_Report_Box] = ACTIONS(238),
    [anon_sym_Select_Box] = ACTIONS(238),
    [anon_sym_Select_Boxes] = ACTIONS(238),
    [anon_sym_Sheet_Size_Box] = ACTIONS(238),
    [anon_sym_Source_Box] = ACTIONS(238),
    [anon_sym_Symbol_Box] = ACTIONS(238),
    [anon_sym_Tab_Box] = ACTIONS(238),
    [anon_sym_Target_Box] = ACTIONS(238),
    [anon_sym_Template_Box] = ACTIONS(238),
    [anon_sym_Text_Edit_Box] = ACTIONS(238),
    [anon_sym_Text_Style_Box] = ACTIONS(238),
    [anon_sym_Texture_Box] = ACTIONS(238),
    [anon_sym_Tree_Box] = ACTIONS(238),
    [anon_sym_Tree_Page] = ACTIONS(238),
    [anon_sym_Tick_Box] = ACTIONS(238),
    [anon_sym_Tin_Box] = ACTIONS(238),
    [anon_sym_View_Box] = ACTIONS(238),
    [anon_sym_XYZ_Box] = ACTIONS(238),
    [anon_sym_File] = ACTIONS(238),
    [anon_sym_Map_File] = ACTIONS(238),
    [anon_sym_Plot_Parameter_File] = ACTIONS(238),
    [anon_sym_XML_Document] = ACTIONS(238),
    [anon_sym_XML_Node] = ACTIONS(238),
    [anon_sym_Connection] = ACTIONS(238),
    [anon_sym_Select_Query] = ACTIONS(238),
    [anon_sym_Insert_Query] = ACTIONS(238),
    [anon_sym_Update_Query] = ACTIONS(238),
    [anon_sym_Delete_Query] = ACTIONS(238),
    [anon_sym_Database_Results] = ACTIONS(238),
    [anon_sym_Transactions] = ACTIONS(238),
    [anon_sym_Parameter_Collection] = ACTIONS(238),
    [anon_sym_Query_Condition] = ACTIONS(238),
    [anon_sym_Manual_Condition] = ACTIONS(238),
    [anon_sym_Dynamic_Element] = ACTIONS(238),
    [anon_sym_Dynamic_Integer] = ACTIONS(238),
    [anon_sym_Dynamic_Real] = ACTIONS(238),
    [anon_sym_Dynamic_Text] = ACTIONS(238),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_while] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_break] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_switch] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_for] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(248),
    [anon_sym_return] = ACTIONS(250),
    [sym_identifier] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_Integer] = ACTIONS(250),
    [anon_sym_Real] = ACTIONS(250),
    [anon_sym_Text] = ACTIONS(250),
    [anon_sym_Vector2] = ACTIONS(250),
    [anon_sym_Vector3] = ACTIONS(250),
    [anon_sym_Vector4] = ACTIONS(250),
    [anon_sym_Matrix3] = ACTIONS(250),
    [anon_sym_Matrix4] = ACTIONS(250),
    [anon_sym_Point] = ACTIONS(250),
    [anon_sym_Line] = ACTIONS(250),
    [anon_sym_Arc] = ACTIONS(250),
    [anon_sym_Spiral] = ACTIONS(250),
    [anon_sym_Parabola] = ACTIONS(250),
    [anon_sym_Segment] = ACTIONS(250),
    [anon_sym_Element] = ACTIONS(250),
    [anon_sym_Model] = ACTIONS(250),
    [anon_sym_View] = ACTIONS(250),
    [anon_sym_Macro_Function] = ACTIONS(250),
    [anon_sym_Function] = ACTIONS(250),
    [anon_sym_Uid] = ACTIONS(250),
    [anon_sym_Guid] = ACTIONS(250),
    [anon_sym_Attributes] = ACTIONS(250),
    [anon_sym_SDR_Attribute] = ACTIONS(250),
    [anon_sym_Blob] = ACTIONS(250),
    [anon_sym_Screen_Text] = ACTIONS(250),
    [anon_sym_Textstyle_Data] = ACTIONS(250),
    [anon_sym_Equality_Label] = ACTIONS(250),
    [anon_sym_Undo] = ACTIONS(250),
    [anon_sym_Undo_List] = ACTIONS(250),
    [anon_sym_Widget] = ACTIONS(250),
    [anon_sym_Menu] = ACTIONS(250),
    [anon_sym_Panel] = ACTIONS(250),
    [anon_sym_Overlay_Widget] = ACTIONS(250),
    [anon_sym_Vertical_Group] = ACTIONS(250),
    [anon_sym_Horizontal_Group] = ACTIONS(250),
    [anon_sym_Widget_Pages] = ACTIONS(250),
    [anon_sym_Button] = ACTIONS(250),
    [anon_sym_Select_Button] = ACTIONS(250),
    [anon_sym_Angle_Box] = ACTIONS(250),
    [anon_sym_Attributes_Box] = ACTIONS(250),
    [anon_sym_Billboard_Box] = ACTIONS(250),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(250),
    [anon_sym_Bitmap_List_Box] = ACTIONS(250),
    [anon_sym_Chainage_Box] = ACTIONS(250),
    [anon_sym_Choice_Box] = ACTIONS(250),
    [anon_sym_Colour_Box] = ACTIONS(250),
    [anon_sym_Colour_Message_Box] = ACTIONS(250),
    [anon_sym_Date_Time_Box] = ACTIONS(250),
    [anon_sym_Directory_Box] = ACTIONS(250),
    [anon_sym_Draw_Box] = ACTIONS(250),
    [anon_sym_File_Box] = ACTIONS(250),
    [anon_sym_Function_Box] = ACTIONS(250),
    [anon_sym_Graph_Box] = ACTIONS(250),
    [anon_sym_GridCtrl_Box] = ACTIONS(250),
    [anon_sym_HyperLink_Box] = ACTIONS(250),
    [anon_sym_Input_Box] = ACTIONS(250),
    [anon_sym_Integer_Box] = ACTIONS(250),
    [anon_sym_Justify_Box] = ACTIONS(250),
    [anon_sym_Linestyle_Box] = ACTIONS(250),
    [anon_sym_List_Box] = ACTIONS(250),
    [anon_sym_ListCtrl_Box] = ACTIONS(250),
    [anon_sym_Map_File_Box] = ACTIONS(250),
    [anon_sym_Message_Box] = ACTIONS(250),
    [anon_sym_Model_Box] = ACTIONS(250),
    [anon_sym_Name_Box] = ACTIONS(250),
    [anon_sym_Named_Tick_Box] = ACTIONS(250),
    [anon_sym_New_Select_Box] = ACTIONS(250),
    [anon_sym_New_XYZ_Box] = ACTIONS(250),
    [anon_sym_Plotter_Box] = ACTIONS(250),
    [anon_sym_Polygon_Box] = ACTIONS(250),
    [anon_sym_Real_Box] = ACTIONS(250),
    [anon_sym_Report_Box] = ACTIONS(250),
    [anon_sym_Select_Box] = ACTIONS(250),
    [anon_sym_Select_Boxes] = ACTIONS(250),
    [anon_sym_Sheet_Size_Box] = ACTIONS(250),
    [anon_sym_Source_Box] = ACTIONS(250),
    [anon_sym_Symbol_Box] = ACTIONS(250),
    [anon_sym_Tab_Box] = ACTIONS(250),
    [anon_sym_Target_Box] = ACTIONS(250),
    [anon_sym_Template_Box] = ACTIONS(250),
    [anon_sym_Text_Edit_Box] = ACTIONS(250),
    [anon_sym_Text_Style_Box] = ACTIONS(250),
    [anon_sym_Texture_Box] = ACTIONS(250),
    [anon_sym_Tree_Box] = ACTIONS(250),
    [anon_sym_Tree_Page] = ACTIONS(250),
    [anon_sym_Tick_Box] = ACTIONS(250),
    [anon_sym_Tin_Box] = ACTIONS(250),
    [anon_sym_View_Box] = ACTIONS(250),
    [anon_sym_XYZ_Box] = ACTIONS(250),
    [anon_sym_File] = ACTIONS(250),
    [anon_sym_Map_File] = ACTIONS(250),
    [anon_sym_Plot_Parameter_File] = ACTIONS(250),
    [anon_sym_XML_Document] = ACTIONS(250),
    [anon_sym_XML_Node] = ACTIONS(250),
    [anon_sym_Connection] = ACTIONS(250),
    [anon_sym_Select_Query] = ACTIONS(250),
    [anon_sym_Insert_Query] = ACTIONS(250),
    [anon_sym_Update_Query] = ACTIONS(250),
    [anon_sym_Delete_Query] = ACTIONS(250),
    [anon_sym_Database_Results] = ACTIONS(250),
    [anon_sym_Transactions] = ACTIONS(250),
    [anon_sym_Parameter_Collection] = ACTIONS(250),
    [anon_sym_Query_Condition] = ACTIONS(250),
    [anon_sym_Manual_Condition] = ACTIONS(250),
    [anon_sym_Dynamic_Element] = ACTIONS(250),
    [anon_sym_Dynamic_Integer] = ACTIONS(250),
    [anon_sym_Dynamic_Real] = ACTIONS(250),
    [anon_sym_Dynamic_Text] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_while] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(254),
    [anon_sym_default] = ACTIONS(254),
    [anon_sym_break] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_switch] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(254),
    [anon_sym_else] = ACTIONS(254),
    [anon_sym_for] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(252),
    [anon_sym_return] = ACTIONS(254),
    [sym_identifier] = ACTIONS(254),
    [sym_number_literal] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_void] = ACTIONS(254),
    [anon_sym_Integer] = ACTIONS(254),
    [anon_sym_Real] = ACTIONS(254),
    [anon_sym_Text] = ACTIONS(254),
    [anon_sym_Vector2] = ACTIONS(254),
    [anon_sym_Vector3] = ACTIONS(254),
    [anon_sym_Vector4] = ACTIONS(254),
    [anon_sym_Matrix3] = ACTIONS(254),
    [anon_sym_Matrix4] = ACTIONS(254),
    [anon_sym_Point] = ACTIONS(254),
    [anon_sym_Line] = ACTIONS(254),
    [anon_sym_Arc] = ACTIONS(254),
    [anon_sym_Spiral] = ACTIONS(254),
    [anon_sym_Parabola] = ACTIONS(254),
    [anon_sym_Segment] = ACTIONS(254),
    [anon_sym_Element] = ACTIONS(254),
    [anon_sym_Model] = ACTIONS(254),
    [anon_sym_View] = ACTIONS(254),
    [anon_sym_Macro_Function] = ACTIONS(254),
    [anon_sym_Function] = ACTIONS(254),
    [anon_sym_Uid] = ACTIONS(254),
    [anon_sym_Guid] = ACTIONS(254),
    [anon_sym_Attributes] = ACTIONS(254),
    [anon_sym_SDR_Attribute] = ACTIONS(254),
    [anon_sym_Blob] = ACTIONS(254),
    [anon_sym_Screen_Text] = ACTIONS(254),
    [anon_sym_Textstyle_Data] = ACTIONS(254),
    [anon_sym_Equality_Label] = ACTIONS(254),
    [anon_sym_Undo] = ACTIONS(254),
    [anon_sym_Undo_List] = ACTIONS(254),
    [anon_sym_Widget] = ACTIONS(254),
    [anon_sym_Menu] = ACTIONS(254),
    [anon_sym_Panel] = ACTIONS(254),
    [anon_sym_Overlay_Widget] = ACTIONS(254),
    [anon_sym_Vertical_Group] = ACTIONS(254),
    [anon_sym_Horizontal_Group] = ACTIONS(254),
    [anon_sym_Widget_Pages] = ACTIONS(254),
    [anon_sym_Button] = ACTIONS(254),
    [anon_sym_Select_Button] = ACTIONS(254),
    [anon_sym_Angle_Box] = ACTIONS(254),
    [anon_sym_Attributes_Box] = ACTIONS(254),
    [anon_sym_Billboard_Box] = ACTIONS(254),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(254),
    [anon_sym_Bitmap_List_Box] = ACTIONS(254),
    [anon_sym_Chainage_Box] = ACTIONS(254),
    [anon_sym_Choice_Box] = ACTIONS(254),
    [anon_sym_Colour_Box] = ACTIONS(254),
    [anon_sym_Colour_Message_Box] = ACTIONS(254),
    [anon_sym_Date_Time_Box] = ACTIONS(254),
    [anon_sym_Directory_Box] = ACTIONS(254),
    [anon_sym_Draw_Box] = ACTIONS(254),
    [anon_sym_File_Box] = ACTIONS(254),
    [anon_sym_Function_Box] = ACTIONS(254),
    [anon_sym_Graph_Box] = ACTIONS(254),
    [anon_sym_GridCtrl_Box] = ACTIONS(254),
    [anon_sym_HyperLink_Box] = ACTIONS(254),
    [anon_sym_Input_Box] = ACTIONS(254),
    [anon_sym_Integer_Box] = ACTIONS(254),
    [anon_sym_Justify_Box] = ACTIONS(254),
    [anon_sym_Linestyle_Box] = ACTIONS(254),
    [anon_sym_List_Box] = ACTIONS(254),
    [anon_sym_ListCtrl_Box] = ACTIONS(254),
    [anon_sym_Map_File_Box] = ACTIONS(254),
    [anon_sym_Message_Box] = ACTIONS(254),
    [anon_sym_Model_Box] = ACTIONS(254),
    [anon_sym_Name_Box] = ACTIONS(254),
    [anon_sym_Named_Tick_Box] = ACTIONS(254),
    [anon_sym_New_Select_Box] = ACTIONS(254),
    [anon_sym_New_XYZ_Box] = ACTIONS(254),
    [anon_sym_Plotter_Box] = ACTIONS(254),
    [anon_sym_Polygon_Box] = ACTIONS(254),
    [anon_sym_Real_Box] = ACTIONS(254),
    [anon_sym_Report_Box] = ACTIONS(254),
    [anon_sym_Select_Box] = ACTIONS(254),
    [anon_sym_Select_Boxes] = ACTIONS(254),
    [anon_sym_Sheet_Size_Box] = ACTIONS(254),
    [anon_sym_Source_Box] = ACTIONS(254),
    [anon_sym_Symbol_Box] = ACTIONS(254),
    [anon_sym_Tab_Box] = ACTIONS(254),
    [anon_sym_Target_Box] = ACTIONS(254),
    [anon_sym_Template_Box] = ACTIONS(254),
    [anon_sym_Text_Edit_Box] = ACTIONS(254),
    [anon_sym_Text_Style_Box] = ACTIONS(254),
    [anon_sym_Texture_Box] = ACTIONS(254),
    [anon_sym_Tree_Box] = ACTIONS(254),
    [anon_sym_Tree_Page] = ACTIONS(254),
    [anon_sym_Tick_Box] = ACTIONS(254),
    [anon_sym_Tin_Box] = ACTIONS(254),
    [anon_sym_View_Box] = ACTIONS(254),
    [anon_sym_XYZ_Box] = ACTIONS(254),
    [anon_sym_File] = ACTIONS(254),
    [anon_sym_Map_File] = ACTIONS(254),
    [anon_sym_Plot_Parameter_File] = ACTIONS(254),
    [anon_sym_XML_Document] = ACTIONS(254),
    [anon_sym_XML_Node] = ACTIONS(254),
    [anon_sym_Connection] = ACTIONS(254),
    [anon_sym_Select_Query] = ACTIONS(254),
    [anon_sym_Insert_Query] = ACTIONS(254),
    [anon_sym_Update_Query] = ACTIONS(254),
    [anon_sym_Delete_Query] = ACTIONS(254),
    [anon_sym_Database_Results] = ACTIONS(254),
    [anon_sym_Transactions] = ACTIONS(254),
    [anon_sym_Parameter_Collection] = ACTIONS(254),
    [anon_sym_Query_Condition] = ACTIONS(254),
    [anon_sym_Manual_Condition] = ACTIONS(254),
    [anon_sym_Dynamic_Element] = ACTIONS(254),
    [anon_sym_Dynamic_Integer] = ACTIONS(254),
    [anon_sym_Dynamic_Real] = ACTIONS(254),
    [anon_sym_Dynamic_Text] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [38] = {
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_while] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(258),
    [anon_sym_default] = ACTIONS(258),
    [anon_sym_break] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_else] = ACTIONS(258),
    [anon_sym_for] = ACTIONS(258),
    [anon_sym_BANG] = ACTIONS(256),
    [anon_sym_return] = ACTIONS(258),
    [sym_identifier] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_void] = ACTIONS(258),
    [anon_sym_Integer] = ACTIONS(258),
    [anon_sym_Real] = ACTIONS(258),
    [anon_sym_Text] = ACTIONS(258),
    [anon_sym_Vector2] = ACTIONS(258),
    [anon_sym_Vector3] = ACTIONS(258),
    [anon_sym_Vector4] = ACTIONS(258),
    [anon_sym_Matrix3] = ACTIONS(258),
    [anon_sym_Matrix4] = ACTIONS(258),
    [anon_sym_Point] = ACTIONS(258),
    [anon_sym_Line] = ACTIONS(258),
    [anon_sym_Arc] = ACTIONS(258),
    [anon_sym_Spiral] = ACTIONS(258),
    [anon_sym_Parabola] = ACTIONS(258),
    [anon_sym_Segment] = ACTIONS(258),
    [anon_sym_Element] = ACTIONS(258),
    [anon_sym_Model] = ACTIONS(258),
    [anon_sym_View] = ACTIONS(258),
    [anon_sym_Macro_Function] = ACTIONS(258),
    [anon_sym_Function] = ACTIONS(258),
    [anon_sym_Uid] = ACTIONS(258),
    [anon_sym_Guid] = ACTIONS(258),
    [anon_sym_Attributes] = ACTIONS(258),
    [anon_sym_SDR_Attribute] = ACTIONS(258),
    [anon_sym_Blob] = ACTIONS(258),
    [anon_sym_Screen_Text] = ACTIONS(258),
    [anon_sym_Textstyle_Data] = ACTIONS(258),
    [anon_sym_Equality_Label] = ACTIONS(258),
    [anon_sym_Undo] = ACTIONS(258),
    [anon_sym_Undo_List] = ACTIONS(258),
    [anon_sym_Widget] = ACTIONS(258),
    [anon_sym_Menu] = ACTIONS(258),
    [anon_sym_Panel] = ACTIONS(258),
    [anon_sym_Overlay_Widget] = ACTIONS(258),
    [anon_sym_Vertical_Group] = ACTIONS(258),
    [anon_sym_Horizontal_Group] = ACTIONS(258),
    [anon_sym_Widget_Pages] = ACTIONS(258),
    [anon_sym_Button] = ACTIONS(258),
    [anon_sym_Select_Button] = ACTIONS(258),
    [anon_sym_Angle_Box] = ACTIONS(258),
    [anon_sym_Attributes_Box] = ACTIONS(258),
    [anon_sym_Billboard_Box] = ACTIONS(258),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(258),
    [anon_sym_Bitmap_List_Box] = ACTIONS(258),
    [anon_sym_Chainage_Box] = ACTIONS(258),
    [anon_sym_Choice_Box] = ACTIONS(258),
    [anon_sym_Colour_Box] = ACTIONS(258),
    [anon_sym_Colour_Message_Box] = ACTIONS(258),
    [anon_sym_Date_Time_Box] = ACTIONS(258),
    [anon_sym_Directory_Box] = ACTIONS(258),
    [anon_sym_Draw_Box] = ACTIONS(258),
    [anon_sym_File_Box] = ACTIONS(258),
    [anon_sym_Function_Box] = ACTIONS(258),
    [anon_sym_Graph_Box] = ACTIONS(258),
    [anon_sym_GridCtrl_Box] = ACTIONS(258),
    [anon_sym_HyperLink_Box] = ACTIONS(258),
    [anon_sym_Input_Box] = ACTIONS(258),
    [anon_sym_Integer_Box] = ACTIONS(258),
    [anon_sym_Justify_Box] = ACTIONS(258),
    [anon_sym_Linestyle_Box] = ACTIONS(258),
    [anon_sym_List_Box] = ACTIONS(258),
    [anon_sym_ListCtrl_Box] = ACTIONS(258),
    [anon_sym_Map_File_Box] = ACTIONS(258),
    [anon_sym_Message_Box] = ACTIONS(258),
    [anon_sym_Model_Box] = ACTIONS(258),
    [anon_sym_Name_Box] = ACTIONS(258),
    [anon_sym_Named_Tick_Box] = ACTIONS(258),
    [anon_sym_New_Select_Box] = ACTIONS(258),
    [anon_sym_New_XYZ_Box] = ACTIONS(258),
    [anon_sym_Plotter_Box] = ACTIONS(258),
    [anon_sym_Polygon_Box] = ACTIONS(258),
    [anon_sym_Real_Box] = ACTIONS(258),
    [anon_sym_Report_Box] = ACTIONS(258),
    [anon_sym_Select_Box] = ACTIONS(258),
    [anon_sym_Select_Boxes] = ACTIONS(258),
    [anon_sym_Sheet_Size_Box] = ACTIONS(258),
    [anon_sym_Source_Box] = ACTIONS(258),
    [anon_sym_Symbol_Box] = ACTIONS(258),
    [anon_sym_Tab_Box] = ACTIONS(258),
    [anon_sym_Target_Box] = ACTIONS(258),
    [anon_sym_Template_Box] = ACTIONS(258),
    [anon_sym_Text_Edit_Box] = ACTIONS(258),
    [anon_sym_Text_Style_Box] = ACTIONS(258),
    [anon_sym_Texture_Box] = ACTIONS(258),
    [anon_sym_Tree_Box] = ACTIONS(258),
    [anon_sym_Tree_Page] = ACTIONS(258),
    [anon_sym_Tick_Box] = ACTIONS(258),
    [anon_sym_Tin_Box] = ACTIONS(258),
    [anon_sym_View_Box] = ACTIONS(258),
    [anon_sym_XYZ_Box] = ACTIONS(258),
    [anon_sym_File] = ACTIONS(258),
    [anon_sym_Map_File] = ACTIONS(258),
    [anon_sym_Plot_Parameter_File] = ACTIONS(258),
    [anon_sym_XML_Document] = ACTIONS(258),
    [anon_sym_XML_Node] = ACTIONS(258),
    [anon_sym_Connection] = ACTIONS(258),
    [anon_sym_Select_Query] = ACTIONS(258),
    [anon_sym_Insert_Query] = ACTIONS(258),
    [anon_sym_Update_Query] = ACTIONS(258),
    [anon_sym_Delete_Query] = ACTIONS(258),
    [anon_sym_Database_Results] = ACTIONS(258),
    [anon_sym_Transactions] = ACTIONS(258),
    [anon_sym_Parameter_Collection] = ACTIONS(258),
    [anon_sym_Query_Condition] = ACTIONS(258),
    [anon_sym_Manual_Condition] = ACTIONS(258),
    [anon_sym_Dynamic_Element] = ACTIONS(258),
    [anon_sym_Dynamic_Integer] = ACTIONS(258),
    [anon_sym_Dynamic_Real] = ACTIONS(258),
    [anon_sym_Dynamic_Text] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_case] = ACTIONS(262),
    [anon_sym_default] = ACTIONS(262),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(262),
    [anon_sym_if] = ACTIONS(262),
    [anon_sym_else] = ACTIONS(262),
    [anon_sym_for] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(260),
    [anon_sym_return] = ACTIONS(262),
    [sym_identifier] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_void] = ACTIONS(262),
    [anon_sym_Integer] = ACTIONS(262),
    [anon_sym_Real] = ACTIONS(262),
    [anon_sym_Text] = ACTIONS(262),
    [anon_sym_Vector2] = ACTIONS(262),
    [anon_sym_Vector3] = ACTIONS(262),
    [anon_sym_Vector4] = ACTIONS(262),
    [anon_sym_Matrix3] = ACTIONS(262),
    [anon_sym_Matrix4] = ACTIONS(262),
    [anon_sym_Point] = ACTIONS(262),
    [anon_sym_Line] = ACTIONS(262),
    [anon_sym_Arc] = ACTIONS(262),
    [anon_sym_Spiral] = ACTIONS(262),
    [anon_sym_Parabola] = ACTIONS(262),
    [anon_sym_Segment] = ACTIONS(262),
    [anon_sym_Element] = ACTIONS(262),
    [anon_sym_Model] = ACTIONS(262),
    [anon_sym_View] = ACTIONS(262),
    [anon_sym_Macro_Function] = ACTIONS(262),
    [anon_sym_Function] = ACTIONS(262),
    [anon_sym_Uid] = ACTIONS(262),
    [anon_sym_Guid] = ACTIONS(262),
    [anon_sym_Attributes] = ACTIONS(262),
    [anon_sym_SDR_Attribute] = ACTIONS(262),
    [anon_sym_Blob] = ACTIONS(262),
    [anon_sym_Screen_Text] = ACTIONS(262),
    [anon_sym_Textstyle_Data] = ACTIONS(262),
    [anon_sym_Equality_Label] = ACTIONS(262),
    [anon_sym_Undo] = ACTIONS(262),
    [anon_sym_Undo_List] = ACTIONS(262),
    [anon_sym_Widget] = ACTIONS(262),
    [anon_sym_Menu] = ACTIONS(262),
    [anon_sym_Panel] = ACTIONS(262),
    [anon_sym_Overlay_Widget] = ACTIONS(262),
    [anon_sym_Vertical_Group] = ACTIONS(262),
    [anon_sym_Horizontal_Group] = ACTIONS(262),
    [anon_sym_Widget_Pages] = ACTIONS(262),
    [anon_sym_Button] = ACTIONS(262),
    [anon_sym_Select_Button] = ACTIONS(262),
    [anon_sym_Angle_Box] = ACTIONS(262),
    [anon_sym_Attributes_Box] = ACTIONS(262),
    [anon_sym_Billboard_Box] = ACTIONS(262),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(262),
    [anon_sym_Bitmap_List_Box] = ACTIONS(262),
    [anon_sym_Chainage_Box] = ACTIONS(262),
    [anon_sym_Choice_Box] = ACTIONS(262),
    [anon_sym_Colour_Box] = ACTIONS(262),
    [anon_sym_Colour_Message_Box] = ACTIONS(262),
    [anon_sym_Date_Time_Box] = ACTIONS(262),
    [anon_sym_Directory_Box] = ACTIONS(262),
    [anon_sym_Draw_Box] = ACTIONS(262),
    [anon_sym_File_Box] = ACTIONS(262),
    [anon_sym_Function_Box] = ACTIONS(262),
    [anon_sym_Graph_Box] = ACTIONS(262),
    [anon_sym_GridCtrl_Box] = ACTIONS(262),
    [anon_sym_HyperLink_Box] = ACTIONS(262),
    [anon_sym_Input_Box] = ACTIONS(262),
    [anon_sym_Integer_Box] = ACTIONS(262),
    [anon_sym_Justify_Box] = ACTIONS(262),
    [anon_sym_Linestyle_Box] = ACTIONS(262),
    [anon_sym_List_Box] = ACTIONS(262),
    [anon_sym_ListCtrl_Box] = ACTIONS(262),
    [anon_sym_Map_File_Box] = ACTIONS(262),
    [anon_sym_Message_Box] = ACTIONS(262),
    [anon_sym_Model_Box] = ACTIONS(262),
    [anon_sym_Name_Box] = ACTIONS(262),
    [anon_sym_Named_Tick_Box] = ACTIONS(262),
    [anon_sym_New_Select_Box] = ACTIONS(262),
    [anon_sym_New_XYZ_Box] = ACTIONS(262),
    [anon_sym_Plotter_Box] = ACTIONS(262),
    [anon_sym_Polygon_Box] = ACTIONS(262),
    [anon_sym_Real_Box] = ACTIONS(262),
    [anon_sym_Report_Box] = ACTIONS(262),
    [anon_sym_Select_Box] = ACTIONS(262),
    [anon_sym_Select_Boxes] = ACTIONS(262),
    [anon_sym_Sheet_Size_Box] = ACTIONS(262),
    [anon_sym_Source_Box] = ACTIONS(262),
    [anon_sym_Symbol_Box] = ACTIONS(262),
    [anon_sym_Tab_Box] = ACTIONS(262),
    [anon_sym_Target_Box] = ACTIONS(262),
    [anon_sym_Template_Box] = ACTIONS(262),
    [anon_sym_Text_Edit_Box] = ACTIONS(262),
    [anon_sym_Text_Style_Box] = ACTIONS(262),
    [anon_sym_Texture_Box] = ACTIONS(262),
    [anon_sym_Tree_Box] = ACTIONS(262),
    [anon_sym_Tree_Page] = ACTIONS(262),
    [anon_sym_Tick_Box] = ACTIONS(262),
    [anon_sym_Tin_Box] = ACTIONS(262),
    [anon_sym_View_Box] = ACTIONS(262),
    [anon_sym_XYZ_Box] = ACTIONS(262),
    [anon_sym_File] = ACTIONS(262),
    [anon_sym_Map_File] = ACTIONS(262),
    [anon_sym_Plot_Parameter_File] = ACTIONS(262),
    [anon_sym_XML_Document] = ACTIONS(262),
    [anon_sym_XML_Node] = ACTIONS(262),
    [anon_sym_Connection] = ACTIONS(262),
    [anon_sym_Select_Query] = ACTIONS(262),
    [anon_sym_Insert_Query] = ACTIONS(262),
    [anon_sym_Update_Query] = ACTIONS(262),
    [anon_sym_Delete_Query] = ACTIONS(262),
    [anon_sym_Database_Results] = ACTIONS(262),
    [anon_sym_Transactions] = ACTIONS(262),
    [anon_sym_Parameter_Collection] = ACTIONS(262),
    [anon_sym_Query_Condition] = ACTIONS(262),
    [anon_sym_Manual_Condition] = ACTIONS(262),
    [anon_sym_Dynamic_Element] = ACTIONS(262),
    [anon_sym_Dynamic_Integer] = ACTIONS(262),
    [anon_sym_Dynamic_Real] = ACTIONS(262),
    [anon_sym_Dynamic_Text] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [40] = {
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_while] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_default] = ACTIONS(266),
    [anon_sym_break] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_switch] = ACTIONS(266),
    [anon_sym_if] = ACTIONS(266),
    [anon_sym_else] = ACTIONS(266),
    [anon_sym_for] = ACTIONS(266),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_return] = ACTIONS(266),
    [sym_identifier] = ACTIONS(266),
    [sym_number_literal] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_Integer] = ACTIONS(266),
    [anon_sym_Real] = ACTIONS(266),
    [anon_sym_Text] = ACTIONS(266),
    [anon_sym_Vector2] = ACTIONS(266),
    [anon_sym_Vector3] = ACTIONS(266),
    [anon_sym_Vector4] = ACTIONS(266),
    [anon_sym_Matrix3] = ACTIONS(266),
    [anon_sym_Matrix4] = ACTIONS(266),
    [anon_sym_Point] = ACTIONS(266),
    [anon_sym_Line] = ACTIONS(266),
    [anon_sym_Arc] = ACTIONS(266),
    [anon_sym_Spiral] = ACTIONS(266),
    [anon_sym_Parabola] = ACTIONS(266),
    [anon_sym_Segment] = ACTIONS(266),
    [anon_sym_Element] = ACTIONS(266),
    [anon_sym_Model] = ACTIONS(266),
    [anon_sym_View] = ACTIONS(266),
    [anon_sym_Macro_Function] = ACTIONS(266),
    [anon_sym_Function] = ACTIONS(266),
    [anon_sym_Uid] = ACTIONS(266),
    [anon_sym_Guid] = ACTIONS(266),
    [anon_sym_Attributes] = ACTIONS(266),
    [anon_sym_SDR_Attribute] = ACTIONS(266),
    [anon_sym_Blob] = ACTIONS(266),
    [anon_sym_Screen_Text] = ACTIONS(266),
    [anon_sym_Textstyle_Data] = ACTIONS(266),
    [anon_sym_Equality_Label] = ACTIONS(266),
    [anon_sym_Undo] = ACTIONS(266),
    [anon_sym_Undo_List] = ACTIONS(266),
    [anon_sym_Widget] = ACTIONS(266),
    [anon_sym_Menu] = ACTIONS(266),
    [anon_sym_Panel] = ACTIONS(266),
    [anon_sym_Overlay_Widget] = ACTIONS(266),
    [anon_sym_Vertical_Group] = ACTIONS(266),
    [anon_sym_Horizontal_Group] = ACTIONS(266),
    [anon_sym_Widget_Pages] = ACTIONS(266),
    [anon_sym_Button] = ACTIONS(266),
    [anon_sym_Select_Button] = ACTIONS(266),
    [anon_sym_Angle_Box] = ACTIONS(266),
    [anon_sym_Attributes_Box] = ACTIONS(266),
    [anon_sym_Billboard_Box] = ACTIONS(266),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(266),
    [anon_sym_Bitmap_List_Box] = ACTIONS(266),
    [anon_sym_Chainage_Box] = ACTIONS(266),
    [anon_sym_Choice_Box] = ACTIONS(266),
    [anon_sym_Colour_Box] = ACTIONS(266),
    [anon_sym_Colour_Message_Box] = ACTIONS(266),
    [anon_sym_Date_Time_Box] = ACTIONS(266),
    [anon_sym_Directory_Box] = ACTIONS(266),
    [anon_sym_Draw_Box] = ACTIONS(266),
    [anon_sym_File_Box] = ACTIONS(266),
    [anon_sym_Function_Box] = ACTIONS(266),
    [anon_sym_Graph_Box] = ACTIONS(266),
    [anon_sym_GridCtrl_Box] = ACTIONS(266),
    [anon_sym_HyperLink_Box] = ACTIONS(266),
    [anon_sym_Input_Box] = ACTIONS(266),
    [anon_sym_Integer_Box] = ACTIONS(266),
    [anon_sym_Justify_Box] = ACTIONS(266),
    [anon_sym_Linestyle_Box] = ACTIONS(266),
    [anon_sym_List_Box] = ACTIONS(266),
    [anon_sym_ListCtrl_Box] = ACTIONS(266),
    [anon_sym_Map_File_Box] = ACTIONS(266),
    [anon_sym_Message_Box] = ACTIONS(266),
    [anon_sym_Model_Box] = ACTIONS(266),
    [anon_sym_Name_Box] = ACTIONS(266),
    [anon_sym_Named_Tick_Box] = ACTIONS(266),
    [anon_sym_New_Select_Box] = ACTIONS(266),
    [anon_sym_New_XYZ_Box] = ACTIONS(266),
    [anon_sym_Plotter_Box] = ACTIONS(266),
    [anon_sym_Polygon_Box] = ACTIONS(266),
    [anon_sym_Real_Box] = ACTIONS(266),
    [anon_sym_Report_Box] = ACTIONS(266),
    [anon_sym_Select_Box] = ACTIONS(266),
    [anon_sym_Select_Boxes] = ACTIONS(266),
    [anon_sym_Sheet_Size_Box] = ACTIONS(266),
    [anon_sym_Source_Box] = ACTIONS(266),
    [anon_sym_Symbol_Box] = ACTIONS(266),
    [anon_sym_Tab_Box] = ACTIONS(266),
    [anon_sym_Target_Box] = ACTIONS(266),
    [anon_sym_Template_Box] = ACTIONS(266),
    [anon_sym_Text_Edit_Box] = ACTIONS(266),
    [anon_sym_Text_Style_Box] = ACTIONS(266),
    [anon_sym_Texture_Box] = ACTIONS(266),
    [anon_sym_Tree_Box] = ACTIONS(266),
    [anon_sym_Tree_Page] = ACTIONS(266),
    [anon_sym_Tick_Box] = ACTIONS(266),
    [anon_sym_Tin_Box] = ACTIONS(266),
    [anon_sym_View_Box] = ACTIONS(266),
    [anon_sym_XYZ_Box] = ACTIONS(266),
    [anon_sym_File] = ACTIONS(266),
    [anon_sym_Map_File] = ACTIONS(266),
    [anon_sym_Plot_Parameter_File] = ACTIONS(266),
    [anon_sym_XML_Document] = ACTIONS(266),
    [anon_sym_XML_Node] = ACTIONS(266),
    [anon_sym_Connection] = ACTIONS(266),
    [anon_sym_Select_Query] = ACTIONS(266),
    [anon_sym_Insert_Query] = ACTIONS(266),
    [anon_sym_Update_Query] = ACTIONS(266),
    [anon_sym_Delete_Query] = ACTIONS(266),
    [anon_sym_Database_Results] = ACTIONS(266),
    [anon_sym_Transactions] = ACTIONS(266),
    [anon_sym_Parameter_Collection] = ACTIONS(266),
    [anon_sym_Query_Condition] = ACTIONS(266),
    [anon_sym_Manual_Condition] = ACTIONS(266),
    [anon_sym_Dynamic_Element] = ACTIONS(266),
    [anon_sym_Dynamic_Integer] = ACTIONS(266),
    [anon_sym_Dynamic_Real] = ACTIONS(266),
    [anon_sym_Dynamic_Text] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [41] = {
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_while] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_case] = ACTIONS(270),
    [anon_sym_default] = ACTIONS(270),
    [anon_sym_break] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_switch] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(270),
    [anon_sym_else] = ACTIONS(270),
    [anon_sym_for] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(268),
    [anon_sym_return] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_void] = ACTIONS(270),
    [anon_sym_Integer] = ACTIONS(270),
    [anon_sym_Real] = ACTIONS(270),
    [anon_sym_Text] = ACTIONS(270),
    [anon_sym_Vector2] = ACTIONS(270),
    [anon_sym_Vector3] = ACTIONS(270),
    [anon_sym_Vector4] = ACTIONS(270),
    [anon_sym_Matrix3] = ACTIONS(270),
    [anon_sym_Matrix4] = ACTIONS(270),
    [anon_sym_Point] = ACTIONS(270),
    [anon_sym_Line] = ACTIONS(270),
    [anon_sym_Arc] = ACTIONS(270),
    [anon_sym_Spiral] = ACTIONS(270),
    [anon_sym_Parabola] = ACTIONS(270),
    [anon_sym_Segment] = ACTIONS(270),
    [anon_sym_Element] = ACTIONS(270),
    [anon_sym_Model] = ACTIONS(270),
    [anon_sym_View] = ACTIONS(270),
    [anon_sym_Macro_Function] = ACTIONS(270),
    [anon_sym_Function] = ACTIONS(270),
    [anon_sym_Uid] = ACTIONS(270),
    [anon_sym_Guid] = ACTIONS(270),
    [anon_sym_Attributes] = ACTIONS(270),
    [anon_sym_SDR_Attribute] = ACTIONS(270),
    [anon_sym_Blob] = ACTIONS(270),
    [anon_sym_Screen_Text] = ACTIONS(270),
    [anon_sym_Textstyle_Data] = ACTIONS(270),
    [anon_sym_Equality_Label] = ACTIONS(270),
    [anon_sym_Undo] = ACTIONS(270),
    [anon_sym_Undo_List] = ACTIONS(270),
    [anon_sym_Widget] = ACTIONS(270),
    [anon_sym_Menu] = ACTIONS(270),
    [anon_sym_Panel] = ACTIONS(270),
    [anon_sym_Overlay_Widget] = ACTIONS(270),
    [anon_sym_Vertical_Group] = ACTIONS(270),
    [anon_sym_Horizontal_Group] = ACTIONS(270),
    [anon_sym_Widget_Pages] = ACTIONS(270),
    [anon_sym_Button] = ACTIONS(270),
    [anon_sym_Select_Button] = ACTIONS(270),
    [anon_sym_Angle_Box] = ACTIONS(270),
    [anon_sym_Attributes_Box] = ACTIONS(270),
    [anon_sym_Billboard_Box] = ACTIONS(270),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(270),
    [anon_sym_Bitmap_List_Box] = ACTIONS(270),
    [anon_sym_Chainage_Box] = ACTIONS(270),
    [anon_sym_Choice_Box] = ACTIONS(270),
    [anon_sym_Colour_Box] = ACTIONS(270),
    [anon_sym_Colour_Message_Box] = ACTIONS(270),
    [anon_sym_Date_Time_Box] = ACTIONS(270),
    [anon_sym_Directory_Box] = ACTIONS(270),
    [anon_sym_Draw_Box] = ACTIONS(270),
    [anon_sym_File_Box] = ACTIONS(270),
    [anon_sym_Function_Box] = ACTIONS(270),
    [anon_sym_Graph_Box] = ACTIONS(270),
    [anon_sym_GridCtrl_Box] = ACTIONS(270),
    [anon_sym_HyperLink_Box] = ACTIONS(270),
    [anon_sym_Input_Box] = ACTIONS(270),
    [anon_sym_Integer_Box] = ACTIONS(270),
    [anon_sym_Justify_Box] = ACTIONS(270),
    [anon_sym_Linestyle_Box] = ACTIONS(270),
    [anon_sym_List_Box] = ACTIONS(270),
    [anon_sym_ListCtrl_Box] = ACTIONS(270),
    [anon_sym_Map_File_Box] = ACTIONS(270),
    [anon_sym_Message_Box] = ACTIONS(270),
    [anon_sym_Model_Box] = ACTIONS(270),
    [anon_sym_Name_Box] = ACTIONS(270),
    [anon_sym_Named_Tick_Box] = ACTIONS(270),
    [anon_sym_New_Select_Box] = ACTIONS(270),
    [anon_sym_New_XYZ_Box] = ACTIONS(270),
    [anon_sym_Plotter_Box] = ACTIONS(270),
    [anon_sym_Polygon_Box] = ACTIONS(270),
    [anon_sym_Real_Box] = ACTIONS(270),
    [anon_sym_Report_Box] = ACTIONS(270),
    [anon_sym_Select_Box] = ACTIONS(270),
    [anon_sym_Select_Boxes] = ACTIONS(270),
    [anon_sym_Sheet_Size_Box] = ACTIONS(270),
    [anon_sym_Source_Box] = ACTIONS(270),
    [anon_sym_Symbol_Box] = ACTIONS(270),
    [anon_sym_Tab_Box] = ACTIONS(270),
    [anon_sym_Target_Box] = ACTIONS(270),
    [anon_sym_Template_Box] = ACTIONS(270),
    [anon_sym_Text_Edit_Box] = ACTIONS(270),
    [anon_sym_Text_Style_Box] = ACTIONS(270),
    [anon_sym_Texture_Box] = ACTIONS(270),
    [anon_sym_Tree_Box] = ACTIONS(270),
    [anon_sym_Tree_Page] = ACTIONS(270),
    [anon_sym_Tick_Box] = ACTIONS(270),
    [anon_sym_Tin_Box] = ACTIONS(270),
    [anon_sym_View_Box] = ACTIONS(270),
    [anon_sym_XYZ_Box] = ACTIONS(270),
    [anon_sym_File] = ACTIONS(270),
    [anon_sym_Map_File] = ACTIONS(270),
    [anon_sym_Plot_Parameter_File] = ACTIONS(270),
    [anon_sym_XML_Document] = ACTIONS(270),
    [anon_sym_XML_Node] = ACTIONS(270),
    [anon_sym_Connection] = ACTIONS(270),
    [anon_sym_Select_Query] = ACTIONS(270),
    [anon_sym_Insert_Query] = ACTIONS(270),
    [anon_sym_Update_Query] = ACTIONS(270),
    [anon_sym_Delete_Query] = ACTIONS(270),
    [anon_sym_Database_Results] = ACTIONS(270),
    [anon_sym_Transactions] = ACTIONS(270),
    [anon_sym_Parameter_Collection] = ACTIONS(270),
    [anon_sym_Query_Condition] = ACTIONS(270),
    [anon_sym_Manual_Condition] = ACTIONS(270),
    [anon_sym_Dynamic_Element] = ACTIONS(270),
    [anon_sym_Dynamic_Integer] = ACTIONS(270),
    [anon_sym_Dynamic_Real] = ACTIONS(270),
    [anon_sym_Dynamic_Text] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
  },
  [42] = {
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_while] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_break] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_switch] = ACTIONS(274),
    [anon_sym_if] = ACTIONS(274),
    [anon_sym_else] = ACTIONS(274),
    [anon_sym_for] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(272),
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
  [43] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_break] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_switch] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_else] = ACTIONS(278),
    [anon_sym_for] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(276),
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
  [44] = {
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_while] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
    [anon_sym_break] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [anon_sym_else] = ACTIONS(226),
    [anon_sym_for] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_return] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_number_literal] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_void] = ACTIONS(226),
    [anon_sym_Integer] = ACTIONS(226),
    [anon_sym_Real] = ACTIONS(226),
    [anon_sym_Text] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_Vector4] = ACTIONS(226),
    [anon_sym_Matrix3] = ACTIONS(226),
    [anon_sym_Matrix4] = ACTIONS(226),
    [anon_sym_Point] = ACTIONS(226),
    [anon_sym_Line] = ACTIONS(226),
    [anon_sym_Arc] = ACTIONS(226),
    [anon_sym_Spiral] = ACTIONS(226),
    [anon_sym_Parabola] = ACTIONS(226),
    [anon_sym_Segment] = ACTIONS(226),
    [anon_sym_Element] = ACTIONS(226),
    [anon_sym_Model] = ACTIONS(226),
    [anon_sym_View] = ACTIONS(226),
    [anon_sym_Macro_Function] = ACTIONS(226),
    [anon_sym_Function] = ACTIONS(226),
    [anon_sym_Uid] = ACTIONS(226),
    [anon_sym_Guid] = ACTIONS(226),
    [anon_sym_Attributes] = ACTIONS(226),
    [anon_sym_SDR_Attribute] = ACTIONS(226),
    [anon_sym_Blob] = ACTIONS(226),
    [anon_sym_Screen_Text] = ACTIONS(226),
    [anon_sym_Textstyle_Data] = ACTIONS(226),
    [anon_sym_Equality_Label] = ACTIONS(226),
    [anon_sym_Undo] = ACTIONS(226),
    [anon_sym_Undo_List] = ACTIONS(226),
    [anon_sym_Widget] = ACTIONS(226),
    [anon_sym_Menu] = ACTIONS(226),
    [anon_sym_Panel] = ACTIONS(226),
    [anon_sym_Overlay_Widget] = ACTIONS(226),
    [anon_sym_Vertical_Group] = ACTIONS(226),
    [anon_sym_Horizontal_Group] = ACTIONS(226),
    [anon_sym_Widget_Pages] = ACTIONS(226),
    [anon_sym_Button] = ACTIONS(226),
    [anon_sym_Select_Button] = ACTIONS(226),
    [anon_sym_Angle_Box] = ACTIONS(226),
    [anon_sym_Attributes_Box] = ACTIONS(226),
    [anon_sym_Billboard_Box] = ACTIONS(226),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(226),
    [anon_sym_Bitmap_List_Box] = ACTIONS(226),
    [anon_sym_Chainage_Box] = ACTIONS(226),
    [anon_sym_Choice_Box] = ACTIONS(226),
    [anon_sym_Colour_Box] = ACTIONS(226),
    [anon_sym_Colour_Message_Box] = ACTIONS(226),
    [anon_sym_Date_Time_Box] = ACTIONS(226),
    [anon_sym_Directory_Box] = ACTIONS(226),
    [anon_sym_Draw_Box] = ACTIONS(226),
    [anon_sym_File_Box] = ACTIONS(226),
    [anon_sym_Function_Box] = ACTIONS(226),
    [anon_sym_Graph_Box] = ACTIONS(226),
    [anon_sym_GridCtrl_Box] = ACTIONS(226),
    [anon_sym_HyperLink_Box] = ACTIONS(226),
    [anon_sym_Input_Box] = ACTIONS(226),
    [anon_sym_Integer_Box] = ACTIONS(226),
    [anon_sym_Justify_Box] = ACTIONS(226),
    [anon_sym_Linestyle_Box] = ACTIONS(226),
    [anon_sym_List_Box] = ACTIONS(226),
    [anon_sym_ListCtrl_Box] = ACTIONS(226),
    [anon_sym_Map_File_Box] = ACTIONS(226),
    [anon_sym_Message_Box] = ACTIONS(226),
    [anon_sym_Model_Box] = ACTIONS(226),
    [anon_sym_Name_Box] = ACTIONS(226),
    [anon_sym_Named_Tick_Box] = ACTIONS(226),
    [anon_sym_New_Select_Box] = ACTIONS(226),
    [anon_sym_New_XYZ_Box] = ACTIONS(226),
    [anon_sym_Plotter_Box] = ACTIONS(226),
    [anon_sym_Polygon_Box] = ACTIONS(226),
    [anon_sym_Real_Box] = ACTIONS(226),
    [anon_sym_Report_Box] = ACTIONS(226),
    [anon_sym_Select_Box] = ACTIONS(226),
    [anon_sym_Select_Boxes] = ACTIONS(226),
    [anon_sym_Sheet_Size_Box] = ACTIONS(226),
    [anon_sym_Source_Box] = ACTIONS(226),
    [anon_sym_Symbol_Box] = ACTIONS(226),
    [anon_sym_Tab_Box] = ACTIONS(226),
    [anon_sym_Target_Box] = ACTIONS(226),
    [anon_sym_Template_Box] = ACTIONS(226),
    [anon_sym_Text_Edit_Box] = ACTIONS(226),
    [anon_sym_Text_Style_Box] = ACTIONS(226),
    [anon_sym_Texture_Box] = ACTIONS(226),
    [anon_sym_Tree_Box] = ACTIONS(226),
    [anon_sym_Tree_Page] = ACTIONS(226),
    [anon_sym_Tick_Box] = ACTIONS(226),
    [anon_sym_Tin_Box] = ACTIONS(226),
    [anon_sym_View_Box] = ACTIONS(226),
    [anon_sym_XYZ_Box] = ACTIONS(226),
    [anon_sym_File] = ACTIONS(226),
    [anon_sym_Map_File] = ACTIONS(226),
    [anon_sym_Plot_Parameter_File] = ACTIONS(226),
    [anon_sym_XML_Document] = ACTIONS(226),
    [anon_sym_XML_Node] = ACTIONS(226),
    [anon_sym_Connection] = ACTIONS(226),
    [anon_sym_Select_Query] = ACTIONS(226),
    [anon_sym_Insert_Query] = ACTIONS(226),
    [anon_sym_Update_Query] = ACTIONS(226),
    [anon_sym_Delete_Query] = ACTIONS(226),
    [anon_sym_Database_Results] = ACTIONS(226),
    [anon_sym_Transactions] = ACTIONS(226),
    [anon_sym_Parameter_Collection] = ACTIONS(226),
    [anon_sym_Query_Condition] = ACTIONS(226),
    [anon_sym_Manual_Condition] = ACTIONS(226),
    [anon_sym_Dynamic_Element] = ACTIONS(226),
    [anon_sym_Dynamic_Integer] = ACTIONS(226),
    [anon_sym_Dynamic_Real] = ACTIONS(226),
    [anon_sym_Dynamic_Text] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [45] = {
    [anon_sym_LBRACE] = ACTIONS(260),
    [anon_sym_RBRACE] = ACTIONS(260),
    [anon_sym_while] = ACTIONS(262),
    [anon_sym_LPAREN] = ACTIONS(260),
    [anon_sym_case] = ACTIONS(262),
    [anon_sym_default] = ACTIONS(262),
    [anon_sym_break] = ACTIONS(262),
    [anon_sym_SEMI] = ACTIONS(260),
    [anon_sym_switch] = ACTIONS(262),
    [anon_sym_if] = ACTIONS(262),
    [anon_sym_for] = ACTIONS(262),
    [anon_sym_BANG] = ACTIONS(260),
    [anon_sym_return] = ACTIONS(262),
    [sym_identifier] = ACTIONS(262),
    [sym_number_literal] = ACTIONS(260),
    [anon_sym_DQUOTE] = ACTIONS(260),
    [anon_sym_void] = ACTIONS(262),
    [anon_sym_Integer] = ACTIONS(262),
    [anon_sym_Real] = ACTIONS(262),
    [anon_sym_Text] = ACTIONS(262),
    [anon_sym_Vector2] = ACTIONS(262),
    [anon_sym_Vector3] = ACTIONS(262),
    [anon_sym_Vector4] = ACTIONS(262),
    [anon_sym_Matrix3] = ACTIONS(262),
    [anon_sym_Matrix4] = ACTIONS(262),
    [anon_sym_Point] = ACTIONS(262),
    [anon_sym_Line] = ACTIONS(262),
    [anon_sym_Arc] = ACTIONS(262),
    [anon_sym_Spiral] = ACTIONS(262),
    [anon_sym_Parabola] = ACTIONS(262),
    [anon_sym_Segment] = ACTIONS(262),
    [anon_sym_Element] = ACTIONS(262),
    [anon_sym_Model] = ACTIONS(262),
    [anon_sym_View] = ACTIONS(262),
    [anon_sym_Macro_Function] = ACTIONS(262),
    [anon_sym_Function] = ACTIONS(262),
    [anon_sym_Uid] = ACTIONS(262),
    [anon_sym_Guid] = ACTIONS(262),
    [anon_sym_Attributes] = ACTIONS(262),
    [anon_sym_SDR_Attribute] = ACTIONS(262),
    [anon_sym_Blob] = ACTIONS(262),
    [anon_sym_Screen_Text] = ACTIONS(262),
    [anon_sym_Textstyle_Data] = ACTIONS(262),
    [anon_sym_Equality_Label] = ACTIONS(262),
    [anon_sym_Undo] = ACTIONS(262),
    [anon_sym_Undo_List] = ACTIONS(262),
    [anon_sym_Widget] = ACTIONS(262),
    [anon_sym_Menu] = ACTIONS(262),
    [anon_sym_Panel] = ACTIONS(262),
    [anon_sym_Overlay_Widget] = ACTIONS(262),
    [anon_sym_Vertical_Group] = ACTIONS(262),
    [anon_sym_Horizontal_Group] = ACTIONS(262),
    [anon_sym_Widget_Pages] = ACTIONS(262),
    [anon_sym_Button] = ACTIONS(262),
    [anon_sym_Select_Button] = ACTIONS(262),
    [anon_sym_Angle_Box] = ACTIONS(262),
    [anon_sym_Attributes_Box] = ACTIONS(262),
    [anon_sym_Billboard_Box] = ACTIONS(262),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(262),
    [anon_sym_Bitmap_List_Box] = ACTIONS(262),
    [anon_sym_Chainage_Box] = ACTIONS(262),
    [anon_sym_Choice_Box] = ACTIONS(262),
    [anon_sym_Colour_Box] = ACTIONS(262),
    [anon_sym_Colour_Message_Box] = ACTIONS(262),
    [anon_sym_Date_Time_Box] = ACTIONS(262),
    [anon_sym_Directory_Box] = ACTIONS(262),
    [anon_sym_Draw_Box] = ACTIONS(262),
    [anon_sym_File_Box] = ACTIONS(262),
    [anon_sym_Function_Box] = ACTIONS(262),
    [anon_sym_Graph_Box] = ACTIONS(262),
    [anon_sym_GridCtrl_Box] = ACTIONS(262),
    [anon_sym_HyperLink_Box] = ACTIONS(262),
    [anon_sym_Input_Box] = ACTIONS(262),
    [anon_sym_Integer_Box] = ACTIONS(262),
    [anon_sym_Justify_Box] = ACTIONS(262),
    [anon_sym_Linestyle_Box] = ACTIONS(262),
    [anon_sym_List_Box] = ACTIONS(262),
    [anon_sym_ListCtrl_Box] = ACTIONS(262),
    [anon_sym_Map_File_Box] = ACTIONS(262),
    [anon_sym_Message_Box] = ACTIONS(262),
    [anon_sym_Model_Box] = ACTIONS(262),
    [anon_sym_Name_Box] = ACTIONS(262),
    [anon_sym_Named_Tick_Box] = ACTIONS(262),
    [anon_sym_New_Select_Box] = ACTIONS(262),
    [anon_sym_New_XYZ_Box] = ACTIONS(262),
    [anon_sym_Plotter_Box] = ACTIONS(262),
    [anon_sym_Polygon_Box] = ACTIONS(262),
    [anon_sym_Real_Box] = ACTIONS(262),
    [anon_sym_Report_Box] = ACTIONS(262),
    [anon_sym_Select_Box] = ACTIONS(262),
    [anon_sym_Select_Boxes] = ACTIONS(262),
    [anon_sym_Sheet_Size_Box] = ACTIONS(262),
    [anon_sym_Source_Box] = ACTIONS(262),
    [anon_sym_Symbol_Box] = ACTIONS(262),
    [anon_sym_Tab_Box] = ACTIONS(262),
    [anon_sym_Target_Box] = ACTIONS(262),
    [anon_sym_Template_Box] = ACTIONS(262),
    [anon_sym_Text_Edit_Box] = ACTIONS(262),
    [anon_sym_Text_Style_Box] = ACTIONS(262),
    [anon_sym_Texture_Box] = ACTIONS(262),
    [anon_sym_Tree_Box] = ACTIONS(262),
    [anon_sym_Tree_Page] = ACTIONS(262),
    [anon_sym_Tick_Box] = ACTIONS(262),
    [anon_sym_Tin_Box] = ACTIONS(262),
    [anon_sym_View_Box] = ACTIONS(262),
    [anon_sym_XYZ_Box] = ACTIONS(262),
    [anon_sym_File] = ACTIONS(262),
    [anon_sym_Map_File] = ACTIONS(262),
    [anon_sym_Plot_Parameter_File] = ACTIONS(262),
    [anon_sym_XML_Document] = ACTIONS(262),
    [anon_sym_XML_Node] = ACTIONS(262),
    [anon_sym_Connection] = ACTIONS(262),
    [anon_sym_Select_Query] = ACTIONS(262),
    [anon_sym_Insert_Query] = ACTIONS(262),
    [anon_sym_Update_Query] = ACTIONS(262),
    [anon_sym_Delete_Query] = ACTIONS(262),
    [anon_sym_Database_Results] = ACTIONS(262),
    [anon_sym_Transactions] = ACTIONS(262),
    [anon_sym_Parameter_Collection] = ACTIONS(262),
    [anon_sym_Query_Condition] = ACTIONS(262),
    [anon_sym_Manual_Condition] = ACTIONS(262),
    [anon_sym_Dynamic_Element] = ACTIONS(262),
    [anon_sym_Dynamic_Integer] = ACTIONS(262),
    [anon_sym_Dynamic_Real] = ACTIONS(262),
    [anon_sym_Dynamic_Text] = ACTIONS(262),
    [sym_comment] = ACTIONS(3),
  },
  [46] = {
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_while] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
    [anon_sym_break] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [anon_sym_for] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_return] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_number_literal] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_void] = ACTIONS(226),
    [anon_sym_Integer] = ACTIONS(226),
    [anon_sym_Real] = ACTIONS(226),
    [anon_sym_Text] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_Vector4] = ACTIONS(226),
    [anon_sym_Matrix3] = ACTIONS(226),
    [anon_sym_Matrix4] = ACTIONS(226),
    [anon_sym_Point] = ACTIONS(226),
    [anon_sym_Line] = ACTIONS(226),
    [anon_sym_Arc] = ACTIONS(226),
    [anon_sym_Spiral] = ACTIONS(226),
    [anon_sym_Parabola] = ACTIONS(226),
    [anon_sym_Segment] = ACTIONS(226),
    [anon_sym_Element] = ACTIONS(226),
    [anon_sym_Model] = ACTIONS(226),
    [anon_sym_View] = ACTIONS(226),
    [anon_sym_Macro_Function] = ACTIONS(226),
    [anon_sym_Function] = ACTIONS(226),
    [anon_sym_Uid] = ACTIONS(226),
    [anon_sym_Guid] = ACTIONS(226),
    [anon_sym_Attributes] = ACTIONS(226),
    [anon_sym_SDR_Attribute] = ACTIONS(226),
    [anon_sym_Blob] = ACTIONS(226),
    [anon_sym_Screen_Text] = ACTIONS(226),
    [anon_sym_Textstyle_Data] = ACTIONS(226),
    [anon_sym_Equality_Label] = ACTIONS(226),
    [anon_sym_Undo] = ACTIONS(226),
    [anon_sym_Undo_List] = ACTIONS(226),
    [anon_sym_Widget] = ACTIONS(226),
    [anon_sym_Menu] = ACTIONS(226),
    [anon_sym_Panel] = ACTIONS(226),
    [anon_sym_Overlay_Widget] = ACTIONS(226),
    [anon_sym_Vertical_Group] = ACTIONS(226),
    [anon_sym_Horizontal_Group] = ACTIONS(226),
    [anon_sym_Widget_Pages] = ACTIONS(226),
    [anon_sym_Button] = ACTIONS(226),
    [anon_sym_Select_Button] = ACTIONS(226),
    [anon_sym_Angle_Box] = ACTIONS(226),
    [anon_sym_Attributes_Box] = ACTIONS(226),
    [anon_sym_Billboard_Box] = ACTIONS(226),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(226),
    [anon_sym_Bitmap_List_Box] = ACTIONS(226),
    [anon_sym_Chainage_Box] = ACTIONS(226),
    [anon_sym_Choice_Box] = ACTIONS(226),
    [anon_sym_Colour_Box] = ACTIONS(226),
    [anon_sym_Colour_Message_Box] = ACTIONS(226),
    [anon_sym_Date_Time_Box] = ACTIONS(226),
    [anon_sym_Directory_Box] = ACTIONS(226),
    [anon_sym_Draw_Box] = ACTIONS(226),
    [anon_sym_File_Box] = ACTIONS(226),
    [anon_sym_Function_Box] = ACTIONS(226),
    [anon_sym_Graph_Box] = ACTIONS(226),
    [anon_sym_GridCtrl_Box] = ACTIONS(226),
    [anon_sym_HyperLink_Box] = ACTIONS(226),
    [anon_sym_Input_Box] = ACTIONS(226),
    [anon_sym_Integer_Box] = ACTIONS(226),
    [anon_sym_Justify_Box] = ACTIONS(226),
    [anon_sym_Linestyle_Box] = ACTIONS(226),
    [anon_sym_List_Box] = ACTIONS(226),
    [anon_sym_ListCtrl_Box] = ACTIONS(226),
    [anon_sym_Map_File_Box] = ACTIONS(226),
    [anon_sym_Message_Box] = ACTIONS(226),
    [anon_sym_Model_Box] = ACTIONS(226),
    [anon_sym_Name_Box] = ACTIONS(226),
    [anon_sym_Named_Tick_Box] = ACTIONS(226),
    [anon_sym_New_Select_Box] = ACTIONS(226),
    [anon_sym_New_XYZ_Box] = ACTIONS(226),
    [anon_sym_Plotter_Box] = ACTIONS(226),
    [anon_sym_Polygon_Box] = ACTIONS(226),
    [anon_sym_Real_Box] = ACTIONS(226),
    [anon_sym_Report_Box] = ACTIONS(226),
    [anon_sym_Select_Box] = ACTIONS(226),
    [anon_sym_Select_Boxes] = ACTIONS(226),
    [anon_sym_Sheet_Size_Box] = ACTIONS(226),
    [anon_sym_Source_Box] = ACTIONS(226),
    [anon_sym_Symbol_Box] = ACTIONS(226),
    [anon_sym_Tab_Box] = ACTIONS(226),
    [anon_sym_Target_Box] = ACTIONS(226),
    [anon_sym_Template_Box] = ACTIONS(226),
    [anon_sym_Text_Edit_Box] = ACTIONS(226),
    [anon_sym_Text_Style_Box] = ACTIONS(226),
    [anon_sym_Texture_Box] = ACTIONS(226),
    [anon_sym_Tree_Box] = ACTIONS(226),
    [anon_sym_Tree_Page] = ACTIONS(226),
    [anon_sym_Tick_Box] = ACTIONS(226),
    [anon_sym_Tin_Box] = ACTIONS(226),
    [anon_sym_View_Box] = ACTIONS(226),
    [anon_sym_XYZ_Box] = ACTIONS(226),
    [anon_sym_File] = ACTIONS(226),
    [anon_sym_Map_File] = ACTIONS(226),
    [anon_sym_Plot_Parameter_File] = ACTIONS(226),
    [anon_sym_XML_Document] = ACTIONS(226),
    [anon_sym_XML_Node] = ACTIONS(226),
    [anon_sym_Connection] = ACTIONS(226),
    [anon_sym_Select_Query] = ACTIONS(226),
    [anon_sym_Insert_Query] = ACTIONS(226),
    [anon_sym_Update_Query] = ACTIONS(226),
    [anon_sym_Delete_Query] = ACTIONS(226),
    [anon_sym_Database_Results] = ACTIONS(226),
    [anon_sym_Transactions] = ACTIONS(226),
    [anon_sym_Parameter_Collection] = ACTIONS(226),
    [anon_sym_Query_Condition] = ACTIONS(226),
    [anon_sym_Manual_Condition] = ACTIONS(226),
    [anon_sym_Dynamic_Element] = ACTIONS(226),
    [anon_sym_Dynamic_Integer] = ACTIONS(226),
    [anon_sym_Dynamic_Real] = ACTIONS(226),
    [anon_sym_Dynamic_Text] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [47] = {
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_RBRACE] = ACTIONS(264),
    [anon_sym_while] = ACTIONS(266),
    [anon_sym_LPAREN] = ACTIONS(264),
    [anon_sym_case] = ACTIONS(266),
    [anon_sym_default] = ACTIONS(266),
    [anon_sym_break] = ACTIONS(266),
    [anon_sym_SEMI] = ACTIONS(264),
    [anon_sym_switch] = ACTIONS(266),
    [anon_sym_if] = ACTIONS(266),
    [anon_sym_for] = ACTIONS(266),
    [anon_sym_BANG] = ACTIONS(264),
    [anon_sym_return] = ACTIONS(266),
    [sym_identifier] = ACTIONS(266),
    [sym_number_literal] = ACTIONS(264),
    [anon_sym_DQUOTE] = ACTIONS(264),
    [anon_sym_void] = ACTIONS(266),
    [anon_sym_Integer] = ACTIONS(266),
    [anon_sym_Real] = ACTIONS(266),
    [anon_sym_Text] = ACTIONS(266),
    [anon_sym_Vector2] = ACTIONS(266),
    [anon_sym_Vector3] = ACTIONS(266),
    [anon_sym_Vector4] = ACTIONS(266),
    [anon_sym_Matrix3] = ACTIONS(266),
    [anon_sym_Matrix4] = ACTIONS(266),
    [anon_sym_Point] = ACTIONS(266),
    [anon_sym_Line] = ACTIONS(266),
    [anon_sym_Arc] = ACTIONS(266),
    [anon_sym_Spiral] = ACTIONS(266),
    [anon_sym_Parabola] = ACTIONS(266),
    [anon_sym_Segment] = ACTIONS(266),
    [anon_sym_Element] = ACTIONS(266),
    [anon_sym_Model] = ACTIONS(266),
    [anon_sym_View] = ACTIONS(266),
    [anon_sym_Macro_Function] = ACTIONS(266),
    [anon_sym_Function] = ACTIONS(266),
    [anon_sym_Uid] = ACTIONS(266),
    [anon_sym_Guid] = ACTIONS(266),
    [anon_sym_Attributes] = ACTIONS(266),
    [anon_sym_SDR_Attribute] = ACTIONS(266),
    [anon_sym_Blob] = ACTIONS(266),
    [anon_sym_Screen_Text] = ACTIONS(266),
    [anon_sym_Textstyle_Data] = ACTIONS(266),
    [anon_sym_Equality_Label] = ACTIONS(266),
    [anon_sym_Undo] = ACTIONS(266),
    [anon_sym_Undo_List] = ACTIONS(266),
    [anon_sym_Widget] = ACTIONS(266),
    [anon_sym_Menu] = ACTIONS(266),
    [anon_sym_Panel] = ACTIONS(266),
    [anon_sym_Overlay_Widget] = ACTIONS(266),
    [anon_sym_Vertical_Group] = ACTIONS(266),
    [anon_sym_Horizontal_Group] = ACTIONS(266),
    [anon_sym_Widget_Pages] = ACTIONS(266),
    [anon_sym_Button] = ACTIONS(266),
    [anon_sym_Select_Button] = ACTIONS(266),
    [anon_sym_Angle_Box] = ACTIONS(266),
    [anon_sym_Attributes_Box] = ACTIONS(266),
    [anon_sym_Billboard_Box] = ACTIONS(266),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(266),
    [anon_sym_Bitmap_List_Box] = ACTIONS(266),
    [anon_sym_Chainage_Box] = ACTIONS(266),
    [anon_sym_Choice_Box] = ACTIONS(266),
    [anon_sym_Colour_Box] = ACTIONS(266),
    [anon_sym_Colour_Message_Box] = ACTIONS(266),
    [anon_sym_Date_Time_Box] = ACTIONS(266),
    [anon_sym_Directory_Box] = ACTIONS(266),
    [anon_sym_Draw_Box] = ACTIONS(266),
    [anon_sym_File_Box] = ACTIONS(266),
    [anon_sym_Function_Box] = ACTIONS(266),
    [anon_sym_Graph_Box] = ACTIONS(266),
    [anon_sym_GridCtrl_Box] = ACTIONS(266),
    [anon_sym_HyperLink_Box] = ACTIONS(266),
    [anon_sym_Input_Box] = ACTIONS(266),
    [anon_sym_Integer_Box] = ACTIONS(266),
    [anon_sym_Justify_Box] = ACTIONS(266),
    [anon_sym_Linestyle_Box] = ACTIONS(266),
    [anon_sym_List_Box] = ACTIONS(266),
    [anon_sym_ListCtrl_Box] = ACTIONS(266),
    [anon_sym_Map_File_Box] = ACTIONS(266),
    [anon_sym_Message_Box] = ACTIONS(266),
    [anon_sym_Model_Box] = ACTIONS(266),
    [anon_sym_Name_Box] = ACTIONS(266),
    [anon_sym_Named_Tick_Box] = ACTIONS(266),
    [anon_sym_New_Select_Box] = ACTIONS(266),
    [anon_sym_New_XYZ_Box] = ACTIONS(266),
    [anon_sym_Plotter_Box] = ACTIONS(266),
    [anon_sym_Polygon_Box] = ACTIONS(266),
    [anon_sym_Real_Box] = ACTIONS(266),
    [anon_sym_Report_Box] = ACTIONS(266),
    [anon_sym_Select_Box] = ACTIONS(266),
    [anon_sym_Select_Boxes] = ACTIONS(266),
    [anon_sym_Sheet_Size_Box] = ACTIONS(266),
    [anon_sym_Source_Box] = ACTIONS(266),
    [anon_sym_Symbol_Box] = ACTIONS(266),
    [anon_sym_Tab_Box] = ACTIONS(266),
    [anon_sym_Target_Box] = ACTIONS(266),
    [anon_sym_Template_Box] = ACTIONS(266),
    [anon_sym_Text_Edit_Box] = ACTIONS(266),
    [anon_sym_Text_Style_Box] = ACTIONS(266),
    [anon_sym_Texture_Box] = ACTIONS(266),
    [anon_sym_Tree_Box] = ACTIONS(266),
    [anon_sym_Tree_Page] = ACTIONS(266),
    [anon_sym_Tick_Box] = ACTIONS(266),
    [anon_sym_Tin_Box] = ACTIONS(266),
    [anon_sym_View_Box] = ACTIONS(266),
    [anon_sym_XYZ_Box] = ACTIONS(266),
    [anon_sym_File] = ACTIONS(266),
    [anon_sym_Map_File] = ACTIONS(266),
    [anon_sym_Plot_Parameter_File] = ACTIONS(266),
    [anon_sym_XML_Document] = ACTIONS(266),
    [anon_sym_XML_Node] = ACTIONS(266),
    [anon_sym_Connection] = ACTIONS(266),
    [anon_sym_Select_Query] = ACTIONS(266),
    [anon_sym_Insert_Query] = ACTIONS(266),
    [anon_sym_Update_Query] = ACTIONS(266),
    [anon_sym_Delete_Query] = ACTIONS(266),
    [anon_sym_Database_Results] = ACTIONS(266),
    [anon_sym_Transactions] = ACTIONS(266),
    [anon_sym_Parameter_Collection] = ACTIONS(266),
    [anon_sym_Query_Condition] = ACTIONS(266),
    [anon_sym_Manual_Condition] = ACTIONS(266),
    [anon_sym_Dynamic_Element] = ACTIONS(266),
    [anon_sym_Dynamic_Integer] = ACTIONS(266),
    [anon_sym_Dynamic_Real] = ACTIONS(266),
    [anon_sym_Dynamic_Text] = ACTIONS(266),
    [sym_comment] = ACTIONS(3),
  },
  [48] = {
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_while] = ACTIONS(254),
    [anon_sym_LPAREN] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(254),
    [anon_sym_default] = ACTIONS(254),
    [anon_sym_break] = ACTIONS(254),
    [anon_sym_SEMI] = ACTIONS(252),
    [anon_sym_switch] = ACTIONS(254),
    [anon_sym_if] = ACTIONS(254),
    [anon_sym_for] = ACTIONS(254),
    [anon_sym_BANG] = ACTIONS(252),
    [anon_sym_return] = ACTIONS(254),
    [sym_identifier] = ACTIONS(254),
    [sym_number_literal] = ACTIONS(252),
    [anon_sym_DQUOTE] = ACTIONS(252),
    [anon_sym_void] = ACTIONS(254),
    [anon_sym_Integer] = ACTIONS(254),
    [anon_sym_Real] = ACTIONS(254),
    [anon_sym_Text] = ACTIONS(254),
    [anon_sym_Vector2] = ACTIONS(254),
    [anon_sym_Vector3] = ACTIONS(254),
    [anon_sym_Vector4] = ACTIONS(254),
    [anon_sym_Matrix3] = ACTIONS(254),
    [anon_sym_Matrix4] = ACTIONS(254),
    [anon_sym_Point] = ACTIONS(254),
    [anon_sym_Line] = ACTIONS(254),
    [anon_sym_Arc] = ACTIONS(254),
    [anon_sym_Spiral] = ACTIONS(254),
    [anon_sym_Parabola] = ACTIONS(254),
    [anon_sym_Segment] = ACTIONS(254),
    [anon_sym_Element] = ACTIONS(254),
    [anon_sym_Model] = ACTIONS(254),
    [anon_sym_View] = ACTIONS(254),
    [anon_sym_Macro_Function] = ACTIONS(254),
    [anon_sym_Function] = ACTIONS(254),
    [anon_sym_Uid] = ACTIONS(254),
    [anon_sym_Guid] = ACTIONS(254),
    [anon_sym_Attributes] = ACTIONS(254),
    [anon_sym_SDR_Attribute] = ACTIONS(254),
    [anon_sym_Blob] = ACTIONS(254),
    [anon_sym_Screen_Text] = ACTIONS(254),
    [anon_sym_Textstyle_Data] = ACTIONS(254),
    [anon_sym_Equality_Label] = ACTIONS(254),
    [anon_sym_Undo] = ACTIONS(254),
    [anon_sym_Undo_List] = ACTIONS(254),
    [anon_sym_Widget] = ACTIONS(254),
    [anon_sym_Menu] = ACTIONS(254),
    [anon_sym_Panel] = ACTIONS(254),
    [anon_sym_Overlay_Widget] = ACTIONS(254),
    [anon_sym_Vertical_Group] = ACTIONS(254),
    [anon_sym_Horizontal_Group] = ACTIONS(254),
    [anon_sym_Widget_Pages] = ACTIONS(254),
    [anon_sym_Button] = ACTIONS(254),
    [anon_sym_Select_Button] = ACTIONS(254),
    [anon_sym_Angle_Box] = ACTIONS(254),
    [anon_sym_Attributes_Box] = ACTIONS(254),
    [anon_sym_Billboard_Box] = ACTIONS(254),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(254),
    [anon_sym_Bitmap_List_Box] = ACTIONS(254),
    [anon_sym_Chainage_Box] = ACTIONS(254),
    [anon_sym_Choice_Box] = ACTIONS(254),
    [anon_sym_Colour_Box] = ACTIONS(254),
    [anon_sym_Colour_Message_Box] = ACTIONS(254),
    [anon_sym_Date_Time_Box] = ACTIONS(254),
    [anon_sym_Directory_Box] = ACTIONS(254),
    [anon_sym_Draw_Box] = ACTIONS(254),
    [anon_sym_File_Box] = ACTIONS(254),
    [anon_sym_Function_Box] = ACTIONS(254),
    [anon_sym_Graph_Box] = ACTIONS(254),
    [anon_sym_GridCtrl_Box] = ACTIONS(254),
    [anon_sym_HyperLink_Box] = ACTIONS(254),
    [anon_sym_Input_Box] = ACTIONS(254),
    [anon_sym_Integer_Box] = ACTIONS(254),
    [anon_sym_Justify_Box] = ACTIONS(254),
    [anon_sym_Linestyle_Box] = ACTIONS(254),
    [anon_sym_List_Box] = ACTIONS(254),
    [anon_sym_ListCtrl_Box] = ACTIONS(254),
    [anon_sym_Map_File_Box] = ACTIONS(254),
    [anon_sym_Message_Box] = ACTIONS(254),
    [anon_sym_Model_Box] = ACTIONS(254),
    [anon_sym_Name_Box] = ACTIONS(254),
    [anon_sym_Named_Tick_Box] = ACTIONS(254),
    [anon_sym_New_Select_Box] = ACTIONS(254),
    [anon_sym_New_XYZ_Box] = ACTIONS(254),
    [anon_sym_Plotter_Box] = ACTIONS(254),
    [anon_sym_Polygon_Box] = ACTIONS(254),
    [anon_sym_Real_Box] = ACTIONS(254),
    [anon_sym_Report_Box] = ACTIONS(254),
    [anon_sym_Select_Box] = ACTIONS(254),
    [anon_sym_Select_Boxes] = ACTIONS(254),
    [anon_sym_Sheet_Size_Box] = ACTIONS(254),
    [anon_sym_Source_Box] = ACTIONS(254),
    [anon_sym_Symbol_Box] = ACTIONS(254),
    [anon_sym_Tab_Box] = ACTIONS(254),
    [anon_sym_Target_Box] = ACTIONS(254),
    [anon_sym_Template_Box] = ACTIONS(254),
    [anon_sym_Text_Edit_Box] = ACTIONS(254),
    [anon_sym_Text_Style_Box] = ACTIONS(254),
    [anon_sym_Texture_Box] = ACTIONS(254),
    [anon_sym_Tree_Box] = ACTIONS(254),
    [anon_sym_Tree_Page] = ACTIONS(254),
    [anon_sym_Tick_Box] = ACTIONS(254),
    [anon_sym_Tin_Box] = ACTIONS(254),
    [anon_sym_View_Box] = ACTIONS(254),
    [anon_sym_XYZ_Box] = ACTIONS(254),
    [anon_sym_File] = ACTIONS(254),
    [anon_sym_Map_File] = ACTIONS(254),
    [anon_sym_Plot_Parameter_File] = ACTIONS(254),
    [anon_sym_XML_Document] = ACTIONS(254),
    [anon_sym_XML_Node] = ACTIONS(254),
    [anon_sym_Connection] = ACTIONS(254),
    [anon_sym_Select_Query] = ACTIONS(254),
    [anon_sym_Insert_Query] = ACTIONS(254),
    [anon_sym_Update_Query] = ACTIONS(254),
    [anon_sym_Delete_Query] = ACTIONS(254),
    [anon_sym_Database_Results] = ACTIONS(254),
    [anon_sym_Transactions] = ACTIONS(254),
    [anon_sym_Parameter_Collection] = ACTIONS(254),
    [anon_sym_Query_Condition] = ACTIONS(254),
    [anon_sym_Manual_Condition] = ACTIONS(254),
    [anon_sym_Dynamic_Element] = ACTIONS(254),
    [anon_sym_Dynamic_Integer] = ACTIONS(254),
    [anon_sym_Dynamic_Real] = ACTIONS(254),
    [anon_sym_Dynamic_Text] = ACTIONS(254),
    [sym_comment] = ACTIONS(3),
  },
  [49] = {
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_while] = ACTIONS(258),
    [anon_sym_LPAREN] = ACTIONS(256),
    [anon_sym_case] = ACTIONS(258),
    [anon_sym_default] = ACTIONS(258),
    [anon_sym_break] = ACTIONS(258),
    [anon_sym_SEMI] = ACTIONS(256),
    [anon_sym_switch] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_for] = ACTIONS(258),
    [anon_sym_BANG] = ACTIONS(256),
    [anon_sym_return] = ACTIONS(258),
    [sym_identifier] = ACTIONS(258),
    [sym_number_literal] = ACTIONS(256),
    [anon_sym_DQUOTE] = ACTIONS(256),
    [anon_sym_void] = ACTIONS(258),
    [anon_sym_Integer] = ACTIONS(258),
    [anon_sym_Real] = ACTIONS(258),
    [anon_sym_Text] = ACTIONS(258),
    [anon_sym_Vector2] = ACTIONS(258),
    [anon_sym_Vector3] = ACTIONS(258),
    [anon_sym_Vector4] = ACTIONS(258),
    [anon_sym_Matrix3] = ACTIONS(258),
    [anon_sym_Matrix4] = ACTIONS(258),
    [anon_sym_Point] = ACTIONS(258),
    [anon_sym_Line] = ACTIONS(258),
    [anon_sym_Arc] = ACTIONS(258),
    [anon_sym_Spiral] = ACTIONS(258),
    [anon_sym_Parabola] = ACTIONS(258),
    [anon_sym_Segment] = ACTIONS(258),
    [anon_sym_Element] = ACTIONS(258),
    [anon_sym_Model] = ACTIONS(258),
    [anon_sym_View] = ACTIONS(258),
    [anon_sym_Macro_Function] = ACTIONS(258),
    [anon_sym_Function] = ACTIONS(258),
    [anon_sym_Uid] = ACTIONS(258),
    [anon_sym_Guid] = ACTIONS(258),
    [anon_sym_Attributes] = ACTIONS(258),
    [anon_sym_SDR_Attribute] = ACTIONS(258),
    [anon_sym_Blob] = ACTIONS(258),
    [anon_sym_Screen_Text] = ACTIONS(258),
    [anon_sym_Textstyle_Data] = ACTIONS(258),
    [anon_sym_Equality_Label] = ACTIONS(258),
    [anon_sym_Undo] = ACTIONS(258),
    [anon_sym_Undo_List] = ACTIONS(258),
    [anon_sym_Widget] = ACTIONS(258),
    [anon_sym_Menu] = ACTIONS(258),
    [anon_sym_Panel] = ACTIONS(258),
    [anon_sym_Overlay_Widget] = ACTIONS(258),
    [anon_sym_Vertical_Group] = ACTIONS(258),
    [anon_sym_Horizontal_Group] = ACTIONS(258),
    [anon_sym_Widget_Pages] = ACTIONS(258),
    [anon_sym_Button] = ACTIONS(258),
    [anon_sym_Select_Button] = ACTIONS(258),
    [anon_sym_Angle_Box] = ACTIONS(258),
    [anon_sym_Attributes_Box] = ACTIONS(258),
    [anon_sym_Billboard_Box] = ACTIONS(258),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(258),
    [anon_sym_Bitmap_List_Box] = ACTIONS(258),
    [anon_sym_Chainage_Box] = ACTIONS(258),
    [anon_sym_Choice_Box] = ACTIONS(258),
    [anon_sym_Colour_Box] = ACTIONS(258),
    [anon_sym_Colour_Message_Box] = ACTIONS(258),
    [anon_sym_Date_Time_Box] = ACTIONS(258),
    [anon_sym_Directory_Box] = ACTIONS(258),
    [anon_sym_Draw_Box] = ACTIONS(258),
    [anon_sym_File_Box] = ACTIONS(258),
    [anon_sym_Function_Box] = ACTIONS(258),
    [anon_sym_Graph_Box] = ACTIONS(258),
    [anon_sym_GridCtrl_Box] = ACTIONS(258),
    [anon_sym_HyperLink_Box] = ACTIONS(258),
    [anon_sym_Input_Box] = ACTIONS(258),
    [anon_sym_Integer_Box] = ACTIONS(258),
    [anon_sym_Justify_Box] = ACTIONS(258),
    [anon_sym_Linestyle_Box] = ACTIONS(258),
    [anon_sym_List_Box] = ACTIONS(258),
    [anon_sym_ListCtrl_Box] = ACTIONS(258),
    [anon_sym_Map_File_Box] = ACTIONS(258),
    [anon_sym_Message_Box] = ACTIONS(258),
    [anon_sym_Model_Box] = ACTIONS(258),
    [anon_sym_Name_Box] = ACTIONS(258),
    [anon_sym_Named_Tick_Box] = ACTIONS(258),
    [anon_sym_New_Select_Box] = ACTIONS(258),
    [anon_sym_New_XYZ_Box] = ACTIONS(258),
    [anon_sym_Plotter_Box] = ACTIONS(258),
    [anon_sym_Polygon_Box] = ACTIONS(258),
    [anon_sym_Real_Box] = ACTIONS(258),
    [anon_sym_Report_Box] = ACTIONS(258),
    [anon_sym_Select_Box] = ACTIONS(258),
    [anon_sym_Select_Boxes] = ACTIONS(258),
    [anon_sym_Sheet_Size_Box] = ACTIONS(258),
    [anon_sym_Source_Box] = ACTIONS(258),
    [anon_sym_Symbol_Box] = ACTIONS(258),
    [anon_sym_Tab_Box] = ACTIONS(258),
    [anon_sym_Target_Box] = ACTIONS(258),
    [anon_sym_Template_Box] = ACTIONS(258),
    [anon_sym_Text_Edit_Box] = ACTIONS(258),
    [anon_sym_Text_Style_Box] = ACTIONS(258),
    [anon_sym_Texture_Box] = ACTIONS(258),
    [anon_sym_Tree_Box] = ACTIONS(258),
    [anon_sym_Tree_Page] = ACTIONS(258),
    [anon_sym_Tick_Box] = ACTIONS(258),
    [anon_sym_Tin_Box] = ACTIONS(258),
    [anon_sym_View_Box] = ACTIONS(258),
    [anon_sym_XYZ_Box] = ACTIONS(258),
    [anon_sym_File] = ACTIONS(258),
    [anon_sym_Map_File] = ACTIONS(258),
    [anon_sym_Plot_Parameter_File] = ACTIONS(258),
    [anon_sym_XML_Document] = ACTIONS(258),
    [anon_sym_XML_Node] = ACTIONS(258),
    [anon_sym_Connection] = ACTIONS(258),
    [anon_sym_Select_Query] = ACTIONS(258),
    [anon_sym_Insert_Query] = ACTIONS(258),
    [anon_sym_Update_Query] = ACTIONS(258),
    [anon_sym_Delete_Query] = ACTIONS(258),
    [anon_sym_Database_Results] = ACTIONS(258),
    [anon_sym_Transactions] = ACTIONS(258),
    [anon_sym_Parameter_Collection] = ACTIONS(258),
    [anon_sym_Query_Condition] = ACTIONS(258),
    [anon_sym_Manual_Condition] = ACTIONS(258),
    [anon_sym_Dynamic_Element] = ACTIONS(258),
    [anon_sym_Dynamic_Integer] = ACTIONS(258),
    [anon_sym_Dynamic_Real] = ACTIONS(258),
    [anon_sym_Dynamic_Text] = ACTIONS(258),
    [sym_comment] = ACTIONS(3),
  },
  [50] = {
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_while] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_break] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_switch] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_for] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_return] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_number_literal] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_void] = ACTIONS(230),
    [anon_sym_Integer] = ACTIONS(230),
    [anon_sym_Real] = ACTIONS(230),
    [anon_sym_Text] = ACTIONS(230),
    [anon_sym_Vector2] = ACTIONS(230),
    [anon_sym_Vector3] = ACTIONS(230),
    [anon_sym_Vector4] = ACTIONS(230),
    [anon_sym_Matrix3] = ACTIONS(230),
    [anon_sym_Matrix4] = ACTIONS(230),
    [anon_sym_Point] = ACTIONS(230),
    [anon_sym_Line] = ACTIONS(230),
    [anon_sym_Arc] = ACTIONS(230),
    [anon_sym_Spiral] = ACTIONS(230),
    [anon_sym_Parabola] = ACTIONS(230),
    [anon_sym_Segment] = ACTIONS(230),
    [anon_sym_Element] = ACTIONS(230),
    [anon_sym_Model] = ACTIONS(230),
    [anon_sym_View] = ACTIONS(230),
    [anon_sym_Macro_Function] = ACTIONS(230),
    [anon_sym_Function] = ACTIONS(230),
    [anon_sym_Uid] = ACTIONS(230),
    [anon_sym_Guid] = ACTIONS(230),
    [anon_sym_Attributes] = ACTIONS(230),
    [anon_sym_SDR_Attribute] = ACTIONS(230),
    [anon_sym_Blob] = ACTIONS(230),
    [anon_sym_Screen_Text] = ACTIONS(230),
    [anon_sym_Textstyle_Data] = ACTIONS(230),
    [anon_sym_Equality_Label] = ACTIONS(230),
    [anon_sym_Undo] = ACTIONS(230),
    [anon_sym_Undo_List] = ACTIONS(230),
    [anon_sym_Widget] = ACTIONS(230),
    [anon_sym_Menu] = ACTIONS(230),
    [anon_sym_Panel] = ACTIONS(230),
    [anon_sym_Overlay_Widget] = ACTIONS(230),
    [anon_sym_Vertical_Group] = ACTIONS(230),
    [anon_sym_Horizontal_Group] = ACTIONS(230),
    [anon_sym_Widget_Pages] = ACTIONS(230),
    [anon_sym_Button] = ACTIONS(230),
    [anon_sym_Select_Button] = ACTIONS(230),
    [anon_sym_Angle_Box] = ACTIONS(230),
    [anon_sym_Attributes_Box] = ACTIONS(230),
    [anon_sym_Billboard_Box] = ACTIONS(230),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(230),
    [anon_sym_Bitmap_List_Box] = ACTIONS(230),
    [anon_sym_Chainage_Box] = ACTIONS(230),
    [anon_sym_Choice_Box] = ACTIONS(230),
    [anon_sym_Colour_Box] = ACTIONS(230),
    [anon_sym_Colour_Message_Box] = ACTIONS(230),
    [anon_sym_Date_Time_Box] = ACTIONS(230),
    [anon_sym_Directory_Box] = ACTIONS(230),
    [anon_sym_Draw_Box] = ACTIONS(230),
    [anon_sym_File_Box] = ACTIONS(230),
    [anon_sym_Function_Box] = ACTIONS(230),
    [anon_sym_Graph_Box] = ACTIONS(230),
    [anon_sym_GridCtrl_Box] = ACTIONS(230),
    [anon_sym_HyperLink_Box] = ACTIONS(230),
    [anon_sym_Input_Box] = ACTIONS(230),
    [anon_sym_Integer_Box] = ACTIONS(230),
    [anon_sym_Justify_Box] = ACTIONS(230),
    [anon_sym_Linestyle_Box] = ACTIONS(230),
    [anon_sym_List_Box] = ACTIONS(230),
    [anon_sym_ListCtrl_Box] = ACTIONS(230),
    [anon_sym_Map_File_Box] = ACTIONS(230),
    [anon_sym_Message_Box] = ACTIONS(230),
    [anon_sym_Model_Box] = ACTIONS(230),
    [anon_sym_Name_Box] = ACTIONS(230),
    [anon_sym_Named_Tick_Box] = ACTIONS(230),
    [anon_sym_New_Select_Box] = ACTIONS(230),
    [anon_sym_New_XYZ_Box] = ACTIONS(230),
    [anon_sym_Plotter_Box] = ACTIONS(230),
    [anon_sym_Polygon_Box] = ACTIONS(230),
    [anon_sym_Real_Box] = ACTIONS(230),
    [anon_sym_Report_Box] = ACTIONS(230),
    [anon_sym_Select_Box] = ACTIONS(230),
    [anon_sym_Select_Boxes] = ACTIONS(230),
    [anon_sym_Sheet_Size_Box] = ACTIONS(230),
    [anon_sym_Source_Box] = ACTIONS(230),
    [anon_sym_Symbol_Box] = ACTIONS(230),
    [anon_sym_Tab_Box] = ACTIONS(230),
    [anon_sym_Target_Box] = ACTIONS(230),
    [anon_sym_Template_Box] = ACTIONS(230),
    [anon_sym_Text_Edit_Box] = ACTIONS(230),
    [anon_sym_Text_Style_Box] = ACTIONS(230),
    [anon_sym_Texture_Box] = ACTIONS(230),
    [anon_sym_Tree_Box] = ACTIONS(230),
    [anon_sym_Tree_Page] = ACTIONS(230),
    [anon_sym_Tick_Box] = ACTIONS(230),
    [anon_sym_Tin_Box] = ACTIONS(230),
    [anon_sym_View_Box] = ACTIONS(230),
    [anon_sym_XYZ_Box] = ACTIONS(230),
    [anon_sym_File] = ACTIONS(230),
    [anon_sym_Map_File] = ACTIONS(230),
    [anon_sym_Plot_Parameter_File] = ACTIONS(230),
    [anon_sym_XML_Document] = ACTIONS(230),
    [anon_sym_XML_Node] = ACTIONS(230),
    [anon_sym_Connection] = ACTIONS(230),
    [anon_sym_Select_Query] = ACTIONS(230),
    [anon_sym_Insert_Query] = ACTIONS(230),
    [anon_sym_Update_Query] = ACTIONS(230),
    [anon_sym_Delete_Query] = ACTIONS(230),
    [anon_sym_Database_Results] = ACTIONS(230),
    [anon_sym_Transactions] = ACTIONS(230),
    [anon_sym_Parameter_Collection] = ACTIONS(230),
    [anon_sym_Query_Condition] = ACTIONS(230),
    [anon_sym_Manual_Condition] = ACTIONS(230),
    [anon_sym_Dynamic_Element] = ACTIONS(230),
    [anon_sym_Dynamic_Integer] = ACTIONS(230),
    [anon_sym_Dynamic_Real] = ACTIONS(230),
    [anon_sym_Dynamic_Text] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [51] = {
    [anon_sym_LBRACE] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_while] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(272),
    [anon_sym_case] = ACTIONS(274),
    [anon_sym_default] = ACTIONS(274),
    [anon_sym_break] = ACTIONS(274),
    [anon_sym_SEMI] = ACTIONS(272),
    [anon_sym_switch] = ACTIONS(274),
    [anon_sym_if] = ACTIONS(274),
    [anon_sym_for] = ACTIONS(274),
    [anon_sym_BANG] = ACTIONS(272),
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
  [52] = {
    [anon_sym_LBRACE] = ACTIONS(220),
    [anon_sym_RBRACE] = ACTIONS(220),
    [anon_sym_while] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(220),
    [anon_sym_case] = ACTIONS(222),
    [anon_sym_default] = ACTIONS(222),
    [anon_sym_break] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(220),
    [anon_sym_switch] = ACTIONS(222),
    [anon_sym_if] = ACTIONS(222),
    [anon_sym_for] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(220),
    [anon_sym_return] = ACTIONS(222),
    [sym_identifier] = ACTIONS(222),
    [sym_number_literal] = ACTIONS(220),
    [anon_sym_DQUOTE] = ACTIONS(220),
    [anon_sym_void] = ACTIONS(222),
    [anon_sym_Integer] = ACTIONS(222),
    [anon_sym_Real] = ACTIONS(222),
    [anon_sym_Text] = ACTIONS(222),
    [anon_sym_Vector2] = ACTIONS(222),
    [anon_sym_Vector3] = ACTIONS(222),
    [anon_sym_Vector4] = ACTIONS(222),
    [anon_sym_Matrix3] = ACTIONS(222),
    [anon_sym_Matrix4] = ACTIONS(222),
    [anon_sym_Point] = ACTIONS(222),
    [anon_sym_Line] = ACTIONS(222),
    [anon_sym_Arc] = ACTIONS(222),
    [anon_sym_Spiral] = ACTIONS(222),
    [anon_sym_Parabola] = ACTIONS(222),
    [anon_sym_Segment] = ACTIONS(222),
    [anon_sym_Element] = ACTIONS(222),
    [anon_sym_Model] = ACTIONS(222),
    [anon_sym_View] = ACTIONS(222),
    [anon_sym_Macro_Function] = ACTIONS(222),
    [anon_sym_Function] = ACTIONS(222),
    [anon_sym_Uid] = ACTIONS(222),
    [anon_sym_Guid] = ACTIONS(222),
    [anon_sym_Attributes] = ACTIONS(222),
    [anon_sym_SDR_Attribute] = ACTIONS(222),
    [anon_sym_Blob] = ACTIONS(222),
    [anon_sym_Screen_Text] = ACTIONS(222),
    [anon_sym_Textstyle_Data] = ACTIONS(222),
    [anon_sym_Equality_Label] = ACTIONS(222),
    [anon_sym_Undo] = ACTIONS(222),
    [anon_sym_Undo_List] = ACTIONS(222),
    [anon_sym_Widget] = ACTIONS(222),
    [anon_sym_Menu] = ACTIONS(222),
    [anon_sym_Panel] = ACTIONS(222),
    [anon_sym_Overlay_Widget] = ACTIONS(222),
    [anon_sym_Vertical_Group] = ACTIONS(222),
    [anon_sym_Horizontal_Group] = ACTIONS(222),
    [anon_sym_Widget_Pages] = ACTIONS(222),
    [anon_sym_Button] = ACTIONS(222),
    [anon_sym_Select_Button] = ACTIONS(222),
    [anon_sym_Angle_Box] = ACTIONS(222),
    [anon_sym_Attributes_Box] = ACTIONS(222),
    [anon_sym_Billboard_Box] = ACTIONS(222),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(222),
    [anon_sym_Bitmap_List_Box] = ACTIONS(222),
    [anon_sym_Chainage_Box] = ACTIONS(222),
    [anon_sym_Choice_Box] = ACTIONS(222),
    [anon_sym_Colour_Box] = ACTIONS(222),
    [anon_sym_Colour_Message_Box] = ACTIONS(222),
    [anon_sym_Date_Time_Box] = ACTIONS(222),
    [anon_sym_Directory_Box] = ACTIONS(222),
    [anon_sym_Draw_Box] = ACTIONS(222),
    [anon_sym_File_Box] = ACTIONS(222),
    [anon_sym_Function_Box] = ACTIONS(222),
    [anon_sym_Graph_Box] = ACTIONS(222),
    [anon_sym_GridCtrl_Box] = ACTIONS(222),
    [anon_sym_HyperLink_Box] = ACTIONS(222),
    [anon_sym_Input_Box] = ACTIONS(222),
    [anon_sym_Integer_Box] = ACTIONS(222),
    [anon_sym_Justify_Box] = ACTIONS(222),
    [anon_sym_Linestyle_Box] = ACTIONS(222),
    [anon_sym_List_Box] = ACTIONS(222),
    [anon_sym_ListCtrl_Box] = ACTIONS(222),
    [anon_sym_Map_File_Box] = ACTIONS(222),
    [anon_sym_Message_Box] = ACTIONS(222),
    [anon_sym_Model_Box] = ACTIONS(222),
    [anon_sym_Name_Box] = ACTIONS(222),
    [anon_sym_Named_Tick_Box] = ACTIONS(222),
    [anon_sym_New_Select_Box] = ACTIONS(222),
    [anon_sym_New_XYZ_Box] = ACTIONS(222),
    [anon_sym_Plotter_Box] = ACTIONS(222),
    [anon_sym_Polygon_Box] = ACTIONS(222),
    [anon_sym_Real_Box] = ACTIONS(222),
    [anon_sym_Report_Box] = ACTIONS(222),
    [anon_sym_Select_Box] = ACTIONS(222),
    [anon_sym_Select_Boxes] = ACTIONS(222),
    [anon_sym_Sheet_Size_Box] = ACTIONS(222),
    [anon_sym_Source_Box] = ACTIONS(222),
    [anon_sym_Symbol_Box] = ACTIONS(222),
    [anon_sym_Tab_Box] = ACTIONS(222),
    [anon_sym_Target_Box] = ACTIONS(222),
    [anon_sym_Template_Box] = ACTIONS(222),
    [anon_sym_Text_Edit_Box] = ACTIONS(222),
    [anon_sym_Text_Style_Box] = ACTIONS(222),
    [anon_sym_Texture_Box] = ACTIONS(222),
    [anon_sym_Tree_Box] = ACTIONS(222),
    [anon_sym_Tree_Page] = ACTIONS(222),
    [anon_sym_Tick_Box] = ACTIONS(222),
    [anon_sym_Tin_Box] = ACTIONS(222),
    [anon_sym_View_Box] = ACTIONS(222),
    [anon_sym_XYZ_Box] = ACTIONS(222),
    [anon_sym_File] = ACTIONS(222),
    [anon_sym_Map_File] = ACTIONS(222),
    [anon_sym_Plot_Parameter_File] = ACTIONS(222),
    [anon_sym_XML_Document] = ACTIONS(222),
    [anon_sym_XML_Node] = ACTIONS(222),
    [anon_sym_Connection] = ACTIONS(222),
    [anon_sym_Select_Query] = ACTIONS(222),
    [anon_sym_Insert_Query] = ACTIONS(222),
    [anon_sym_Update_Query] = ACTIONS(222),
    [anon_sym_Delete_Query] = ACTIONS(222),
    [anon_sym_Database_Results] = ACTIONS(222),
    [anon_sym_Transactions] = ACTIONS(222),
    [anon_sym_Parameter_Collection] = ACTIONS(222),
    [anon_sym_Query_Condition] = ACTIONS(222),
    [anon_sym_Manual_Condition] = ACTIONS(222),
    [anon_sym_Dynamic_Element] = ACTIONS(222),
    [anon_sym_Dynamic_Integer] = ACTIONS(222),
    [anon_sym_Dynamic_Real] = ACTIONS(222),
    [anon_sym_Dynamic_Text] = ACTIONS(222),
    [sym_comment] = ACTIONS(3),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(232),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_while] = ACTIONS(234),
    [anon_sym_LPAREN] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(234),
    [anon_sym_default] = ACTIONS(234),
    [anon_sym_break] = ACTIONS(234),
    [anon_sym_SEMI] = ACTIONS(232),
    [anon_sym_switch] = ACTIONS(234),
    [anon_sym_if] = ACTIONS(234),
    [anon_sym_for] = ACTIONS(234),
    [anon_sym_BANG] = ACTIONS(232),
    [anon_sym_return] = ACTIONS(234),
    [sym_identifier] = ACTIONS(234),
    [sym_number_literal] = ACTIONS(232),
    [anon_sym_DQUOTE] = ACTIONS(232),
    [anon_sym_void] = ACTIONS(234),
    [anon_sym_Integer] = ACTIONS(234),
    [anon_sym_Real] = ACTIONS(234),
    [anon_sym_Text] = ACTIONS(234),
    [anon_sym_Vector2] = ACTIONS(234),
    [anon_sym_Vector3] = ACTIONS(234),
    [anon_sym_Vector4] = ACTIONS(234),
    [anon_sym_Matrix3] = ACTIONS(234),
    [anon_sym_Matrix4] = ACTIONS(234),
    [anon_sym_Point] = ACTIONS(234),
    [anon_sym_Line] = ACTIONS(234),
    [anon_sym_Arc] = ACTIONS(234),
    [anon_sym_Spiral] = ACTIONS(234),
    [anon_sym_Parabola] = ACTIONS(234),
    [anon_sym_Segment] = ACTIONS(234),
    [anon_sym_Element] = ACTIONS(234),
    [anon_sym_Model] = ACTIONS(234),
    [anon_sym_View] = ACTIONS(234),
    [anon_sym_Macro_Function] = ACTIONS(234),
    [anon_sym_Function] = ACTIONS(234),
    [anon_sym_Uid] = ACTIONS(234),
    [anon_sym_Guid] = ACTIONS(234),
    [anon_sym_Attributes] = ACTIONS(234),
    [anon_sym_SDR_Attribute] = ACTIONS(234),
    [anon_sym_Blob] = ACTIONS(234),
    [anon_sym_Screen_Text] = ACTIONS(234),
    [anon_sym_Textstyle_Data] = ACTIONS(234),
    [anon_sym_Equality_Label] = ACTIONS(234),
    [anon_sym_Undo] = ACTIONS(234),
    [anon_sym_Undo_List] = ACTIONS(234),
    [anon_sym_Widget] = ACTIONS(234),
    [anon_sym_Menu] = ACTIONS(234),
    [anon_sym_Panel] = ACTIONS(234),
    [anon_sym_Overlay_Widget] = ACTIONS(234),
    [anon_sym_Vertical_Group] = ACTIONS(234),
    [anon_sym_Horizontal_Group] = ACTIONS(234),
    [anon_sym_Widget_Pages] = ACTIONS(234),
    [anon_sym_Button] = ACTIONS(234),
    [anon_sym_Select_Button] = ACTIONS(234),
    [anon_sym_Angle_Box] = ACTIONS(234),
    [anon_sym_Attributes_Box] = ACTIONS(234),
    [anon_sym_Billboard_Box] = ACTIONS(234),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(234),
    [anon_sym_Bitmap_List_Box] = ACTIONS(234),
    [anon_sym_Chainage_Box] = ACTIONS(234),
    [anon_sym_Choice_Box] = ACTIONS(234),
    [anon_sym_Colour_Box] = ACTIONS(234),
    [anon_sym_Colour_Message_Box] = ACTIONS(234),
    [anon_sym_Date_Time_Box] = ACTIONS(234),
    [anon_sym_Directory_Box] = ACTIONS(234),
    [anon_sym_Draw_Box] = ACTIONS(234),
    [anon_sym_File_Box] = ACTIONS(234),
    [anon_sym_Function_Box] = ACTIONS(234),
    [anon_sym_Graph_Box] = ACTIONS(234),
    [anon_sym_GridCtrl_Box] = ACTIONS(234),
    [anon_sym_HyperLink_Box] = ACTIONS(234),
    [anon_sym_Input_Box] = ACTIONS(234),
    [anon_sym_Integer_Box] = ACTIONS(234),
    [anon_sym_Justify_Box] = ACTIONS(234),
    [anon_sym_Linestyle_Box] = ACTIONS(234),
    [anon_sym_List_Box] = ACTIONS(234),
    [anon_sym_ListCtrl_Box] = ACTIONS(234),
    [anon_sym_Map_File_Box] = ACTIONS(234),
    [anon_sym_Message_Box] = ACTIONS(234),
    [anon_sym_Model_Box] = ACTIONS(234),
    [anon_sym_Name_Box] = ACTIONS(234),
    [anon_sym_Named_Tick_Box] = ACTIONS(234),
    [anon_sym_New_Select_Box] = ACTIONS(234),
    [anon_sym_New_XYZ_Box] = ACTIONS(234),
    [anon_sym_Plotter_Box] = ACTIONS(234),
    [anon_sym_Polygon_Box] = ACTIONS(234),
    [anon_sym_Real_Box] = ACTIONS(234),
    [anon_sym_Report_Box] = ACTIONS(234),
    [anon_sym_Select_Box] = ACTIONS(234),
    [anon_sym_Select_Boxes] = ACTIONS(234),
    [anon_sym_Sheet_Size_Box] = ACTIONS(234),
    [anon_sym_Source_Box] = ACTIONS(234),
    [anon_sym_Symbol_Box] = ACTIONS(234),
    [anon_sym_Tab_Box] = ACTIONS(234),
    [anon_sym_Target_Box] = ACTIONS(234),
    [anon_sym_Template_Box] = ACTIONS(234),
    [anon_sym_Text_Edit_Box] = ACTIONS(234),
    [anon_sym_Text_Style_Box] = ACTIONS(234),
    [anon_sym_Texture_Box] = ACTIONS(234),
    [anon_sym_Tree_Box] = ACTIONS(234),
    [anon_sym_Tree_Page] = ACTIONS(234),
    [anon_sym_Tick_Box] = ACTIONS(234),
    [anon_sym_Tin_Box] = ACTIONS(234),
    [anon_sym_View_Box] = ACTIONS(234),
    [anon_sym_XYZ_Box] = ACTIONS(234),
    [anon_sym_File] = ACTIONS(234),
    [anon_sym_Map_File] = ACTIONS(234),
    [anon_sym_Plot_Parameter_File] = ACTIONS(234),
    [anon_sym_XML_Document] = ACTIONS(234),
    [anon_sym_XML_Node] = ACTIONS(234),
    [anon_sym_Connection] = ACTIONS(234),
    [anon_sym_Select_Query] = ACTIONS(234),
    [anon_sym_Insert_Query] = ACTIONS(234),
    [anon_sym_Update_Query] = ACTIONS(234),
    [anon_sym_Delete_Query] = ACTIONS(234),
    [anon_sym_Database_Results] = ACTIONS(234),
    [anon_sym_Transactions] = ACTIONS(234),
    [anon_sym_Parameter_Collection] = ACTIONS(234),
    [anon_sym_Query_Condition] = ACTIONS(234),
    [anon_sym_Manual_Condition] = ACTIONS(234),
    [anon_sym_Dynamic_Element] = ACTIONS(234),
    [anon_sym_Dynamic_Integer] = ACTIONS(234),
    [anon_sym_Dynamic_Real] = ACTIONS(234),
    [anon_sym_Dynamic_Text] = ACTIONS(234),
    [sym_comment] = ACTIONS(3),
  },
  [54] = {
    [anon_sym_LBRACE] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_while] = ACTIONS(244),
    [anon_sym_LPAREN] = ACTIONS(242),
    [anon_sym_case] = ACTIONS(244),
    [anon_sym_default] = ACTIONS(244),
    [anon_sym_break] = ACTIONS(244),
    [anon_sym_SEMI] = ACTIONS(242),
    [anon_sym_switch] = ACTIONS(244),
    [anon_sym_if] = ACTIONS(244),
    [anon_sym_for] = ACTIONS(244),
    [anon_sym_BANG] = ACTIONS(242),
    [anon_sym_return] = ACTIONS(244),
    [sym_identifier] = ACTIONS(244),
    [sym_number_literal] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [anon_sym_void] = ACTIONS(244),
    [anon_sym_Integer] = ACTIONS(244),
    [anon_sym_Real] = ACTIONS(244),
    [anon_sym_Text] = ACTIONS(244),
    [anon_sym_Vector2] = ACTIONS(244),
    [anon_sym_Vector3] = ACTIONS(244),
    [anon_sym_Vector4] = ACTIONS(244),
    [anon_sym_Matrix3] = ACTIONS(244),
    [anon_sym_Matrix4] = ACTIONS(244),
    [anon_sym_Point] = ACTIONS(244),
    [anon_sym_Line] = ACTIONS(244),
    [anon_sym_Arc] = ACTIONS(244),
    [anon_sym_Spiral] = ACTIONS(244),
    [anon_sym_Parabola] = ACTIONS(244),
    [anon_sym_Segment] = ACTIONS(244),
    [anon_sym_Element] = ACTIONS(244),
    [anon_sym_Model] = ACTIONS(244),
    [anon_sym_View] = ACTIONS(244),
    [anon_sym_Macro_Function] = ACTIONS(244),
    [anon_sym_Function] = ACTIONS(244),
    [anon_sym_Uid] = ACTIONS(244),
    [anon_sym_Guid] = ACTIONS(244),
    [anon_sym_Attributes] = ACTIONS(244),
    [anon_sym_SDR_Attribute] = ACTIONS(244),
    [anon_sym_Blob] = ACTIONS(244),
    [anon_sym_Screen_Text] = ACTIONS(244),
    [anon_sym_Textstyle_Data] = ACTIONS(244),
    [anon_sym_Equality_Label] = ACTIONS(244),
    [anon_sym_Undo] = ACTIONS(244),
    [anon_sym_Undo_List] = ACTIONS(244),
    [anon_sym_Widget] = ACTIONS(244),
    [anon_sym_Menu] = ACTIONS(244),
    [anon_sym_Panel] = ACTIONS(244),
    [anon_sym_Overlay_Widget] = ACTIONS(244),
    [anon_sym_Vertical_Group] = ACTIONS(244),
    [anon_sym_Horizontal_Group] = ACTIONS(244),
    [anon_sym_Widget_Pages] = ACTIONS(244),
    [anon_sym_Button] = ACTIONS(244),
    [anon_sym_Select_Button] = ACTIONS(244),
    [anon_sym_Angle_Box] = ACTIONS(244),
    [anon_sym_Attributes_Box] = ACTIONS(244),
    [anon_sym_Billboard_Box] = ACTIONS(244),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(244),
    [anon_sym_Bitmap_List_Box] = ACTIONS(244),
    [anon_sym_Chainage_Box] = ACTIONS(244),
    [anon_sym_Choice_Box] = ACTIONS(244),
    [anon_sym_Colour_Box] = ACTIONS(244),
    [anon_sym_Colour_Message_Box] = ACTIONS(244),
    [anon_sym_Date_Time_Box] = ACTIONS(244),
    [anon_sym_Directory_Box] = ACTIONS(244),
    [anon_sym_Draw_Box] = ACTIONS(244),
    [anon_sym_File_Box] = ACTIONS(244),
    [anon_sym_Function_Box] = ACTIONS(244),
    [anon_sym_Graph_Box] = ACTIONS(244),
    [anon_sym_GridCtrl_Box] = ACTIONS(244),
    [anon_sym_HyperLink_Box] = ACTIONS(244),
    [anon_sym_Input_Box] = ACTIONS(244),
    [anon_sym_Integer_Box] = ACTIONS(244),
    [anon_sym_Justify_Box] = ACTIONS(244),
    [anon_sym_Linestyle_Box] = ACTIONS(244),
    [anon_sym_List_Box] = ACTIONS(244),
    [anon_sym_ListCtrl_Box] = ACTIONS(244),
    [anon_sym_Map_File_Box] = ACTIONS(244),
    [anon_sym_Message_Box] = ACTIONS(244),
    [anon_sym_Model_Box] = ACTIONS(244),
    [anon_sym_Name_Box] = ACTIONS(244),
    [anon_sym_Named_Tick_Box] = ACTIONS(244),
    [anon_sym_New_Select_Box] = ACTIONS(244),
    [anon_sym_New_XYZ_Box] = ACTIONS(244),
    [anon_sym_Plotter_Box] = ACTIONS(244),
    [anon_sym_Polygon_Box] = ACTIONS(244),
    [anon_sym_Real_Box] = ACTIONS(244),
    [anon_sym_Report_Box] = ACTIONS(244),
    [anon_sym_Select_Box] = ACTIONS(244),
    [anon_sym_Select_Boxes] = ACTIONS(244),
    [anon_sym_Sheet_Size_Box] = ACTIONS(244),
    [anon_sym_Source_Box] = ACTIONS(244),
    [anon_sym_Symbol_Box] = ACTIONS(244),
    [anon_sym_Tab_Box] = ACTIONS(244),
    [anon_sym_Target_Box] = ACTIONS(244),
    [anon_sym_Template_Box] = ACTIONS(244),
    [anon_sym_Text_Edit_Box] = ACTIONS(244),
    [anon_sym_Text_Style_Box] = ACTIONS(244),
    [anon_sym_Texture_Box] = ACTIONS(244),
    [anon_sym_Tree_Box] = ACTIONS(244),
    [anon_sym_Tree_Page] = ACTIONS(244),
    [anon_sym_Tick_Box] = ACTIONS(244),
    [anon_sym_Tin_Box] = ACTIONS(244),
    [anon_sym_View_Box] = ACTIONS(244),
    [anon_sym_XYZ_Box] = ACTIONS(244),
    [anon_sym_File] = ACTIONS(244),
    [anon_sym_Map_File] = ACTIONS(244),
    [anon_sym_Plot_Parameter_File] = ACTIONS(244),
    [anon_sym_XML_Document] = ACTIONS(244),
    [anon_sym_XML_Node] = ACTIONS(244),
    [anon_sym_Connection] = ACTIONS(244),
    [anon_sym_Select_Query] = ACTIONS(244),
    [anon_sym_Insert_Query] = ACTIONS(244),
    [anon_sym_Update_Query] = ACTIONS(244),
    [anon_sym_Delete_Query] = ACTIONS(244),
    [anon_sym_Database_Results] = ACTIONS(244),
    [anon_sym_Transactions] = ACTIONS(244),
    [anon_sym_Parameter_Collection] = ACTIONS(244),
    [anon_sym_Query_Condition] = ACTIONS(244),
    [anon_sym_Manual_Condition] = ACTIONS(244),
    [anon_sym_Dynamic_Element] = ACTIONS(244),
    [anon_sym_Dynamic_Integer] = ACTIONS(244),
    [anon_sym_Dynamic_Real] = ACTIONS(244),
    [anon_sym_Dynamic_Text] = ACTIONS(244),
    [sym_comment] = ACTIONS(3),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
    [anon_sym_while] = ACTIONS(226),
    [anon_sym_LPAREN] = ACTIONS(224),
    [anon_sym_case] = ACTIONS(226),
    [anon_sym_default] = ACTIONS(226),
    [anon_sym_break] = ACTIONS(226),
    [anon_sym_SEMI] = ACTIONS(224),
    [anon_sym_switch] = ACTIONS(226),
    [anon_sym_if] = ACTIONS(226),
    [anon_sym_for] = ACTIONS(226),
    [anon_sym_BANG] = ACTIONS(224),
    [anon_sym_return] = ACTIONS(226),
    [sym_identifier] = ACTIONS(226),
    [sym_number_literal] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(224),
    [anon_sym_void] = ACTIONS(226),
    [anon_sym_Integer] = ACTIONS(226),
    [anon_sym_Real] = ACTIONS(226),
    [anon_sym_Text] = ACTIONS(226),
    [anon_sym_Vector2] = ACTIONS(226),
    [anon_sym_Vector3] = ACTIONS(226),
    [anon_sym_Vector4] = ACTIONS(226),
    [anon_sym_Matrix3] = ACTIONS(226),
    [anon_sym_Matrix4] = ACTIONS(226),
    [anon_sym_Point] = ACTIONS(226),
    [anon_sym_Line] = ACTIONS(226),
    [anon_sym_Arc] = ACTIONS(226),
    [anon_sym_Spiral] = ACTIONS(226),
    [anon_sym_Parabola] = ACTIONS(226),
    [anon_sym_Segment] = ACTIONS(226),
    [anon_sym_Element] = ACTIONS(226),
    [anon_sym_Model] = ACTIONS(226),
    [anon_sym_View] = ACTIONS(226),
    [anon_sym_Macro_Function] = ACTIONS(226),
    [anon_sym_Function] = ACTIONS(226),
    [anon_sym_Uid] = ACTIONS(226),
    [anon_sym_Guid] = ACTIONS(226),
    [anon_sym_Attributes] = ACTIONS(226),
    [anon_sym_SDR_Attribute] = ACTIONS(226),
    [anon_sym_Blob] = ACTIONS(226),
    [anon_sym_Screen_Text] = ACTIONS(226),
    [anon_sym_Textstyle_Data] = ACTIONS(226),
    [anon_sym_Equality_Label] = ACTIONS(226),
    [anon_sym_Undo] = ACTIONS(226),
    [anon_sym_Undo_List] = ACTIONS(226),
    [anon_sym_Widget] = ACTIONS(226),
    [anon_sym_Menu] = ACTIONS(226),
    [anon_sym_Panel] = ACTIONS(226),
    [anon_sym_Overlay_Widget] = ACTIONS(226),
    [anon_sym_Vertical_Group] = ACTIONS(226),
    [anon_sym_Horizontal_Group] = ACTIONS(226),
    [anon_sym_Widget_Pages] = ACTIONS(226),
    [anon_sym_Button] = ACTIONS(226),
    [anon_sym_Select_Button] = ACTIONS(226),
    [anon_sym_Angle_Box] = ACTIONS(226),
    [anon_sym_Attributes_Box] = ACTIONS(226),
    [anon_sym_Billboard_Box] = ACTIONS(226),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(226),
    [anon_sym_Bitmap_List_Box] = ACTIONS(226),
    [anon_sym_Chainage_Box] = ACTIONS(226),
    [anon_sym_Choice_Box] = ACTIONS(226),
    [anon_sym_Colour_Box] = ACTIONS(226),
    [anon_sym_Colour_Message_Box] = ACTIONS(226),
    [anon_sym_Date_Time_Box] = ACTIONS(226),
    [anon_sym_Directory_Box] = ACTIONS(226),
    [anon_sym_Draw_Box] = ACTIONS(226),
    [anon_sym_File_Box] = ACTIONS(226),
    [anon_sym_Function_Box] = ACTIONS(226),
    [anon_sym_Graph_Box] = ACTIONS(226),
    [anon_sym_GridCtrl_Box] = ACTIONS(226),
    [anon_sym_HyperLink_Box] = ACTIONS(226),
    [anon_sym_Input_Box] = ACTIONS(226),
    [anon_sym_Integer_Box] = ACTIONS(226),
    [anon_sym_Justify_Box] = ACTIONS(226),
    [anon_sym_Linestyle_Box] = ACTIONS(226),
    [anon_sym_List_Box] = ACTIONS(226),
    [anon_sym_ListCtrl_Box] = ACTIONS(226),
    [anon_sym_Map_File_Box] = ACTIONS(226),
    [anon_sym_Message_Box] = ACTIONS(226),
    [anon_sym_Model_Box] = ACTIONS(226),
    [anon_sym_Name_Box] = ACTIONS(226),
    [anon_sym_Named_Tick_Box] = ACTIONS(226),
    [anon_sym_New_Select_Box] = ACTIONS(226),
    [anon_sym_New_XYZ_Box] = ACTIONS(226),
    [anon_sym_Plotter_Box] = ACTIONS(226),
    [anon_sym_Polygon_Box] = ACTIONS(226),
    [anon_sym_Real_Box] = ACTIONS(226),
    [anon_sym_Report_Box] = ACTIONS(226),
    [anon_sym_Select_Box] = ACTIONS(226),
    [anon_sym_Select_Boxes] = ACTIONS(226),
    [anon_sym_Sheet_Size_Box] = ACTIONS(226),
    [anon_sym_Source_Box] = ACTIONS(226),
    [anon_sym_Symbol_Box] = ACTIONS(226),
    [anon_sym_Tab_Box] = ACTIONS(226),
    [anon_sym_Target_Box] = ACTIONS(226),
    [anon_sym_Template_Box] = ACTIONS(226),
    [anon_sym_Text_Edit_Box] = ACTIONS(226),
    [anon_sym_Text_Style_Box] = ACTIONS(226),
    [anon_sym_Texture_Box] = ACTIONS(226),
    [anon_sym_Tree_Box] = ACTIONS(226),
    [anon_sym_Tree_Page] = ACTIONS(226),
    [anon_sym_Tick_Box] = ACTIONS(226),
    [anon_sym_Tin_Box] = ACTIONS(226),
    [anon_sym_View_Box] = ACTIONS(226),
    [anon_sym_XYZ_Box] = ACTIONS(226),
    [anon_sym_File] = ACTIONS(226),
    [anon_sym_Map_File] = ACTIONS(226),
    [anon_sym_Plot_Parameter_File] = ACTIONS(226),
    [anon_sym_XML_Document] = ACTIONS(226),
    [anon_sym_XML_Node] = ACTIONS(226),
    [anon_sym_Connection] = ACTIONS(226),
    [anon_sym_Select_Query] = ACTIONS(226),
    [anon_sym_Insert_Query] = ACTIONS(226),
    [anon_sym_Update_Query] = ACTIONS(226),
    [anon_sym_Delete_Query] = ACTIONS(226),
    [anon_sym_Database_Results] = ACTIONS(226),
    [anon_sym_Transactions] = ACTIONS(226),
    [anon_sym_Parameter_Collection] = ACTIONS(226),
    [anon_sym_Query_Condition] = ACTIONS(226),
    [anon_sym_Manual_Condition] = ACTIONS(226),
    [anon_sym_Dynamic_Element] = ACTIONS(226),
    [anon_sym_Dynamic_Integer] = ACTIONS(226),
    [anon_sym_Dynamic_Real] = ACTIONS(226),
    [anon_sym_Dynamic_Text] = ACTIONS(226),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(228),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_while] = ACTIONS(230),
    [anon_sym_LPAREN] = ACTIONS(228),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_break] = ACTIONS(230),
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_switch] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_for] = ACTIONS(230),
    [anon_sym_BANG] = ACTIONS(228),
    [anon_sym_return] = ACTIONS(230),
    [sym_identifier] = ACTIONS(230),
    [sym_number_literal] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(228),
    [anon_sym_void] = ACTIONS(230),
    [anon_sym_Integer] = ACTIONS(230),
    [anon_sym_Real] = ACTIONS(230),
    [anon_sym_Text] = ACTIONS(230),
    [anon_sym_Vector2] = ACTIONS(230),
    [anon_sym_Vector3] = ACTIONS(230),
    [anon_sym_Vector4] = ACTIONS(230),
    [anon_sym_Matrix3] = ACTIONS(230),
    [anon_sym_Matrix4] = ACTIONS(230),
    [anon_sym_Point] = ACTIONS(230),
    [anon_sym_Line] = ACTIONS(230),
    [anon_sym_Arc] = ACTIONS(230),
    [anon_sym_Spiral] = ACTIONS(230),
    [anon_sym_Parabola] = ACTIONS(230),
    [anon_sym_Segment] = ACTIONS(230),
    [anon_sym_Element] = ACTIONS(230),
    [anon_sym_Model] = ACTIONS(230),
    [anon_sym_View] = ACTIONS(230),
    [anon_sym_Macro_Function] = ACTIONS(230),
    [anon_sym_Function] = ACTIONS(230),
    [anon_sym_Uid] = ACTIONS(230),
    [anon_sym_Guid] = ACTIONS(230),
    [anon_sym_Attributes] = ACTIONS(230),
    [anon_sym_SDR_Attribute] = ACTIONS(230),
    [anon_sym_Blob] = ACTIONS(230),
    [anon_sym_Screen_Text] = ACTIONS(230),
    [anon_sym_Textstyle_Data] = ACTIONS(230),
    [anon_sym_Equality_Label] = ACTIONS(230),
    [anon_sym_Undo] = ACTIONS(230),
    [anon_sym_Undo_List] = ACTIONS(230),
    [anon_sym_Widget] = ACTIONS(230),
    [anon_sym_Menu] = ACTIONS(230),
    [anon_sym_Panel] = ACTIONS(230),
    [anon_sym_Overlay_Widget] = ACTIONS(230),
    [anon_sym_Vertical_Group] = ACTIONS(230),
    [anon_sym_Horizontal_Group] = ACTIONS(230),
    [anon_sym_Widget_Pages] = ACTIONS(230),
    [anon_sym_Button] = ACTIONS(230),
    [anon_sym_Select_Button] = ACTIONS(230),
    [anon_sym_Angle_Box] = ACTIONS(230),
    [anon_sym_Attributes_Box] = ACTIONS(230),
    [anon_sym_Billboard_Box] = ACTIONS(230),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(230),
    [anon_sym_Bitmap_List_Box] = ACTIONS(230),
    [anon_sym_Chainage_Box] = ACTIONS(230),
    [anon_sym_Choice_Box] = ACTIONS(230),
    [anon_sym_Colour_Box] = ACTIONS(230),
    [anon_sym_Colour_Message_Box] = ACTIONS(230),
    [anon_sym_Date_Time_Box] = ACTIONS(230),
    [anon_sym_Directory_Box] = ACTIONS(230),
    [anon_sym_Draw_Box] = ACTIONS(230),
    [anon_sym_File_Box] = ACTIONS(230),
    [anon_sym_Function_Box] = ACTIONS(230),
    [anon_sym_Graph_Box] = ACTIONS(230),
    [anon_sym_GridCtrl_Box] = ACTIONS(230),
    [anon_sym_HyperLink_Box] = ACTIONS(230),
    [anon_sym_Input_Box] = ACTIONS(230),
    [anon_sym_Integer_Box] = ACTIONS(230),
    [anon_sym_Justify_Box] = ACTIONS(230),
    [anon_sym_Linestyle_Box] = ACTIONS(230),
    [anon_sym_List_Box] = ACTIONS(230),
    [anon_sym_ListCtrl_Box] = ACTIONS(230),
    [anon_sym_Map_File_Box] = ACTIONS(230),
    [anon_sym_Message_Box] = ACTIONS(230),
    [anon_sym_Model_Box] = ACTIONS(230),
    [anon_sym_Name_Box] = ACTIONS(230),
    [anon_sym_Named_Tick_Box] = ACTIONS(230),
    [anon_sym_New_Select_Box] = ACTIONS(230),
    [anon_sym_New_XYZ_Box] = ACTIONS(230),
    [anon_sym_Plotter_Box] = ACTIONS(230),
    [anon_sym_Polygon_Box] = ACTIONS(230),
    [anon_sym_Real_Box] = ACTIONS(230),
    [anon_sym_Report_Box] = ACTIONS(230),
    [anon_sym_Select_Box] = ACTIONS(230),
    [anon_sym_Select_Boxes] = ACTIONS(230),
    [anon_sym_Sheet_Size_Box] = ACTIONS(230),
    [anon_sym_Source_Box] = ACTIONS(230),
    [anon_sym_Symbol_Box] = ACTIONS(230),
    [anon_sym_Tab_Box] = ACTIONS(230),
    [anon_sym_Target_Box] = ACTIONS(230),
    [anon_sym_Template_Box] = ACTIONS(230),
    [anon_sym_Text_Edit_Box] = ACTIONS(230),
    [anon_sym_Text_Style_Box] = ACTIONS(230),
    [anon_sym_Texture_Box] = ACTIONS(230),
    [anon_sym_Tree_Box] = ACTIONS(230),
    [anon_sym_Tree_Page] = ACTIONS(230),
    [anon_sym_Tick_Box] = ACTIONS(230),
    [anon_sym_Tin_Box] = ACTIONS(230),
    [anon_sym_View_Box] = ACTIONS(230),
    [anon_sym_XYZ_Box] = ACTIONS(230),
    [anon_sym_File] = ACTIONS(230),
    [anon_sym_Map_File] = ACTIONS(230),
    [anon_sym_Plot_Parameter_File] = ACTIONS(230),
    [anon_sym_XML_Document] = ACTIONS(230),
    [anon_sym_XML_Node] = ACTIONS(230),
    [anon_sym_Connection] = ACTIONS(230),
    [anon_sym_Select_Query] = ACTIONS(230),
    [anon_sym_Insert_Query] = ACTIONS(230),
    [anon_sym_Update_Query] = ACTIONS(230),
    [anon_sym_Delete_Query] = ACTIONS(230),
    [anon_sym_Database_Results] = ACTIONS(230),
    [anon_sym_Transactions] = ACTIONS(230),
    [anon_sym_Parameter_Collection] = ACTIONS(230),
    [anon_sym_Query_Condition] = ACTIONS(230),
    [anon_sym_Manual_Condition] = ACTIONS(230),
    [anon_sym_Dynamic_Element] = ACTIONS(230),
    [anon_sym_Dynamic_Integer] = ACTIONS(230),
    [anon_sym_Dynamic_Real] = ACTIONS(230),
    [anon_sym_Dynamic_Text] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(268),
    [anon_sym_RBRACE] = ACTIONS(268),
    [anon_sym_while] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(268),
    [anon_sym_case] = ACTIONS(270),
    [anon_sym_default] = ACTIONS(270),
    [anon_sym_break] = ACTIONS(270),
    [anon_sym_SEMI] = ACTIONS(268),
    [anon_sym_switch] = ACTIONS(270),
    [anon_sym_if] = ACTIONS(270),
    [anon_sym_for] = ACTIONS(270),
    [anon_sym_BANG] = ACTIONS(268),
    [anon_sym_return] = ACTIONS(270),
    [sym_identifier] = ACTIONS(270),
    [sym_number_literal] = ACTIONS(268),
    [anon_sym_DQUOTE] = ACTIONS(268),
    [anon_sym_void] = ACTIONS(270),
    [anon_sym_Integer] = ACTIONS(270),
    [anon_sym_Real] = ACTIONS(270),
    [anon_sym_Text] = ACTIONS(270),
    [anon_sym_Vector2] = ACTIONS(270),
    [anon_sym_Vector3] = ACTIONS(270),
    [anon_sym_Vector4] = ACTIONS(270),
    [anon_sym_Matrix3] = ACTIONS(270),
    [anon_sym_Matrix4] = ACTIONS(270),
    [anon_sym_Point] = ACTIONS(270),
    [anon_sym_Line] = ACTIONS(270),
    [anon_sym_Arc] = ACTIONS(270),
    [anon_sym_Spiral] = ACTIONS(270),
    [anon_sym_Parabola] = ACTIONS(270),
    [anon_sym_Segment] = ACTIONS(270),
    [anon_sym_Element] = ACTIONS(270),
    [anon_sym_Model] = ACTIONS(270),
    [anon_sym_View] = ACTIONS(270),
    [anon_sym_Macro_Function] = ACTIONS(270),
    [anon_sym_Function] = ACTIONS(270),
    [anon_sym_Uid] = ACTIONS(270),
    [anon_sym_Guid] = ACTIONS(270),
    [anon_sym_Attributes] = ACTIONS(270),
    [anon_sym_SDR_Attribute] = ACTIONS(270),
    [anon_sym_Blob] = ACTIONS(270),
    [anon_sym_Screen_Text] = ACTIONS(270),
    [anon_sym_Textstyle_Data] = ACTIONS(270),
    [anon_sym_Equality_Label] = ACTIONS(270),
    [anon_sym_Undo] = ACTIONS(270),
    [anon_sym_Undo_List] = ACTIONS(270),
    [anon_sym_Widget] = ACTIONS(270),
    [anon_sym_Menu] = ACTIONS(270),
    [anon_sym_Panel] = ACTIONS(270),
    [anon_sym_Overlay_Widget] = ACTIONS(270),
    [anon_sym_Vertical_Group] = ACTIONS(270),
    [anon_sym_Horizontal_Group] = ACTIONS(270),
    [anon_sym_Widget_Pages] = ACTIONS(270),
    [anon_sym_Button] = ACTIONS(270),
    [anon_sym_Select_Button] = ACTIONS(270),
    [anon_sym_Angle_Box] = ACTIONS(270),
    [anon_sym_Attributes_Box] = ACTIONS(270),
    [anon_sym_Billboard_Box] = ACTIONS(270),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(270),
    [anon_sym_Bitmap_List_Box] = ACTIONS(270),
    [anon_sym_Chainage_Box] = ACTIONS(270),
    [anon_sym_Choice_Box] = ACTIONS(270),
    [anon_sym_Colour_Box] = ACTIONS(270),
    [anon_sym_Colour_Message_Box] = ACTIONS(270),
    [anon_sym_Date_Time_Box] = ACTIONS(270),
    [anon_sym_Directory_Box] = ACTIONS(270),
    [anon_sym_Draw_Box] = ACTIONS(270),
    [anon_sym_File_Box] = ACTIONS(270),
    [anon_sym_Function_Box] = ACTIONS(270),
    [anon_sym_Graph_Box] = ACTIONS(270),
    [anon_sym_GridCtrl_Box] = ACTIONS(270),
    [anon_sym_HyperLink_Box] = ACTIONS(270),
    [anon_sym_Input_Box] = ACTIONS(270),
    [anon_sym_Integer_Box] = ACTIONS(270),
    [anon_sym_Justify_Box] = ACTIONS(270),
    [anon_sym_Linestyle_Box] = ACTIONS(270),
    [anon_sym_List_Box] = ACTIONS(270),
    [anon_sym_ListCtrl_Box] = ACTIONS(270),
    [anon_sym_Map_File_Box] = ACTIONS(270),
    [anon_sym_Message_Box] = ACTIONS(270),
    [anon_sym_Model_Box] = ACTIONS(270),
    [anon_sym_Name_Box] = ACTIONS(270),
    [anon_sym_Named_Tick_Box] = ACTIONS(270),
    [anon_sym_New_Select_Box] = ACTIONS(270),
    [anon_sym_New_XYZ_Box] = ACTIONS(270),
    [anon_sym_Plotter_Box] = ACTIONS(270),
    [anon_sym_Polygon_Box] = ACTIONS(270),
    [anon_sym_Real_Box] = ACTIONS(270),
    [anon_sym_Report_Box] = ACTIONS(270),
    [anon_sym_Select_Box] = ACTIONS(270),
    [anon_sym_Select_Boxes] = ACTIONS(270),
    [anon_sym_Sheet_Size_Box] = ACTIONS(270),
    [anon_sym_Source_Box] = ACTIONS(270),
    [anon_sym_Symbol_Box] = ACTIONS(270),
    [anon_sym_Tab_Box] = ACTIONS(270),
    [anon_sym_Target_Box] = ACTIONS(270),
    [anon_sym_Template_Box] = ACTIONS(270),
    [anon_sym_Text_Edit_Box] = ACTIONS(270),
    [anon_sym_Text_Style_Box] = ACTIONS(270),
    [anon_sym_Texture_Box] = ACTIONS(270),
    [anon_sym_Tree_Box] = ACTIONS(270),
    [anon_sym_Tree_Page] = ACTIONS(270),
    [anon_sym_Tick_Box] = ACTIONS(270),
    [anon_sym_Tin_Box] = ACTIONS(270),
    [anon_sym_View_Box] = ACTIONS(270),
    [anon_sym_XYZ_Box] = ACTIONS(270),
    [anon_sym_File] = ACTIONS(270),
    [anon_sym_Map_File] = ACTIONS(270),
    [anon_sym_Plot_Parameter_File] = ACTIONS(270),
    [anon_sym_XML_Document] = ACTIONS(270),
    [anon_sym_XML_Node] = ACTIONS(270),
    [anon_sym_Connection] = ACTIONS(270),
    [anon_sym_Select_Query] = ACTIONS(270),
    [anon_sym_Insert_Query] = ACTIONS(270),
    [anon_sym_Update_Query] = ACTIONS(270),
    [anon_sym_Delete_Query] = ACTIONS(270),
    [anon_sym_Database_Results] = ACTIONS(270),
    [anon_sym_Transactions] = ACTIONS(270),
    [anon_sym_Parameter_Collection] = ACTIONS(270),
    [anon_sym_Query_Condition] = ACTIONS(270),
    [anon_sym_Manual_Condition] = ACTIONS(270),
    [anon_sym_Dynamic_Element] = ACTIONS(270),
    [anon_sym_Dynamic_Integer] = ACTIONS(270),
    [anon_sym_Dynamic_Real] = ACTIONS(270),
    [anon_sym_Dynamic_Text] = ACTIONS(270),
    [sym_comment] = ACTIONS(3),
  },
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_while] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(248),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_break] = ACTIONS(250),
    [anon_sym_SEMI] = ACTIONS(248),
    [anon_sym_switch] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_for] = ACTIONS(250),
    [anon_sym_BANG] = ACTIONS(248),
    [anon_sym_return] = ACTIONS(250),
    [sym_identifier] = ACTIONS(250),
    [sym_number_literal] = ACTIONS(248),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(250),
    [anon_sym_Integer] = ACTIONS(250),
    [anon_sym_Real] = ACTIONS(250),
    [anon_sym_Text] = ACTIONS(250),
    [anon_sym_Vector2] = ACTIONS(250),
    [anon_sym_Vector3] = ACTIONS(250),
    [anon_sym_Vector4] = ACTIONS(250),
    [anon_sym_Matrix3] = ACTIONS(250),
    [anon_sym_Matrix4] = ACTIONS(250),
    [anon_sym_Point] = ACTIONS(250),
    [anon_sym_Line] = ACTIONS(250),
    [anon_sym_Arc] = ACTIONS(250),
    [anon_sym_Spiral] = ACTIONS(250),
    [anon_sym_Parabola] = ACTIONS(250),
    [anon_sym_Segment] = ACTIONS(250),
    [anon_sym_Element] = ACTIONS(250),
    [anon_sym_Model] = ACTIONS(250),
    [anon_sym_View] = ACTIONS(250),
    [anon_sym_Macro_Function] = ACTIONS(250),
    [anon_sym_Function] = ACTIONS(250),
    [anon_sym_Uid] = ACTIONS(250),
    [anon_sym_Guid] = ACTIONS(250),
    [anon_sym_Attributes] = ACTIONS(250),
    [anon_sym_SDR_Attribute] = ACTIONS(250),
    [anon_sym_Blob] = ACTIONS(250),
    [anon_sym_Screen_Text] = ACTIONS(250),
    [anon_sym_Textstyle_Data] = ACTIONS(250),
    [anon_sym_Equality_Label] = ACTIONS(250),
    [anon_sym_Undo] = ACTIONS(250),
    [anon_sym_Undo_List] = ACTIONS(250),
    [anon_sym_Widget] = ACTIONS(250),
    [anon_sym_Menu] = ACTIONS(250),
    [anon_sym_Panel] = ACTIONS(250),
    [anon_sym_Overlay_Widget] = ACTIONS(250),
    [anon_sym_Vertical_Group] = ACTIONS(250),
    [anon_sym_Horizontal_Group] = ACTIONS(250),
    [anon_sym_Widget_Pages] = ACTIONS(250),
    [anon_sym_Button] = ACTIONS(250),
    [anon_sym_Select_Button] = ACTIONS(250),
    [anon_sym_Angle_Box] = ACTIONS(250),
    [anon_sym_Attributes_Box] = ACTIONS(250),
    [anon_sym_Billboard_Box] = ACTIONS(250),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(250),
    [anon_sym_Bitmap_List_Box] = ACTIONS(250),
    [anon_sym_Chainage_Box] = ACTIONS(250),
    [anon_sym_Choice_Box] = ACTIONS(250),
    [anon_sym_Colour_Box] = ACTIONS(250),
    [anon_sym_Colour_Message_Box] = ACTIONS(250),
    [anon_sym_Date_Time_Box] = ACTIONS(250),
    [anon_sym_Directory_Box] = ACTIONS(250),
    [anon_sym_Draw_Box] = ACTIONS(250),
    [anon_sym_File_Box] = ACTIONS(250),
    [anon_sym_Function_Box] = ACTIONS(250),
    [anon_sym_Graph_Box] = ACTIONS(250),
    [anon_sym_GridCtrl_Box] = ACTIONS(250),
    [anon_sym_HyperLink_Box] = ACTIONS(250),
    [anon_sym_Input_Box] = ACTIONS(250),
    [anon_sym_Integer_Box] = ACTIONS(250),
    [anon_sym_Justify_Box] = ACTIONS(250),
    [anon_sym_Linestyle_Box] = ACTIONS(250),
    [anon_sym_List_Box] = ACTIONS(250),
    [anon_sym_ListCtrl_Box] = ACTIONS(250),
    [anon_sym_Map_File_Box] = ACTIONS(250),
    [anon_sym_Message_Box] = ACTIONS(250),
    [anon_sym_Model_Box] = ACTIONS(250),
    [anon_sym_Name_Box] = ACTIONS(250),
    [anon_sym_Named_Tick_Box] = ACTIONS(250),
    [anon_sym_New_Select_Box] = ACTIONS(250),
    [anon_sym_New_XYZ_Box] = ACTIONS(250),
    [anon_sym_Plotter_Box] = ACTIONS(250),
    [anon_sym_Polygon_Box] = ACTIONS(250),
    [anon_sym_Real_Box] = ACTIONS(250),
    [anon_sym_Report_Box] = ACTIONS(250),
    [anon_sym_Select_Box] = ACTIONS(250),
    [anon_sym_Select_Boxes] = ACTIONS(250),
    [anon_sym_Sheet_Size_Box] = ACTIONS(250),
    [anon_sym_Source_Box] = ACTIONS(250),
    [anon_sym_Symbol_Box] = ACTIONS(250),
    [anon_sym_Tab_Box] = ACTIONS(250),
    [anon_sym_Target_Box] = ACTIONS(250),
    [anon_sym_Template_Box] = ACTIONS(250),
    [anon_sym_Text_Edit_Box] = ACTIONS(250),
    [anon_sym_Text_Style_Box] = ACTIONS(250),
    [anon_sym_Texture_Box] = ACTIONS(250),
    [anon_sym_Tree_Box] = ACTIONS(250),
    [anon_sym_Tree_Page] = ACTIONS(250),
    [anon_sym_Tick_Box] = ACTIONS(250),
    [anon_sym_Tin_Box] = ACTIONS(250),
    [anon_sym_View_Box] = ACTIONS(250),
    [anon_sym_XYZ_Box] = ACTIONS(250),
    [anon_sym_File] = ACTIONS(250),
    [anon_sym_Map_File] = ACTIONS(250),
    [anon_sym_Plot_Parameter_File] = ACTIONS(250),
    [anon_sym_XML_Document] = ACTIONS(250),
    [anon_sym_XML_Node] = ACTIONS(250),
    [anon_sym_Connection] = ACTIONS(250),
    [anon_sym_Select_Query] = ACTIONS(250),
    [anon_sym_Insert_Query] = ACTIONS(250),
    [anon_sym_Update_Query] = ACTIONS(250),
    [anon_sym_Delete_Query] = ACTIONS(250),
    [anon_sym_Database_Results] = ACTIONS(250),
    [anon_sym_Transactions] = ACTIONS(250),
    [anon_sym_Parameter_Collection] = ACTIONS(250),
    [anon_sym_Query_Condition] = ACTIONS(250),
    [anon_sym_Manual_Condition] = ACTIONS(250),
    [anon_sym_Dynamic_Element] = ACTIONS(250),
    [anon_sym_Dynamic_Integer] = ACTIONS(250),
    [anon_sym_Dynamic_Real] = ACTIONS(250),
    [anon_sym_Dynamic_Text] = ACTIONS(250),
    [sym_comment] = ACTIONS(3),
  },
  [59] = {
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
    [anon_sym_while] = ACTIONS(278),
    [anon_sym_LPAREN] = ACTIONS(276),
    [anon_sym_case] = ACTIONS(278),
    [anon_sym_default] = ACTIONS(278),
    [anon_sym_break] = ACTIONS(278),
    [anon_sym_SEMI] = ACTIONS(276),
    [anon_sym_switch] = ACTIONS(278),
    [anon_sym_if] = ACTIONS(278),
    [anon_sym_for] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(276),
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
  [60] = {
    [sym__definition] = STATE(61),
    [sym_function_definition] = STATE(61),
    [sym_compound_statement] = STATE(61),
    [sym__declaration_specifiers] = STATE(157),
    [sym__type_specifier] = STATE(168),
    [sym_primitive_type] = STATE(168),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(280),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [61] = {
    [sym__definition] = STATE(61),
    [sym_function_definition] = STATE(61),
    [sym_compound_statement] = STATE(61),
    [sym__declaration_specifiers] = STATE(157),
    [sym__type_specifier] = STATE(168),
    [sym_primitive_type] = STATE(168),
    [aux_sym_source_file_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(282),
    [anon_sym_LBRACE] = ACTIONS(284),
    [anon_sym_void] = ACTIONS(287),
    [anon_sym_Integer] = ACTIONS(290),
    [anon_sym_Real] = ACTIONS(290),
    [anon_sym_Text] = ACTIONS(290),
    [anon_sym_Vector2] = ACTIONS(287),
    [anon_sym_Vector3] = ACTIONS(287),
    [anon_sym_Vector4] = ACTIONS(287),
    [anon_sym_Matrix3] = ACTIONS(287),
    [anon_sym_Matrix4] = ACTIONS(287),
    [anon_sym_Point] = ACTIONS(287),
    [anon_sym_Line] = ACTIONS(290),
    [anon_sym_Arc] = ACTIONS(287),
    [anon_sym_Spiral] = ACTIONS(287),
    [anon_sym_Parabola] = ACTIONS(287),
    [anon_sym_Segment] = ACTIONS(287),
    [anon_sym_Element] = ACTIONS(287),
    [anon_sym_Model] = ACTIONS(290),
    [anon_sym_View] = ACTIONS(290),
    [anon_sym_Macro_Function] = ACTIONS(287),
    [anon_sym_Function] = ACTIONS(290),
    [anon_sym_Uid] = ACTIONS(287),
    [anon_sym_Guid] = ACTIONS(287),
    [anon_sym_Attributes] = ACTIONS(290),
    [anon_sym_SDR_Attribute] = ACTIONS(287),
    [anon_sym_Blob] = ACTIONS(287),
    [anon_sym_Screen_Text] = ACTIONS(287),
    [anon_sym_Textstyle_Data] = ACTIONS(287),
    [anon_sym_Equality_Label] = ACTIONS(287),
    [anon_sym_Undo] = ACTIONS(290),
    [anon_sym_Undo_List] = ACTIONS(287),
    [anon_sym_Widget] = ACTIONS(290),
    [anon_sym_Menu] = ACTIONS(287),
    [anon_sym_Panel] = ACTIONS(287),
    [anon_sym_Overlay_Widget] = ACTIONS(287),
    [anon_sym_Vertical_Group] = ACTIONS(287),
    [anon_sym_Horizontal_Group] = ACTIONS(287),
    [anon_sym_Widget_Pages] = ACTIONS(287),
    [anon_sym_Button] = ACTIONS(287),
    [anon_sym_Select_Button] = ACTIONS(287),
    [anon_sym_Angle_Box] = ACTIONS(287),
    [anon_sym_Attributes_Box] = ACTIONS(287),
    [anon_sym_Billboard_Box] = ACTIONS(287),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(287),
    [anon_sym_Bitmap_List_Box] = ACTIONS(287),
    [anon_sym_Chainage_Box] = ACTIONS(287),
    [anon_sym_Choice_Box] = ACTIONS(287),
    [anon_sym_Colour_Box] = ACTIONS(287),
    [anon_sym_Colour_Message_Box] = ACTIONS(287),
    [anon_sym_Date_Time_Box] = ACTIONS(287),
    [anon_sym_Directory_Box] = ACTIONS(287),
    [anon_sym_Draw_Box] = ACTIONS(287),
    [anon_sym_File_Box] = ACTIONS(287),
    [anon_sym_Function_Box] = ACTIONS(287),
    [anon_sym_Graph_Box] = ACTIONS(287),
    [anon_sym_GridCtrl_Box] = ACTIONS(287),
    [anon_sym_HyperLink_Box] = ACTIONS(287),
    [anon_sym_Input_Box] = ACTIONS(287),
    [anon_sym_Integer_Box] = ACTIONS(287),
    [anon_sym_Justify_Box] = ACTIONS(287),
    [anon_sym_Linestyle_Box] = ACTIONS(287),
    [anon_sym_List_Box] = ACTIONS(287),
    [anon_sym_ListCtrl_Box] = ACTIONS(287),
    [anon_sym_Map_File_Box] = ACTIONS(287),
    [anon_sym_Message_Box] = ACTIONS(287),
    [anon_sym_Model_Box] = ACTIONS(287),
    [anon_sym_Name_Box] = ACTIONS(287),
    [anon_sym_Named_Tick_Box] = ACTIONS(287),
    [anon_sym_New_Select_Box] = ACTIONS(287),
    [anon_sym_New_XYZ_Box] = ACTIONS(287),
    [anon_sym_Plotter_Box] = ACTIONS(287),
    [anon_sym_Polygon_Box] = ACTIONS(287),
    [anon_sym_Real_Box] = ACTIONS(287),
    [anon_sym_Report_Box] = ACTIONS(287),
    [anon_sym_Select_Box] = ACTIONS(290),
    [anon_sym_Select_Boxes] = ACTIONS(287),
    [anon_sym_Sheet_Size_Box] = ACTIONS(287),
    [anon_sym_Source_Box] = ACTIONS(287),
    [anon_sym_Symbol_Box] = ACTIONS(287),
    [anon_sym_Tab_Box] = ACTIONS(287),
    [anon_sym_Target_Box] = ACTIONS(287),
    [anon_sym_Template_Box] = ACTIONS(287),
    [anon_sym_Text_Edit_Box] = ACTIONS(287),
    [anon_sym_Text_Style_Box] = ACTIONS(287),
    [anon_sym_Texture_Box] = ACTIONS(287),
    [anon_sym_Tree_Box] = ACTIONS(287),
    [anon_sym_Tree_Page] = ACTIONS(287),
    [anon_sym_Tick_Box] = ACTIONS(287),
    [anon_sym_Tin_Box] = ACTIONS(287),
    [anon_sym_View_Box] = ACTIONS(287),
    [anon_sym_XYZ_Box] = ACTIONS(287),
    [anon_sym_File] = ACTIONS(290),
    [anon_sym_Map_File] = ACTIONS(290),
    [anon_sym_Plot_Parameter_File] = ACTIONS(287),
    [anon_sym_XML_Document] = ACTIONS(287),
    [anon_sym_XML_Node] = ACTIONS(287),
    [anon_sym_Connection] = ACTIONS(287),
    [anon_sym_Select_Query] = ACTIONS(287),
    [anon_sym_Insert_Query] = ACTIONS(287),
    [anon_sym_Update_Query] = ACTIONS(287),
    [anon_sym_Delete_Query] = ACTIONS(287),
    [anon_sym_Database_Results] = ACTIONS(287),
    [anon_sym_Transactions] = ACTIONS(287),
    [anon_sym_Parameter_Collection] = ACTIONS(287),
    [anon_sym_Query_Condition] = ACTIONS(287),
    [anon_sym_Manual_Condition] = ACTIONS(287),
    [anon_sym_Dynamic_Element] = ACTIONS(287),
    [anon_sym_Dynamic_Integer] = ACTIONS(287),
    [anon_sym_Dynamic_Real] = ACTIONS(287),
    [anon_sym_Dynamic_Text] = ACTIONS(287),
    [sym_comment] = ACTIONS(3),
  },
  [62] = {
    [sym_parameter_declaration] = STATE(171),
    [sym__declaration_specifiers] = STATE(144),
    [sym__type_specifier] = STATE(168),
    [sym_primitive_type] = STATE(168),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym__declaration_specifiers] = STATE(146),
    [sym__type_specifier] = STATE(168),
    [sym_declaration] = STATE(126),
    [sym_primitive_type] = STATE(168),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [64] = {
    [sym__declaration_specifiers] = STATE(146),
    [sym__type_specifier] = STATE(168),
    [sym_declaration] = STATE(113),
    [sym_primitive_type] = STATE(168),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [65] = {
    [sym_parameter_declaration] = STATE(182),
    [sym__declaration_specifiers] = STATE(144),
    [sym__type_specifier] = STATE(168),
    [sym_primitive_type] = STATE(168),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(11),
    [anon_sym_Real] = ACTIONS(11),
    [anon_sym_Text] = ACTIONS(11),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(11),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(11),
    [anon_sym_View] = ACTIONS(11),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(11),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(11),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(11),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(11),
    [anon_sym_Menu] = ACTIONS(9),
    [anon_sym_Panel] = ACTIONS(9),
    [anon_sym_Overlay_Widget] = ACTIONS(9),
    [anon_sym_Vertical_Group] = ACTIONS(9),
    [anon_sym_Horizontal_Group] = ACTIONS(9),
    [anon_sym_Widget_Pages] = ACTIONS(9),
    [anon_sym_Button] = ACTIONS(9),
    [anon_sym_Select_Button] = ACTIONS(9),
    [anon_sym_Angle_Box] = ACTIONS(9),
    [anon_sym_Attributes_Box] = ACTIONS(9),
    [anon_sym_Billboard_Box] = ACTIONS(9),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(9),
    [anon_sym_Bitmap_List_Box] = ACTIONS(9),
    [anon_sym_Chainage_Box] = ACTIONS(9),
    [anon_sym_Choice_Box] = ACTIONS(9),
    [anon_sym_Colour_Box] = ACTIONS(9),
    [anon_sym_Colour_Message_Box] = ACTIONS(9),
    [anon_sym_Date_Time_Box] = ACTIONS(9),
    [anon_sym_Directory_Box] = ACTIONS(9),
    [anon_sym_Draw_Box] = ACTIONS(9),
    [anon_sym_File_Box] = ACTIONS(9),
    [anon_sym_Function_Box] = ACTIONS(9),
    [anon_sym_Graph_Box] = ACTIONS(9),
    [anon_sym_GridCtrl_Box] = ACTIONS(9),
    [anon_sym_HyperLink_Box] = ACTIONS(9),
    [anon_sym_Input_Box] = ACTIONS(9),
    [anon_sym_Integer_Box] = ACTIONS(9),
    [anon_sym_Justify_Box] = ACTIONS(9),
    [anon_sym_Linestyle_Box] = ACTIONS(9),
    [anon_sym_List_Box] = ACTIONS(9),
    [anon_sym_ListCtrl_Box] = ACTIONS(9),
    [anon_sym_Map_File_Box] = ACTIONS(9),
    [anon_sym_Message_Box] = ACTIONS(9),
    [anon_sym_Model_Box] = ACTIONS(9),
    [anon_sym_Name_Box] = ACTIONS(9),
    [anon_sym_Named_Tick_Box] = ACTIONS(9),
    [anon_sym_New_Select_Box] = ACTIONS(9),
    [anon_sym_New_XYZ_Box] = ACTIONS(9),
    [anon_sym_Plotter_Box] = ACTIONS(9),
    [anon_sym_Polygon_Box] = ACTIONS(9),
    [anon_sym_Real_Box] = ACTIONS(9),
    [anon_sym_Report_Box] = ACTIONS(9),
    [anon_sym_Select_Box] = ACTIONS(11),
    [anon_sym_Select_Boxes] = ACTIONS(9),
    [anon_sym_Sheet_Size_Box] = ACTIONS(9),
    [anon_sym_Source_Box] = ACTIONS(9),
    [anon_sym_Symbol_Box] = ACTIONS(9),
    [anon_sym_Tab_Box] = ACTIONS(9),
    [anon_sym_Target_Box] = ACTIONS(9),
    [anon_sym_Template_Box] = ACTIONS(9),
    [anon_sym_Text_Edit_Box] = ACTIONS(9),
    [anon_sym_Text_Style_Box] = ACTIONS(9),
    [anon_sym_Texture_Box] = ACTIONS(9),
    [anon_sym_Tree_Box] = ACTIONS(9),
    [anon_sym_Tree_Page] = ACTIONS(9),
    [anon_sym_Tick_Box] = ACTIONS(9),
    [anon_sym_Tin_Box] = ACTIONS(9),
    [anon_sym_View_Box] = ACTIONS(9),
    [anon_sym_XYZ_Box] = ACTIONS(9),
    [anon_sym_File] = ACTIONS(11),
    [anon_sym_Map_File] = ACTIONS(11),
    [anon_sym_Plot_Parameter_File] = ACTIONS(9),
    [anon_sym_XML_Document] = ACTIONS(9),
    [anon_sym_XML_Node] = ACTIONS(9),
    [anon_sym_Connection] = ACTIONS(9),
    [anon_sym_Select_Query] = ACTIONS(9),
    [anon_sym_Insert_Query] = ACTIONS(9),
    [anon_sym_Update_Query] = ACTIONS(9),
    [anon_sym_Delete_Query] = ACTIONS(9),
    [anon_sym_Database_Results] = ACTIONS(9),
    [anon_sym_Transactions] = ACTIONS(9),
    [anon_sym_Parameter_Collection] = ACTIONS(9),
    [anon_sym_Query_Condition] = ACTIONS(9),
    [anon_sym_Manual_Condition] = ACTIONS(9),
    [anon_sym_Dynamic_Element] = ACTIONS(9),
    [anon_sym_Dynamic_Integer] = ACTIONS(9),
    [anon_sym_Dynamic_Real] = ACTIONS(9),
    [anon_sym_Dynamic_Text] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_void] = ACTIONS(252),
    [anon_sym_Integer] = ACTIONS(254),
    [anon_sym_Real] = ACTIONS(254),
    [anon_sym_Text] = ACTIONS(254),
    [anon_sym_Vector2] = ACTIONS(252),
    [anon_sym_Vector3] = ACTIONS(252),
    [anon_sym_Vector4] = ACTIONS(252),
    [anon_sym_Matrix3] = ACTIONS(252),
    [anon_sym_Matrix4] = ACTIONS(252),
    [anon_sym_Point] = ACTIONS(252),
    [anon_sym_Line] = ACTIONS(254),
    [anon_sym_Arc] = ACTIONS(252),
    [anon_sym_Spiral] = ACTIONS(252),
    [anon_sym_Parabola] = ACTIONS(252),
    [anon_sym_Segment] = ACTIONS(252),
    [anon_sym_Element] = ACTIONS(252),
    [anon_sym_Model] = ACTIONS(254),
    [anon_sym_View] = ACTIONS(254),
    [anon_sym_Macro_Function] = ACTIONS(252),
    [anon_sym_Function] = ACTIONS(254),
    [anon_sym_Uid] = ACTIONS(252),
    [anon_sym_Guid] = ACTIONS(252),
    [anon_sym_Attributes] = ACTIONS(254),
    [anon_sym_SDR_Attribute] = ACTIONS(252),
    [anon_sym_Blob] = ACTIONS(252),
    [anon_sym_Screen_Text] = ACTIONS(252),
    [anon_sym_Textstyle_Data] = ACTIONS(252),
    [anon_sym_Equality_Label] = ACTIONS(252),
    [anon_sym_Undo] = ACTIONS(254),
    [anon_sym_Undo_List] = ACTIONS(252),
    [anon_sym_Widget] = ACTIONS(254),
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
    [anon_sym_Select_Box] = ACTIONS(254),
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
    [anon_sym_File] = ACTIONS(254),
    [anon_sym_Map_File] = ACTIONS(254),
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
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_void] = ACTIONS(248),
    [anon_sym_Integer] = ACTIONS(250),
    [anon_sym_Real] = ACTIONS(250),
    [anon_sym_Text] = ACTIONS(250),
    [anon_sym_Vector2] = ACTIONS(248),
    [anon_sym_Vector3] = ACTIONS(248),
    [anon_sym_Vector4] = ACTIONS(248),
    [anon_sym_Matrix3] = ACTIONS(248),
    [anon_sym_Matrix4] = ACTIONS(248),
    [anon_sym_Point] = ACTIONS(248),
    [anon_sym_Line] = ACTIONS(250),
    [anon_sym_Arc] = ACTIONS(248),
    [anon_sym_Spiral] = ACTIONS(248),
    [anon_sym_Parabola] = ACTIONS(248),
    [anon_sym_Segment] = ACTIONS(248),
    [anon_sym_Element] = ACTIONS(248),
    [anon_sym_Model] = ACTIONS(250),
    [anon_sym_View] = ACTIONS(250),
    [anon_sym_Macro_Function] = ACTIONS(248),
    [anon_sym_Function] = ACTIONS(250),
    [anon_sym_Uid] = ACTIONS(248),
    [anon_sym_Guid] = ACTIONS(248),
    [anon_sym_Attributes] = ACTIONS(250),
    [anon_sym_SDR_Attribute] = ACTIONS(248),
    [anon_sym_Blob] = ACTIONS(248),
    [anon_sym_Screen_Text] = ACTIONS(248),
    [anon_sym_Textstyle_Data] = ACTIONS(248),
    [anon_sym_Equality_Label] = ACTIONS(248),
    [anon_sym_Undo] = ACTIONS(250),
    [anon_sym_Undo_List] = ACTIONS(248),
    [anon_sym_Widget] = ACTIONS(250),
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
    [anon_sym_Select_Box] = ACTIONS(250),
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
    [anon_sym_File] = ACTIONS(250),
    [anon_sym_Map_File] = ACTIONS(250),
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
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_void] = ACTIONS(295),
    [anon_sym_Integer] = ACTIONS(297),
    [anon_sym_Real] = ACTIONS(297),
    [anon_sym_Text] = ACTIONS(297),
    [anon_sym_Vector2] = ACTIONS(295),
    [anon_sym_Vector3] = ACTIONS(295),
    [anon_sym_Vector4] = ACTIONS(295),
    [anon_sym_Matrix3] = ACTIONS(295),
    [anon_sym_Matrix4] = ACTIONS(295),
    [anon_sym_Point] = ACTIONS(295),
    [anon_sym_Line] = ACTIONS(297),
    [anon_sym_Arc] = ACTIONS(295),
    [anon_sym_Spiral] = ACTIONS(295),
    [anon_sym_Parabola] = ACTIONS(295),
    [anon_sym_Segment] = ACTIONS(295),
    [anon_sym_Element] = ACTIONS(295),
    [anon_sym_Model] = ACTIONS(297),
    [anon_sym_View] = ACTIONS(297),
    [anon_sym_Macro_Function] = ACTIONS(295),
    [anon_sym_Function] = ACTIONS(297),
    [anon_sym_Uid] = ACTIONS(295),
    [anon_sym_Guid] = ACTIONS(295),
    [anon_sym_Attributes] = ACTIONS(297),
    [anon_sym_SDR_Attribute] = ACTIONS(295),
    [anon_sym_Blob] = ACTIONS(295),
    [anon_sym_Screen_Text] = ACTIONS(295),
    [anon_sym_Textstyle_Data] = ACTIONS(295),
    [anon_sym_Equality_Label] = ACTIONS(295),
    [anon_sym_Undo] = ACTIONS(297),
    [anon_sym_Undo_List] = ACTIONS(295),
    [anon_sym_Widget] = ACTIONS(297),
    [anon_sym_Menu] = ACTIONS(295),
    [anon_sym_Panel] = ACTIONS(295),
    [anon_sym_Overlay_Widget] = ACTIONS(295),
    [anon_sym_Vertical_Group] = ACTIONS(295),
    [anon_sym_Horizontal_Group] = ACTIONS(295),
    [anon_sym_Widget_Pages] = ACTIONS(295),
    [anon_sym_Button] = ACTIONS(295),
    [anon_sym_Select_Button] = ACTIONS(295),
    [anon_sym_Angle_Box] = ACTIONS(295),
    [anon_sym_Attributes_Box] = ACTIONS(295),
    [anon_sym_Billboard_Box] = ACTIONS(295),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(295),
    [anon_sym_Bitmap_List_Box] = ACTIONS(295),
    [anon_sym_Chainage_Box] = ACTIONS(295),
    [anon_sym_Choice_Box] = ACTIONS(295),
    [anon_sym_Colour_Box] = ACTIONS(295),
    [anon_sym_Colour_Message_Box] = ACTIONS(295),
    [anon_sym_Date_Time_Box] = ACTIONS(295),
    [anon_sym_Directory_Box] = ACTIONS(295),
    [anon_sym_Draw_Box] = ACTIONS(295),
    [anon_sym_File_Box] = ACTIONS(295),
    [anon_sym_Function_Box] = ACTIONS(295),
    [anon_sym_Graph_Box] = ACTIONS(295),
    [anon_sym_GridCtrl_Box] = ACTIONS(295),
    [anon_sym_HyperLink_Box] = ACTIONS(295),
    [anon_sym_Input_Box] = ACTIONS(295),
    [anon_sym_Integer_Box] = ACTIONS(295),
    [anon_sym_Justify_Box] = ACTIONS(295),
    [anon_sym_Linestyle_Box] = ACTIONS(295),
    [anon_sym_List_Box] = ACTIONS(295),
    [anon_sym_ListCtrl_Box] = ACTIONS(295),
    [anon_sym_Map_File_Box] = ACTIONS(295),
    [anon_sym_Message_Box] = ACTIONS(295),
    [anon_sym_Model_Box] = ACTIONS(295),
    [anon_sym_Name_Box] = ACTIONS(295),
    [anon_sym_Named_Tick_Box] = ACTIONS(295),
    [anon_sym_New_Select_Box] = ACTIONS(295),
    [anon_sym_New_XYZ_Box] = ACTIONS(295),
    [anon_sym_Plotter_Box] = ACTIONS(295),
    [anon_sym_Polygon_Box] = ACTIONS(295),
    [anon_sym_Real_Box] = ACTIONS(295),
    [anon_sym_Report_Box] = ACTIONS(295),
    [anon_sym_Select_Box] = ACTIONS(297),
    [anon_sym_Select_Boxes] = ACTIONS(295),
    [anon_sym_Sheet_Size_Box] = ACTIONS(295),
    [anon_sym_Source_Box] = ACTIONS(295),
    [anon_sym_Symbol_Box] = ACTIONS(295),
    [anon_sym_Tab_Box] = ACTIONS(295),
    [anon_sym_Target_Box] = ACTIONS(295),
    [anon_sym_Template_Box] = ACTIONS(295),
    [anon_sym_Text_Edit_Box] = ACTIONS(295),
    [anon_sym_Text_Style_Box] = ACTIONS(295),
    [anon_sym_Texture_Box] = ACTIONS(295),
    [anon_sym_Tree_Box] = ACTIONS(295),
    [anon_sym_Tree_Page] = ACTIONS(295),
    [anon_sym_Tick_Box] = ACTIONS(295),
    [anon_sym_Tin_Box] = ACTIONS(295),
    [anon_sym_View_Box] = ACTIONS(295),
    [anon_sym_XYZ_Box] = ACTIONS(295),
    [anon_sym_File] = ACTIONS(297),
    [anon_sym_Map_File] = ACTIONS(297),
    [anon_sym_Plot_Parameter_File] = ACTIONS(295),
    [anon_sym_XML_Document] = ACTIONS(295),
    [anon_sym_XML_Node] = ACTIONS(295),
    [anon_sym_Connection] = ACTIONS(295),
    [anon_sym_Select_Query] = ACTIONS(295),
    [anon_sym_Insert_Query] = ACTIONS(295),
    [anon_sym_Update_Query] = ACTIONS(295),
    [anon_sym_Delete_Query] = ACTIONS(295),
    [anon_sym_Database_Results] = ACTIONS(295),
    [anon_sym_Transactions] = ACTIONS(295),
    [anon_sym_Parameter_Collection] = ACTIONS(295),
    [anon_sym_Query_Condition] = ACTIONS(295),
    [anon_sym_Manual_Condition] = ACTIONS(295),
    [anon_sym_Dynamic_Element] = ACTIONS(295),
    [anon_sym_Dynamic_Integer] = ACTIONS(295),
    [anon_sym_Dynamic_Real] = ACTIONS(295),
    [anon_sym_Dynamic_Text] = ACTIONS(295),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(299), 25,
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
    ACTIONS(305), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(303), 25,
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
  [88] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(307), 25,
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
  [132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(311), 25,
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
  [176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 11,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ,
    ACTIONS(315), 25,
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
  [220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_EQ,
    ACTIONS(325), 8,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(321), 10,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 17,
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
  [268] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(337), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 14,
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
  [318] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(337), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 16,
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
  [362] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(329), 10,
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
  [418] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(329), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [476] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(329), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [536] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(329), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [598] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(329), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [660] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(329), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [724] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(337), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 12,
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
  [776] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(337), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 14,
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
  [824] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(361), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(359), 18,
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
  [866] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(363), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(367), 20,
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
  [967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(371), 20,
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
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(375), 20,
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
  [1037] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_argument_list,
    STATE(162), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1105] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1170] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1235] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1300] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1365] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1430] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(395), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1493] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(397), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1556] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(399), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1618] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1680] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1742] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1804] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1866] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1928] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(411), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [1990] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(413), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2052] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_LPAREN,
    ACTIONS(335), 1,
      anon_sym_SLASH,
    ACTIONS(339), 1,
      anon_sym_LBRACK,
    ACTIONS(351), 1,
      anon_sym_AMP,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      anon_sym_PIPE,
    ACTIONS(357), 1,
      anon_sym_AMP_AMP,
    ACTIONS(365), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(415), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      sym_argument_list,
    ACTIONS(331), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(333), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(341), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(343), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(345), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(347), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(349), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
  [2114] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      anon_sym_SEMI,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(421), 1,
      sym_number_literal,
    STATE(188), 1,
      sym_comma_expression,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(93), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2155] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(423), 1,
      anon_sym_SEMI,
    ACTIONS(425), 1,
      sym_number_literal,
    STATE(189), 1,
      sym_comma_expression,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(95), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2196] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(427), 1,
      sym_number_literal,
    STATE(190), 1,
      sym_comma_expression,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(92), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2234] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    ACTIONS(431), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(90), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2272] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(433), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(86), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2307] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(435), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(75), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2342] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(437), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(101), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2377] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(439), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(85), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2412] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(441), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(83), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2447] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(443), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(96), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2482] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(445), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(77), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2517] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(97), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2552] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(449), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(78), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2587] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(451), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(98), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2622] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(453), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(79), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2657] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(455), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(80), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(99), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2727] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(459), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(106), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2762] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(461), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(102), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2797] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(463), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(105), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2832] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(465), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(81), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2867] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(467), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(100), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2902] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(469), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(82), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2937] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(471), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(103), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2972] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(473), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(104), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3007] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(475), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(84), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3042] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_BANG,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(477), 1,
      sym_number_literal,
    STATE(74), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(134), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(76), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 9,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3118] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_SEMI,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_parameter_list,
    STATE(164), 1,
      aux_sym_declaration_repeat1,
  [3143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_parameter_list,
    STATE(165), 1,
      aux_sym_declaration_repeat1,
  [3181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3194] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    STATE(142), 1,
      sym_parameter_list,
    STATE(159), 1,
      aux_sym_declaration_repeat1,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [3232] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(491), 1,
      anon_sym_EQ,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_parameter_list,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_identifier,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(145), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_parameter_list,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3285] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym_identifier,
    STATE(166), 1,
      sym_init_declarator,
    STATE(139), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3300] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(493), 1,
      anon_sym_LBRACK,
    STATE(68), 1,
      sym_compound_statement,
    STATE(142), 1,
      sym_parameter_list,
  [3319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(172), 1,
      sym_init_declarator,
    STATE(141), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      sym_identifier,
    STATE(185), 1,
      sym_init_declarator,
    STATE(143), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      sym_identifier,
    STATE(163), 1,
      sym_init_declarator,
    STATE(137), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [3408] = 5,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    ACTIONS(523), 1,
      aux_sym_string_literal_token1,
    ACTIONS(526), 1,
      sym_escape_sequence,
    ACTIONS(529), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_string_literal_repeat1,
  [3424] = 5,
    ACTIONS(529), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    ACTIONS(535), 1,
      sym_escape_sequence,
    STATE(158), 1,
      aux_sym_string_literal_repeat1,
  [3440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(147), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [3452] = 5,
    ACTIONS(529), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      aux_sym_string_literal_token1,
    ACTIONS(543), 1,
      sym_escape_sequence,
    STATE(155), 1,
      aux_sym_string_literal_repeat1,
  [3468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_argument_list_repeat1,
  [3520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      aux_sym_declaration_repeat1,
  [3533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      aux_sym_declaration_repeat1,
  [3572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_parameter_list_repeat1,
  [3585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [3594] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_argument_list_repeat1,
  [3607] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3620] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_parameter_list_repeat1,
  [3633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym_declaration_repeat1,
  [3646] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(173), 1,
      aux_sym_parameter_list_repeat1,
  [3659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [3668] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    STATE(161), 1,
      aux_sym_declaration_repeat1,
  [3681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_parenthesized_expression,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_compound_statement,
  [3701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_compound_statement,
  [3711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_parenthesized_expression,
  [3721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_parenthesized_expression,
  [3731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_parenthesized_expression,
  [3741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_parenthesized_expression,
  [3759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_parenthesized_expression,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_SEMI,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SEMI,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SEMI,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SEMI,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_SEMI,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_SEMI,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_COLON,
  [3840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LPAREN,
  [3847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
  [3854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(69)] = 0,
  [SMALL_STATE(70)] = 44,
  [SMALL_STATE(71)] = 88,
  [SMALL_STATE(72)] = 132,
  [SMALL_STATE(73)] = 176,
  [SMALL_STATE(74)] = 220,
  [SMALL_STATE(75)] = 268,
  [SMALL_STATE(76)] = 318,
  [SMALL_STATE(77)] = 362,
  [SMALL_STATE(78)] = 418,
  [SMALL_STATE(79)] = 476,
  [SMALL_STATE(80)] = 536,
  [SMALL_STATE(81)] = 598,
  [SMALL_STATE(82)] = 660,
  [SMALL_STATE(83)] = 724,
  [SMALL_STATE(84)] = 776,
  [SMALL_STATE(85)] = 824,
  [SMALL_STATE(86)] = 866,
  [SMALL_STATE(87)] = 932,
  [SMALL_STATE(88)] = 967,
  [SMALL_STATE(89)] = 1002,
  [SMALL_STATE(90)] = 1037,
  [SMALL_STATE(91)] = 1105,
  [SMALL_STATE(92)] = 1170,
  [SMALL_STATE(93)] = 1235,
  [SMALL_STATE(94)] = 1300,
  [SMALL_STATE(95)] = 1365,
  [SMALL_STATE(96)] = 1430,
  [SMALL_STATE(97)] = 1493,
  [SMALL_STATE(98)] = 1556,
  [SMALL_STATE(99)] = 1618,
  [SMALL_STATE(100)] = 1680,
  [SMALL_STATE(101)] = 1742,
  [SMALL_STATE(102)] = 1804,
  [SMALL_STATE(103)] = 1866,
  [SMALL_STATE(104)] = 1928,
  [SMALL_STATE(105)] = 1990,
  [SMALL_STATE(106)] = 2052,
  [SMALL_STATE(107)] = 2114,
  [SMALL_STATE(108)] = 2155,
  [SMALL_STATE(109)] = 2196,
  [SMALL_STATE(110)] = 2234,
  [SMALL_STATE(111)] = 2272,
  [SMALL_STATE(112)] = 2307,
  [SMALL_STATE(113)] = 2342,
  [SMALL_STATE(114)] = 2377,
  [SMALL_STATE(115)] = 2412,
  [SMALL_STATE(116)] = 2447,
  [SMALL_STATE(117)] = 2482,
  [SMALL_STATE(118)] = 2517,
  [SMALL_STATE(119)] = 2552,
  [SMALL_STATE(120)] = 2587,
  [SMALL_STATE(121)] = 2622,
  [SMALL_STATE(122)] = 2657,
  [SMALL_STATE(123)] = 2692,
  [SMALL_STATE(124)] = 2727,
  [SMALL_STATE(125)] = 2762,
  [SMALL_STATE(126)] = 2797,
  [SMALL_STATE(127)] = 2832,
  [SMALL_STATE(128)] = 2867,
  [SMALL_STATE(129)] = 2902,
  [SMALL_STATE(130)] = 2937,
  [SMALL_STATE(131)] = 2972,
  [SMALL_STATE(132)] = 3007,
  [SMALL_STATE(133)] = 3042,
  [SMALL_STATE(134)] = 3077,
  [SMALL_STATE(135)] = 3092,
  [SMALL_STATE(136)] = 3105,
  [SMALL_STATE(137)] = 3118,
  [SMALL_STATE(138)] = 3143,
  [SMALL_STATE(139)] = 3156,
  [SMALL_STATE(140)] = 3181,
  [SMALL_STATE(141)] = 3194,
  [SMALL_STATE(142)] = 3219,
  [SMALL_STATE(143)] = 3232,
  [SMALL_STATE(144)] = 3252,
  [SMALL_STATE(145)] = 3268,
  [SMALL_STATE(146)] = 3285,
  [SMALL_STATE(147)] = 3300,
  [SMALL_STATE(148)] = 3319,
  [SMALL_STATE(149)] = 3334,
  [SMALL_STATE(150)] = 3349,
  [SMALL_STATE(151)] = 3360,
  [SMALL_STATE(152)] = 3375,
  [SMALL_STATE(153)] = 3386,
  [SMALL_STATE(154)] = 3397,
  [SMALL_STATE(155)] = 3408,
  [SMALL_STATE(156)] = 3424,
  [SMALL_STATE(157)] = 3440,
  [SMALL_STATE(158)] = 3452,
  [SMALL_STATE(159)] = 3468,
  [SMALL_STATE(160)] = 3481,
  [SMALL_STATE(161)] = 3494,
  [SMALL_STATE(162)] = 3507,
  [SMALL_STATE(163)] = 3520,
  [SMALL_STATE(164)] = 3533,
  [SMALL_STATE(165)] = 3546,
  [SMALL_STATE(166)] = 3559,
  [SMALL_STATE(167)] = 3572,
  [SMALL_STATE(168)] = 3585,
  [SMALL_STATE(169)] = 3594,
  [SMALL_STATE(170)] = 3607,
  [SMALL_STATE(171)] = 3620,
  [SMALL_STATE(172)] = 3633,
  [SMALL_STATE(173)] = 3646,
  [SMALL_STATE(174)] = 3659,
  [SMALL_STATE(175)] = 3668,
  [SMALL_STATE(176)] = 3681,
  [SMALL_STATE(177)] = 3691,
  [SMALL_STATE(178)] = 3701,
  [SMALL_STATE(179)] = 3711,
  [SMALL_STATE(180)] = 3721,
  [SMALL_STATE(181)] = 3731,
  [SMALL_STATE(182)] = 3741,
  [SMALL_STATE(183)] = 3749,
  [SMALL_STATE(184)] = 3759,
  [SMALL_STATE(185)] = 3769,
  [SMALL_STATE(186)] = 3777,
  [SMALL_STATE(187)] = 3784,
  [SMALL_STATE(188)] = 3791,
  [SMALL_STATE(189)] = 3798,
  [SMALL_STATE(190)] = 3805,
  [SMALL_STATE(191)] = 3812,
  [SMALL_STATE(192)] = 3819,
  [SMALL_STATE(193)] = 3826,
  [SMALL_STATE(194)] = 3833,
  [SMALL_STATE(195)] = 3840,
  [SMALL_STATE(196)] = 3847,
  [SMALL_STATE(197)] = 3854,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(181),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(125),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(120),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(194),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(187),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(59),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(180),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(183),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(195),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(114),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(107),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(74),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(91),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(156),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(174),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 3, .production_id = 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 3, .production_id = 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 8),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(184),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(125),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(186),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(43),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(179),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(176),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(197),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(114),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(108),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(74),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(94),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(156),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(174),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(7),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(181),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(187),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(59),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(180),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(183),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(195),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(107),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(91),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 7),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 7),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 15),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 10),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 9),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_switch_statement, 3, .production_id = 7),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_switch_statement, 3, .production_id = 7),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 20),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 20),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 19),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 19),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_statement, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_statement, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 18),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_left_expression, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_left_expression, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 11),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3, .production_id = 12),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_declarator, 3, .production_id = 17),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarator, 2, .production_id = 6),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 14),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 13),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 10),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(155),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(155),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [549] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 16), SHIFT_REPEAT(149),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 16),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifiers, 1, .production_id = 1),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(118),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(65),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [598] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
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
