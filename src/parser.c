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
#define STATE_COUNT 162
#define LARGE_STATE_COUNT 49
#define SYMBOL_COUNT 195
#define ALIAS_COUNT 0
#define TOKEN_COUNT 157
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 19

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_if = 6,
  anon_sym_else = 7,
  anon_sym_for = 8,
  anon_sym_SEMI = 9,
  anon_sym_BANG = 10,
  anon_sym_PLUS = 11,
  anon_sym_DASH = 12,
  anon_sym_STAR = 13,
  anon_sym_SLASH = 14,
  anon_sym_PERCENT = 15,
  anon_sym_PIPE_PIPE = 16,
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_CARET = 19,
  anon_sym_AMP = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_GT = 23,
  anon_sym_GT_EQ = 24,
  anon_sym_LT_EQ = 25,
  anon_sym_LT = 26,
  anon_sym_LT_LT = 27,
  anon_sym_GT_GT = 28,
  anon_sym_EQ = 29,
  anon_sym_STAR_EQ = 30,
  anon_sym_SLASH_EQ = 31,
  anon_sym_PERCENT_EQ = 32,
  anon_sym_PLUS_EQ = 33,
  anon_sym_DASH_EQ = 34,
  anon_sym_AMP_EQ = 35,
  anon_sym_CARET_EQ = 36,
  anon_sym_PIPE_EQ = 37,
  anon_sym_LBRACK = 38,
  anon_sym_RBRACK = 39,
  anon_sym_DASH_DASH = 40,
  anon_sym_PLUS_PLUS = 41,
  anon_sym_return = 42,
  sym_identifier = 43,
  sym_number_literal = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_literal_token1 = 46,
  sym_escape_sequence = 47,
  anon_sym_void = 48,
  anon_sym_Integer = 49,
  anon_sym_Real = 50,
  anon_sym_Text = 51,
  anon_sym_Vector2 = 52,
  anon_sym_Vector3 = 53,
  anon_sym_Vector4 = 54,
  anon_sym_Matrix3 = 55,
  anon_sym_Matrix4 = 56,
  anon_sym_Point = 57,
  anon_sym_Line = 58,
  anon_sym_Arc = 59,
  anon_sym_Spiral = 60,
  anon_sym_Parabola = 61,
  anon_sym_Segment = 62,
  anon_sym_Element = 63,
  anon_sym_Model = 64,
  anon_sym_View = 65,
  anon_sym_Macro_Function = 66,
  anon_sym_Function = 67,
  anon_sym_Uid = 68,
  anon_sym_Guid = 69,
  anon_sym_Attributes = 70,
  anon_sym_SDR_Attribute = 71,
  anon_sym_Blob = 72,
  anon_sym_Screen_Text = 73,
  anon_sym_Textstyle_Data = 74,
  anon_sym_Equality_Label = 75,
  anon_sym_Undo = 76,
  anon_sym_Undo_List = 77,
  anon_sym_Widget = 78,
  anon_sym_Menu = 79,
  anon_sym_Panel = 80,
  anon_sym_Overlay_Widget = 81,
  anon_sym_Vertical_Group = 82,
  anon_sym_Horizontal_Group = 83,
  anon_sym_Widget_Pages = 84,
  anon_sym_Button = 85,
  anon_sym_Select_Button = 86,
  anon_sym_Angle_Box = 87,
  anon_sym_Attributes_Box = 88,
  anon_sym_Billboard_Box = 89,
  anon_sym_Bitmap_Fill_Box = 90,
  anon_sym_Bitmap_List_Box = 91,
  anon_sym_Chainage_Box = 92,
  anon_sym_Choice_Box = 93,
  anon_sym_Colour_Box = 94,
  anon_sym_Colour_Message_Box = 95,
  anon_sym_Date_Time_Box = 96,
  anon_sym_Directory_Box = 97,
  anon_sym_Draw_Box = 98,
  anon_sym_File_Box = 99,
  anon_sym_Function_Box = 100,
  anon_sym_Graph_Box = 101,
  anon_sym_GridCtrl_Box = 102,
  anon_sym_HyperLink_Box = 103,
  anon_sym_Input_Box = 104,
  anon_sym_Integer_Box = 105,
  anon_sym_Justify_Box = 106,
  anon_sym_Linestyle_Box = 107,
  anon_sym_List_Box = 108,
  anon_sym_ListCtrl_Box = 109,
  anon_sym_Map_File_Box = 110,
  anon_sym_Message_Box = 111,
  anon_sym_Model_Box = 112,
  anon_sym_Name_Box = 113,
  anon_sym_Named_Tick_Box = 114,
  anon_sym_New_Select_Box = 115,
  anon_sym_New_XYZ_Box = 116,
  anon_sym_Plotter_Box = 117,
  anon_sym_Polygon_Box = 118,
  anon_sym_Real_Box = 119,
  anon_sym_Report_Box = 120,
  anon_sym_Select_Box = 121,
  anon_sym_Select_Boxes = 122,
  anon_sym_Sheet_Size_Box = 123,
  anon_sym_Source_Box = 124,
  anon_sym_Symbol_Box = 125,
  anon_sym_Tab_Box = 126,
  anon_sym_Target_Box = 127,
  anon_sym_Template_Box = 128,
  anon_sym_Text_Edit_Box = 129,
  anon_sym_Text_Style_Box = 130,
  anon_sym_Texture_Box = 131,
  anon_sym_Tree_Box = 132,
  anon_sym_Tree_Page = 133,
  anon_sym_Tick_Box = 134,
  anon_sym_Tin_Box = 135,
  anon_sym_View_Box = 136,
  anon_sym_XYZ_Box = 137,
  anon_sym_File = 138,
  anon_sym_Map_File = 139,
  anon_sym_Plot_Parameter_File = 140,
  anon_sym_XML_Document = 141,
  anon_sym_XML_Node = 142,
  anon_sym_Connection = 143,
  anon_sym_Select_Query = 144,
  anon_sym_Insert_Query = 145,
  anon_sym_Update_Query = 146,
  anon_sym_Delete_Query = 147,
  anon_sym_Database_Results = 148,
  anon_sym_Transactions = 149,
  anon_sym_Parameter_Collection = 150,
  anon_sym_Query_Condition = 151,
  anon_sym_Manual_Condition = 152,
  anon_sym_Dynamic_Element = 153,
  anon_sym_Dynamic_Integer = 154,
  anon_sym_Dynamic_Real = 155,
  anon_sym_Dynamic_Text = 156,
  sym_source_file = 157,
  sym__definition = 158,
  sym_function_definition = 159,
  sym_compound_statement = 160,
  sym_parameter_list = 161,
  sym_parameter_declaration = 162,
  sym__declaration_specifiers = 163,
  sym__type_specifier = 164,
  sym__statement = 165,
  sym__non_case_statement = 166,
  sym_if_statement = 167,
  sym_for_statement = 168,
  sym_unary_expression = 169,
  sym_expression_statement = 170,
  sym_comma_expression = 171,
  sym_call_expression = 172,
  sym_argument_list = 173,
  sym_binary_expression = 174,
  sym_assignment_expression = 175,
  sym__assignment_left_expression = 176,
  sym_subscript_expression = 177,
  sym_update_expression = 178,
  sym_parenthesized_expression = 179,
  sym_return_statement = 180,
  sym__expression = 181,
  sym_string_literal = 182,
  sym_declaration = 183,
  sym_init_declarator = 184,
  sym_array_declarator = 185,
  sym_function_declarator = 186,
  sym__declarator = 187,
  sym_primitive_type = 188,
  aux_sym_source_file_repeat1 = 189,
  aux_sym_compound_statement_repeat1 = 190,
  aux_sym_parameter_list_repeat1 = 191,
  aux_sym_argument_list_repeat1 = 192,
  aux_sym_string_literal_repeat1 = 193,
  aux_sym_declaration_repeat1 = 194,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_SEMI] = ";",
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_compound_statement] = "compound_statement",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
  [sym__declaration_specifiers] = "_declaration_specifiers",
  [sym__type_specifier] = "_type_specifier",
  [sym__statement] = "_statement",
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
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_compound_statement] = sym_compound_statement,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
  [sym__declaration_specifiers] = sym__declaration_specifiers,
  [sym__type_specifier] = sym__type_specifier,
  [sym__statement] = sym__statement,
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
  [anon_sym_SEMI] = {
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
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 2},
  [11] = {.index = 21, .length = 1},
  [12] = {.index = 22, .length = 1},
  [13] = {.index = 23, .length = 3},
  [14] = {.index = 26, .length = 2},
  [15] = {.index = 28, .length = 2},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 3},
  [18] = {.index = 35, .length = 3},
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
    {field_condition, 1},
    {field_consequence, 2},
  [14] =
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [16] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [19] =
    {field_left, 0},
    {field_right, 2},
  [21] =
    {field_type, 0, .inherited = true},
  [22] =
    {field_declarator, 1},
  [23] =
    {field_declarator, 1},
    {field_declarator, 2, .inherited = true},
    {field_type, 0, .inherited = true},
  [26] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [28] =
    {field_declarator, 0},
    {field_value, 2},
  [30] =
    {field_argument, 0},
    {field_index, 2},
  [32] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [35] =
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
      if (eof) ADVANCE(742);
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '%') ADVANCE(758);
      if (lookahead == '&') ADVANCE(763);
      if (lookahead == '(') ADVANCE(745);
      if (lookahead == ')') ADVANCE(747);
      if (lookahead == '*') ADVANCE(756);
      if (lookahead == '+') ADVANCE(754);
      if (lookahead == ',') ADVANCE(746);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead == '/') ADVANCE(757);
      if (lookahead == ';') ADVANCE(751);
      if (lookahead == '<') ADVANCE(769);
      if (lookahead == '=') ADVANCE(773);
      if (lookahead == '>') ADVANCE(766);
      if (lookahead == 'A') ADVANCE(1202);
      if (lookahead == 'B') ADVANCE(1113);
      if (lookahead == 'C') ADVANCE(1111);
      if (lookahead == 'D') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(1162);
      if (lookahead == 'F') ADVANCE(1120);
      if (lookahead == 'G') ADVANCE(1323);
      if (lookahead == 'H') ADVANCE(1237);
      if (lookahead == 'I') ADVANCE(1203);
      if (lookahead == 'J') ADVANCE(1433);
      if (lookahead == 'L') ADVANCE(1114);
      if (lookahead == 'M') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(942);
      if (lookahead == 'O') ADVANCE(1453);
      if (lookahead == 'P') ADVANCE(943);
      if (lookahead == 'Q') ADVANCE(1444);
      if (lookahead == 'R') ADVANCE(1019);
      if (lookahead == 'S') ADVANCE(844);
      if (lookahead == 'T') ADVANCE(944);
      if (lookahead == 'U') ADVANCE(1118);
      if (lookahead == 'V') ADVANCE(1020);
      if (lookahead == 'W') ADVANCE(1126);
      if (lookahead == 'X') ADVANCE(859);
      if (lookahead == '[') ADVANCE(782);
      if (lookahead == '\\') ADVANCE(1529);
      if (lookahead == ']') ADVANCE(783);
      if (lookahead == '^') ADVANCE(762);
      if (lookahead == 'e') ADVANCE(1161);
      if (lookahead == 'f') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 'v') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(743);
      if (lookahead == '|') ADVANCE(761);
      if (lookahead == '}') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1525);
      if (('K' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1529);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1527);
      if (lookahead != 0) ADVANCE(1528);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(745);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(751);
      if (lookahead == '=') ADVANCE(772);
      if (lookahead == 'A') ADVANCE(1202);
      if (lookahead == 'B') ADVANCE(1113);
      if (lookahead == 'C') ADVANCE(1111);
      if (lookahead == 'D') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(1162);
      if (lookahead == 'F') ADVANCE(1120);
      if (lookahead == 'G') ADVANCE(1323);
      if (lookahead == 'H') ADVANCE(1237);
      if (lookahead == 'I') ADVANCE(1203);
      if (lookahead == 'J') ADVANCE(1433);
      if (lookahead == 'L') ADVANCE(1114);
      if (lookahead == 'M') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(942);
      if (lookahead == 'O') ADVANCE(1453);
      if (lookahead == 'P') ADVANCE(943);
      if (lookahead == 'Q') ADVANCE(1444);
      if (lookahead == 'R') ADVANCE(1019);
      if (lookahead == 'S') ADVANCE(844);
      if (lookahead == 'T') ADVANCE(944);
      if (lookahead == 'U') ADVANCE(1118);
      if (lookahead == 'V') ADVANCE(1020);
      if (lookahead == 'W') ADVANCE(1126);
      if (lookahead == 'X') ADVANCE(859);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 'v') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(743);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == '}') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1525);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '(') ADVANCE(745);
      if (lookahead == ')') ADVANCE(747);
      if (lookahead == ',') ADVANCE(746);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1525);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '(') ADVANCE(745);
      if (lookahead == ';') ADVANCE(751);
      if (lookahead == 'A') ADVANCE(1202);
      if (lookahead == 'B') ADVANCE(1113);
      if (lookahead == 'C') ADVANCE(1111);
      if (lookahead == 'D') ADVANCE(949);
      if (lookahead == 'E') ADVANCE(1162);
      if (lookahead == 'F') ADVANCE(1120);
      if (lookahead == 'G') ADVANCE(1323);
      if (lookahead == 'H') ADVANCE(1237);
      if (lookahead == 'I') ADVANCE(1203);
      if (lookahead == 'J') ADVANCE(1433);
      if (lookahead == 'L') ADVANCE(1114);
      if (lookahead == 'M') ADVANCE(941);
      if (lookahead == 'N') ADVANCE(942);
      if (lookahead == 'O') ADVANCE(1453);
      if (lookahead == 'P') ADVANCE(943);
      if (lookahead == 'Q') ADVANCE(1444);
      if (lookahead == 'R') ADVANCE(1019);
      if (lookahead == 'S') ADVANCE(844);
      if (lookahead == 'T') ADVANCE(944);
      if (lookahead == 'U') ADVANCE(1118);
      if (lookahead == 'V') ADVANCE(1020);
      if (lookahead == 'W') ADVANCE(1126);
      if (lookahead == 'X') ADVANCE(859);
      if (lookahead == 'e') ADVANCE(1161);
      if (lookahead == 'f') ADVANCE(1239);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'r') ADVANCE(1032);
      if (lookahead == 'v') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(743);
      if (lookahead == '}') ADVANCE(744);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1525);
      if (('K' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(1526);
      if (lookahead == '\\') ADVANCE(1529);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(1538);
      if (lookahead == '3') ADVANCE(1540);
      if (lookahead == '4') ADVANCE(1542);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(1544);
      if (lookahead == '4') ADVANCE(1546);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(765);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(776);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(779);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(774);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(777);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(778);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(775);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(780);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(781);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(648);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(498);
      if (lookahead == 'Q') ADVANCE(666);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(461);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(462);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(463);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(464);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(466);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(469);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(470);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(472);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(475);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(480);
      if (lookahead == 'P') ADVANCE(199);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(482);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(484);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(486);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(489);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(491);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(495);
      if (lookahead == 'M') ADVANCE(262);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(497);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(499);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(500);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(501);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(502);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(503);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(504);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(505);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(506);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(507);
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
      if (lookahead == 'C') ADVANCE(481);
      END_STATE();
    case 68:
      if (lookahead == 'C') ADVANCE(622);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(488);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(537);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(649);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'c') ADVANCE(567);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead == 'p') ADVANCE(352);
      if (lookahead == 'y') ADVANCE(415);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(465);
      if (lookahead == 'N') ADVANCE(529);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(193);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(650);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(409);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead == 'T') ADVANCE(295);
      END_STATE();
    case 77:
      if (lookahead == 'F') ADVANCE(668);
      END_STATE();
    case 78:
      if (lookahead == 'F') ADVANCE(370);
      END_STATE();
    case 79:
      if (lookahead == 'F') ADVANCE(356);
      if (lookahead == 'L') ADVANCE(368);
      END_STATE();
    case 80:
      if (lookahead == 'F') ADVANCE(373);
      END_STATE();
    case 81:
      if (lookahead == 'G') ADVANCE(565);
      END_STATE();
    case 82:
      if (lookahead == 'G') ADVANCE(566);
      END_STATE();
    case 83:
      if (lookahead == 'L') ADVANCE(108);
      END_STATE();
    case 84:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 85:
      if (lookahead == 'L') ADVANCE(355);
      END_STATE();
    case 86:
      if (lookahead == 'L') ADVANCE(366);
      END_STATE();
    case 87:
      if (lookahead == 'M') ADVANCE(83);
      if (lookahead == 'Y') ADVANCE(102);
      END_STATE();
    case 88:
      if (lookahead == 'P') ADVANCE(192);
      END_STATE();
    case 89:
      if (lookahead == 'P') ADVANCE(200);
      END_STATE();
    case 90:
      if (lookahead == 'Q') ADVANCE(664);
      END_STATE();
    case 91:
      if (lookahead == 'Q') ADVANCE(665);
      END_STATE();
    case 92:
      if (lookahead == 'Q') ADVANCE(667);
      END_STATE();
    case 93:
      if (lookahead == 'R') ADVANCE(106);
      END_STATE();
    case 94:
      if (lookahead == 'R') ADVANCE(263);
      END_STATE();
    case 95:
      if (lookahead == 'S') ADVANCE(344);
      END_STATE();
    case 96:
      if (lookahead == 'S') ADVANCE(299);
      if (lookahead == 'X') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'T') ADVANCE(369);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(351);
      END_STATE();
    case 99:
      if (lookahead == 'T') ADVANCE(286);
      END_STATE();
    case 100:
      if (lookahead == 'W') ADVANCE(375);
      END_STATE();
    case 101:
      if (lookahead == 'Y') ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == 'Z') ADVANCE(129);
      END_STATE();
    case 103:
      if (lookahead == 'Z') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(100);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 168:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(442);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(416);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(1556);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(1582);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead == 'i') ADVANCE(557);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 'y') ADVANCE(437);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(534);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(588);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(208);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(367);
      if (lookahead == 'o') ADVANCE(345);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(392);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(543);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(384);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(564);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(616);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(673);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(647);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(333);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(732);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(422);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(334);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 206:
      if (lookahead == 'b') ADVANCE(1578);
      END_STATE();
    case 207:
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 208:
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 209:
      if (lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 210:
      if (lookahead == 'b') ADVANCE(479);
      END_STATE();
    case 211:
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 212:
      if (lookahead == 'b') ADVANCE(278);
      END_STATE();
    case 213:
      if (lookahead == 'b') ADVANCE(662);
      END_STATE();
    case 214:
      if (lookahead == 'b') ADVANCE(663);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(1552);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'n') ADVANCE(661);
      if (lookahead == 'p') ADVANCE(104);
      if (lookahead == 't') ADVANCE(560);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(669);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(623);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(614);
      END_STATE();
    case 223:
      if (lookahead == 'c') ADVANCE(189);
      END_STATE();
    case 224:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 225:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 226:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 227:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 228:
      if (lookahead == 'c') ADVANCE(626);
      END_STATE();
    case 229:
      if (lookahead == 'c') ADVANCE(309);
      END_STATE();
    case 230:
      if (lookahead == 'c') ADVANCE(379);
      END_STATE();
    case 231:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 232:
      if (lookahead == 'c') ADVANCE(640);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(1570);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(1572);
      END_STATE();
    case 236:
      if (lookahead == 'd') ADVANCE(1530);
      END_STATE();
    case 237:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 238:
      if (lookahead == 'd') ADVANCE(459);
      END_STATE();
    case 239:
      if (lookahead == 'd') ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 241:
      if (lookahead == 'd') ADVANCE(371);
      END_STATE();
    case 242:
      if (lookahead == 'd') ADVANCE(253);
      END_STATE();
    case 243:
      if (lookahead == 'd') ADVANCE(328);
      END_STATE();
    case 244:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 245:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 246:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(1711);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(1550);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(1713);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(1718);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(1714);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(554);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(586);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(443);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(632);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(558);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(404);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(638);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 322:
      if (lookahead == 'f') ADVANCE(735);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(471);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 325:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 326:
      if (lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 327:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 328:
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 329:
      if (lookahead == 'g') ADVANCE(272);
      END_STATE();
    case 330:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 331:
      if (lookahead == 'g') ADVANCE(288);
      END_STATE();
    case 332:
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 333:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 334:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 335:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 336:
      if (lookahead == 'h') ADVANCE(181);
      if (lookahead == 'o') ADVANCE(388);
      END_STATE();
    case 337:
      if (lookahead == 'h') ADVANCE(134);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(387);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'u') ADVANCE(608);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(739);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(322);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(674);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'n') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(441);
      if (lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(243);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(569);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(235);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(490);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(492);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(494);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(390);
      if (lookahead == 'u') ADVANCE(436);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(589);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 368:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 369:
      if (lookahead == 'i') ADVANCE(425);
      END_STATE();
    case 370:
      if (lookahead == 'i') ADVANCE(396);
      END_STATE();
    case 371:
      if (lookahead == 'i') ADVANCE(630);
      END_STATE();
    case 372:
      if (lookahead == 'i') ADVANCE(631);
      END_STATE();
    case 373:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 374:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 375:
      if (lookahead == 'i') ADVANCE(245);
      END_STATE();
    case 376:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 377:
      if (lookahead == 'k') ADVANCE(132);
      END_STATE();
    case 378:
      if (lookahead == 'k') ADVANCE(154);
      END_STATE();
    case 379:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(1535);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(1563);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(1594);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(1554);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(1744);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(1584);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'q') ADVANCE(653);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(400);
      if (lookahead == 't') ADVANCE(417);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead == 'n') ADVANCE(451);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(268);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(249);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(306);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(285);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(613);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(256);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(298);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 407:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 408:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 409:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 410:
      if (lookahead == 'l') ADVANCE(308);
      END_STATE();
    case 411:
      if (lookahead == 'l') ADVANCE(408);
      END_STATE();
    case 412:
      if (lookahead == 'l') ADVANCE(316);
      END_STATE();
    case 413:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 414:
      if (lookahead == 'l') ADVANCE(168);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(542);
      if (lookahead == 'x') ADVANCE(595);
      END_STATE();
    case 417:
      if (lookahead == 'm') ADVANCE(183);
      END_STATE();
    case 418:
      if (lookahead == 'm') ADVANCE(349);
      END_STATE();
    case 419:
      if (lookahead == 'm') ADVANCE(251);
      END_STATE();
    case 420:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 421:
      if (lookahead == 'm') ADVANCE(297);
      END_STATE();
    case 422:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 423:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 424:
      if (lookahead == 'm') ADVANCE(302);
      END_STATE();
    case 425:
      if (lookahead == 'm') ADVANCE(315);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(1604);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(1569);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(1606);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(1566);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(1736);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(1738);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(1734);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead == 's') ADVANCE(585);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(646);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(642);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(603);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(605);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 451:
      if (lookahead == 'n') ADVANCE(303);
      END_STATE();
    case 452:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 453:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 454:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 455:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 456:
      if (lookahead == 'n') ADVANCE(378);
      END_STATE();
    case 457:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(1587);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(553);
      if (lookahead == 'y') ADVANCE(544);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(455);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(654);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(405);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(191);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(452);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(430);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(431);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(401);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(433);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(693);
      if (lookahead == 'u') ADVANCE(625);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(702);
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
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 531:
      if (lookahead == 'o') ADVANCE(658);
      END_STATE();
    case 532:
      if (lookahead == 'o') ADVANCE(574);
      END_STATE();
    case 533:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 534:
      if (lookahead == 'o') ADVANCE(572);
      END_STATE();
    case 535:
      if (lookahead == 'o') ADVANCE(354);
      END_STATE();
    case 536:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 537:
      if (lookahead == 'o') ADVANCE(453);
      END_STATE();
    case 538:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 539:
      if (lookahead == 'p') ADVANCE(1598);
      END_STATE();
    case 540:
      if (lookahead == 'p') ADVANCE(1600);
      END_STATE();
    case 541:
      if (lookahead == 'p') ADVANCE(657);
      if (lookahead == 's') ADVANCE(269);
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 542:
      if (lookahead == 'p') ADVANCE(402);
      END_STATE();
    case 543:
      if (lookahead == 'p') ADVANCE(113);
      END_STATE();
    case 544:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(353);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(1533);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(1742);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(731);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(292);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(476);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(276);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(374);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(637);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 574:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 575:
      if (lookahead == 'r') ADVANCE(407);
      END_STATE();
    case 576:
      if (lookahead == 'r') ADVANCE(312);
      END_STATE();
    case 577:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 578:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(1575);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(1678);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(1732);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(1602);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(1730);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(610);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(196);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(659);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 589:
      if (lookahead == 's') ADVANCE(600);
      END_STATE();
    case 590:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 591:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 592:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(1537);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(1548);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(1560);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(1558);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(1588);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(1580);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(1746);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(1716);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(1596);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(1740);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(737);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(255);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(487);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(532);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(733);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(734);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(305);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(575);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(738);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(584);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(1592);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(539);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(578);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(540);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(636);
      END_STATE();
    case 658:
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(398);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(261);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(619);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(279);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(281);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 667:
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 668:
      if (lookahead == 'u') ADVANCE(454);
      END_STATE();
    case 669:
      if (lookahead == 'u') ADVANCE(423);
      END_STATE();
    case 670:
      if (lookahead == 'v') ADVANCE(258);
      END_STATE();
    case 671:
      if (lookahead == 'w') ADVANCE(1565);
      END_STATE();
    case 672:
      if (lookahead == 'w') ADVANCE(105);
      END_STATE();
    case 673:
      if (lookahead == 'w') ADVANCE(130);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(7);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(1686);
      END_STATE();
    case 676:
      if (lookahead == 'x') ADVANCE(1704);
      END_STATE();
    case 677:
      if (lookahead == 'x') ADVANCE(1708);
      END_STATE();
    case 678:
      if (lookahead == 'x') ADVANCE(1630);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(1632);
      END_STATE();
    case 680:
      if (lookahead == 'x') ADVANCE(1650);
      END_STATE();
    case 681:
      if (lookahead == 'x') ADVANCE(1660);
      END_STATE();
    case 682:
      if (lookahead == 'x') ADVANCE(1672);
      END_STATE();
    case 683:
      if (lookahead == 'x') ADVANCE(1702);
      END_STATE();
    case 684:
      if (lookahead == 'x') ADVANCE(1698);
      END_STATE();
    case 685:
      if (lookahead == 'x') ADVANCE(1706);
      END_STATE();
    case 686:
      if (lookahead == 'x') ADVANCE(1608);
      END_STATE();
    case 687:
      if (lookahead == 'x') ADVANCE(1636);
      END_STATE();
    case 688:
      if (lookahead == 'x') ADVANCE(1642);
      END_STATE();
    case 689:
      if (lookahead == 'x') ADVANCE(1658);
      END_STATE();
    case 690:
      if (lookahead == 'x') ADVANCE(1620);
      END_STATE();
    case 691:
      if (lookahead == 'x') ADVANCE(1622);
      END_STATE();
    case 692:
      if (lookahead == 'x') ADVANCE(1674);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(1677);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(1682);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(1684);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(1688);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(1644);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(1646);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(1656);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(1666);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(1668);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(1670);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(1696);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(1618);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(1634);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(1638);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(1652);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(1654);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(1690);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(1612);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(1626);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(1628);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(1640);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(1648);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(1692);
      END_STATE();
    case 716:
      if (lookahead == 'x') ADVANCE(1610);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(1662);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(1664);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(1680);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(1694);
      END_STATE();
    case 721:
      if (lookahead == 'x') ADVANCE(1614);
      END_STATE();
    case 722:
      if (lookahead == 'x') ADVANCE(1616);
      END_STATE();
    case 723:
      if (lookahead == 'x') ADVANCE(1624);
      END_STATE();
    case 724:
      if (lookahead == 'x') ADVANCE(601);
      END_STATE();
    case 725:
      if (lookahead == 'x') ADVANCE(602);
      END_STATE();
    case 726:
      if (lookahead == 'y') ADVANCE(1728);
      END_STATE();
    case 727:
      if (lookahead == 'y') ADVANCE(1724);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(1722);
      END_STATE();
    case 729:
      if (lookahead == 'y') ADVANCE(1726);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(323);
      END_STATE();
    case 731:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 732:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 733:
      if (lookahead == 'y') ADVANCE(125);
      END_STATE();
    case 734:
      if (lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 735:
      if (lookahead == 'y') ADVANCE(141);
      END_STATE();
    case 736:
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 737:
      if (lookahead == 'y') ADVANCE(412);
      END_STATE();
    case 738:
      if (lookahead == 'y') ADVANCE(413);
      END_STATE();
    case 739:
      if (lookahead == 'z') ADVANCE(536);
      END_STATE();
    case 740:
      if (lookahead == 'z') ADVANCE(317);
      END_STATE();
    case 741:
      if (eof) ADVANCE(742);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(758);
      if (lookahead == '&') ADVANCE(763);
      if (lookahead == '(') ADVANCE(745);
      if (lookahead == ')') ADVANCE(747);
      if (lookahead == '*') ADVANCE(756);
      if (lookahead == '+') ADVANCE(754);
      if (lookahead == ',') ADVANCE(746);
      if (lookahead == '-') ADVANCE(755);
      if (lookahead == '/') ADVANCE(757);
      if (lookahead == ';') ADVANCE(751);
      if (lookahead == '<') ADVANCE(769);
      if (lookahead == '=') ADVANCE(773);
      if (lookahead == '>') ADVANCE(766);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == 'B') ADVANCE(338);
      if (lookahead == 'C') ADVANCE(336);
      if (lookahead == 'D') ADVANCE(177);
      if (lookahead == 'E') ADVANCE(386);
      if (lookahead == 'F') ADVANCE(365);
      if (lookahead == 'G') ADVANCE(545);
      if (lookahead == 'H') ADVANCE(460);
      if (lookahead == 'I') ADVANCE(427);
      if (lookahead == 'J') ADVANCE(651);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == 'O') ADVANCE(670);
      if (lookahead == 'P') ADVANCE(171);
      if (lookahead == 'Q') ADVANCE(660);
      if (lookahead == 'R') ADVANCE(247);
      if (lookahead == 'S') ADVANCE(72);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(343);
      if (lookahead == 'V') ADVANCE(248);
      if (lookahead == 'W') ADVANCE(350);
      if (lookahead == 'X') ADVANCE(87);
      if (lookahead == '[') ADVANCE(782);
      if (lookahead == ']') ADVANCE(783);
      if (lookahead == '^') ADVANCE(762);
      if (lookahead == 'v') ADVANCE(535);
      if (lookahead == '{') ADVANCE(743);
      if (lookahead == '|') ADVANCE(761);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(741)
      END_STATE();
    case 742:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(765);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(785);
      if (lookahead == '=') ADVANCE(777);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(784);
      if (lookahead == '=') ADVANCE(778);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(774);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(775);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(776);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(781);
      if (lookahead == '|') ADVANCE(759);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(780);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(760);
      if (lookahead == '=') ADVANCE(779);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(767);
      if (lookahead == '>') ADVANCE(771);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(770);
      if (lookahead == '=') ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(764);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(1539);
      if (lookahead == '3') ADVANCE(1541);
      if (lookahead == '4') ADVANCE(1543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(1545);
      if (lookahead == '4') ADVANCE(1547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1276);
      if (lookahead == 'Q') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1256);
      if (lookahead == 'P') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1272);
      if (lookahead == 'M') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(1306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(1431);
      if (lookahead == '_') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(865);
      if (lookahead == 'c') ADVANCE(1344);
      if (lookahead == 'e') ADVANCE(1107);
      if (lookahead == 'h') ADVANCE(1069);
      if (lookahead == 'o') ADVANCE(1438);
      if (lookahead == 'p') ADVANCE(1129);
      if (lookahead == 'y') ADVANCE(1191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(1243);
      if (lookahead == 'N') ADVANCE(1307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1014);
      if (lookahead == 'S') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(1185);
      if (lookahead == 'I') ADVANCE(1224);
      if (lookahead == 'R') ADVANCE(1074);
      if (lookahead == 'T') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1132);
      if (lookahead == 'L') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'F') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(855);
      if (lookahead == 'Y') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(1450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(1073);
      if (lookahead == 'X') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Y') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Z') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Y') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(860);
      if (lookahead == 't') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(797);
      if (lookahead == 'd') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(989);
      if (lookahead == 'e') ADVANCE(1215);
      if (lookahead == 'o') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1195);
      if (lookahead == 'e') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1218);
      if (lookahead == 'l') ADVANCE(1247);
      if (lookahead == 'o') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == 'e') ADVANCE(1192);
      if (lookahead == 'i') ADVANCE(988);
      if (lookahead == 'r') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1316);
      if (lookahead == 'i') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1387);
      if (lookahead == 'e') ADVANCE(1175);
      if (lookahead == 'i') ADVANCE(1335);
      if (lookahead == 'r') ADVANCE(965);
      if (lookahead == 'y') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(980);
      if (lookahead == 'e') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1142);
      if (lookahead == 'o') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1155);
      if (lookahead == 'p') ADVANCE(1311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1227);
      if (lookahead == 'e') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(879);
      if (lookahead == 'r') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1310);
      if (lookahead == 'm') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(1446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1152);
      if (lookahead == 'n') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1338);
      if (lookahead == 'n') ADVANCE(1443);
      if (lookahead == 'p') ADVANCE(876);
      if (lookahead == 't') ADVANCE(1340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1407);
      if (lookahead == 'r') ADVANCE(1393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(1423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(1421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(1518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1197);
      if (lookahead == 'l') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(951);
      if (lookahead == 'o') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1163);
      if (lookahead == 'l') ADVANCE(1235);
      if (lookahead == 'u') ADVANCE(1389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1097);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1005);
      if (lookahead == 'n') ADVANCE(1010);
      if (lookahead == 'p') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1165);
      if (lookahead == 'u') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1219);
      if (lookahead == 'l') ADVANCE(1513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1065);
      if (lookahead == 'q') ADVANCE(1435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1176);
      if (lookahead == 't') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1313);
      if (lookahead == 'n') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(933);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1090);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1320);
      if (lookahead == 'x') ADVANCE(1376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(1089);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1101);
      if (lookahead == 'r') ADVANCE(987);
      if (lookahead == 't') ADVANCE(1402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1434);
      if (lookahead == 's') ADVANCE(1365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1022);
      if (lookahead == 's') ADVANCE(1374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1041);
      if (lookahead == 'r') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1332);
      if (lookahead == 'y') ADVANCE(1322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1476);
      if (lookahead == 'u') ADVANCE(1404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1440);
      if (lookahead == 's') ADVANCE(1044);
      if (lookahead == 't') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == 'u') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(1372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(1521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(1564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'w') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1524);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1524);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1525);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1528);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(1528);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(847);
      if (lookahead == 's') ADVANCE(1417);
      if (lookahead == 'u') ADVANCE(1356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 's') ADVANCE(635);
      if (lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(anon_sym_Vector2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(anon_sym_Vector3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_Vector4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_Point);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(607);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(anon_sym_Arc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1554:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(anon_sym_Spiral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(anon_sym_Parabola);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(anon_sym_Segment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1560:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 1561:
      ACCEPT_TOKEN(anon_sym_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 1566:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1568:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(anon_sym_Uid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(anon_sym_Guid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1574:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1575:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 1576:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 1577:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1578:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 1579:
      ACCEPT_TOKEN(anon_sym_Blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 1583:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 1585:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1586:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1587:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 1588:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 1589:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1591:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(anon_sym_Menu);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 1595:
      ACCEPT_TOKEN(anon_sym_Panel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 1597:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(anon_sym_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1606:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1610:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 1615:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1620:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 1621:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 1633:
      ACCEPT_TOKEN(anon_sym_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 1635:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1640:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 1643:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1648:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 1649:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1650:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(anon_sym_List_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1652:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1664:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1670:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 1671:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1672:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1676:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(1360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1677:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 1678:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1682:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 1683:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1684:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 1685:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1686:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 1687:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1688:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 1689:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1690:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 1691:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 1693:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1706:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(anon_sym_View_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1708:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1711:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 1712:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1713:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 1714:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1718:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 1719:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1720:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(anon_sym_Connection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1722:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 1723:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 1725:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1728:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 1731:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1732:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 1733:
      ACCEPT_TOKEN(anon_sym_Transactions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1734:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 1735:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1738:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1744:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 1745:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    case 1746:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      END_STATE();
    case 1747:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1524);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 741},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 741},
  [41] = {.lex_state = 741},
  [42] = {.lex_state = 741},
  [43] = {.lex_state = 741},
  [44] = {.lex_state = 741},
  [45] = {.lex_state = 741},
  [46] = {.lex_state = 741},
  [47] = {.lex_state = 741},
  [48] = {.lex_state = 741},
  [49] = {.lex_state = 741},
  [50] = {.lex_state = 741},
  [51] = {.lex_state = 741},
  [52] = {.lex_state = 741},
  [53] = {.lex_state = 741},
  [54] = {.lex_state = 741},
  [55] = {.lex_state = 741},
  [56] = {.lex_state = 741},
  [57] = {.lex_state = 741},
  [58] = {.lex_state = 741},
  [59] = {.lex_state = 741},
  [60] = {.lex_state = 741},
  [61] = {.lex_state = 741},
  [62] = {.lex_state = 741},
  [63] = {.lex_state = 741},
  [64] = {.lex_state = 741},
  [65] = {.lex_state = 741},
  [66] = {.lex_state = 741},
  [67] = {.lex_state = 741},
  [68] = {.lex_state = 741},
  [69] = {.lex_state = 741},
  [70] = {.lex_state = 741},
  [71] = {.lex_state = 741},
  [72] = {.lex_state = 741},
  [73] = {.lex_state = 741},
  [74] = {.lex_state = 741},
  [75] = {.lex_state = 741},
  [76] = {.lex_state = 741},
  [77] = {.lex_state = 741},
  [78] = {.lex_state = 741},
  [79] = {.lex_state = 741},
  [80] = {.lex_state = 741},
  [81] = {.lex_state = 741},
  [82] = {.lex_state = 741},
  [83] = {.lex_state = 741},
  [84] = {.lex_state = 741},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 3},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_escape_sequence] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym__definition] = STATE(40),
    [sym_function_definition] = STATE(40),
    [sym_compound_statement] = STATE(40),
    [sym__declaration_specifiers] = STATE(132),
    [sym__type_specifier] = STATE(147),
    [sym_primitive_type] = STATE(147),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [2] = {
    [sym_compound_statement] = STATE(8),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(8),
    [sym__non_case_statement] = STATE(8),
    [sym_if_statement] = STATE(8),
    [sym_for_statement] = STATE(8),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(8),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(8),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(8),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(8),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [3] = {
    [sym_compound_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(38),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_BANG] = ACTIONS(50),
    [anon_sym_return] = ACTIONS(53),
    [sym_identifier] = ACTIONS(56),
    [sym_number_literal] = ACTIONS(59),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [anon_sym_void] = ACTIONS(65),
    [anon_sym_Integer] = ACTIONS(65),
    [anon_sym_Real] = ACTIONS(65),
    [anon_sym_Text] = ACTIONS(65),
    [anon_sym_Vector2] = ACTIONS(65),
    [anon_sym_Vector3] = ACTIONS(65),
    [anon_sym_Vector4] = ACTIONS(65),
    [anon_sym_Matrix3] = ACTIONS(65),
    [anon_sym_Matrix4] = ACTIONS(65),
    [anon_sym_Point] = ACTIONS(65),
    [anon_sym_Line] = ACTIONS(65),
    [anon_sym_Arc] = ACTIONS(65),
    [anon_sym_Spiral] = ACTIONS(65),
    [anon_sym_Parabola] = ACTIONS(65),
    [anon_sym_Segment] = ACTIONS(65),
    [anon_sym_Element] = ACTIONS(65),
    [anon_sym_Model] = ACTIONS(65),
    [anon_sym_View] = ACTIONS(65),
    [anon_sym_Macro_Function] = ACTIONS(65),
    [anon_sym_Function] = ACTIONS(65),
    [anon_sym_Uid] = ACTIONS(65),
    [anon_sym_Guid] = ACTIONS(65),
    [anon_sym_Attributes] = ACTIONS(65),
    [anon_sym_SDR_Attribute] = ACTIONS(65),
    [anon_sym_Blob] = ACTIONS(65),
    [anon_sym_Screen_Text] = ACTIONS(65),
    [anon_sym_Textstyle_Data] = ACTIONS(65),
    [anon_sym_Equality_Label] = ACTIONS(65),
    [anon_sym_Undo] = ACTIONS(65),
    [anon_sym_Undo_List] = ACTIONS(65),
    [anon_sym_Widget] = ACTIONS(65),
    [anon_sym_Menu] = ACTIONS(65),
    [anon_sym_Panel] = ACTIONS(65),
    [anon_sym_Overlay_Widget] = ACTIONS(65),
    [anon_sym_Vertical_Group] = ACTIONS(65),
    [anon_sym_Horizontal_Group] = ACTIONS(65),
    [anon_sym_Widget_Pages] = ACTIONS(65),
    [anon_sym_Button] = ACTIONS(65),
    [anon_sym_Select_Button] = ACTIONS(65),
    [anon_sym_Angle_Box] = ACTIONS(65),
    [anon_sym_Attributes_Box] = ACTIONS(65),
    [anon_sym_Billboard_Box] = ACTIONS(65),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(65),
    [anon_sym_Bitmap_List_Box] = ACTIONS(65),
    [anon_sym_Chainage_Box] = ACTIONS(65),
    [anon_sym_Choice_Box] = ACTIONS(65),
    [anon_sym_Colour_Box] = ACTIONS(65),
    [anon_sym_Colour_Message_Box] = ACTIONS(65),
    [anon_sym_Date_Time_Box] = ACTIONS(65),
    [anon_sym_Directory_Box] = ACTIONS(65),
    [anon_sym_Draw_Box] = ACTIONS(65),
    [anon_sym_File_Box] = ACTIONS(65),
    [anon_sym_Function_Box] = ACTIONS(65),
    [anon_sym_Graph_Box] = ACTIONS(65),
    [anon_sym_GridCtrl_Box] = ACTIONS(65),
    [anon_sym_HyperLink_Box] = ACTIONS(65),
    [anon_sym_Input_Box] = ACTIONS(65),
    [anon_sym_Integer_Box] = ACTIONS(65),
    [anon_sym_Justify_Box] = ACTIONS(65),
    [anon_sym_Linestyle_Box] = ACTIONS(65),
    [anon_sym_List_Box] = ACTIONS(65),
    [anon_sym_ListCtrl_Box] = ACTIONS(65),
    [anon_sym_Map_File_Box] = ACTIONS(65),
    [anon_sym_Message_Box] = ACTIONS(65),
    [anon_sym_Model_Box] = ACTIONS(65),
    [anon_sym_Name_Box] = ACTIONS(65),
    [anon_sym_Named_Tick_Box] = ACTIONS(65),
    [anon_sym_New_Select_Box] = ACTIONS(65),
    [anon_sym_New_XYZ_Box] = ACTIONS(65),
    [anon_sym_Plotter_Box] = ACTIONS(65),
    [anon_sym_Polygon_Box] = ACTIONS(65),
    [anon_sym_Real_Box] = ACTIONS(65),
    [anon_sym_Report_Box] = ACTIONS(65),
    [anon_sym_Select_Box] = ACTIONS(65),
    [anon_sym_Select_Boxes] = ACTIONS(65),
    [anon_sym_Sheet_Size_Box] = ACTIONS(65),
    [anon_sym_Source_Box] = ACTIONS(65),
    [anon_sym_Symbol_Box] = ACTIONS(65),
    [anon_sym_Tab_Box] = ACTIONS(65),
    [anon_sym_Target_Box] = ACTIONS(65),
    [anon_sym_Template_Box] = ACTIONS(65),
    [anon_sym_Text_Edit_Box] = ACTIONS(65),
    [anon_sym_Text_Style_Box] = ACTIONS(65),
    [anon_sym_Texture_Box] = ACTIONS(65),
    [anon_sym_Tree_Box] = ACTIONS(65),
    [anon_sym_Tree_Page] = ACTIONS(65),
    [anon_sym_Tick_Box] = ACTIONS(65),
    [anon_sym_Tin_Box] = ACTIONS(65),
    [anon_sym_View_Box] = ACTIONS(65),
    [anon_sym_XYZ_Box] = ACTIONS(65),
    [anon_sym_File] = ACTIONS(65),
    [anon_sym_Map_File] = ACTIONS(65),
    [anon_sym_Plot_Parameter_File] = ACTIONS(65),
    [anon_sym_XML_Document] = ACTIONS(65),
    [anon_sym_XML_Node] = ACTIONS(65),
    [anon_sym_Connection] = ACTIONS(65),
    [anon_sym_Select_Query] = ACTIONS(65),
    [anon_sym_Insert_Query] = ACTIONS(65),
    [anon_sym_Update_Query] = ACTIONS(65),
    [anon_sym_Delete_Query] = ACTIONS(65),
    [anon_sym_Database_Results] = ACTIONS(65),
    [anon_sym_Transactions] = ACTIONS(65),
    [anon_sym_Parameter_Collection] = ACTIONS(65),
    [anon_sym_Query_Condition] = ACTIONS(65),
    [anon_sym_Manual_Condition] = ACTIONS(65),
    [anon_sym_Dynamic_Element] = ACTIONS(65),
    [anon_sym_Dynamic_Integer] = ACTIONS(65),
    [anon_sym_Dynamic_Real] = ACTIONS(65),
    [anon_sym_Dynamic_Text] = ACTIONS(65),
  },
  [4] = {
    [sym_compound_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [5] = {
    [sym_compound_statement] = STATE(4),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(4),
    [sym__non_case_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(4),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(4),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(4),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [6] = {
    [sym_compound_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [7] = {
    [sym_compound_statement] = STATE(6),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(6),
    [sym__non_case_statement] = STATE(6),
    [sym_if_statement] = STATE(6),
    [sym_for_statement] = STATE(6),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(6),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(6),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(6),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(6),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [8] = {
    [sym_compound_statement] = STATE(3),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_for_statement] = STATE(3),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(3),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(3),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(147),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [9] = {
    [sym_compound_statement] = STATE(19),
    [sym__declaration_specifiers] = STATE(124),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(19),
    [sym__non_case_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_for_statement] = STATE(19),
    [sym_unary_expression] = STATE(73),
    [sym_expression_statement] = STATE(19),
    [sym_comma_expression] = STATE(158),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(19),
    [sym__expression] = STATE(73),
    [sym_string_literal] = STATE(73),
    [sym_declaration] = STATE(19),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(86),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [10] = {
    [sym_compound_statement] = STATE(24),
    [sym__declaration_specifiers] = STATE(124),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(24),
    [sym__non_case_statement] = STATE(24),
    [sym_if_statement] = STATE(24),
    [sym_for_statement] = STATE(24),
    [sym_unary_expression] = STATE(73),
    [sym_expression_statement] = STATE(24),
    [sym_comma_expression] = STATE(158),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(24),
    [sym__expression] = STATE(73),
    [sym_string_literal] = STATE(73),
    [sym_declaration] = STATE(24),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(86),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [11] = {
    [sym_compound_statement] = STATE(35),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(35),
    [sym__non_case_statement] = STATE(35),
    [sym_if_statement] = STATE(35),
    [sym_for_statement] = STATE(35),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(35),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(35),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(35),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [12] = {
    [sym_compound_statement] = STATE(33),
    [sym__declaration_specifiers] = STATE(125),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(33),
    [sym__non_case_statement] = STATE(33),
    [sym_if_statement] = STATE(33),
    [sym_for_statement] = STATE(33),
    [sym_unary_expression] = STATE(72),
    [sym_expression_statement] = STATE(33),
    [sym_comma_expression] = STATE(157),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(72),
    [sym_assignment_expression] = STATE(72),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(72),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(33),
    [sym__expression] = STATE(72),
    [sym_string_literal] = STATE(72),
    [sym_declaration] = STATE(33),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(17),
    [anon_sym_for] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(25),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [13] = {
    [sym_compound_statement] = STATE(20),
    [sym__declaration_specifiers] = STATE(124),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(20),
    [sym__non_case_statement] = STATE(20),
    [sym_if_statement] = STATE(20),
    [sym_for_statement] = STATE(20),
    [sym_unary_expression] = STATE(73),
    [sym_expression_statement] = STATE(20),
    [sym_comma_expression] = STATE(158),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(20),
    [sym__expression] = STATE(73),
    [sym_string_literal] = STATE(73),
    [sym_declaration] = STATE(20),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(86),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [14] = {
    [sym_compound_statement] = STATE(21),
    [sym__declaration_specifiers] = STATE(124),
    [sym__type_specifier] = STATE(147),
    [sym__statement] = STATE(21),
    [sym__non_case_statement] = STATE(21),
    [sym_if_statement] = STATE(21),
    [sym_for_statement] = STATE(21),
    [sym_unary_expression] = STATE(73),
    [sym_expression_statement] = STATE(21),
    [sym_comma_expression] = STATE(158),
    [sym_call_expression] = STATE(54),
    [sym_binary_expression] = STATE(73),
    [sym_assignment_expression] = STATE(73),
    [sym__assignment_left_expression] = STATE(110),
    [sym_subscript_expression] = STATE(54),
    [sym_update_expression] = STATE(73),
    [sym_parenthesized_expression] = STATE(110),
    [sym_return_statement] = STATE(21),
    [sym__expression] = STATE(73),
    [sym_string_literal] = STATE(73),
    [sym_declaration] = STATE(21),
    [sym_primitive_type] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_if] = ACTIONS(80),
    [anon_sym_for] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_return] = ACTIONS(86),
    [sym_identifier] = ACTIONS(27),
    [sym_number_literal] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_void] = ACTIONS(9),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(9),
    [anon_sym_Vector3] = ACTIONS(9),
    [anon_sym_Vector4] = ACTIONS(9),
    [anon_sym_Matrix3] = ACTIONS(9),
    [anon_sym_Matrix4] = ACTIONS(9),
    [anon_sym_Point] = ACTIONS(9),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(9),
    [anon_sym_Spiral] = ACTIONS(9),
    [anon_sym_Parabola] = ACTIONS(9),
    [anon_sym_Segment] = ACTIONS(9),
    [anon_sym_Element] = ACTIONS(9),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(9),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(9),
    [anon_sym_Guid] = ACTIONS(9),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(9),
    [anon_sym_Blob] = ACTIONS(9),
    [anon_sym_Screen_Text] = ACTIONS(9),
    [anon_sym_Textstyle_Data] = ACTIONS(9),
    [anon_sym_Equality_Label] = ACTIONS(9),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(9),
    [anon_sym_Widget] = ACTIONS(9),
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
    [anon_sym_Select_Box] = ACTIONS(9),
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
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
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
  },
  [15] = {
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [anon_sym_if] = ACTIONS(92),
    [anon_sym_for] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_BANG] = ACTIONS(90),
    [anon_sym_EQ] = ACTIONS(90),
    [anon_sym_STAR_EQ] = ACTIONS(90),
    [anon_sym_SLASH_EQ] = ACTIONS(90),
    [anon_sym_PERCENT_EQ] = ACTIONS(90),
    [anon_sym_PLUS_EQ] = ACTIONS(90),
    [anon_sym_DASH_EQ] = ACTIONS(90),
    [anon_sym_AMP_EQ] = ACTIONS(90),
    [anon_sym_CARET_EQ] = ACTIONS(90),
    [anon_sym_PIPE_EQ] = ACTIONS(90),
    [anon_sym_return] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [sym_number_literal] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [anon_sym_void] = ACTIONS(92),
    [anon_sym_Integer] = ACTIONS(92),
    [anon_sym_Real] = ACTIONS(92),
    [anon_sym_Text] = ACTIONS(92),
    [anon_sym_Vector2] = ACTIONS(92),
    [anon_sym_Vector3] = ACTIONS(92),
    [anon_sym_Vector4] = ACTIONS(92),
    [anon_sym_Matrix3] = ACTIONS(92),
    [anon_sym_Matrix4] = ACTIONS(92),
    [anon_sym_Point] = ACTIONS(92),
    [anon_sym_Line] = ACTIONS(92),
    [anon_sym_Arc] = ACTIONS(92),
    [anon_sym_Spiral] = ACTIONS(92),
    [anon_sym_Parabola] = ACTIONS(92),
    [anon_sym_Segment] = ACTIONS(92),
    [anon_sym_Element] = ACTIONS(92),
    [anon_sym_Model] = ACTIONS(92),
    [anon_sym_View] = ACTIONS(92),
    [anon_sym_Macro_Function] = ACTIONS(92),
    [anon_sym_Function] = ACTIONS(92),
    [anon_sym_Uid] = ACTIONS(92),
    [anon_sym_Guid] = ACTIONS(92),
    [anon_sym_Attributes] = ACTIONS(92),
    [anon_sym_SDR_Attribute] = ACTIONS(92),
    [anon_sym_Blob] = ACTIONS(92),
    [anon_sym_Screen_Text] = ACTIONS(92),
    [anon_sym_Textstyle_Data] = ACTIONS(92),
    [anon_sym_Equality_Label] = ACTIONS(92),
    [anon_sym_Undo] = ACTIONS(92),
    [anon_sym_Undo_List] = ACTIONS(92),
    [anon_sym_Widget] = ACTIONS(92),
    [anon_sym_Menu] = ACTIONS(92),
    [anon_sym_Panel] = ACTIONS(92),
    [anon_sym_Overlay_Widget] = ACTIONS(92),
    [anon_sym_Vertical_Group] = ACTIONS(92),
    [anon_sym_Horizontal_Group] = ACTIONS(92),
    [anon_sym_Widget_Pages] = ACTIONS(92),
    [anon_sym_Button] = ACTIONS(92),
    [anon_sym_Select_Button] = ACTIONS(92),
    [anon_sym_Angle_Box] = ACTIONS(92),
    [anon_sym_Attributes_Box] = ACTIONS(92),
    [anon_sym_Billboard_Box] = ACTIONS(92),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(92),
    [anon_sym_Bitmap_List_Box] = ACTIONS(92),
    [anon_sym_Chainage_Box] = ACTIONS(92),
    [anon_sym_Choice_Box] = ACTIONS(92),
    [anon_sym_Colour_Box] = ACTIONS(92),
    [anon_sym_Colour_Message_Box] = ACTIONS(92),
    [anon_sym_Date_Time_Box] = ACTIONS(92),
    [anon_sym_Directory_Box] = ACTIONS(92),
    [anon_sym_Draw_Box] = ACTIONS(92),
    [anon_sym_File_Box] = ACTIONS(92),
    [anon_sym_Function_Box] = ACTIONS(92),
    [anon_sym_Graph_Box] = ACTIONS(92),
    [anon_sym_GridCtrl_Box] = ACTIONS(92),
    [anon_sym_HyperLink_Box] = ACTIONS(92),
    [anon_sym_Input_Box] = ACTIONS(92),
    [anon_sym_Integer_Box] = ACTIONS(92),
    [anon_sym_Justify_Box] = ACTIONS(92),
    [anon_sym_Linestyle_Box] = ACTIONS(92),
    [anon_sym_List_Box] = ACTIONS(92),
    [anon_sym_ListCtrl_Box] = ACTIONS(92),
    [anon_sym_Map_File_Box] = ACTIONS(92),
    [anon_sym_Message_Box] = ACTIONS(92),
    [anon_sym_Model_Box] = ACTIONS(92),
    [anon_sym_Name_Box] = ACTIONS(92),
    [anon_sym_Named_Tick_Box] = ACTIONS(92),
    [anon_sym_New_Select_Box] = ACTIONS(92),
    [anon_sym_New_XYZ_Box] = ACTIONS(92),
    [anon_sym_Plotter_Box] = ACTIONS(92),
    [anon_sym_Polygon_Box] = ACTIONS(92),
    [anon_sym_Real_Box] = ACTIONS(92),
    [anon_sym_Report_Box] = ACTIONS(92),
    [anon_sym_Select_Box] = ACTIONS(92),
    [anon_sym_Select_Boxes] = ACTIONS(92),
    [anon_sym_Sheet_Size_Box] = ACTIONS(92),
    [anon_sym_Source_Box] = ACTIONS(92),
    [anon_sym_Symbol_Box] = ACTIONS(92),
    [anon_sym_Tab_Box] = ACTIONS(92),
    [anon_sym_Target_Box] = ACTIONS(92),
    [anon_sym_Template_Box] = ACTIONS(92),
    [anon_sym_Text_Edit_Box] = ACTIONS(92),
    [anon_sym_Text_Style_Box] = ACTIONS(92),
    [anon_sym_Texture_Box] = ACTIONS(92),
    [anon_sym_Tree_Box] = ACTIONS(92),
    [anon_sym_Tree_Page] = ACTIONS(92),
    [anon_sym_Tick_Box] = ACTIONS(92),
    [anon_sym_Tin_Box] = ACTIONS(92),
    [anon_sym_View_Box] = ACTIONS(92),
    [anon_sym_XYZ_Box] = ACTIONS(92),
    [anon_sym_File] = ACTIONS(92),
    [anon_sym_Map_File] = ACTIONS(92),
    [anon_sym_Plot_Parameter_File] = ACTIONS(92),
    [anon_sym_XML_Document] = ACTIONS(92),
    [anon_sym_XML_Node] = ACTIONS(92),
    [anon_sym_Connection] = ACTIONS(92),
    [anon_sym_Select_Query] = ACTIONS(92),
    [anon_sym_Insert_Query] = ACTIONS(92),
    [anon_sym_Update_Query] = ACTIONS(92),
    [anon_sym_Delete_Query] = ACTIONS(92),
    [anon_sym_Database_Results] = ACTIONS(92),
    [anon_sym_Transactions] = ACTIONS(92),
    [anon_sym_Parameter_Collection] = ACTIONS(92),
    [anon_sym_Query_Condition] = ACTIONS(92),
    [anon_sym_Manual_Condition] = ACTIONS(92),
    [anon_sym_Dynamic_Element] = ACTIONS(92),
    [anon_sym_Dynamic_Integer] = ACTIONS(92),
    [anon_sym_Dynamic_Real] = ACTIONS(92),
    [anon_sym_Dynamic_Text] = ACTIONS(92),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(96),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_Integer] = ACTIONS(96),
    [anon_sym_Real] = ACTIONS(96),
    [anon_sym_Text] = ACTIONS(96),
    [anon_sym_Vector2] = ACTIONS(96),
    [anon_sym_Vector3] = ACTIONS(96),
    [anon_sym_Vector4] = ACTIONS(96),
    [anon_sym_Matrix3] = ACTIONS(96),
    [anon_sym_Matrix4] = ACTIONS(96),
    [anon_sym_Point] = ACTIONS(96),
    [anon_sym_Line] = ACTIONS(96),
    [anon_sym_Arc] = ACTIONS(96),
    [anon_sym_Spiral] = ACTIONS(96),
    [anon_sym_Parabola] = ACTIONS(96),
    [anon_sym_Segment] = ACTIONS(96),
    [anon_sym_Element] = ACTIONS(96),
    [anon_sym_Model] = ACTIONS(96),
    [anon_sym_View] = ACTIONS(96),
    [anon_sym_Macro_Function] = ACTIONS(96),
    [anon_sym_Function] = ACTIONS(96),
    [anon_sym_Uid] = ACTIONS(96),
    [anon_sym_Guid] = ACTIONS(96),
    [anon_sym_Attributes] = ACTIONS(96),
    [anon_sym_SDR_Attribute] = ACTIONS(96),
    [anon_sym_Blob] = ACTIONS(96),
    [anon_sym_Screen_Text] = ACTIONS(96),
    [anon_sym_Textstyle_Data] = ACTIONS(96),
    [anon_sym_Equality_Label] = ACTIONS(96),
    [anon_sym_Undo] = ACTIONS(96),
    [anon_sym_Undo_List] = ACTIONS(96),
    [anon_sym_Widget] = ACTIONS(96),
    [anon_sym_Menu] = ACTIONS(96),
    [anon_sym_Panel] = ACTIONS(96),
    [anon_sym_Overlay_Widget] = ACTIONS(96),
    [anon_sym_Vertical_Group] = ACTIONS(96),
    [anon_sym_Horizontal_Group] = ACTIONS(96),
    [anon_sym_Widget_Pages] = ACTIONS(96),
    [anon_sym_Button] = ACTIONS(96),
    [anon_sym_Select_Button] = ACTIONS(96),
    [anon_sym_Angle_Box] = ACTIONS(96),
    [anon_sym_Attributes_Box] = ACTIONS(96),
    [anon_sym_Billboard_Box] = ACTIONS(96),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(96),
    [anon_sym_Bitmap_List_Box] = ACTIONS(96),
    [anon_sym_Chainage_Box] = ACTIONS(96),
    [anon_sym_Choice_Box] = ACTIONS(96),
    [anon_sym_Colour_Box] = ACTIONS(96),
    [anon_sym_Colour_Message_Box] = ACTIONS(96),
    [anon_sym_Date_Time_Box] = ACTIONS(96),
    [anon_sym_Directory_Box] = ACTIONS(96),
    [anon_sym_Draw_Box] = ACTIONS(96),
    [anon_sym_File_Box] = ACTIONS(96),
    [anon_sym_Function_Box] = ACTIONS(96),
    [anon_sym_Graph_Box] = ACTIONS(96),
    [anon_sym_GridCtrl_Box] = ACTIONS(96),
    [anon_sym_HyperLink_Box] = ACTIONS(96),
    [anon_sym_Input_Box] = ACTIONS(96),
    [anon_sym_Integer_Box] = ACTIONS(96),
    [anon_sym_Justify_Box] = ACTIONS(96),
    [anon_sym_Linestyle_Box] = ACTIONS(96),
    [anon_sym_List_Box] = ACTIONS(96),
    [anon_sym_ListCtrl_Box] = ACTIONS(96),
    [anon_sym_Map_File_Box] = ACTIONS(96),
    [anon_sym_Message_Box] = ACTIONS(96),
    [anon_sym_Model_Box] = ACTIONS(96),
    [anon_sym_Name_Box] = ACTIONS(96),
    [anon_sym_Named_Tick_Box] = ACTIONS(96),
    [anon_sym_New_Select_Box] = ACTIONS(96),
    [anon_sym_New_XYZ_Box] = ACTIONS(96),
    [anon_sym_Plotter_Box] = ACTIONS(96),
    [anon_sym_Polygon_Box] = ACTIONS(96),
    [anon_sym_Real_Box] = ACTIONS(96),
    [anon_sym_Report_Box] = ACTIONS(96),
    [anon_sym_Select_Box] = ACTIONS(96),
    [anon_sym_Select_Boxes] = ACTIONS(96),
    [anon_sym_Sheet_Size_Box] = ACTIONS(96),
    [anon_sym_Source_Box] = ACTIONS(96),
    [anon_sym_Symbol_Box] = ACTIONS(96),
    [anon_sym_Tab_Box] = ACTIONS(96),
    [anon_sym_Target_Box] = ACTIONS(96),
    [anon_sym_Template_Box] = ACTIONS(96),
    [anon_sym_Text_Edit_Box] = ACTIONS(96),
    [anon_sym_Text_Style_Box] = ACTIONS(96),
    [anon_sym_Texture_Box] = ACTIONS(96),
    [anon_sym_Tree_Box] = ACTIONS(96),
    [anon_sym_Tree_Page] = ACTIONS(96),
    [anon_sym_Tick_Box] = ACTIONS(96),
    [anon_sym_Tin_Box] = ACTIONS(96),
    [anon_sym_View_Box] = ACTIONS(96),
    [anon_sym_XYZ_Box] = ACTIONS(96),
    [anon_sym_File] = ACTIONS(96),
    [anon_sym_Map_File] = ACTIONS(96),
    [anon_sym_Plot_Parameter_File] = ACTIONS(96),
    [anon_sym_XML_Document] = ACTIONS(96),
    [anon_sym_XML_Node] = ACTIONS(96),
    [anon_sym_Connection] = ACTIONS(96),
    [anon_sym_Select_Query] = ACTIONS(96),
    [anon_sym_Insert_Query] = ACTIONS(96),
    [anon_sym_Update_Query] = ACTIONS(96),
    [anon_sym_Delete_Query] = ACTIONS(96),
    [anon_sym_Database_Results] = ACTIONS(96),
    [anon_sym_Transactions] = ACTIONS(96),
    [anon_sym_Parameter_Collection] = ACTIONS(96),
    [anon_sym_Query_Condition] = ACTIONS(96),
    [anon_sym_Manual_Condition] = ACTIONS(96),
    [anon_sym_Dynamic_Element] = ACTIONS(96),
    [anon_sym_Dynamic_Integer] = ACTIONS(96),
    [anon_sym_Dynamic_Real] = ACTIONS(96),
    [anon_sym_Dynamic_Text] = ACTIONS(96),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_else] = ACTIONS(100),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(100),
    [sym_identifier] = ACTIONS(100),
    [sym_number_literal] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_void] = ACTIONS(100),
    [anon_sym_Integer] = ACTIONS(100),
    [anon_sym_Real] = ACTIONS(100),
    [anon_sym_Text] = ACTIONS(100),
    [anon_sym_Vector2] = ACTIONS(100),
    [anon_sym_Vector3] = ACTIONS(100),
    [anon_sym_Vector4] = ACTIONS(100),
    [anon_sym_Matrix3] = ACTIONS(100),
    [anon_sym_Matrix4] = ACTIONS(100),
    [anon_sym_Point] = ACTIONS(100),
    [anon_sym_Line] = ACTIONS(100),
    [anon_sym_Arc] = ACTIONS(100),
    [anon_sym_Spiral] = ACTIONS(100),
    [anon_sym_Parabola] = ACTIONS(100),
    [anon_sym_Segment] = ACTIONS(100),
    [anon_sym_Element] = ACTIONS(100),
    [anon_sym_Model] = ACTIONS(100),
    [anon_sym_View] = ACTIONS(100),
    [anon_sym_Macro_Function] = ACTIONS(100),
    [anon_sym_Function] = ACTIONS(100),
    [anon_sym_Uid] = ACTIONS(100),
    [anon_sym_Guid] = ACTIONS(100),
    [anon_sym_Attributes] = ACTIONS(100),
    [anon_sym_SDR_Attribute] = ACTIONS(100),
    [anon_sym_Blob] = ACTIONS(100),
    [anon_sym_Screen_Text] = ACTIONS(100),
    [anon_sym_Textstyle_Data] = ACTIONS(100),
    [anon_sym_Equality_Label] = ACTIONS(100),
    [anon_sym_Undo] = ACTIONS(100),
    [anon_sym_Undo_List] = ACTIONS(100),
    [anon_sym_Widget] = ACTIONS(100),
    [anon_sym_Menu] = ACTIONS(100),
    [anon_sym_Panel] = ACTIONS(100),
    [anon_sym_Overlay_Widget] = ACTIONS(100),
    [anon_sym_Vertical_Group] = ACTIONS(100),
    [anon_sym_Horizontal_Group] = ACTIONS(100),
    [anon_sym_Widget_Pages] = ACTIONS(100),
    [anon_sym_Button] = ACTIONS(100),
    [anon_sym_Select_Button] = ACTIONS(100),
    [anon_sym_Angle_Box] = ACTIONS(100),
    [anon_sym_Attributes_Box] = ACTIONS(100),
    [anon_sym_Billboard_Box] = ACTIONS(100),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(100),
    [anon_sym_Bitmap_List_Box] = ACTIONS(100),
    [anon_sym_Chainage_Box] = ACTIONS(100),
    [anon_sym_Choice_Box] = ACTIONS(100),
    [anon_sym_Colour_Box] = ACTIONS(100),
    [anon_sym_Colour_Message_Box] = ACTIONS(100),
    [anon_sym_Date_Time_Box] = ACTIONS(100),
    [anon_sym_Directory_Box] = ACTIONS(100),
    [anon_sym_Draw_Box] = ACTIONS(100),
    [anon_sym_File_Box] = ACTIONS(100),
    [anon_sym_Function_Box] = ACTIONS(100),
    [anon_sym_Graph_Box] = ACTIONS(100),
    [anon_sym_GridCtrl_Box] = ACTIONS(100),
    [anon_sym_HyperLink_Box] = ACTIONS(100),
    [anon_sym_Input_Box] = ACTIONS(100),
    [anon_sym_Integer_Box] = ACTIONS(100),
    [anon_sym_Justify_Box] = ACTIONS(100),
    [anon_sym_Linestyle_Box] = ACTIONS(100),
    [anon_sym_List_Box] = ACTIONS(100),
    [anon_sym_ListCtrl_Box] = ACTIONS(100),
    [anon_sym_Map_File_Box] = ACTIONS(100),
    [anon_sym_Message_Box] = ACTIONS(100),
    [anon_sym_Model_Box] = ACTIONS(100),
    [anon_sym_Name_Box] = ACTIONS(100),
    [anon_sym_Named_Tick_Box] = ACTIONS(100),
    [anon_sym_New_Select_Box] = ACTIONS(100),
    [anon_sym_New_XYZ_Box] = ACTIONS(100),
    [anon_sym_Plotter_Box] = ACTIONS(100),
    [anon_sym_Polygon_Box] = ACTIONS(100),
    [anon_sym_Real_Box] = ACTIONS(100),
    [anon_sym_Report_Box] = ACTIONS(100),
    [anon_sym_Select_Box] = ACTIONS(100),
    [anon_sym_Select_Boxes] = ACTIONS(100),
    [anon_sym_Sheet_Size_Box] = ACTIONS(100),
    [anon_sym_Source_Box] = ACTIONS(100),
    [anon_sym_Symbol_Box] = ACTIONS(100),
    [anon_sym_Tab_Box] = ACTIONS(100),
    [anon_sym_Target_Box] = ACTIONS(100),
    [anon_sym_Template_Box] = ACTIONS(100),
    [anon_sym_Text_Edit_Box] = ACTIONS(100),
    [anon_sym_Text_Style_Box] = ACTIONS(100),
    [anon_sym_Texture_Box] = ACTIONS(100),
    [anon_sym_Tree_Box] = ACTIONS(100),
    [anon_sym_Tree_Page] = ACTIONS(100),
    [anon_sym_Tick_Box] = ACTIONS(100),
    [anon_sym_Tin_Box] = ACTIONS(100),
    [anon_sym_View_Box] = ACTIONS(100),
    [anon_sym_XYZ_Box] = ACTIONS(100),
    [anon_sym_File] = ACTIONS(100),
    [anon_sym_Map_File] = ACTIONS(100),
    [anon_sym_Plot_Parameter_File] = ACTIONS(100),
    [anon_sym_XML_Document] = ACTIONS(100),
    [anon_sym_XML_Node] = ACTIONS(100),
    [anon_sym_Connection] = ACTIONS(100),
    [anon_sym_Select_Query] = ACTIONS(100),
    [anon_sym_Insert_Query] = ACTIONS(100),
    [anon_sym_Update_Query] = ACTIONS(100),
    [anon_sym_Delete_Query] = ACTIONS(100),
    [anon_sym_Database_Results] = ACTIONS(100),
    [anon_sym_Transactions] = ACTIONS(100),
    [anon_sym_Parameter_Collection] = ACTIONS(100),
    [anon_sym_Query_Condition] = ACTIONS(100),
    [anon_sym_Manual_Condition] = ACTIONS(100),
    [anon_sym_Dynamic_Element] = ACTIONS(100),
    [anon_sym_Dynamic_Integer] = ACTIONS(100),
    [anon_sym_Dynamic_Real] = ACTIONS(100),
    [anon_sym_Dynamic_Text] = ACTIONS(100),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_else] = ACTIONS(104),
    [anon_sym_for] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(102),
    [anon_sym_return] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_void] = ACTIONS(104),
    [anon_sym_Integer] = ACTIONS(104),
    [anon_sym_Real] = ACTIONS(104),
    [anon_sym_Text] = ACTIONS(104),
    [anon_sym_Vector2] = ACTIONS(104),
    [anon_sym_Vector3] = ACTIONS(104),
    [anon_sym_Vector4] = ACTIONS(104),
    [anon_sym_Matrix3] = ACTIONS(104),
    [anon_sym_Matrix4] = ACTIONS(104),
    [anon_sym_Point] = ACTIONS(104),
    [anon_sym_Line] = ACTIONS(104),
    [anon_sym_Arc] = ACTIONS(104),
    [anon_sym_Spiral] = ACTIONS(104),
    [anon_sym_Parabola] = ACTIONS(104),
    [anon_sym_Segment] = ACTIONS(104),
    [anon_sym_Element] = ACTIONS(104),
    [anon_sym_Model] = ACTIONS(104),
    [anon_sym_View] = ACTIONS(104),
    [anon_sym_Macro_Function] = ACTIONS(104),
    [anon_sym_Function] = ACTIONS(104),
    [anon_sym_Uid] = ACTIONS(104),
    [anon_sym_Guid] = ACTIONS(104),
    [anon_sym_Attributes] = ACTIONS(104),
    [anon_sym_SDR_Attribute] = ACTIONS(104),
    [anon_sym_Blob] = ACTIONS(104),
    [anon_sym_Screen_Text] = ACTIONS(104),
    [anon_sym_Textstyle_Data] = ACTIONS(104),
    [anon_sym_Equality_Label] = ACTIONS(104),
    [anon_sym_Undo] = ACTIONS(104),
    [anon_sym_Undo_List] = ACTIONS(104),
    [anon_sym_Widget] = ACTIONS(104),
    [anon_sym_Menu] = ACTIONS(104),
    [anon_sym_Panel] = ACTIONS(104),
    [anon_sym_Overlay_Widget] = ACTIONS(104),
    [anon_sym_Vertical_Group] = ACTIONS(104),
    [anon_sym_Horizontal_Group] = ACTIONS(104),
    [anon_sym_Widget_Pages] = ACTIONS(104),
    [anon_sym_Button] = ACTIONS(104),
    [anon_sym_Select_Button] = ACTIONS(104),
    [anon_sym_Angle_Box] = ACTIONS(104),
    [anon_sym_Attributes_Box] = ACTIONS(104),
    [anon_sym_Billboard_Box] = ACTIONS(104),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(104),
    [anon_sym_Bitmap_List_Box] = ACTIONS(104),
    [anon_sym_Chainage_Box] = ACTIONS(104),
    [anon_sym_Choice_Box] = ACTIONS(104),
    [anon_sym_Colour_Box] = ACTIONS(104),
    [anon_sym_Colour_Message_Box] = ACTIONS(104),
    [anon_sym_Date_Time_Box] = ACTIONS(104),
    [anon_sym_Directory_Box] = ACTIONS(104),
    [anon_sym_Draw_Box] = ACTIONS(104),
    [anon_sym_File_Box] = ACTIONS(104),
    [anon_sym_Function_Box] = ACTIONS(104),
    [anon_sym_Graph_Box] = ACTIONS(104),
    [anon_sym_GridCtrl_Box] = ACTIONS(104),
    [anon_sym_HyperLink_Box] = ACTIONS(104),
    [anon_sym_Input_Box] = ACTIONS(104),
    [anon_sym_Integer_Box] = ACTIONS(104),
    [anon_sym_Justify_Box] = ACTIONS(104),
    [anon_sym_Linestyle_Box] = ACTIONS(104),
    [anon_sym_List_Box] = ACTIONS(104),
    [anon_sym_ListCtrl_Box] = ACTIONS(104),
    [anon_sym_Map_File_Box] = ACTIONS(104),
    [anon_sym_Message_Box] = ACTIONS(104),
    [anon_sym_Model_Box] = ACTIONS(104),
    [anon_sym_Name_Box] = ACTIONS(104),
    [anon_sym_Named_Tick_Box] = ACTIONS(104),
    [anon_sym_New_Select_Box] = ACTIONS(104),
    [anon_sym_New_XYZ_Box] = ACTIONS(104),
    [anon_sym_Plotter_Box] = ACTIONS(104),
    [anon_sym_Polygon_Box] = ACTIONS(104),
    [anon_sym_Real_Box] = ACTIONS(104),
    [anon_sym_Report_Box] = ACTIONS(104),
    [anon_sym_Select_Box] = ACTIONS(104),
    [anon_sym_Select_Boxes] = ACTIONS(104),
    [anon_sym_Sheet_Size_Box] = ACTIONS(104),
    [anon_sym_Source_Box] = ACTIONS(104),
    [anon_sym_Symbol_Box] = ACTIONS(104),
    [anon_sym_Tab_Box] = ACTIONS(104),
    [anon_sym_Target_Box] = ACTIONS(104),
    [anon_sym_Template_Box] = ACTIONS(104),
    [anon_sym_Text_Edit_Box] = ACTIONS(104),
    [anon_sym_Text_Style_Box] = ACTIONS(104),
    [anon_sym_Texture_Box] = ACTIONS(104),
    [anon_sym_Tree_Box] = ACTIONS(104),
    [anon_sym_Tree_Page] = ACTIONS(104),
    [anon_sym_Tick_Box] = ACTIONS(104),
    [anon_sym_Tin_Box] = ACTIONS(104),
    [anon_sym_View_Box] = ACTIONS(104),
    [anon_sym_XYZ_Box] = ACTIONS(104),
    [anon_sym_File] = ACTIONS(104),
    [anon_sym_Map_File] = ACTIONS(104),
    [anon_sym_Plot_Parameter_File] = ACTIONS(104),
    [anon_sym_XML_Document] = ACTIONS(104),
    [anon_sym_XML_Node] = ACTIONS(104),
    [anon_sym_Connection] = ACTIONS(104),
    [anon_sym_Select_Query] = ACTIONS(104),
    [anon_sym_Insert_Query] = ACTIONS(104),
    [anon_sym_Update_Query] = ACTIONS(104),
    [anon_sym_Delete_Query] = ACTIONS(104),
    [anon_sym_Database_Results] = ACTIONS(104),
    [anon_sym_Transactions] = ACTIONS(104),
    [anon_sym_Parameter_Collection] = ACTIONS(104),
    [anon_sym_Query_Condition] = ACTIONS(104),
    [anon_sym_Manual_Condition] = ACTIONS(104),
    [anon_sym_Dynamic_Element] = ACTIONS(104),
    [anon_sym_Dynamic_Integer] = ACTIONS(104),
    [anon_sym_Dynamic_Real] = ACTIONS(104),
    [anon_sym_Dynamic_Text] = ACTIONS(104),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_else] = ACTIONS(110),
    [anon_sym_for] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_return] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
    [sym_number_literal] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_void] = ACTIONS(108),
    [anon_sym_Integer] = ACTIONS(108),
    [anon_sym_Real] = ACTIONS(108),
    [anon_sym_Text] = ACTIONS(108),
    [anon_sym_Vector2] = ACTIONS(108),
    [anon_sym_Vector3] = ACTIONS(108),
    [anon_sym_Vector4] = ACTIONS(108),
    [anon_sym_Matrix3] = ACTIONS(108),
    [anon_sym_Matrix4] = ACTIONS(108),
    [anon_sym_Point] = ACTIONS(108),
    [anon_sym_Line] = ACTIONS(108),
    [anon_sym_Arc] = ACTIONS(108),
    [anon_sym_Spiral] = ACTIONS(108),
    [anon_sym_Parabola] = ACTIONS(108),
    [anon_sym_Segment] = ACTIONS(108),
    [anon_sym_Element] = ACTIONS(108),
    [anon_sym_Model] = ACTIONS(108),
    [anon_sym_View] = ACTIONS(108),
    [anon_sym_Macro_Function] = ACTIONS(108),
    [anon_sym_Function] = ACTIONS(108),
    [anon_sym_Uid] = ACTIONS(108),
    [anon_sym_Guid] = ACTIONS(108),
    [anon_sym_Attributes] = ACTIONS(108),
    [anon_sym_SDR_Attribute] = ACTIONS(108),
    [anon_sym_Blob] = ACTIONS(108),
    [anon_sym_Screen_Text] = ACTIONS(108),
    [anon_sym_Textstyle_Data] = ACTIONS(108),
    [anon_sym_Equality_Label] = ACTIONS(108),
    [anon_sym_Undo] = ACTIONS(108),
    [anon_sym_Undo_List] = ACTIONS(108),
    [anon_sym_Widget] = ACTIONS(108),
    [anon_sym_Menu] = ACTIONS(108),
    [anon_sym_Panel] = ACTIONS(108),
    [anon_sym_Overlay_Widget] = ACTIONS(108),
    [anon_sym_Vertical_Group] = ACTIONS(108),
    [anon_sym_Horizontal_Group] = ACTIONS(108),
    [anon_sym_Widget_Pages] = ACTIONS(108),
    [anon_sym_Button] = ACTIONS(108),
    [anon_sym_Select_Button] = ACTIONS(108),
    [anon_sym_Angle_Box] = ACTIONS(108),
    [anon_sym_Attributes_Box] = ACTIONS(108),
    [anon_sym_Billboard_Box] = ACTIONS(108),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(108),
    [anon_sym_Bitmap_List_Box] = ACTIONS(108),
    [anon_sym_Chainage_Box] = ACTIONS(108),
    [anon_sym_Choice_Box] = ACTIONS(108),
    [anon_sym_Colour_Box] = ACTIONS(108),
    [anon_sym_Colour_Message_Box] = ACTIONS(108),
    [anon_sym_Date_Time_Box] = ACTIONS(108),
    [anon_sym_Directory_Box] = ACTIONS(108),
    [anon_sym_Draw_Box] = ACTIONS(108),
    [anon_sym_File_Box] = ACTIONS(108),
    [anon_sym_Function_Box] = ACTIONS(108),
    [anon_sym_Graph_Box] = ACTIONS(108),
    [anon_sym_GridCtrl_Box] = ACTIONS(108),
    [anon_sym_HyperLink_Box] = ACTIONS(108),
    [anon_sym_Input_Box] = ACTIONS(108),
    [anon_sym_Integer_Box] = ACTIONS(108),
    [anon_sym_Justify_Box] = ACTIONS(108),
    [anon_sym_Linestyle_Box] = ACTIONS(108),
    [anon_sym_List_Box] = ACTIONS(108),
    [anon_sym_ListCtrl_Box] = ACTIONS(108),
    [anon_sym_Map_File_Box] = ACTIONS(108),
    [anon_sym_Message_Box] = ACTIONS(108),
    [anon_sym_Model_Box] = ACTIONS(108),
    [anon_sym_Name_Box] = ACTIONS(108),
    [anon_sym_Named_Tick_Box] = ACTIONS(108),
    [anon_sym_New_Select_Box] = ACTIONS(108),
    [anon_sym_New_XYZ_Box] = ACTIONS(108),
    [anon_sym_Plotter_Box] = ACTIONS(108),
    [anon_sym_Polygon_Box] = ACTIONS(108),
    [anon_sym_Real_Box] = ACTIONS(108),
    [anon_sym_Report_Box] = ACTIONS(108),
    [anon_sym_Select_Box] = ACTIONS(108),
    [anon_sym_Select_Boxes] = ACTIONS(108),
    [anon_sym_Sheet_Size_Box] = ACTIONS(108),
    [anon_sym_Source_Box] = ACTIONS(108),
    [anon_sym_Symbol_Box] = ACTIONS(108),
    [anon_sym_Tab_Box] = ACTIONS(108),
    [anon_sym_Target_Box] = ACTIONS(108),
    [anon_sym_Template_Box] = ACTIONS(108),
    [anon_sym_Text_Edit_Box] = ACTIONS(108),
    [anon_sym_Text_Style_Box] = ACTIONS(108),
    [anon_sym_Texture_Box] = ACTIONS(108),
    [anon_sym_Tree_Box] = ACTIONS(108),
    [anon_sym_Tree_Page] = ACTIONS(108),
    [anon_sym_Tick_Box] = ACTIONS(108),
    [anon_sym_Tin_Box] = ACTIONS(108),
    [anon_sym_View_Box] = ACTIONS(108),
    [anon_sym_XYZ_Box] = ACTIONS(108),
    [anon_sym_File] = ACTIONS(108),
    [anon_sym_Map_File] = ACTIONS(108),
    [anon_sym_Plot_Parameter_File] = ACTIONS(108),
    [anon_sym_XML_Document] = ACTIONS(108),
    [anon_sym_XML_Node] = ACTIONS(108),
    [anon_sym_Connection] = ACTIONS(108),
    [anon_sym_Select_Query] = ACTIONS(108),
    [anon_sym_Insert_Query] = ACTIONS(108),
    [anon_sym_Update_Query] = ACTIONS(108),
    [anon_sym_Delete_Query] = ACTIONS(108),
    [anon_sym_Database_Results] = ACTIONS(108),
    [anon_sym_Transactions] = ACTIONS(108),
    [anon_sym_Parameter_Collection] = ACTIONS(108),
    [anon_sym_Query_Condition] = ACTIONS(108),
    [anon_sym_Manual_Condition] = ACTIONS(108),
    [anon_sym_Dynamic_Element] = ACTIONS(108),
    [anon_sym_Dynamic_Integer] = ACTIONS(108),
    [anon_sym_Dynamic_Real] = ACTIONS(108),
    [anon_sym_Dynamic_Text] = ACTIONS(108),
  },
  [20] = {
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_else] = ACTIONS(114),
    [anon_sym_for] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_return] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_number_literal] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_void] = ACTIONS(114),
    [anon_sym_Integer] = ACTIONS(114),
    [anon_sym_Real] = ACTIONS(114),
    [anon_sym_Text] = ACTIONS(114),
    [anon_sym_Vector2] = ACTIONS(114),
    [anon_sym_Vector3] = ACTIONS(114),
    [anon_sym_Vector4] = ACTIONS(114),
    [anon_sym_Matrix3] = ACTIONS(114),
    [anon_sym_Matrix4] = ACTIONS(114),
    [anon_sym_Point] = ACTIONS(114),
    [anon_sym_Line] = ACTIONS(114),
    [anon_sym_Arc] = ACTIONS(114),
    [anon_sym_Spiral] = ACTIONS(114),
    [anon_sym_Parabola] = ACTIONS(114),
    [anon_sym_Segment] = ACTIONS(114),
    [anon_sym_Element] = ACTIONS(114),
    [anon_sym_Model] = ACTIONS(114),
    [anon_sym_View] = ACTIONS(114),
    [anon_sym_Macro_Function] = ACTIONS(114),
    [anon_sym_Function] = ACTIONS(114),
    [anon_sym_Uid] = ACTIONS(114),
    [anon_sym_Guid] = ACTIONS(114),
    [anon_sym_Attributes] = ACTIONS(114),
    [anon_sym_SDR_Attribute] = ACTIONS(114),
    [anon_sym_Blob] = ACTIONS(114),
    [anon_sym_Screen_Text] = ACTIONS(114),
    [anon_sym_Textstyle_Data] = ACTIONS(114),
    [anon_sym_Equality_Label] = ACTIONS(114),
    [anon_sym_Undo] = ACTIONS(114),
    [anon_sym_Undo_List] = ACTIONS(114),
    [anon_sym_Widget] = ACTIONS(114),
    [anon_sym_Menu] = ACTIONS(114),
    [anon_sym_Panel] = ACTIONS(114),
    [anon_sym_Overlay_Widget] = ACTIONS(114),
    [anon_sym_Vertical_Group] = ACTIONS(114),
    [anon_sym_Horizontal_Group] = ACTIONS(114),
    [anon_sym_Widget_Pages] = ACTIONS(114),
    [anon_sym_Button] = ACTIONS(114),
    [anon_sym_Select_Button] = ACTIONS(114),
    [anon_sym_Angle_Box] = ACTIONS(114),
    [anon_sym_Attributes_Box] = ACTIONS(114),
    [anon_sym_Billboard_Box] = ACTIONS(114),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(114),
    [anon_sym_Bitmap_List_Box] = ACTIONS(114),
    [anon_sym_Chainage_Box] = ACTIONS(114),
    [anon_sym_Choice_Box] = ACTIONS(114),
    [anon_sym_Colour_Box] = ACTIONS(114),
    [anon_sym_Colour_Message_Box] = ACTIONS(114),
    [anon_sym_Date_Time_Box] = ACTIONS(114),
    [anon_sym_Directory_Box] = ACTIONS(114),
    [anon_sym_Draw_Box] = ACTIONS(114),
    [anon_sym_File_Box] = ACTIONS(114),
    [anon_sym_Function_Box] = ACTIONS(114),
    [anon_sym_Graph_Box] = ACTIONS(114),
    [anon_sym_GridCtrl_Box] = ACTIONS(114),
    [anon_sym_HyperLink_Box] = ACTIONS(114),
    [anon_sym_Input_Box] = ACTIONS(114),
    [anon_sym_Integer_Box] = ACTIONS(114),
    [anon_sym_Justify_Box] = ACTIONS(114),
    [anon_sym_Linestyle_Box] = ACTIONS(114),
    [anon_sym_List_Box] = ACTIONS(114),
    [anon_sym_ListCtrl_Box] = ACTIONS(114),
    [anon_sym_Map_File_Box] = ACTIONS(114),
    [anon_sym_Message_Box] = ACTIONS(114),
    [anon_sym_Model_Box] = ACTIONS(114),
    [anon_sym_Name_Box] = ACTIONS(114),
    [anon_sym_Named_Tick_Box] = ACTIONS(114),
    [anon_sym_New_Select_Box] = ACTIONS(114),
    [anon_sym_New_XYZ_Box] = ACTIONS(114),
    [anon_sym_Plotter_Box] = ACTIONS(114),
    [anon_sym_Polygon_Box] = ACTIONS(114),
    [anon_sym_Real_Box] = ACTIONS(114),
    [anon_sym_Report_Box] = ACTIONS(114),
    [anon_sym_Select_Box] = ACTIONS(114),
    [anon_sym_Select_Boxes] = ACTIONS(114),
    [anon_sym_Sheet_Size_Box] = ACTIONS(114),
    [anon_sym_Source_Box] = ACTIONS(114),
    [anon_sym_Symbol_Box] = ACTIONS(114),
    [anon_sym_Tab_Box] = ACTIONS(114),
    [anon_sym_Target_Box] = ACTIONS(114),
    [anon_sym_Template_Box] = ACTIONS(114),
    [anon_sym_Text_Edit_Box] = ACTIONS(114),
    [anon_sym_Text_Style_Box] = ACTIONS(114),
    [anon_sym_Texture_Box] = ACTIONS(114),
    [anon_sym_Tree_Box] = ACTIONS(114),
    [anon_sym_Tree_Page] = ACTIONS(114),
    [anon_sym_Tick_Box] = ACTIONS(114),
    [anon_sym_Tin_Box] = ACTIONS(114),
    [anon_sym_View_Box] = ACTIONS(114),
    [anon_sym_XYZ_Box] = ACTIONS(114),
    [anon_sym_File] = ACTIONS(114),
    [anon_sym_Map_File] = ACTIONS(114),
    [anon_sym_Plot_Parameter_File] = ACTIONS(114),
    [anon_sym_XML_Document] = ACTIONS(114),
    [anon_sym_XML_Node] = ACTIONS(114),
    [anon_sym_Connection] = ACTIONS(114),
    [anon_sym_Select_Query] = ACTIONS(114),
    [anon_sym_Insert_Query] = ACTIONS(114),
    [anon_sym_Update_Query] = ACTIONS(114),
    [anon_sym_Delete_Query] = ACTIONS(114),
    [anon_sym_Database_Results] = ACTIONS(114),
    [anon_sym_Transactions] = ACTIONS(114),
    [anon_sym_Parameter_Collection] = ACTIONS(114),
    [anon_sym_Query_Condition] = ACTIONS(114),
    [anon_sym_Manual_Condition] = ACTIONS(114),
    [anon_sym_Dynamic_Element] = ACTIONS(114),
    [anon_sym_Dynamic_Integer] = ACTIONS(114),
    [anon_sym_Dynamic_Real] = ACTIONS(114),
    [anon_sym_Dynamic_Text] = ACTIONS(114),
  },
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_else] = ACTIONS(118),
    [anon_sym_for] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_number_literal] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_void] = ACTIONS(118),
    [anon_sym_Integer] = ACTIONS(118),
    [anon_sym_Real] = ACTIONS(118),
    [anon_sym_Text] = ACTIONS(118),
    [anon_sym_Vector2] = ACTIONS(118),
    [anon_sym_Vector3] = ACTIONS(118),
    [anon_sym_Vector4] = ACTIONS(118),
    [anon_sym_Matrix3] = ACTIONS(118),
    [anon_sym_Matrix4] = ACTIONS(118),
    [anon_sym_Point] = ACTIONS(118),
    [anon_sym_Line] = ACTIONS(118),
    [anon_sym_Arc] = ACTIONS(118),
    [anon_sym_Spiral] = ACTIONS(118),
    [anon_sym_Parabola] = ACTIONS(118),
    [anon_sym_Segment] = ACTIONS(118),
    [anon_sym_Element] = ACTIONS(118),
    [anon_sym_Model] = ACTIONS(118),
    [anon_sym_View] = ACTIONS(118),
    [anon_sym_Macro_Function] = ACTIONS(118),
    [anon_sym_Function] = ACTIONS(118),
    [anon_sym_Uid] = ACTIONS(118),
    [anon_sym_Guid] = ACTIONS(118),
    [anon_sym_Attributes] = ACTIONS(118),
    [anon_sym_SDR_Attribute] = ACTIONS(118),
    [anon_sym_Blob] = ACTIONS(118),
    [anon_sym_Screen_Text] = ACTIONS(118),
    [anon_sym_Textstyle_Data] = ACTIONS(118),
    [anon_sym_Equality_Label] = ACTIONS(118),
    [anon_sym_Undo] = ACTIONS(118),
    [anon_sym_Undo_List] = ACTIONS(118),
    [anon_sym_Widget] = ACTIONS(118),
    [anon_sym_Menu] = ACTIONS(118),
    [anon_sym_Panel] = ACTIONS(118),
    [anon_sym_Overlay_Widget] = ACTIONS(118),
    [anon_sym_Vertical_Group] = ACTIONS(118),
    [anon_sym_Horizontal_Group] = ACTIONS(118),
    [anon_sym_Widget_Pages] = ACTIONS(118),
    [anon_sym_Button] = ACTIONS(118),
    [anon_sym_Select_Button] = ACTIONS(118),
    [anon_sym_Angle_Box] = ACTIONS(118),
    [anon_sym_Attributes_Box] = ACTIONS(118),
    [anon_sym_Billboard_Box] = ACTIONS(118),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(118),
    [anon_sym_Bitmap_List_Box] = ACTIONS(118),
    [anon_sym_Chainage_Box] = ACTIONS(118),
    [anon_sym_Choice_Box] = ACTIONS(118),
    [anon_sym_Colour_Box] = ACTIONS(118),
    [anon_sym_Colour_Message_Box] = ACTIONS(118),
    [anon_sym_Date_Time_Box] = ACTIONS(118),
    [anon_sym_Directory_Box] = ACTIONS(118),
    [anon_sym_Draw_Box] = ACTIONS(118),
    [anon_sym_File_Box] = ACTIONS(118),
    [anon_sym_Function_Box] = ACTIONS(118),
    [anon_sym_Graph_Box] = ACTIONS(118),
    [anon_sym_GridCtrl_Box] = ACTIONS(118),
    [anon_sym_HyperLink_Box] = ACTIONS(118),
    [anon_sym_Input_Box] = ACTIONS(118),
    [anon_sym_Integer_Box] = ACTIONS(118),
    [anon_sym_Justify_Box] = ACTIONS(118),
    [anon_sym_Linestyle_Box] = ACTIONS(118),
    [anon_sym_List_Box] = ACTIONS(118),
    [anon_sym_ListCtrl_Box] = ACTIONS(118),
    [anon_sym_Map_File_Box] = ACTIONS(118),
    [anon_sym_Message_Box] = ACTIONS(118),
    [anon_sym_Model_Box] = ACTIONS(118),
    [anon_sym_Name_Box] = ACTIONS(118),
    [anon_sym_Named_Tick_Box] = ACTIONS(118),
    [anon_sym_New_Select_Box] = ACTIONS(118),
    [anon_sym_New_XYZ_Box] = ACTIONS(118),
    [anon_sym_Plotter_Box] = ACTIONS(118),
    [anon_sym_Polygon_Box] = ACTIONS(118),
    [anon_sym_Real_Box] = ACTIONS(118),
    [anon_sym_Report_Box] = ACTIONS(118),
    [anon_sym_Select_Box] = ACTIONS(118),
    [anon_sym_Select_Boxes] = ACTIONS(118),
    [anon_sym_Sheet_Size_Box] = ACTIONS(118),
    [anon_sym_Source_Box] = ACTIONS(118),
    [anon_sym_Symbol_Box] = ACTIONS(118),
    [anon_sym_Tab_Box] = ACTIONS(118),
    [anon_sym_Target_Box] = ACTIONS(118),
    [anon_sym_Template_Box] = ACTIONS(118),
    [anon_sym_Text_Edit_Box] = ACTIONS(118),
    [anon_sym_Text_Style_Box] = ACTIONS(118),
    [anon_sym_Texture_Box] = ACTIONS(118),
    [anon_sym_Tree_Box] = ACTIONS(118),
    [anon_sym_Tree_Page] = ACTIONS(118),
    [anon_sym_Tick_Box] = ACTIONS(118),
    [anon_sym_Tin_Box] = ACTIONS(118),
    [anon_sym_View_Box] = ACTIONS(118),
    [anon_sym_XYZ_Box] = ACTIONS(118),
    [anon_sym_File] = ACTIONS(118),
    [anon_sym_Map_File] = ACTIONS(118),
    [anon_sym_Plot_Parameter_File] = ACTIONS(118),
    [anon_sym_XML_Document] = ACTIONS(118),
    [anon_sym_XML_Node] = ACTIONS(118),
    [anon_sym_Connection] = ACTIONS(118),
    [anon_sym_Select_Query] = ACTIONS(118),
    [anon_sym_Insert_Query] = ACTIONS(118),
    [anon_sym_Update_Query] = ACTIONS(118),
    [anon_sym_Delete_Query] = ACTIONS(118),
    [anon_sym_Database_Results] = ACTIONS(118),
    [anon_sym_Transactions] = ACTIONS(118),
    [anon_sym_Parameter_Collection] = ACTIONS(118),
    [anon_sym_Query_Condition] = ACTIONS(118),
    [anon_sym_Manual_Condition] = ACTIONS(118),
    [anon_sym_Dynamic_Element] = ACTIONS(118),
    [anon_sym_Dynamic_Integer] = ACTIONS(118),
    [anon_sym_Dynamic_Real] = ACTIONS(118),
    [anon_sym_Dynamic_Text] = ACTIONS(118),
  },
  [22] = {
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_else] = ACTIONS(122),
    [anon_sym_for] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_void] = ACTIONS(122),
    [anon_sym_Integer] = ACTIONS(122),
    [anon_sym_Real] = ACTIONS(122),
    [anon_sym_Text] = ACTIONS(122),
    [anon_sym_Vector2] = ACTIONS(122),
    [anon_sym_Vector3] = ACTIONS(122),
    [anon_sym_Vector4] = ACTIONS(122),
    [anon_sym_Matrix3] = ACTIONS(122),
    [anon_sym_Matrix4] = ACTIONS(122),
    [anon_sym_Point] = ACTIONS(122),
    [anon_sym_Line] = ACTIONS(122),
    [anon_sym_Arc] = ACTIONS(122),
    [anon_sym_Spiral] = ACTIONS(122),
    [anon_sym_Parabola] = ACTIONS(122),
    [anon_sym_Segment] = ACTIONS(122),
    [anon_sym_Element] = ACTIONS(122),
    [anon_sym_Model] = ACTIONS(122),
    [anon_sym_View] = ACTIONS(122),
    [anon_sym_Macro_Function] = ACTIONS(122),
    [anon_sym_Function] = ACTIONS(122),
    [anon_sym_Uid] = ACTIONS(122),
    [anon_sym_Guid] = ACTIONS(122),
    [anon_sym_Attributes] = ACTIONS(122),
    [anon_sym_SDR_Attribute] = ACTIONS(122),
    [anon_sym_Blob] = ACTIONS(122),
    [anon_sym_Screen_Text] = ACTIONS(122),
    [anon_sym_Textstyle_Data] = ACTIONS(122),
    [anon_sym_Equality_Label] = ACTIONS(122),
    [anon_sym_Undo] = ACTIONS(122),
    [anon_sym_Undo_List] = ACTIONS(122),
    [anon_sym_Widget] = ACTIONS(122),
    [anon_sym_Menu] = ACTIONS(122),
    [anon_sym_Panel] = ACTIONS(122),
    [anon_sym_Overlay_Widget] = ACTIONS(122),
    [anon_sym_Vertical_Group] = ACTIONS(122),
    [anon_sym_Horizontal_Group] = ACTIONS(122),
    [anon_sym_Widget_Pages] = ACTIONS(122),
    [anon_sym_Button] = ACTIONS(122),
    [anon_sym_Select_Button] = ACTIONS(122),
    [anon_sym_Angle_Box] = ACTIONS(122),
    [anon_sym_Attributes_Box] = ACTIONS(122),
    [anon_sym_Billboard_Box] = ACTIONS(122),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(122),
    [anon_sym_Bitmap_List_Box] = ACTIONS(122),
    [anon_sym_Chainage_Box] = ACTIONS(122),
    [anon_sym_Choice_Box] = ACTIONS(122),
    [anon_sym_Colour_Box] = ACTIONS(122),
    [anon_sym_Colour_Message_Box] = ACTIONS(122),
    [anon_sym_Date_Time_Box] = ACTIONS(122),
    [anon_sym_Directory_Box] = ACTIONS(122),
    [anon_sym_Draw_Box] = ACTIONS(122),
    [anon_sym_File_Box] = ACTIONS(122),
    [anon_sym_Function_Box] = ACTIONS(122),
    [anon_sym_Graph_Box] = ACTIONS(122),
    [anon_sym_GridCtrl_Box] = ACTIONS(122),
    [anon_sym_HyperLink_Box] = ACTIONS(122),
    [anon_sym_Input_Box] = ACTIONS(122),
    [anon_sym_Integer_Box] = ACTIONS(122),
    [anon_sym_Justify_Box] = ACTIONS(122),
    [anon_sym_Linestyle_Box] = ACTIONS(122),
    [anon_sym_List_Box] = ACTIONS(122),
    [anon_sym_ListCtrl_Box] = ACTIONS(122),
    [anon_sym_Map_File_Box] = ACTIONS(122),
    [anon_sym_Message_Box] = ACTIONS(122),
    [anon_sym_Model_Box] = ACTIONS(122),
    [anon_sym_Name_Box] = ACTIONS(122),
    [anon_sym_Named_Tick_Box] = ACTIONS(122),
    [anon_sym_New_Select_Box] = ACTIONS(122),
    [anon_sym_New_XYZ_Box] = ACTIONS(122),
    [anon_sym_Plotter_Box] = ACTIONS(122),
    [anon_sym_Polygon_Box] = ACTIONS(122),
    [anon_sym_Real_Box] = ACTIONS(122),
    [anon_sym_Report_Box] = ACTIONS(122),
    [anon_sym_Select_Box] = ACTIONS(122),
    [anon_sym_Select_Boxes] = ACTIONS(122),
    [anon_sym_Sheet_Size_Box] = ACTIONS(122),
    [anon_sym_Source_Box] = ACTIONS(122),
    [anon_sym_Symbol_Box] = ACTIONS(122),
    [anon_sym_Tab_Box] = ACTIONS(122),
    [anon_sym_Target_Box] = ACTIONS(122),
    [anon_sym_Template_Box] = ACTIONS(122),
    [anon_sym_Text_Edit_Box] = ACTIONS(122),
    [anon_sym_Text_Style_Box] = ACTIONS(122),
    [anon_sym_Texture_Box] = ACTIONS(122),
    [anon_sym_Tree_Box] = ACTIONS(122),
    [anon_sym_Tree_Page] = ACTIONS(122),
    [anon_sym_Tick_Box] = ACTIONS(122),
    [anon_sym_Tin_Box] = ACTIONS(122),
    [anon_sym_View_Box] = ACTIONS(122),
    [anon_sym_XYZ_Box] = ACTIONS(122),
    [anon_sym_File] = ACTIONS(122),
    [anon_sym_Map_File] = ACTIONS(122),
    [anon_sym_Plot_Parameter_File] = ACTIONS(122),
    [anon_sym_XML_Document] = ACTIONS(122),
    [anon_sym_XML_Node] = ACTIONS(122),
    [anon_sym_Connection] = ACTIONS(122),
    [anon_sym_Select_Query] = ACTIONS(122),
    [anon_sym_Insert_Query] = ACTIONS(122),
    [anon_sym_Update_Query] = ACTIONS(122),
    [anon_sym_Delete_Query] = ACTIONS(122),
    [anon_sym_Database_Results] = ACTIONS(122),
    [anon_sym_Transactions] = ACTIONS(122),
    [anon_sym_Parameter_Collection] = ACTIONS(122),
    [anon_sym_Query_Condition] = ACTIONS(122),
    [anon_sym_Manual_Condition] = ACTIONS(122),
    [anon_sym_Dynamic_Element] = ACTIONS(122),
    [anon_sym_Dynamic_Integer] = ACTIONS(122),
    [anon_sym_Dynamic_Real] = ACTIONS(122),
    [anon_sym_Dynamic_Text] = ACTIONS(122),
  },
  [23] = {
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_else] = ACTIONS(122),
    [anon_sym_for] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_void] = ACTIONS(122),
    [anon_sym_Integer] = ACTIONS(122),
    [anon_sym_Real] = ACTIONS(122),
    [anon_sym_Text] = ACTIONS(122),
    [anon_sym_Vector2] = ACTIONS(122),
    [anon_sym_Vector3] = ACTIONS(122),
    [anon_sym_Vector4] = ACTIONS(122),
    [anon_sym_Matrix3] = ACTIONS(122),
    [anon_sym_Matrix4] = ACTIONS(122),
    [anon_sym_Point] = ACTIONS(122),
    [anon_sym_Line] = ACTIONS(122),
    [anon_sym_Arc] = ACTIONS(122),
    [anon_sym_Spiral] = ACTIONS(122),
    [anon_sym_Parabola] = ACTIONS(122),
    [anon_sym_Segment] = ACTIONS(122),
    [anon_sym_Element] = ACTIONS(122),
    [anon_sym_Model] = ACTIONS(122),
    [anon_sym_View] = ACTIONS(122),
    [anon_sym_Macro_Function] = ACTIONS(122),
    [anon_sym_Function] = ACTIONS(122),
    [anon_sym_Uid] = ACTIONS(122),
    [anon_sym_Guid] = ACTIONS(122),
    [anon_sym_Attributes] = ACTIONS(122),
    [anon_sym_SDR_Attribute] = ACTIONS(122),
    [anon_sym_Blob] = ACTIONS(122),
    [anon_sym_Screen_Text] = ACTIONS(122),
    [anon_sym_Textstyle_Data] = ACTIONS(122),
    [anon_sym_Equality_Label] = ACTIONS(122),
    [anon_sym_Undo] = ACTIONS(122),
    [anon_sym_Undo_List] = ACTIONS(122),
    [anon_sym_Widget] = ACTIONS(122),
    [anon_sym_Menu] = ACTIONS(122),
    [anon_sym_Panel] = ACTIONS(122),
    [anon_sym_Overlay_Widget] = ACTIONS(122),
    [anon_sym_Vertical_Group] = ACTIONS(122),
    [anon_sym_Horizontal_Group] = ACTIONS(122),
    [anon_sym_Widget_Pages] = ACTIONS(122),
    [anon_sym_Button] = ACTIONS(122),
    [anon_sym_Select_Button] = ACTIONS(122),
    [anon_sym_Angle_Box] = ACTIONS(122),
    [anon_sym_Attributes_Box] = ACTIONS(122),
    [anon_sym_Billboard_Box] = ACTIONS(122),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(122),
    [anon_sym_Bitmap_List_Box] = ACTIONS(122),
    [anon_sym_Chainage_Box] = ACTIONS(122),
    [anon_sym_Choice_Box] = ACTIONS(122),
    [anon_sym_Colour_Box] = ACTIONS(122),
    [anon_sym_Colour_Message_Box] = ACTIONS(122),
    [anon_sym_Date_Time_Box] = ACTIONS(122),
    [anon_sym_Directory_Box] = ACTIONS(122),
    [anon_sym_Draw_Box] = ACTIONS(122),
    [anon_sym_File_Box] = ACTIONS(122),
    [anon_sym_Function_Box] = ACTIONS(122),
    [anon_sym_Graph_Box] = ACTIONS(122),
    [anon_sym_GridCtrl_Box] = ACTIONS(122),
    [anon_sym_HyperLink_Box] = ACTIONS(122),
    [anon_sym_Input_Box] = ACTIONS(122),
    [anon_sym_Integer_Box] = ACTIONS(122),
    [anon_sym_Justify_Box] = ACTIONS(122),
    [anon_sym_Linestyle_Box] = ACTIONS(122),
    [anon_sym_List_Box] = ACTIONS(122),
    [anon_sym_ListCtrl_Box] = ACTIONS(122),
    [anon_sym_Map_File_Box] = ACTIONS(122),
    [anon_sym_Message_Box] = ACTIONS(122),
    [anon_sym_Model_Box] = ACTIONS(122),
    [anon_sym_Name_Box] = ACTIONS(122),
    [anon_sym_Named_Tick_Box] = ACTIONS(122),
    [anon_sym_New_Select_Box] = ACTIONS(122),
    [anon_sym_New_XYZ_Box] = ACTIONS(122),
    [anon_sym_Plotter_Box] = ACTIONS(122),
    [anon_sym_Polygon_Box] = ACTIONS(122),
    [anon_sym_Real_Box] = ACTIONS(122),
    [anon_sym_Report_Box] = ACTIONS(122),
    [anon_sym_Select_Box] = ACTIONS(122),
    [anon_sym_Select_Boxes] = ACTIONS(122),
    [anon_sym_Sheet_Size_Box] = ACTIONS(122),
    [anon_sym_Source_Box] = ACTIONS(122),
    [anon_sym_Symbol_Box] = ACTIONS(122),
    [anon_sym_Tab_Box] = ACTIONS(122),
    [anon_sym_Target_Box] = ACTIONS(122),
    [anon_sym_Template_Box] = ACTIONS(122),
    [anon_sym_Text_Edit_Box] = ACTIONS(122),
    [anon_sym_Text_Style_Box] = ACTIONS(122),
    [anon_sym_Texture_Box] = ACTIONS(122),
    [anon_sym_Tree_Box] = ACTIONS(122),
    [anon_sym_Tree_Page] = ACTIONS(122),
    [anon_sym_Tick_Box] = ACTIONS(122),
    [anon_sym_Tin_Box] = ACTIONS(122),
    [anon_sym_View_Box] = ACTIONS(122),
    [anon_sym_XYZ_Box] = ACTIONS(122),
    [anon_sym_File] = ACTIONS(122),
    [anon_sym_Map_File] = ACTIONS(122),
    [anon_sym_Plot_Parameter_File] = ACTIONS(122),
    [anon_sym_XML_Document] = ACTIONS(122),
    [anon_sym_XML_Node] = ACTIONS(122),
    [anon_sym_Connection] = ACTIONS(122),
    [anon_sym_Select_Query] = ACTIONS(122),
    [anon_sym_Insert_Query] = ACTIONS(122),
    [anon_sym_Update_Query] = ACTIONS(122),
    [anon_sym_Delete_Query] = ACTIONS(122),
    [anon_sym_Database_Results] = ACTIONS(122),
    [anon_sym_Transactions] = ACTIONS(122),
    [anon_sym_Parameter_Collection] = ACTIONS(122),
    [anon_sym_Query_Condition] = ACTIONS(122),
    [anon_sym_Manual_Condition] = ACTIONS(122),
    [anon_sym_Dynamic_Element] = ACTIONS(122),
    [anon_sym_Dynamic_Integer] = ACTIONS(122),
    [anon_sym_Dynamic_Real] = ACTIONS(122),
    [anon_sym_Dynamic_Text] = ACTIONS(122),
  },
  [24] = {
    [anon_sym_LBRACE] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(106),
    [anon_sym_if] = ACTIONS(108),
    [anon_sym_else] = ACTIONS(124),
    [anon_sym_for] = ACTIONS(108),
    [anon_sym_SEMI] = ACTIONS(106),
    [anon_sym_BANG] = ACTIONS(106),
    [anon_sym_return] = ACTIONS(108),
    [sym_identifier] = ACTIONS(108),
    [sym_number_literal] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [anon_sym_void] = ACTIONS(108),
    [anon_sym_Integer] = ACTIONS(108),
    [anon_sym_Real] = ACTIONS(108),
    [anon_sym_Text] = ACTIONS(108),
    [anon_sym_Vector2] = ACTIONS(108),
    [anon_sym_Vector3] = ACTIONS(108),
    [anon_sym_Vector4] = ACTIONS(108),
    [anon_sym_Matrix3] = ACTIONS(108),
    [anon_sym_Matrix4] = ACTIONS(108),
    [anon_sym_Point] = ACTIONS(108),
    [anon_sym_Line] = ACTIONS(108),
    [anon_sym_Arc] = ACTIONS(108),
    [anon_sym_Spiral] = ACTIONS(108),
    [anon_sym_Parabola] = ACTIONS(108),
    [anon_sym_Segment] = ACTIONS(108),
    [anon_sym_Element] = ACTIONS(108),
    [anon_sym_Model] = ACTIONS(108),
    [anon_sym_View] = ACTIONS(108),
    [anon_sym_Macro_Function] = ACTIONS(108),
    [anon_sym_Function] = ACTIONS(108),
    [anon_sym_Uid] = ACTIONS(108),
    [anon_sym_Guid] = ACTIONS(108),
    [anon_sym_Attributes] = ACTIONS(108),
    [anon_sym_SDR_Attribute] = ACTIONS(108),
    [anon_sym_Blob] = ACTIONS(108),
    [anon_sym_Screen_Text] = ACTIONS(108),
    [anon_sym_Textstyle_Data] = ACTIONS(108),
    [anon_sym_Equality_Label] = ACTIONS(108),
    [anon_sym_Undo] = ACTIONS(108),
    [anon_sym_Undo_List] = ACTIONS(108),
    [anon_sym_Widget] = ACTIONS(108),
    [anon_sym_Menu] = ACTIONS(108),
    [anon_sym_Panel] = ACTIONS(108),
    [anon_sym_Overlay_Widget] = ACTIONS(108),
    [anon_sym_Vertical_Group] = ACTIONS(108),
    [anon_sym_Horizontal_Group] = ACTIONS(108),
    [anon_sym_Widget_Pages] = ACTIONS(108),
    [anon_sym_Button] = ACTIONS(108),
    [anon_sym_Select_Button] = ACTIONS(108),
    [anon_sym_Angle_Box] = ACTIONS(108),
    [anon_sym_Attributes_Box] = ACTIONS(108),
    [anon_sym_Billboard_Box] = ACTIONS(108),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(108),
    [anon_sym_Bitmap_List_Box] = ACTIONS(108),
    [anon_sym_Chainage_Box] = ACTIONS(108),
    [anon_sym_Choice_Box] = ACTIONS(108),
    [anon_sym_Colour_Box] = ACTIONS(108),
    [anon_sym_Colour_Message_Box] = ACTIONS(108),
    [anon_sym_Date_Time_Box] = ACTIONS(108),
    [anon_sym_Directory_Box] = ACTIONS(108),
    [anon_sym_Draw_Box] = ACTIONS(108),
    [anon_sym_File_Box] = ACTIONS(108),
    [anon_sym_Function_Box] = ACTIONS(108),
    [anon_sym_Graph_Box] = ACTIONS(108),
    [anon_sym_GridCtrl_Box] = ACTIONS(108),
    [anon_sym_HyperLink_Box] = ACTIONS(108),
    [anon_sym_Input_Box] = ACTIONS(108),
    [anon_sym_Integer_Box] = ACTIONS(108),
    [anon_sym_Justify_Box] = ACTIONS(108),
    [anon_sym_Linestyle_Box] = ACTIONS(108),
    [anon_sym_List_Box] = ACTIONS(108),
    [anon_sym_ListCtrl_Box] = ACTIONS(108),
    [anon_sym_Map_File_Box] = ACTIONS(108),
    [anon_sym_Message_Box] = ACTIONS(108),
    [anon_sym_Model_Box] = ACTIONS(108),
    [anon_sym_Name_Box] = ACTIONS(108),
    [anon_sym_Named_Tick_Box] = ACTIONS(108),
    [anon_sym_New_Select_Box] = ACTIONS(108),
    [anon_sym_New_XYZ_Box] = ACTIONS(108),
    [anon_sym_Plotter_Box] = ACTIONS(108),
    [anon_sym_Polygon_Box] = ACTIONS(108),
    [anon_sym_Real_Box] = ACTIONS(108),
    [anon_sym_Report_Box] = ACTIONS(108),
    [anon_sym_Select_Box] = ACTIONS(108),
    [anon_sym_Select_Boxes] = ACTIONS(108),
    [anon_sym_Sheet_Size_Box] = ACTIONS(108),
    [anon_sym_Source_Box] = ACTIONS(108),
    [anon_sym_Symbol_Box] = ACTIONS(108),
    [anon_sym_Tab_Box] = ACTIONS(108),
    [anon_sym_Target_Box] = ACTIONS(108),
    [anon_sym_Template_Box] = ACTIONS(108),
    [anon_sym_Text_Edit_Box] = ACTIONS(108),
    [anon_sym_Text_Style_Box] = ACTIONS(108),
    [anon_sym_Texture_Box] = ACTIONS(108),
    [anon_sym_Tree_Box] = ACTIONS(108),
    [anon_sym_Tree_Page] = ACTIONS(108),
    [anon_sym_Tick_Box] = ACTIONS(108),
    [anon_sym_Tin_Box] = ACTIONS(108),
    [anon_sym_View_Box] = ACTIONS(108),
    [anon_sym_XYZ_Box] = ACTIONS(108),
    [anon_sym_File] = ACTIONS(108),
    [anon_sym_Map_File] = ACTIONS(108),
    [anon_sym_Plot_Parameter_File] = ACTIONS(108),
    [anon_sym_XML_Document] = ACTIONS(108),
    [anon_sym_XML_Node] = ACTIONS(108),
    [anon_sym_Connection] = ACTIONS(108),
    [anon_sym_Select_Query] = ACTIONS(108),
    [anon_sym_Insert_Query] = ACTIONS(108),
    [anon_sym_Update_Query] = ACTIONS(108),
    [anon_sym_Delete_Query] = ACTIONS(108),
    [anon_sym_Database_Results] = ACTIONS(108),
    [anon_sym_Transactions] = ACTIONS(108),
    [anon_sym_Parameter_Collection] = ACTIONS(108),
    [anon_sym_Query_Condition] = ACTIONS(108),
    [anon_sym_Manual_Condition] = ACTIONS(108),
    [anon_sym_Dynamic_Element] = ACTIONS(108),
    [anon_sym_Dynamic_Integer] = ACTIONS(108),
    [anon_sym_Dynamic_Real] = ACTIONS(108),
    [anon_sym_Dynamic_Text] = ACTIONS(108),
  },
  [25] = {
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_else] = ACTIONS(96),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_Integer] = ACTIONS(96),
    [anon_sym_Real] = ACTIONS(96),
    [anon_sym_Text] = ACTIONS(96),
    [anon_sym_Vector2] = ACTIONS(96),
    [anon_sym_Vector3] = ACTIONS(96),
    [anon_sym_Vector4] = ACTIONS(96),
    [anon_sym_Matrix3] = ACTIONS(96),
    [anon_sym_Matrix4] = ACTIONS(96),
    [anon_sym_Point] = ACTIONS(96),
    [anon_sym_Line] = ACTIONS(96),
    [anon_sym_Arc] = ACTIONS(96),
    [anon_sym_Spiral] = ACTIONS(96),
    [anon_sym_Parabola] = ACTIONS(96),
    [anon_sym_Segment] = ACTIONS(96),
    [anon_sym_Element] = ACTIONS(96),
    [anon_sym_Model] = ACTIONS(96),
    [anon_sym_View] = ACTIONS(96),
    [anon_sym_Macro_Function] = ACTIONS(96),
    [anon_sym_Function] = ACTIONS(96),
    [anon_sym_Uid] = ACTIONS(96),
    [anon_sym_Guid] = ACTIONS(96),
    [anon_sym_Attributes] = ACTIONS(96),
    [anon_sym_SDR_Attribute] = ACTIONS(96),
    [anon_sym_Blob] = ACTIONS(96),
    [anon_sym_Screen_Text] = ACTIONS(96),
    [anon_sym_Textstyle_Data] = ACTIONS(96),
    [anon_sym_Equality_Label] = ACTIONS(96),
    [anon_sym_Undo] = ACTIONS(96),
    [anon_sym_Undo_List] = ACTIONS(96),
    [anon_sym_Widget] = ACTIONS(96),
    [anon_sym_Menu] = ACTIONS(96),
    [anon_sym_Panel] = ACTIONS(96),
    [anon_sym_Overlay_Widget] = ACTIONS(96),
    [anon_sym_Vertical_Group] = ACTIONS(96),
    [anon_sym_Horizontal_Group] = ACTIONS(96),
    [anon_sym_Widget_Pages] = ACTIONS(96),
    [anon_sym_Button] = ACTIONS(96),
    [anon_sym_Select_Button] = ACTIONS(96),
    [anon_sym_Angle_Box] = ACTIONS(96),
    [anon_sym_Attributes_Box] = ACTIONS(96),
    [anon_sym_Billboard_Box] = ACTIONS(96),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(96),
    [anon_sym_Bitmap_List_Box] = ACTIONS(96),
    [anon_sym_Chainage_Box] = ACTIONS(96),
    [anon_sym_Choice_Box] = ACTIONS(96),
    [anon_sym_Colour_Box] = ACTIONS(96),
    [anon_sym_Colour_Message_Box] = ACTIONS(96),
    [anon_sym_Date_Time_Box] = ACTIONS(96),
    [anon_sym_Directory_Box] = ACTIONS(96),
    [anon_sym_Draw_Box] = ACTIONS(96),
    [anon_sym_File_Box] = ACTIONS(96),
    [anon_sym_Function_Box] = ACTIONS(96),
    [anon_sym_Graph_Box] = ACTIONS(96),
    [anon_sym_GridCtrl_Box] = ACTIONS(96),
    [anon_sym_HyperLink_Box] = ACTIONS(96),
    [anon_sym_Input_Box] = ACTIONS(96),
    [anon_sym_Integer_Box] = ACTIONS(96),
    [anon_sym_Justify_Box] = ACTIONS(96),
    [anon_sym_Linestyle_Box] = ACTIONS(96),
    [anon_sym_List_Box] = ACTIONS(96),
    [anon_sym_ListCtrl_Box] = ACTIONS(96),
    [anon_sym_Map_File_Box] = ACTIONS(96),
    [anon_sym_Message_Box] = ACTIONS(96),
    [anon_sym_Model_Box] = ACTIONS(96),
    [anon_sym_Name_Box] = ACTIONS(96),
    [anon_sym_Named_Tick_Box] = ACTIONS(96),
    [anon_sym_New_Select_Box] = ACTIONS(96),
    [anon_sym_New_XYZ_Box] = ACTIONS(96),
    [anon_sym_Plotter_Box] = ACTIONS(96),
    [anon_sym_Polygon_Box] = ACTIONS(96),
    [anon_sym_Real_Box] = ACTIONS(96),
    [anon_sym_Report_Box] = ACTIONS(96),
    [anon_sym_Select_Box] = ACTIONS(96),
    [anon_sym_Select_Boxes] = ACTIONS(96),
    [anon_sym_Sheet_Size_Box] = ACTIONS(96),
    [anon_sym_Source_Box] = ACTIONS(96),
    [anon_sym_Symbol_Box] = ACTIONS(96),
    [anon_sym_Tab_Box] = ACTIONS(96),
    [anon_sym_Target_Box] = ACTIONS(96),
    [anon_sym_Template_Box] = ACTIONS(96),
    [anon_sym_Text_Edit_Box] = ACTIONS(96),
    [anon_sym_Text_Style_Box] = ACTIONS(96),
    [anon_sym_Texture_Box] = ACTIONS(96),
    [anon_sym_Tree_Box] = ACTIONS(96),
    [anon_sym_Tree_Page] = ACTIONS(96),
    [anon_sym_Tick_Box] = ACTIONS(96),
    [anon_sym_Tin_Box] = ACTIONS(96),
    [anon_sym_View_Box] = ACTIONS(96),
    [anon_sym_XYZ_Box] = ACTIONS(96),
    [anon_sym_File] = ACTIONS(96),
    [anon_sym_Map_File] = ACTIONS(96),
    [anon_sym_Plot_Parameter_File] = ACTIONS(96),
    [anon_sym_XML_Document] = ACTIONS(96),
    [anon_sym_XML_Node] = ACTIONS(96),
    [anon_sym_Connection] = ACTIONS(96),
    [anon_sym_Select_Query] = ACTIONS(96),
    [anon_sym_Insert_Query] = ACTIONS(96),
    [anon_sym_Update_Query] = ACTIONS(96),
    [anon_sym_Delete_Query] = ACTIONS(96),
    [anon_sym_Database_Results] = ACTIONS(96),
    [anon_sym_Transactions] = ACTIONS(96),
    [anon_sym_Parameter_Collection] = ACTIONS(96),
    [anon_sym_Query_Condition] = ACTIONS(96),
    [anon_sym_Manual_Condition] = ACTIONS(96),
    [anon_sym_Dynamic_Element] = ACTIONS(96),
    [anon_sym_Dynamic_Integer] = ACTIONS(96),
    [anon_sym_Dynamic_Real] = ACTIONS(96),
    [anon_sym_Dynamic_Text] = ACTIONS(96),
  },
  [26] = {
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(128),
    [anon_sym_else] = ACTIONS(128),
    [anon_sym_for] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_return] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_void] = ACTIONS(128),
    [anon_sym_Integer] = ACTIONS(128),
    [anon_sym_Real] = ACTIONS(128),
    [anon_sym_Text] = ACTIONS(128),
    [anon_sym_Vector2] = ACTIONS(128),
    [anon_sym_Vector3] = ACTIONS(128),
    [anon_sym_Vector4] = ACTIONS(128),
    [anon_sym_Matrix3] = ACTIONS(128),
    [anon_sym_Matrix4] = ACTIONS(128),
    [anon_sym_Point] = ACTIONS(128),
    [anon_sym_Line] = ACTIONS(128),
    [anon_sym_Arc] = ACTIONS(128),
    [anon_sym_Spiral] = ACTIONS(128),
    [anon_sym_Parabola] = ACTIONS(128),
    [anon_sym_Segment] = ACTIONS(128),
    [anon_sym_Element] = ACTIONS(128),
    [anon_sym_Model] = ACTIONS(128),
    [anon_sym_View] = ACTIONS(128),
    [anon_sym_Macro_Function] = ACTIONS(128),
    [anon_sym_Function] = ACTIONS(128),
    [anon_sym_Uid] = ACTIONS(128),
    [anon_sym_Guid] = ACTIONS(128),
    [anon_sym_Attributes] = ACTIONS(128),
    [anon_sym_SDR_Attribute] = ACTIONS(128),
    [anon_sym_Blob] = ACTIONS(128),
    [anon_sym_Screen_Text] = ACTIONS(128),
    [anon_sym_Textstyle_Data] = ACTIONS(128),
    [anon_sym_Equality_Label] = ACTIONS(128),
    [anon_sym_Undo] = ACTIONS(128),
    [anon_sym_Undo_List] = ACTIONS(128),
    [anon_sym_Widget] = ACTIONS(128),
    [anon_sym_Menu] = ACTIONS(128),
    [anon_sym_Panel] = ACTIONS(128),
    [anon_sym_Overlay_Widget] = ACTIONS(128),
    [anon_sym_Vertical_Group] = ACTIONS(128),
    [anon_sym_Horizontal_Group] = ACTIONS(128),
    [anon_sym_Widget_Pages] = ACTIONS(128),
    [anon_sym_Button] = ACTIONS(128),
    [anon_sym_Select_Button] = ACTIONS(128),
    [anon_sym_Angle_Box] = ACTIONS(128),
    [anon_sym_Attributes_Box] = ACTIONS(128),
    [anon_sym_Billboard_Box] = ACTIONS(128),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(128),
    [anon_sym_Bitmap_List_Box] = ACTIONS(128),
    [anon_sym_Chainage_Box] = ACTIONS(128),
    [anon_sym_Choice_Box] = ACTIONS(128),
    [anon_sym_Colour_Box] = ACTIONS(128),
    [anon_sym_Colour_Message_Box] = ACTIONS(128),
    [anon_sym_Date_Time_Box] = ACTIONS(128),
    [anon_sym_Directory_Box] = ACTIONS(128),
    [anon_sym_Draw_Box] = ACTIONS(128),
    [anon_sym_File_Box] = ACTIONS(128),
    [anon_sym_Function_Box] = ACTIONS(128),
    [anon_sym_Graph_Box] = ACTIONS(128),
    [anon_sym_GridCtrl_Box] = ACTIONS(128),
    [anon_sym_HyperLink_Box] = ACTIONS(128),
    [anon_sym_Input_Box] = ACTIONS(128),
    [anon_sym_Integer_Box] = ACTIONS(128),
    [anon_sym_Justify_Box] = ACTIONS(128),
    [anon_sym_Linestyle_Box] = ACTIONS(128),
    [anon_sym_List_Box] = ACTIONS(128),
    [anon_sym_ListCtrl_Box] = ACTIONS(128),
    [anon_sym_Map_File_Box] = ACTIONS(128),
    [anon_sym_Message_Box] = ACTIONS(128),
    [anon_sym_Model_Box] = ACTIONS(128),
    [anon_sym_Name_Box] = ACTIONS(128),
    [anon_sym_Named_Tick_Box] = ACTIONS(128),
    [anon_sym_New_Select_Box] = ACTIONS(128),
    [anon_sym_New_XYZ_Box] = ACTIONS(128),
    [anon_sym_Plotter_Box] = ACTIONS(128),
    [anon_sym_Polygon_Box] = ACTIONS(128),
    [anon_sym_Real_Box] = ACTIONS(128),
    [anon_sym_Report_Box] = ACTIONS(128),
    [anon_sym_Select_Box] = ACTIONS(128),
    [anon_sym_Select_Boxes] = ACTIONS(128),
    [anon_sym_Sheet_Size_Box] = ACTIONS(128),
    [anon_sym_Source_Box] = ACTIONS(128),
    [anon_sym_Symbol_Box] = ACTIONS(128),
    [anon_sym_Tab_Box] = ACTIONS(128),
    [anon_sym_Target_Box] = ACTIONS(128),
    [anon_sym_Template_Box] = ACTIONS(128),
    [anon_sym_Text_Edit_Box] = ACTIONS(128),
    [anon_sym_Text_Style_Box] = ACTIONS(128),
    [anon_sym_Texture_Box] = ACTIONS(128),
    [anon_sym_Tree_Box] = ACTIONS(128),
    [anon_sym_Tree_Page] = ACTIONS(128),
    [anon_sym_Tick_Box] = ACTIONS(128),
    [anon_sym_Tin_Box] = ACTIONS(128),
    [anon_sym_View_Box] = ACTIONS(128),
    [anon_sym_XYZ_Box] = ACTIONS(128),
    [anon_sym_File] = ACTIONS(128),
    [anon_sym_Map_File] = ACTIONS(128),
    [anon_sym_Plot_Parameter_File] = ACTIONS(128),
    [anon_sym_XML_Document] = ACTIONS(128),
    [anon_sym_XML_Node] = ACTIONS(128),
    [anon_sym_Connection] = ACTIONS(128),
    [anon_sym_Select_Query] = ACTIONS(128),
    [anon_sym_Insert_Query] = ACTIONS(128),
    [anon_sym_Update_Query] = ACTIONS(128),
    [anon_sym_Delete_Query] = ACTIONS(128),
    [anon_sym_Database_Results] = ACTIONS(128),
    [anon_sym_Transactions] = ACTIONS(128),
    [anon_sym_Parameter_Collection] = ACTIONS(128),
    [anon_sym_Query_Condition] = ACTIONS(128),
    [anon_sym_Manual_Condition] = ACTIONS(128),
    [anon_sym_Dynamic_Element] = ACTIONS(128),
    [anon_sym_Dynamic_Integer] = ACTIONS(128),
    [anon_sym_Dynamic_Real] = ACTIONS(128),
    [anon_sym_Dynamic_Text] = ACTIONS(128),
  },
  [27] = {
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_else] = ACTIONS(132),
    [anon_sym_for] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_void] = ACTIONS(132),
    [anon_sym_Integer] = ACTIONS(132),
    [anon_sym_Real] = ACTIONS(132),
    [anon_sym_Text] = ACTIONS(132),
    [anon_sym_Vector2] = ACTIONS(132),
    [anon_sym_Vector3] = ACTIONS(132),
    [anon_sym_Vector4] = ACTIONS(132),
    [anon_sym_Matrix3] = ACTIONS(132),
    [anon_sym_Matrix4] = ACTIONS(132),
    [anon_sym_Point] = ACTIONS(132),
    [anon_sym_Line] = ACTIONS(132),
    [anon_sym_Arc] = ACTIONS(132),
    [anon_sym_Spiral] = ACTIONS(132),
    [anon_sym_Parabola] = ACTIONS(132),
    [anon_sym_Segment] = ACTIONS(132),
    [anon_sym_Element] = ACTIONS(132),
    [anon_sym_Model] = ACTIONS(132),
    [anon_sym_View] = ACTIONS(132),
    [anon_sym_Macro_Function] = ACTIONS(132),
    [anon_sym_Function] = ACTIONS(132),
    [anon_sym_Uid] = ACTIONS(132),
    [anon_sym_Guid] = ACTIONS(132),
    [anon_sym_Attributes] = ACTIONS(132),
    [anon_sym_SDR_Attribute] = ACTIONS(132),
    [anon_sym_Blob] = ACTIONS(132),
    [anon_sym_Screen_Text] = ACTIONS(132),
    [anon_sym_Textstyle_Data] = ACTIONS(132),
    [anon_sym_Equality_Label] = ACTIONS(132),
    [anon_sym_Undo] = ACTIONS(132),
    [anon_sym_Undo_List] = ACTIONS(132),
    [anon_sym_Widget] = ACTIONS(132),
    [anon_sym_Menu] = ACTIONS(132),
    [anon_sym_Panel] = ACTIONS(132),
    [anon_sym_Overlay_Widget] = ACTIONS(132),
    [anon_sym_Vertical_Group] = ACTIONS(132),
    [anon_sym_Horizontal_Group] = ACTIONS(132),
    [anon_sym_Widget_Pages] = ACTIONS(132),
    [anon_sym_Button] = ACTIONS(132),
    [anon_sym_Select_Button] = ACTIONS(132),
    [anon_sym_Angle_Box] = ACTIONS(132),
    [anon_sym_Attributes_Box] = ACTIONS(132),
    [anon_sym_Billboard_Box] = ACTIONS(132),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(132),
    [anon_sym_Bitmap_List_Box] = ACTIONS(132),
    [anon_sym_Chainage_Box] = ACTIONS(132),
    [anon_sym_Choice_Box] = ACTIONS(132),
    [anon_sym_Colour_Box] = ACTIONS(132),
    [anon_sym_Colour_Message_Box] = ACTIONS(132),
    [anon_sym_Date_Time_Box] = ACTIONS(132),
    [anon_sym_Directory_Box] = ACTIONS(132),
    [anon_sym_Draw_Box] = ACTIONS(132),
    [anon_sym_File_Box] = ACTIONS(132),
    [anon_sym_Function_Box] = ACTIONS(132),
    [anon_sym_Graph_Box] = ACTIONS(132),
    [anon_sym_GridCtrl_Box] = ACTIONS(132),
    [anon_sym_HyperLink_Box] = ACTIONS(132),
    [anon_sym_Input_Box] = ACTIONS(132),
    [anon_sym_Integer_Box] = ACTIONS(132),
    [anon_sym_Justify_Box] = ACTIONS(132),
    [anon_sym_Linestyle_Box] = ACTIONS(132),
    [anon_sym_List_Box] = ACTIONS(132),
    [anon_sym_ListCtrl_Box] = ACTIONS(132),
    [anon_sym_Map_File_Box] = ACTIONS(132),
    [anon_sym_Message_Box] = ACTIONS(132),
    [anon_sym_Model_Box] = ACTIONS(132),
    [anon_sym_Name_Box] = ACTIONS(132),
    [anon_sym_Named_Tick_Box] = ACTIONS(132),
    [anon_sym_New_Select_Box] = ACTIONS(132),
    [anon_sym_New_XYZ_Box] = ACTIONS(132),
    [anon_sym_Plotter_Box] = ACTIONS(132),
    [anon_sym_Polygon_Box] = ACTIONS(132),
    [anon_sym_Real_Box] = ACTIONS(132),
    [anon_sym_Report_Box] = ACTIONS(132),
    [anon_sym_Select_Box] = ACTIONS(132),
    [anon_sym_Select_Boxes] = ACTIONS(132),
    [anon_sym_Sheet_Size_Box] = ACTIONS(132),
    [anon_sym_Source_Box] = ACTIONS(132),
    [anon_sym_Symbol_Box] = ACTIONS(132),
    [anon_sym_Tab_Box] = ACTIONS(132),
    [anon_sym_Target_Box] = ACTIONS(132),
    [anon_sym_Template_Box] = ACTIONS(132),
    [anon_sym_Text_Edit_Box] = ACTIONS(132),
    [anon_sym_Text_Style_Box] = ACTIONS(132),
    [anon_sym_Texture_Box] = ACTIONS(132),
    [anon_sym_Tree_Box] = ACTIONS(132),
    [anon_sym_Tree_Page] = ACTIONS(132),
    [anon_sym_Tick_Box] = ACTIONS(132),
    [anon_sym_Tin_Box] = ACTIONS(132),
    [anon_sym_View_Box] = ACTIONS(132),
    [anon_sym_XYZ_Box] = ACTIONS(132),
    [anon_sym_File] = ACTIONS(132),
    [anon_sym_Map_File] = ACTIONS(132),
    [anon_sym_Plot_Parameter_File] = ACTIONS(132),
    [anon_sym_XML_Document] = ACTIONS(132),
    [anon_sym_XML_Node] = ACTIONS(132),
    [anon_sym_Connection] = ACTIONS(132),
    [anon_sym_Select_Query] = ACTIONS(132),
    [anon_sym_Insert_Query] = ACTIONS(132),
    [anon_sym_Update_Query] = ACTIONS(132),
    [anon_sym_Delete_Query] = ACTIONS(132),
    [anon_sym_Database_Results] = ACTIONS(132),
    [anon_sym_Transactions] = ACTIONS(132),
    [anon_sym_Parameter_Collection] = ACTIONS(132),
    [anon_sym_Query_Condition] = ACTIONS(132),
    [anon_sym_Manual_Condition] = ACTIONS(132),
    [anon_sym_Dynamic_Element] = ACTIONS(132),
    [anon_sym_Dynamic_Integer] = ACTIONS(132),
    [anon_sym_Dynamic_Real] = ACTIONS(132),
    [anon_sym_Dynamic_Text] = ACTIONS(132),
  },
  [28] = {
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [anon_sym_else] = ACTIONS(136),
    [anon_sym_for] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_return] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_void] = ACTIONS(136),
    [anon_sym_Integer] = ACTIONS(136),
    [anon_sym_Real] = ACTIONS(136),
    [anon_sym_Text] = ACTIONS(136),
    [anon_sym_Vector2] = ACTIONS(136),
    [anon_sym_Vector3] = ACTIONS(136),
    [anon_sym_Vector4] = ACTIONS(136),
    [anon_sym_Matrix3] = ACTIONS(136),
    [anon_sym_Matrix4] = ACTIONS(136),
    [anon_sym_Point] = ACTIONS(136),
    [anon_sym_Line] = ACTIONS(136),
    [anon_sym_Arc] = ACTIONS(136),
    [anon_sym_Spiral] = ACTIONS(136),
    [anon_sym_Parabola] = ACTIONS(136),
    [anon_sym_Segment] = ACTIONS(136),
    [anon_sym_Element] = ACTIONS(136),
    [anon_sym_Model] = ACTIONS(136),
    [anon_sym_View] = ACTIONS(136),
    [anon_sym_Macro_Function] = ACTIONS(136),
    [anon_sym_Function] = ACTIONS(136),
    [anon_sym_Uid] = ACTIONS(136),
    [anon_sym_Guid] = ACTIONS(136),
    [anon_sym_Attributes] = ACTIONS(136),
    [anon_sym_SDR_Attribute] = ACTIONS(136),
    [anon_sym_Blob] = ACTIONS(136),
    [anon_sym_Screen_Text] = ACTIONS(136),
    [anon_sym_Textstyle_Data] = ACTIONS(136),
    [anon_sym_Equality_Label] = ACTIONS(136),
    [anon_sym_Undo] = ACTIONS(136),
    [anon_sym_Undo_List] = ACTIONS(136),
    [anon_sym_Widget] = ACTIONS(136),
    [anon_sym_Menu] = ACTIONS(136),
    [anon_sym_Panel] = ACTIONS(136),
    [anon_sym_Overlay_Widget] = ACTIONS(136),
    [anon_sym_Vertical_Group] = ACTIONS(136),
    [anon_sym_Horizontal_Group] = ACTIONS(136),
    [anon_sym_Widget_Pages] = ACTIONS(136),
    [anon_sym_Button] = ACTIONS(136),
    [anon_sym_Select_Button] = ACTIONS(136),
    [anon_sym_Angle_Box] = ACTIONS(136),
    [anon_sym_Attributes_Box] = ACTIONS(136),
    [anon_sym_Billboard_Box] = ACTIONS(136),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(136),
    [anon_sym_Bitmap_List_Box] = ACTIONS(136),
    [anon_sym_Chainage_Box] = ACTIONS(136),
    [anon_sym_Choice_Box] = ACTIONS(136),
    [anon_sym_Colour_Box] = ACTIONS(136),
    [anon_sym_Colour_Message_Box] = ACTIONS(136),
    [anon_sym_Date_Time_Box] = ACTIONS(136),
    [anon_sym_Directory_Box] = ACTIONS(136),
    [anon_sym_Draw_Box] = ACTIONS(136),
    [anon_sym_File_Box] = ACTIONS(136),
    [anon_sym_Function_Box] = ACTIONS(136),
    [anon_sym_Graph_Box] = ACTIONS(136),
    [anon_sym_GridCtrl_Box] = ACTIONS(136),
    [anon_sym_HyperLink_Box] = ACTIONS(136),
    [anon_sym_Input_Box] = ACTIONS(136),
    [anon_sym_Integer_Box] = ACTIONS(136),
    [anon_sym_Justify_Box] = ACTIONS(136),
    [anon_sym_Linestyle_Box] = ACTIONS(136),
    [anon_sym_List_Box] = ACTIONS(136),
    [anon_sym_ListCtrl_Box] = ACTIONS(136),
    [anon_sym_Map_File_Box] = ACTIONS(136),
    [anon_sym_Message_Box] = ACTIONS(136),
    [anon_sym_Model_Box] = ACTIONS(136),
    [anon_sym_Name_Box] = ACTIONS(136),
    [anon_sym_Named_Tick_Box] = ACTIONS(136),
    [anon_sym_New_Select_Box] = ACTIONS(136),
    [anon_sym_New_XYZ_Box] = ACTIONS(136),
    [anon_sym_Plotter_Box] = ACTIONS(136),
    [anon_sym_Polygon_Box] = ACTIONS(136),
    [anon_sym_Real_Box] = ACTIONS(136),
    [anon_sym_Report_Box] = ACTIONS(136),
    [anon_sym_Select_Box] = ACTIONS(136),
    [anon_sym_Select_Boxes] = ACTIONS(136),
    [anon_sym_Sheet_Size_Box] = ACTIONS(136),
    [anon_sym_Source_Box] = ACTIONS(136),
    [anon_sym_Symbol_Box] = ACTIONS(136),
    [anon_sym_Tab_Box] = ACTIONS(136),
    [anon_sym_Target_Box] = ACTIONS(136),
    [anon_sym_Template_Box] = ACTIONS(136),
    [anon_sym_Text_Edit_Box] = ACTIONS(136),
    [anon_sym_Text_Style_Box] = ACTIONS(136),
    [anon_sym_Texture_Box] = ACTIONS(136),
    [anon_sym_Tree_Box] = ACTIONS(136),
    [anon_sym_Tree_Page] = ACTIONS(136),
    [anon_sym_Tick_Box] = ACTIONS(136),
    [anon_sym_Tin_Box] = ACTIONS(136),
    [anon_sym_View_Box] = ACTIONS(136),
    [anon_sym_XYZ_Box] = ACTIONS(136),
    [anon_sym_File] = ACTIONS(136),
    [anon_sym_Map_File] = ACTIONS(136),
    [anon_sym_Plot_Parameter_File] = ACTIONS(136),
    [anon_sym_XML_Document] = ACTIONS(136),
    [anon_sym_XML_Node] = ACTIONS(136),
    [anon_sym_Connection] = ACTIONS(136),
    [anon_sym_Select_Query] = ACTIONS(136),
    [anon_sym_Insert_Query] = ACTIONS(136),
    [anon_sym_Update_Query] = ACTIONS(136),
    [anon_sym_Delete_Query] = ACTIONS(136),
    [anon_sym_Database_Results] = ACTIONS(136),
    [anon_sym_Transactions] = ACTIONS(136),
    [anon_sym_Parameter_Collection] = ACTIONS(136),
    [anon_sym_Query_Condition] = ACTIONS(136),
    [anon_sym_Manual_Condition] = ACTIONS(136),
    [anon_sym_Dynamic_Element] = ACTIONS(136),
    [anon_sym_Dynamic_Integer] = ACTIONS(136),
    [anon_sym_Dynamic_Real] = ACTIONS(136),
    [anon_sym_Dynamic_Text] = ACTIONS(136),
  },
  [29] = {
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(126),
    [anon_sym_if] = ACTIONS(128),
    [anon_sym_for] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_BANG] = ACTIONS(126),
    [anon_sym_return] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [sym_number_literal] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(126),
    [anon_sym_void] = ACTIONS(128),
    [anon_sym_Integer] = ACTIONS(128),
    [anon_sym_Real] = ACTIONS(128),
    [anon_sym_Text] = ACTIONS(128),
    [anon_sym_Vector2] = ACTIONS(128),
    [anon_sym_Vector3] = ACTIONS(128),
    [anon_sym_Vector4] = ACTIONS(128),
    [anon_sym_Matrix3] = ACTIONS(128),
    [anon_sym_Matrix4] = ACTIONS(128),
    [anon_sym_Point] = ACTIONS(128),
    [anon_sym_Line] = ACTIONS(128),
    [anon_sym_Arc] = ACTIONS(128),
    [anon_sym_Spiral] = ACTIONS(128),
    [anon_sym_Parabola] = ACTIONS(128),
    [anon_sym_Segment] = ACTIONS(128),
    [anon_sym_Element] = ACTIONS(128),
    [anon_sym_Model] = ACTIONS(128),
    [anon_sym_View] = ACTIONS(128),
    [anon_sym_Macro_Function] = ACTIONS(128),
    [anon_sym_Function] = ACTIONS(128),
    [anon_sym_Uid] = ACTIONS(128),
    [anon_sym_Guid] = ACTIONS(128),
    [anon_sym_Attributes] = ACTIONS(128),
    [anon_sym_SDR_Attribute] = ACTIONS(128),
    [anon_sym_Blob] = ACTIONS(128),
    [anon_sym_Screen_Text] = ACTIONS(128),
    [anon_sym_Textstyle_Data] = ACTIONS(128),
    [anon_sym_Equality_Label] = ACTIONS(128),
    [anon_sym_Undo] = ACTIONS(128),
    [anon_sym_Undo_List] = ACTIONS(128),
    [anon_sym_Widget] = ACTIONS(128),
    [anon_sym_Menu] = ACTIONS(128),
    [anon_sym_Panel] = ACTIONS(128),
    [anon_sym_Overlay_Widget] = ACTIONS(128),
    [anon_sym_Vertical_Group] = ACTIONS(128),
    [anon_sym_Horizontal_Group] = ACTIONS(128),
    [anon_sym_Widget_Pages] = ACTIONS(128),
    [anon_sym_Button] = ACTIONS(128),
    [anon_sym_Select_Button] = ACTIONS(128),
    [anon_sym_Angle_Box] = ACTIONS(128),
    [anon_sym_Attributes_Box] = ACTIONS(128),
    [anon_sym_Billboard_Box] = ACTIONS(128),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(128),
    [anon_sym_Bitmap_List_Box] = ACTIONS(128),
    [anon_sym_Chainage_Box] = ACTIONS(128),
    [anon_sym_Choice_Box] = ACTIONS(128),
    [anon_sym_Colour_Box] = ACTIONS(128),
    [anon_sym_Colour_Message_Box] = ACTIONS(128),
    [anon_sym_Date_Time_Box] = ACTIONS(128),
    [anon_sym_Directory_Box] = ACTIONS(128),
    [anon_sym_Draw_Box] = ACTIONS(128),
    [anon_sym_File_Box] = ACTIONS(128),
    [anon_sym_Function_Box] = ACTIONS(128),
    [anon_sym_Graph_Box] = ACTIONS(128),
    [anon_sym_GridCtrl_Box] = ACTIONS(128),
    [anon_sym_HyperLink_Box] = ACTIONS(128),
    [anon_sym_Input_Box] = ACTIONS(128),
    [anon_sym_Integer_Box] = ACTIONS(128),
    [anon_sym_Justify_Box] = ACTIONS(128),
    [anon_sym_Linestyle_Box] = ACTIONS(128),
    [anon_sym_List_Box] = ACTIONS(128),
    [anon_sym_ListCtrl_Box] = ACTIONS(128),
    [anon_sym_Map_File_Box] = ACTIONS(128),
    [anon_sym_Message_Box] = ACTIONS(128),
    [anon_sym_Model_Box] = ACTIONS(128),
    [anon_sym_Name_Box] = ACTIONS(128),
    [anon_sym_Named_Tick_Box] = ACTIONS(128),
    [anon_sym_New_Select_Box] = ACTIONS(128),
    [anon_sym_New_XYZ_Box] = ACTIONS(128),
    [anon_sym_Plotter_Box] = ACTIONS(128),
    [anon_sym_Polygon_Box] = ACTIONS(128),
    [anon_sym_Real_Box] = ACTIONS(128),
    [anon_sym_Report_Box] = ACTIONS(128),
    [anon_sym_Select_Box] = ACTIONS(128),
    [anon_sym_Select_Boxes] = ACTIONS(128),
    [anon_sym_Sheet_Size_Box] = ACTIONS(128),
    [anon_sym_Source_Box] = ACTIONS(128),
    [anon_sym_Symbol_Box] = ACTIONS(128),
    [anon_sym_Tab_Box] = ACTIONS(128),
    [anon_sym_Target_Box] = ACTIONS(128),
    [anon_sym_Template_Box] = ACTIONS(128),
    [anon_sym_Text_Edit_Box] = ACTIONS(128),
    [anon_sym_Text_Style_Box] = ACTIONS(128),
    [anon_sym_Texture_Box] = ACTIONS(128),
    [anon_sym_Tree_Box] = ACTIONS(128),
    [anon_sym_Tree_Page] = ACTIONS(128),
    [anon_sym_Tick_Box] = ACTIONS(128),
    [anon_sym_Tin_Box] = ACTIONS(128),
    [anon_sym_View_Box] = ACTIONS(128),
    [anon_sym_XYZ_Box] = ACTIONS(128),
    [anon_sym_File] = ACTIONS(128),
    [anon_sym_Map_File] = ACTIONS(128),
    [anon_sym_Plot_Parameter_File] = ACTIONS(128),
    [anon_sym_XML_Document] = ACTIONS(128),
    [anon_sym_XML_Node] = ACTIONS(128),
    [anon_sym_Connection] = ACTIONS(128),
    [anon_sym_Select_Query] = ACTIONS(128),
    [anon_sym_Insert_Query] = ACTIONS(128),
    [anon_sym_Update_Query] = ACTIONS(128),
    [anon_sym_Delete_Query] = ACTIONS(128),
    [anon_sym_Database_Results] = ACTIONS(128),
    [anon_sym_Transactions] = ACTIONS(128),
    [anon_sym_Parameter_Collection] = ACTIONS(128),
    [anon_sym_Query_Condition] = ACTIONS(128),
    [anon_sym_Manual_Condition] = ACTIONS(128),
    [anon_sym_Dynamic_Element] = ACTIONS(128),
    [anon_sym_Dynamic_Integer] = ACTIONS(128),
    [anon_sym_Dynamic_Real] = ACTIONS(128),
    [anon_sym_Dynamic_Text] = ACTIONS(128),
  },
  [30] = {
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_Integer] = ACTIONS(96),
    [anon_sym_Real] = ACTIONS(96),
    [anon_sym_Text] = ACTIONS(96),
    [anon_sym_Vector2] = ACTIONS(96),
    [anon_sym_Vector3] = ACTIONS(96),
    [anon_sym_Vector4] = ACTIONS(96),
    [anon_sym_Matrix3] = ACTIONS(96),
    [anon_sym_Matrix4] = ACTIONS(96),
    [anon_sym_Point] = ACTIONS(96),
    [anon_sym_Line] = ACTIONS(96),
    [anon_sym_Arc] = ACTIONS(96),
    [anon_sym_Spiral] = ACTIONS(96),
    [anon_sym_Parabola] = ACTIONS(96),
    [anon_sym_Segment] = ACTIONS(96),
    [anon_sym_Element] = ACTIONS(96),
    [anon_sym_Model] = ACTIONS(96),
    [anon_sym_View] = ACTIONS(96),
    [anon_sym_Macro_Function] = ACTIONS(96),
    [anon_sym_Function] = ACTIONS(96),
    [anon_sym_Uid] = ACTIONS(96),
    [anon_sym_Guid] = ACTIONS(96),
    [anon_sym_Attributes] = ACTIONS(96),
    [anon_sym_SDR_Attribute] = ACTIONS(96),
    [anon_sym_Blob] = ACTIONS(96),
    [anon_sym_Screen_Text] = ACTIONS(96),
    [anon_sym_Textstyle_Data] = ACTIONS(96),
    [anon_sym_Equality_Label] = ACTIONS(96),
    [anon_sym_Undo] = ACTIONS(96),
    [anon_sym_Undo_List] = ACTIONS(96),
    [anon_sym_Widget] = ACTIONS(96),
    [anon_sym_Menu] = ACTIONS(96),
    [anon_sym_Panel] = ACTIONS(96),
    [anon_sym_Overlay_Widget] = ACTIONS(96),
    [anon_sym_Vertical_Group] = ACTIONS(96),
    [anon_sym_Horizontal_Group] = ACTIONS(96),
    [anon_sym_Widget_Pages] = ACTIONS(96),
    [anon_sym_Button] = ACTIONS(96),
    [anon_sym_Select_Button] = ACTIONS(96),
    [anon_sym_Angle_Box] = ACTIONS(96),
    [anon_sym_Attributes_Box] = ACTIONS(96),
    [anon_sym_Billboard_Box] = ACTIONS(96),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(96),
    [anon_sym_Bitmap_List_Box] = ACTIONS(96),
    [anon_sym_Chainage_Box] = ACTIONS(96),
    [anon_sym_Choice_Box] = ACTIONS(96),
    [anon_sym_Colour_Box] = ACTIONS(96),
    [anon_sym_Colour_Message_Box] = ACTIONS(96),
    [anon_sym_Date_Time_Box] = ACTIONS(96),
    [anon_sym_Directory_Box] = ACTIONS(96),
    [anon_sym_Draw_Box] = ACTIONS(96),
    [anon_sym_File_Box] = ACTIONS(96),
    [anon_sym_Function_Box] = ACTIONS(96),
    [anon_sym_Graph_Box] = ACTIONS(96),
    [anon_sym_GridCtrl_Box] = ACTIONS(96),
    [anon_sym_HyperLink_Box] = ACTIONS(96),
    [anon_sym_Input_Box] = ACTIONS(96),
    [anon_sym_Integer_Box] = ACTIONS(96),
    [anon_sym_Justify_Box] = ACTIONS(96),
    [anon_sym_Linestyle_Box] = ACTIONS(96),
    [anon_sym_List_Box] = ACTIONS(96),
    [anon_sym_ListCtrl_Box] = ACTIONS(96),
    [anon_sym_Map_File_Box] = ACTIONS(96),
    [anon_sym_Message_Box] = ACTIONS(96),
    [anon_sym_Model_Box] = ACTIONS(96),
    [anon_sym_Name_Box] = ACTIONS(96),
    [anon_sym_Named_Tick_Box] = ACTIONS(96),
    [anon_sym_New_Select_Box] = ACTIONS(96),
    [anon_sym_New_XYZ_Box] = ACTIONS(96),
    [anon_sym_Plotter_Box] = ACTIONS(96),
    [anon_sym_Polygon_Box] = ACTIONS(96),
    [anon_sym_Real_Box] = ACTIONS(96),
    [anon_sym_Report_Box] = ACTIONS(96),
    [anon_sym_Select_Box] = ACTIONS(96),
    [anon_sym_Select_Boxes] = ACTIONS(96),
    [anon_sym_Sheet_Size_Box] = ACTIONS(96),
    [anon_sym_Source_Box] = ACTIONS(96),
    [anon_sym_Symbol_Box] = ACTIONS(96),
    [anon_sym_Tab_Box] = ACTIONS(96),
    [anon_sym_Target_Box] = ACTIONS(96),
    [anon_sym_Template_Box] = ACTIONS(96),
    [anon_sym_Text_Edit_Box] = ACTIONS(96),
    [anon_sym_Text_Style_Box] = ACTIONS(96),
    [anon_sym_Texture_Box] = ACTIONS(96),
    [anon_sym_Tree_Box] = ACTIONS(96),
    [anon_sym_Tree_Page] = ACTIONS(96),
    [anon_sym_Tick_Box] = ACTIONS(96),
    [anon_sym_Tin_Box] = ACTIONS(96),
    [anon_sym_View_Box] = ACTIONS(96),
    [anon_sym_XYZ_Box] = ACTIONS(96),
    [anon_sym_File] = ACTIONS(96),
    [anon_sym_Map_File] = ACTIONS(96),
    [anon_sym_Plot_Parameter_File] = ACTIONS(96),
    [anon_sym_XML_Document] = ACTIONS(96),
    [anon_sym_XML_Node] = ACTIONS(96),
    [anon_sym_Connection] = ACTIONS(96),
    [anon_sym_Select_Query] = ACTIONS(96),
    [anon_sym_Insert_Query] = ACTIONS(96),
    [anon_sym_Update_Query] = ACTIONS(96),
    [anon_sym_Delete_Query] = ACTIONS(96),
    [anon_sym_Database_Results] = ACTIONS(96),
    [anon_sym_Transactions] = ACTIONS(96),
    [anon_sym_Parameter_Collection] = ACTIONS(96),
    [anon_sym_Query_Condition] = ACTIONS(96),
    [anon_sym_Manual_Condition] = ACTIONS(96),
    [anon_sym_Dynamic_Element] = ACTIONS(96),
    [anon_sym_Dynamic_Integer] = ACTIONS(96),
    [anon_sym_Dynamic_Real] = ACTIONS(96),
    [anon_sym_Dynamic_Text] = ACTIONS(96),
  },
  [31] = {
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_RBRACE] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(104),
    [anon_sym_for] = ACTIONS(104),
    [anon_sym_SEMI] = ACTIONS(102),
    [anon_sym_BANG] = ACTIONS(102),
    [anon_sym_return] = ACTIONS(104),
    [sym_identifier] = ACTIONS(104),
    [sym_number_literal] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [anon_sym_void] = ACTIONS(104),
    [anon_sym_Integer] = ACTIONS(104),
    [anon_sym_Real] = ACTIONS(104),
    [anon_sym_Text] = ACTIONS(104),
    [anon_sym_Vector2] = ACTIONS(104),
    [anon_sym_Vector3] = ACTIONS(104),
    [anon_sym_Vector4] = ACTIONS(104),
    [anon_sym_Matrix3] = ACTIONS(104),
    [anon_sym_Matrix4] = ACTIONS(104),
    [anon_sym_Point] = ACTIONS(104),
    [anon_sym_Line] = ACTIONS(104),
    [anon_sym_Arc] = ACTIONS(104),
    [anon_sym_Spiral] = ACTIONS(104),
    [anon_sym_Parabola] = ACTIONS(104),
    [anon_sym_Segment] = ACTIONS(104),
    [anon_sym_Element] = ACTIONS(104),
    [anon_sym_Model] = ACTIONS(104),
    [anon_sym_View] = ACTIONS(104),
    [anon_sym_Macro_Function] = ACTIONS(104),
    [anon_sym_Function] = ACTIONS(104),
    [anon_sym_Uid] = ACTIONS(104),
    [anon_sym_Guid] = ACTIONS(104),
    [anon_sym_Attributes] = ACTIONS(104),
    [anon_sym_SDR_Attribute] = ACTIONS(104),
    [anon_sym_Blob] = ACTIONS(104),
    [anon_sym_Screen_Text] = ACTIONS(104),
    [anon_sym_Textstyle_Data] = ACTIONS(104),
    [anon_sym_Equality_Label] = ACTIONS(104),
    [anon_sym_Undo] = ACTIONS(104),
    [anon_sym_Undo_List] = ACTIONS(104),
    [anon_sym_Widget] = ACTIONS(104),
    [anon_sym_Menu] = ACTIONS(104),
    [anon_sym_Panel] = ACTIONS(104),
    [anon_sym_Overlay_Widget] = ACTIONS(104),
    [anon_sym_Vertical_Group] = ACTIONS(104),
    [anon_sym_Horizontal_Group] = ACTIONS(104),
    [anon_sym_Widget_Pages] = ACTIONS(104),
    [anon_sym_Button] = ACTIONS(104),
    [anon_sym_Select_Button] = ACTIONS(104),
    [anon_sym_Angle_Box] = ACTIONS(104),
    [anon_sym_Attributes_Box] = ACTIONS(104),
    [anon_sym_Billboard_Box] = ACTIONS(104),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(104),
    [anon_sym_Bitmap_List_Box] = ACTIONS(104),
    [anon_sym_Chainage_Box] = ACTIONS(104),
    [anon_sym_Choice_Box] = ACTIONS(104),
    [anon_sym_Colour_Box] = ACTIONS(104),
    [anon_sym_Colour_Message_Box] = ACTIONS(104),
    [anon_sym_Date_Time_Box] = ACTIONS(104),
    [anon_sym_Directory_Box] = ACTIONS(104),
    [anon_sym_Draw_Box] = ACTIONS(104),
    [anon_sym_File_Box] = ACTIONS(104),
    [anon_sym_Function_Box] = ACTIONS(104),
    [anon_sym_Graph_Box] = ACTIONS(104),
    [anon_sym_GridCtrl_Box] = ACTIONS(104),
    [anon_sym_HyperLink_Box] = ACTIONS(104),
    [anon_sym_Input_Box] = ACTIONS(104),
    [anon_sym_Integer_Box] = ACTIONS(104),
    [anon_sym_Justify_Box] = ACTIONS(104),
    [anon_sym_Linestyle_Box] = ACTIONS(104),
    [anon_sym_List_Box] = ACTIONS(104),
    [anon_sym_ListCtrl_Box] = ACTIONS(104),
    [anon_sym_Map_File_Box] = ACTIONS(104),
    [anon_sym_Message_Box] = ACTIONS(104),
    [anon_sym_Model_Box] = ACTIONS(104),
    [anon_sym_Name_Box] = ACTIONS(104),
    [anon_sym_Named_Tick_Box] = ACTIONS(104),
    [anon_sym_New_Select_Box] = ACTIONS(104),
    [anon_sym_New_XYZ_Box] = ACTIONS(104),
    [anon_sym_Plotter_Box] = ACTIONS(104),
    [anon_sym_Polygon_Box] = ACTIONS(104),
    [anon_sym_Real_Box] = ACTIONS(104),
    [anon_sym_Report_Box] = ACTIONS(104),
    [anon_sym_Select_Box] = ACTIONS(104),
    [anon_sym_Select_Boxes] = ACTIONS(104),
    [anon_sym_Sheet_Size_Box] = ACTIONS(104),
    [anon_sym_Source_Box] = ACTIONS(104),
    [anon_sym_Symbol_Box] = ACTIONS(104),
    [anon_sym_Tab_Box] = ACTIONS(104),
    [anon_sym_Target_Box] = ACTIONS(104),
    [anon_sym_Template_Box] = ACTIONS(104),
    [anon_sym_Text_Edit_Box] = ACTIONS(104),
    [anon_sym_Text_Style_Box] = ACTIONS(104),
    [anon_sym_Texture_Box] = ACTIONS(104),
    [anon_sym_Tree_Box] = ACTIONS(104),
    [anon_sym_Tree_Page] = ACTIONS(104),
    [anon_sym_Tick_Box] = ACTIONS(104),
    [anon_sym_Tin_Box] = ACTIONS(104),
    [anon_sym_View_Box] = ACTIONS(104),
    [anon_sym_XYZ_Box] = ACTIONS(104),
    [anon_sym_File] = ACTIONS(104),
    [anon_sym_Map_File] = ACTIONS(104),
    [anon_sym_Plot_Parameter_File] = ACTIONS(104),
    [anon_sym_XML_Document] = ACTIONS(104),
    [anon_sym_XML_Node] = ACTIONS(104),
    [anon_sym_Connection] = ACTIONS(104),
    [anon_sym_Select_Query] = ACTIONS(104),
    [anon_sym_Insert_Query] = ACTIONS(104),
    [anon_sym_Update_Query] = ACTIONS(104),
    [anon_sym_Delete_Query] = ACTIONS(104),
    [anon_sym_Database_Results] = ACTIONS(104),
    [anon_sym_Transactions] = ACTIONS(104),
    [anon_sym_Parameter_Collection] = ACTIONS(104),
    [anon_sym_Query_Condition] = ACTIONS(104),
    [anon_sym_Manual_Condition] = ACTIONS(104),
    [anon_sym_Dynamic_Element] = ACTIONS(104),
    [anon_sym_Dynamic_Integer] = ACTIONS(104),
    [anon_sym_Dynamic_Real] = ACTIONS(104),
    [anon_sym_Dynamic_Text] = ACTIONS(104),
  },
  [32] = {
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_RBRACE] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(98),
    [anon_sym_if] = ACTIONS(100),
    [anon_sym_for] = ACTIONS(100),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_BANG] = ACTIONS(98),
    [anon_sym_return] = ACTIONS(100),
    [sym_identifier] = ACTIONS(100),
    [sym_number_literal] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_void] = ACTIONS(100),
    [anon_sym_Integer] = ACTIONS(100),
    [anon_sym_Real] = ACTIONS(100),
    [anon_sym_Text] = ACTIONS(100),
    [anon_sym_Vector2] = ACTIONS(100),
    [anon_sym_Vector3] = ACTIONS(100),
    [anon_sym_Vector4] = ACTIONS(100),
    [anon_sym_Matrix3] = ACTIONS(100),
    [anon_sym_Matrix4] = ACTIONS(100),
    [anon_sym_Point] = ACTIONS(100),
    [anon_sym_Line] = ACTIONS(100),
    [anon_sym_Arc] = ACTIONS(100),
    [anon_sym_Spiral] = ACTIONS(100),
    [anon_sym_Parabola] = ACTIONS(100),
    [anon_sym_Segment] = ACTIONS(100),
    [anon_sym_Element] = ACTIONS(100),
    [anon_sym_Model] = ACTIONS(100),
    [anon_sym_View] = ACTIONS(100),
    [anon_sym_Macro_Function] = ACTIONS(100),
    [anon_sym_Function] = ACTIONS(100),
    [anon_sym_Uid] = ACTIONS(100),
    [anon_sym_Guid] = ACTIONS(100),
    [anon_sym_Attributes] = ACTIONS(100),
    [anon_sym_SDR_Attribute] = ACTIONS(100),
    [anon_sym_Blob] = ACTIONS(100),
    [anon_sym_Screen_Text] = ACTIONS(100),
    [anon_sym_Textstyle_Data] = ACTIONS(100),
    [anon_sym_Equality_Label] = ACTIONS(100),
    [anon_sym_Undo] = ACTIONS(100),
    [anon_sym_Undo_List] = ACTIONS(100),
    [anon_sym_Widget] = ACTIONS(100),
    [anon_sym_Menu] = ACTIONS(100),
    [anon_sym_Panel] = ACTIONS(100),
    [anon_sym_Overlay_Widget] = ACTIONS(100),
    [anon_sym_Vertical_Group] = ACTIONS(100),
    [anon_sym_Horizontal_Group] = ACTIONS(100),
    [anon_sym_Widget_Pages] = ACTIONS(100),
    [anon_sym_Button] = ACTIONS(100),
    [anon_sym_Select_Button] = ACTIONS(100),
    [anon_sym_Angle_Box] = ACTIONS(100),
    [anon_sym_Attributes_Box] = ACTIONS(100),
    [anon_sym_Billboard_Box] = ACTIONS(100),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(100),
    [anon_sym_Bitmap_List_Box] = ACTIONS(100),
    [anon_sym_Chainage_Box] = ACTIONS(100),
    [anon_sym_Choice_Box] = ACTIONS(100),
    [anon_sym_Colour_Box] = ACTIONS(100),
    [anon_sym_Colour_Message_Box] = ACTIONS(100),
    [anon_sym_Date_Time_Box] = ACTIONS(100),
    [anon_sym_Directory_Box] = ACTIONS(100),
    [anon_sym_Draw_Box] = ACTIONS(100),
    [anon_sym_File_Box] = ACTIONS(100),
    [anon_sym_Function_Box] = ACTIONS(100),
    [anon_sym_Graph_Box] = ACTIONS(100),
    [anon_sym_GridCtrl_Box] = ACTIONS(100),
    [anon_sym_HyperLink_Box] = ACTIONS(100),
    [anon_sym_Input_Box] = ACTIONS(100),
    [anon_sym_Integer_Box] = ACTIONS(100),
    [anon_sym_Justify_Box] = ACTIONS(100),
    [anon_sym_Linestyle_Box] = ACTIONS(100),
    [anon_sym_List_Box] = ACTIONS(100),
    [anon_sym_ListCtrl_Box] = ACTIONS(100),
    [anon_sym_Map_File_Box] = ACTIONS(100),
    [anon_sym_Message_Box] = ACTIONS(100),
    [anon_sym_Model_Box] = ACTIONS(100),
    [anon_sym_Name_Box] = ACTIONS(100),
    [anon_sym_Named_Tick_Box] = ACTIONS(100),
    [anon_sym_New_Select_Box] = ACTIONS(100),
    [anon_sym_New_XYZ_Box] = ACTIONS(100),
    [anon_sym_Plotter_Box] = ACTIONS(100),
    [anon_sym_Polygon_Box] = ACTIONS(100),
    [anon_sym_Real_Box] = ACTIONS(100),
    [anon_sym_Report_Box] = ACTIONS(100),
    [anon_sym_Select_Box] = ACTIONS(100),
    [anon_sym_Select_Boxes] = ACTIONS(100),
    [anon_sym_Sheet_Size_Box] = ACTIONS(100),
    [anon_sym_Source_Box] = ACTIONS(100),
    [anon_sym_Symbol_Box] = ACTIONS(100),
    [anon_sym_Tab_Box] = ACTIONS(100),
    [anon_sym_Target_Box] = ACTIONS(100),
    [anon_sym_Template_Box] = ACTIONS(100),
    [anon_sym_Text_Edit_Box] = ACTIONS(100),
    [anon_sym_Text_Style_Box] = ACTIONS(100),
    [anon_sym_Texture_Box] = ACTIONS(100),
    [anon_sym_Tree_Box] = ACTIONS(100),
    [anon_sym_Tree_Page] = ACTIONS(100),
    [anon_sym_Tick_Box] = ACTIONS(100),
    [anon_sym_Tin_Box] = ACTIONS(100),
    [anon_sym_View_Box] = ACTIONS(100),
    [anon_sym_XYZ_Box] = ACTIONS(100),
    [anon_sym_File] = ACTIONS(100),
    [anon_sym_Map_File] = ACTIONS(100),
    [anon_sym_Plot_Parameter_File] = ACTIONS(100),
    [anon_sym_XML_Document] = ACTIONS(100),
    [anon_sym_XML_Node] = ACTIONS(100),
    [anon_sym_Connection] = ACTIONS(100),
    [anon_sym_Select_Query] = ACTIONS(100),
    [anon_sym_Insert_Query] = ACTIONS(100),
    [anon_sym_Update_Query] = ACTIONS(100),
    [anon_sym_Delete_Query] = ACTIONS(100),
    [anon_sym_Database_Results] = ACTIONS(100),
    [anon_sym_Transactions] = ACTIONS(100),
    [anon_sym_Parameter_Collection] = ACTIONS(100),
    [anon_sym_Query_Condition] = ACTIONS(100),
    [anon_sym_Manual_Condition] = ACTIONS(100),
    [anon_sym_Dynamic_Element] = ACTIONS(100),
    [anon_sym_Dynamic_Integer] = ACTIONS(100),
    [anon_sym_Dynamic_Real] = ACTIONS(100),
    [anon_sym_Dynamic_Text] = ACTIONS(100),
  },
  [33] = {
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_if] = ACTIONS(114),
    [anon_sym_for] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_BANG] = ACTIONS(112),
    [anon_sym_return] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [sym_number_literal] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_void] = ACTIONS(114),
    [anon_sym_Integer] = ACTIONS(114),
    [anon_sym_Real] = ACTIONS(114),
    [anon_sym_Text] = ACTIONS(114),
    [anon_sym_Vector2] = ACTIONS(114),
    [anon_sym_Vector3] = ACTIONS(114),
    [anon_sym_Vector4] = ACTIONS(114),
    [anon_sym_Matrix3] = ACTIONS(114),
    [anon_sym_Matrix4] = ACTIONS(114),
    [anon_sym_Point] = ACTIONS(114),
    [anon_sym_Line] = ACTIONS(114),
    [anon_sym_Arc] = ACTIONS(114),
    [anon_sym_Spiral] = ACTIONS(114),
    [anon_sym_Parabola] = ACTIONS(114),
    [anon_sym_Segment] = ACTIONS(114),
    [anon_sym_Element] = ACTIONS(114),
    [anon_sym_Model] = ACTIONS(114),
    [anon_sym_View] = ACTIONS(114),
    [anon_sym_Macro_Function] = ACTIONS(114),
    [anon_sym_Function] = ACTIONS(114),
    [anon_sym_Uid] = ACTIONS(114),
    [anon_sym_Guid] = ACTIONS(114),
    [anon_sym_Attributes] = ACTIONS(114),
    [anon_sym_SDR_Attribute] = ACTIONS(114),
    [anon_sym_Blob] = ACTIONS(114),
    [anon_sym_Screen_Text] = ACTIONS(114),
    [anon_sym_Textstyle_Data] = ACTIONS(114),
    [anon_sym_Equality_Label] = ACTIONS(114),
    [anon_sym_Undo] = ACTIONS(114),
    [anon_sym_Undo_List] = ACTIONS(114),
    [anon_sym_Widget] = ACTIONS(114),
    [anon_sym_Menu] = ACTIONS(114),
    [anon_sym_Panel] = ACTIONS(114),
    [anon_sym_Overlay_Widget] = ACTIONS(114),
    [anon_sym_Vertical_Group] = ACTIONS(114),
    [anon_sym_Horizontal_Group] = ACTIONS(114),
    [anon_sym_Widget_Pages] = ACTIONS(114),
    [anon_sym_Button] = ACTIONS(114),
    [anon_sym_Select_Button] = ACTIONS(114),
    [anon_sym_Angle_Box] = ACTIONS(114),
    [anon_sym_Attributes_Box] = ACTIONS(114),
    [anon_sym_Billboard_Box] = ACTIONS(114),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(114),
    [anon_sym_Bitmap_List_Box] = ACTIONS(114),
    [anon_sym_Chainage_Box] = ACTIONS(114),
    [anon_sym_Choice_Box] = ACTIONS(114),
    [anon_sym_Colour_Box] = ACTIONS(114),
    [anon_sym_Colour_Message_Box] = ACTIONS(114),
    [anon_sym_Date_Time_Box] = ACTIONS(114),
    [anon_sym_Directory_Box] = ACTIONS(114),
    [anon_sym_Draw_Box] = ACTIONS(114),
    [anon_sym_File_Box] = ACTIONS(114),
    [anon_sym_Function_Box] = ACTIONS(114),
    [anon_sym_Graph_Box] = ACTIONS(114),
    [anon_sym_GridCtrl_Box] = ACTIONS(114),
    [anon_sym_HyperLink_Box] = ACTIONS(114),
    [anon_sym_Input_Box] = ACTIONS(114),
    [anon_sym_Integer_Box] = ACTIONS(114),
    [anon_sym_Justify_Box] = ACTIONS(114),
    [anon_sym_Linestyle_Box] = ACTIONS(114),
    [anon_sym_List_Box] = ACTIONS(114),
    [anon_sym_ListCtrl_Box] = ACTIONS(114),
    [anon_sym_Map_File_Box] = ACTIONS(114),
    [anon_sym_Message_Box] = ACTIONS(114),
    [anon_sym_Model_Box] = ACTIONS(114),
    [anon_sym_Name_Box] = ACTIONS(114),
    [anon_sym_Named_Tick_Box] = ACTIONS(114),
    [anon_sym_New_Select_Box] = ACTIONS(114),
    [anon_sym_New_XYZ_Box] = ACTIONS(114),
    [anon_sym_Plotter_Box] = ACTIONS(114),
    [anon_sym_Polygon_Box] = ACTIONS(114),
    [anon_sym_Real_Box] = ACTIONS(114),
    [anon_sym_Report_Box] = ACTIONS(114),
    [anon_sym_Select_Box] = ACTIONS(114),
    [anon_sym_Select_Boxes] = ACTIONS(114),
    [anon_sym_Sheet_Size_Box] = ACTIONS(114),
    [anon_sym_Source_Box] = ACTIONS(114),
    [anon_sym_Symbol_Box] = ACTIONS(114),
    [anon_sym_Tab_Box] = ACTIONS(114),
    [anon_sym_Target_Box] = ACTIONS(114),
    [anon_sym_Template_Box] = ACTIONS(114),
    [anon_sym_Text_Edit_Box] = ACTIONS(114),
    [anon_sym_Text_Style_Box] = ACTIONS(114),
    [anon_sym_Texture_Box] = ACTIONS(114),
    [anon_sym_Tree_Box] = ACTIONS(114),
    [anon_sym_Tree_Page] = ACTIONS(114),
    [anon_sym_Tick_Box] = ACTIONS(114),
    [anon_sym_Tin_Box] = ACTIONS(114),
    [anon_sym_View_Box] = ACTIONS(114),
    [anon_sym_XYZ_Box] = ACTIONS(114),
    [anon_sym_File] = ACTIONS(114),
    [anon_sym_Map_File] = ACTIONS(114),
    [anon_sym_Plot_Parameter_File] = ACTIONS(114),
    [anon_sym_XML_Document] = ACTIONS(114),
    [anon_sym_XML_Node] = ACTIONS(114),
    [anon_sym_Connection] = ACTIONS(114),
    [anon_sym_Select_Query] = ACTIONS(114),
    [anon_sym_Insert_Query] = ACTIONS(114),
    [anon_sym_Update_Query] = ACTIONS(114),
    [anon_sym_Delete_Query] = ACTIONS(114),
    [anon_sym_Database_Results] = ACTIONS(114),
    [anon_sym_Transactions] = ACTIONS(114),
    [anon_sym_Parameter_Collection] = ACTIONS(114),
    [anon_sym_Query_Condition] = ACTIONS(114),
    [anon_sym_Manual_Condition] = ACTIONS(114),
    [anon_sym_Dynamic_Element] = ACTIONS(114),
    [anon_sym_Dynamic_Integer] = ACTIONS(114),
    [anon_sym_Dynamic_Real] = ACTIONS(114),
    [anon_sym_Dynamic_Text] = ACTIONS(114),
  },
  [34] = {
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_RBRACE] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(130),
    [anon_sym_if] = ACTIONS(132),
    [anon_sym_for] = ACTIONS(132),
    [anon_sym_SEMI] = ACTIONS(130),
    [anon_sym_BANG] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(132),
    [sym_identifier] = ACTIONS(132),
    [sym_number_literal] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(130),
    [anon_sym_void] = ACTIONS(132),
    [anon_sym_Integer] = ACTIONS(132),
    [anon_sym_Real] = ACTIONS(132),
    [anon_sym_Text] = ACTIONS(132),
    [anon_sym_Vector2] = ACTIONS(132),
    [anon_sym_Vector3] = ACTIONS(132),
    [anon_sym_Vector4] = ACTIONS(132),
    [anon_sym_Matrix3] = ACTIONS(132),
    [anon_sym_Matrix4] = ACTIONS(132),
    [anon_sym_Point] = ACTIONS(132),
    [anon_sym_Line] = ACTIONS(132),
    [anon_sym_Arc] = ACTIONS(132),
    [anon_sym_Spiral] = ACTIONS(132),
    [anon_sym_Parabola] = ACTIONS(132),
    [anon_sym_Segment] = ACTIONS(132),
    [anon_sym_Element] = ACTIONS(132),
    [anon_sym_Model] = ACTIONS(132),
    [anon_sym_View] = ACTIONS(132),
    [anon_sym_Macro_Function] = ACTIONS(132),
    [anon_sym_Function] = ACTIONS(132),
    [anon_sym_Uid] = ACTIONS(132),
    [anon_sym_Guid] = ACTIONS(132),
    [anon_sym_Attributes] = ACTIONS(132),
    [anon_sym_SDR_Attribute] = ACTIONS(132),
    [anon_sym_Blob] = ACTIONS(132),
    [anon_sym_Screen_Text] = ACTIONS(132),
    [anon_sym_Textstyle_Data] = ACTIONS(132),
    [anon_sym_Equality_Label] = ACTIONS(132),
    [anon_sym_Undo] = ACTIONS(132),
    [anon_sym_Undo_List] = ACTIONS(132),
    [anon_sym_Widget] = ACTIONS(132),
    [anon_sym_Menu] = ACTIONS(132),
    [anon_sym_Panel] = ACTIONS(132),
    [anon_sym_Overlay_Widget] = ACTIONS(132),
    [anon_sym_Vertical_Group] = ACTIONS(132),
    [anon_sym_Horizontal_Group] = ACTIONS(132),
    [anon_sym_Widget_Pages] = ACTIONS(132),
    [anon_sym_Button] = ACTIONS(132),
    [anon_sym_Select_Button] = ACTIONS(132),
    [anon_sym_Angle_Box] = ACTIONS(132),
    [anon_sym_Attributes_Box] = ACTIONS(132),
    [anon_sym_Billboard_Box] = ACTIONS(132),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(132),
    [anon_sym_Bitmap_List_Box] = ACTIONS(132),
    [anon_sym_Chainage_Box] = ACTIONS(132),
    [anon_sym_Choice_Box] = ACTIONS(132),
    [anon_sym_Colour_Box] = ACTIONS(132),
    [anon_sym_Colour_Message_Box] = ACTIONS(132),
    [anon_sym_Date_Time_Box] = ACTIONS(132),
    [anon_sym_Directory_Box] = ACTIONS(132),
    [anon_sym_Draw_Box] = ACTIONS(132),
    [anon_sym_File_Box] = ACTIONS(132),
    [anon_sym_Function_Box] = ACTIONS(132),
    [anon_sym_Graph_Box] = ACTIONS(132),
    [anon_sym_GridCtrl_Box] = ACTIONS(132),
    [anon_sym_HyperLink_Box] = ACTIONS(132),
    [anon_sym_Input_Box] = ACTIONS(132),
    [anon_sym_Integer_Box] = ACTIONS(132),
    [anon_sym_Justify_Box] = ACTIONS(132),
    [anon_sym_Linestyle_Box] = ACTIONS(132),
    [anon_sym_List_Box] = ACTIONS(132),
    [anon_sym_ListCtrl_Box] = ACTIONS(132),
    [anon_sym_Map_File_Box] = ACTIONS(132),
    [anon_sym_Message_Box] = ACTIONS(132),
    [anon_sym_Model_Box] = ACTIONS(132),
    [anon_sym_Name_Box] = ACTIONS(132),
    [anon_sym_Named_Tick_Box] = ACTIONS(132),
    [anon_sym_New_Select_Box] = ACTIONS(132),
    [anon_sym_New_XYZ_Box] = ACTIONS(132),
    [anon_sym_Plotter_Box] = ACTIONS(132),
    [anon_sym_Polygon_Box] = ACTIONS(132),
    [anon_sym_Real_Box] = ACTIONS(132),
    [anon_sym_Report_Box] = ACTIONS(132),
    [anon_sym_Select_Box] = ACTIONS(132),
    [anon_sym_Select_Boxes] = ACTIONS(132),
    [anon_sym_Sheet_Size_Box] = ACTIONS(132),
    [anon_sym_Source_Box] = ACTIONS(132),
    [anon_sym_Symbol_Box] = ACTIONS(132),
    [anon_sym_Tab_Box] = ACTIONS(132),
    [anon_sym_Target_Box] = ACTIONS(132),
    [anon_sym_Template_Box] = ACTIONS(132),
    [anon_sym_Text_Edit_Box] = ACTIONS(132),
    [anon_sym_Text_Style_Box] = ACTIONS(132),
    [anon_sym_Texture_Box] = ACTIONS(132),
    [anon_sym_Tree_Box] = ACTIONS(132),
    [anon_sym_Tree_Page] = ACTIONS(132),
    [anon_sym_Tick_Box] = ACTIONS(132),
    [anon_sym_Tin_Box] = ACTIONS(132),
    [anon_sym_View_Box] = ACTIONS(132),
    [anon_sym_XYZ_Box] = ACTIONS(132),
    [anon_sym_File] = ACTIONS(132),
    [anon_sym_Map_File] = ACTIONS(132),
    [anon_sym_Plot_Parameter_File] = ACTIONS(132),
    [anon_sym_XML_Document] = ACTIONS(132),
    [anon_sym_XML_Node] = ACTIONS(132),
    [anon_sym_Connection] = ACTIONS(132),
    [anon_sym_Select_Query] = ACTIONS(132),
    [anon_sym_Insert_Query] = ACTIONS(132),
    [anon_sym_Update_Query] = ACTIONS(132),
    [anon_sym_Delete_Query] = ACTIONS(132),
    [anon_sym_Database_Results] = ACTIONS(132),
    [anon_sym_Transactions] = ACTIONS(132),
    [anon_sym_Parameter_Collection] = ACTIONS(132),
    [anon_sym_Query_Condition] = ACTIONS(132),
    [anon_sym_Manual_Condition] = ACTIONS(132),
    [anon_sym_Dynamic_Element] = ACTIONS(132),
    [anon_sym_Dynamic_Integer] = ACTIONS(132),
    [anon_sym_Dynamic_Real] = ACTIONS(132),
    [anon_sym_Dynamic_Text] = ACTIONS(132),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(118),
    [anon_sym_for] = ACTIONS(118),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_BANG] = ACTIONS(116),
    [anon_sym_return] = ACTIONS(118),
    [sym_identifier] = ACTIONS(118),
    [sym_number_literal] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_void] = ACTIONS(118),
    [anon_sym_Integer] = ACTIONS(118),
    [anon_sym_Real] = ACTIONS(118),
    [anon_sym_Text] = ACTIONS(118),
    [anon_sym_Vector2] = ACTIONS(118),
    [anon_sym_Vector3] = ACTIONS(118),
    [anon_sym_Vector4] = ACTIONS(118),
    [anon_sym_Matrix3] = ACTIONS(118),
    [anon_sym_Matrix4] = ACTIONS(118),
    [anon_sym_Point] = ACTIONS(118),
    [anon_sym_Line] = ACTIONS(118),
    [anon_sym_Arc] = ACTIONS(118),
    [anon_sym_Spiral] = ACTIONS(118),
    [anon_sym_Parabola] = ACTIONS(118),
    [anon_sym_Segment] = ACTIONS(118),
    [anon_sym_Element] = ACTIONS(118),
    [anon_sym_Model] = ACTIONS(118),
    [anon_sym_View] = ACTIONS(118),
    [anon_sym_Macro_Function] = ACTIONS(118),
    [anon_sym_Function] = ACTIONS(118),
    [anon_sym_Uid] = ACTIONS(118),
    [anon_sym_Guid] = ACTIONS(118),
    [anon_sym_Attributes] = ACTIONS(118),
    [anon_sym_SDR_Attribute] = ACTIONS(118),
    [anon_sym_Blob] = ACTIONS(118),
    [anon_sym_Screen_Text] = ACTIONS(118),
    [anon_sym_Textstyle_Data] = ACTIONS(118),
    [anon_sym_Equality_Label] = ACTIONS(118),
    [anon_sym_Undo] = ACTIONS(118),
    [anon_sym_Undo_List] = ACTIONS(118),
    [anon_sym_Widget] = ACTIONS(118),
    [anon_sym_Menu] = ACTIONS(118),
    [anon_sym_Panel] = ACTIONS(118),
    [anon_sym_Overlay_Widget] = ACTIONS(118),
    [anon_sym_Vertical_Group] = ACTIONS(118),
    [anon_sym_Horizontal_Group] = ACTIONS(118),
    [anon_sym_Widget_Pages] = ACTIONS(118),
    [anon_sym_Button] = ACTIONS(118),
    [anon_sym_Select_Button] = ACTIONS(118),
    [anon_sym_Angle_Box] = ACTIONS(118),
    [anon_sym_Attributes_Box] = ACTIONS(118),
    [anon_sym_Billboard_Box] = ACTIONS(118),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(118),
    [anon_sym_Bitmap_List_Box] = ACTIONS(118),
    [anon_sym_Chainage_Box] = ACTIONS(118),
    [anon_sym_Choice_Box] = ACTIONS(118),
    [anon_sym_Colour_Box] = ACTIONS(118),
    [anon_sym_Colour_Message_Box] = ACTIONS(118),
    [anon_sym_Date_Time_Box] = ACTIONS(118),
    [anon_sym_Directory_Box] = ACTIONS(118),
    [anon_sym_Draw_Box] = ACTIONS(118),
    [anon_sym_File_Box] = ACTIONS(118),
    [anon_sym_Function_Box] = ACTIONS(118),
    [anon_sym_Graph_Box] = ACTIONS(118),
    [anon_sym_GridCtrl_Box] = ACTIONS(118),
    [anon_sym_HyperLink_Box] = ACTIONS(118),
    [anon_sym_Input_Box] = ACTIONS(118),
    [anon_sym_Integer_Box] = ACTIONS(118),
    [anon_sym_Justify_Box] = ACTIONS(118),
    [anon_sym_Linestyle_Box] = ACTIONS(118),
    [anon_sym_List_Box] = ACTIONS(118),
    [anon_sym_ListCtrl_Box] = ACTIONS(118),
    [anon_sym_Map_File_Box] = ACTIONS(118),
    [anon_sym_Message_Box] = ACTIONS(118),
    [anon_sym_Model_Box] = ACTIONS(118),
    [anon_sym_Name_Box] = ACTIONS(118),
    [anon_sym_Named_Tick_Box] = ACTIONS(118),
    [anon_sym_New_Select_Box] = ACTIONS(118),
    [anon_sym_New_XYZ_Box] = ACTIONS(118),
    [anon_sym_Plotter_Box] = ACTIONS(118),
    [anon_sym_Polygon_Box] = ACTIONS(118),
    [anon_sym_Real_Box] = ACTIONS(118),
    [anon_sym_Report_Box] = ACTIONS(118),
    [anon_sym_Select_Box] = ACTIONS(118),
    [anon_sym_Select_Boxes] = ACTIONS(118),
    [anon_sym_Sheet_Size_Box] = ACTIONS(118),
    [anon_sym_Source_Box] = ACTIONS(118),
    [anon_sym_Symbol_Box] = ACTIONS(118),
    [anon_sym_Tab_Box] = ACTIONS(118),
    [anon_sym_Target_Box] = ACTIONS(118),
    [anon_sym_Template_Box] = ACTIONS(118),
    [anon_sym_Text_Edit_Box] = ACTIONS(118),
    [anon_sym_Text_Style_Box] = ACTIONS(118),
    [anon_sym_Texture_Box] = ACTIONS(118),
    [anon_sym_Tree_Box] = ACTIONS(118),
    [anon_sym_Tree_Page] = ACTIONS(118),
    [anon_sym_Tick_Box] = ACTIONS(118),
    [anon_sym_Tin_Box] = ACTIONS(118),
    [anon_sym_View_Box] = ACTIONS(118),
    [anon_sym_XYZ_Box] = ACTIONS(118),
    [anon_sym_File] = ACTIONS(118),
    [anon_sym_Map_File] = ACTIONS(118),
    [anon_sym_Plot_Parameter_File] = ACTIONS(118),
    [anon_sym_XML_Document] = ACTIONS(118),
    [anon_sym_XML_Node] = ACTIONS(118),
    [anon_sym_Connection] = ACTIONS(118),
    [anon_sym_Select_Query] = ACTIONS(118),
    [anon_sym_Insert_Query] = ACTIONS(118),
    [anon_sym_Update_Query] = ACTIONS(118),
    [anon_sym_Delete_Query] = ACTIONS(118),
    [anon_sym_Database_Results] = ACTIONS(118),
    [anon_sym_Transactions] = ACTIONS(118),
    [anon_sym_Parameter_Collection] = ACTIONS(118),
    [anon_sym_Query_Condition] = ACTIONS(118),
    [anon_sym_Manual_Condition] = ACTIONS(118),
    [anon_sym_Dynamic_Element] = ACTIONS(118),
    [anon_sym_Dynamic_Integer] = ACTIONS(118),
    [anon_sym_Dynamic_Real] = ACTIONS(118),
    [anon_sym_Dynamic_Text] = ACTIONS(118),
  },
  [36] = {
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_for] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_void] = ACTIONS(122),
    [anon_sym_Integer] = ACTIONS(122),
    [anon_sym_Real] = ACTIONS(122),
    [anon_sym_Text] = ACTIONS(122),
    [anon_sym_Vector2] = ACTIONS(122),
    [anon_sym_Vector3] = ACTIONS(122),
    [anon_sym_Vector4] = ACTIONS(122),
    [anon_sym_Matrix3] = ACTIONS(122),
    [anon_sym_Matrix4] = ACTIONS(122),
    [anon_sym_Point] = ACTIONS(122),
    [anon_sym_Line] = ACTIONS(122),
    [anon_sym_Arc] = ACTIONS(122),
    [anon_sym_Spiral] = ACTIONS(122),
    [anon_sym_Parabola] = ACTIONS(122),
    [anon_sym_Segment] = ACTIONS(122),
    [anon_sym_Element] = ACTIONS(122),
    [anon_sym_Model] = ACTIONS(122),
    [anon_sym_View] = ACTIONS(122),
    [anon_sym_Macro_Function] = ACTIONS(122),
    [anon_sym_Function] = ACTIONS(122),
    [anon_sym_Uid] = ACTIONS(122),
    [anon_sym_Guid] = ACTIONS(122),
    [anon_sym_Attributes] = ACTIONS(122),
    [anon_sym_SDR_Attribute] = ACTIONS(122),
    [anon_sym_Blob] = ACTIONS(122),
    [anon_sym_Screen_Text] = ACTIONS(122),
    [anon_sym_Textstyle_Data] = ACTIONS(122),
    [anon_sym_Equality_Label] = ACTIONS(122),
    [anon_sym_Undo] = ACTIONS(122),
    [anon_sym_Undo_List] = ACTIONS(122),
    [anon_sym_Widget] = ACTIONS(122),
    [anon_sym_Menu] = ACTIONS(122),
    [anon_sym_Panel] = ACTIONS(122),
    [anon_sym_Overlay_Widget] = ACTIONS(122),
    [anon_sym_Vertical_Group] = ACTIONS(122),
    [anon_sym_Horizontal_Group] = ACTIONS(122),
    [anon_sym_Widget_Pages] = ACTIONS(122),
    [anon_sym_Button] = ACTIONS(122),
    [anon_sym_Select_Button] = ACTIONS(122),
    [anon_sym_Angle_Box] = ACTIONS(122),
    [anon_sym_Attributes_Box] = ACTIONS(122),
    [anon_sym_Billboard_Box] = ACTIONS(122),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(122),
    [anon_sym_Bitmap_List_Box] = ACTIONS(122),
    [anon_sym_Chainage_Box] = ACTIONS(122),
    [anon_sym_Choice_Box] = ACTIONS(122),
    [anon_sym_Colour_Box] = ACTIONS(122),
    [anon_sym_Colour_Message_Box] = ACTIONS(122),
    [anon_sym_Date_Time_Box] = ACTIONS(122),
    [anon_sym_Directory_Box] = ACTIONS(122),
    [anon_sym_Draw_Box] = ACTIONS(122),
    [anon_sym_File_Box] = ACTIONS(122),
    [anon_sym_Function_Box] = ACTIONS(122),
    [anon_sym_Graph_Box] = ACTIONS(122),
    [anon_sym_GridCtrl_Box] = ACTIONS(122),
    [anon_sym_HyperLink_Box] = ACTIONS(122),
    [anon_sym_Input_Box] = ACTIONS(122),
    [anon_sym_Integer_Box] = ACTIONS(122),
    [anon_sym_Justify_Box] = ACTIONS(122),
    [anon_sym_Linestyle_Box] = ACTIONS(122),
    [anon_sym_List_Box] = ACTIONS(122),
    [anon_sym_ListCtrl_Box] = ACTIONS(122),
    [anon_sym_Map_File_Box] = ACTIONS(122),
    [anon_sym_Message_Box] = ACTIONS(122),
    [anon_sym_Model_Box] = ACTIONS(122),
    [anon_sym_Name_Box] = ACTIONS(122),
    [anon_sym_Named_Tick_Box] = ACTIONS(122),
    [anon_sym_New_Select_Box] = ACTIONS(122),
    [anon_sym_New_XYZ_Box] = ACTIONS(122),
    [anon_sym_Plotter_Box] = ACTIONS(122),
    [anon_sym_Polygon_Box] = ACTIONS(122),
    [anon_sym_Real_Box] = ACTIONS(122),
    [anon_sym_Report_Box] = ACTIONS(122),
    [anon_sym_Select_Box] = ACTIONS(122),
    [anon_sym_Select_Boxes] = ACTIONS(122),
    [anon_sym_Sheet_Size_Box] = ACTIONS(122),
    [anon_sym_Source_Box] = ACTIONS(122),
    [anon_sym_Symbol_Box] = ACTIONS(122),
    [anon_sym_Tab_Box] = ACTIONS(122),
    [anon_sym_Target_Box] = ACTIONS(122),
    [anon_sym_Template_Box] = ACTIONS(122),
    [anon_sym_Text_Edit_Box] = ACTIONS(122),
    [anon_sym_Text_Style_Box] = ACTIONS(122),
    [anon_sym_Texture_Box] = ACTIONS(122),
    [anon_sym_Tree_Box] = ACTIONS(122),
    [anon_sym_Tree_Page] = ACTIONS(122),
    [anon_sym_Tick_Box] = ACTIONS(122),
    [anon_sym_Tin_Box] = ACTIONS(122),
    [anon_sym_View_Box] = ACTIONS(122),
    [anon_sym_XYZ_Box] = ACTIONS(122),
    [anon_sym_File] = ACTIONS(122),
    [anon_sym_Map_File] = ACTIONS(122),
    [anon_sym_Plot_Parameter_File] = ACTIONS(122),
    [anon_sym_XML_Document] = ACTIONS(122),
    [anon_sym_XML_Node] = ACTIONS(122),
    [anon_sym_Connection] = ACTIONS(122),
    [anon_sym_Select_Query] = ACTIONS(122),
    [anon_sym_Insert_Query] = ACTIONS(122),
    [anon_sym_Update_Query] = ACTIONS(122),
    [anon_sym_Delete_Query] = ACTIONS(122),
    [anon_sym_Database_Results] = ACTIONS(122),
    [anon_sym_Transactions] = ACTIONS(122),
    [anon_sym_Parameter_Collection] = ACTIONS(122),
    [anon_sym_Query_Condition] = ACTIONS(122),
    [anon_sym_Manual_Condition] = ACTIONS(122),
    [anon_sym_Dynamic_Element] = ACTIONS(122),
    [anon_sym_Dynamic_Integer] = ACTIONS(122),
    [anon_sym_Dynamic_Real] = ACTIONS(122),
    [anon_sym_Dynamic_Text] = ACTIONS(122),
  },
  [37] = {
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_for] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(120),
    [anon_sym_BANG] = ACTIONS(120),
    [anon_sym_return] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [sym_number_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_void] = ACTIONS(122),
    [anon_sym_Integer] = ACTIONS(122),
    [anon_sym_Real] = ACTIONS(122),
    [anon_sym_Text] = ACTIONS(122),
    [anon_sym_Vector2] = ACTIONS(122),
    [anon_sym_Vector3] = ACTIONS(122),
    [anon_sym_Vector4] = ACTIONS(122),
    [anon_sym_Matrix3] = ACTIONS(122),
    [anon_sym_Matrix4] = ACTIONS(122),
    [anon_sym_Point] = ACTIONS(122),
    [anon_sym_Line] = ACTIONS(122),
    [anon_sym_Arc] = ACTIONS(122),
    [anon_sym_Spiral] = ACTIONS(122),
    [anon_sym_Parabola] = ACTIONS(122),
    [anon_sym_Segment] = ACTIONS(122),
    [anon_sym_Element] = ACTIONS(122),
    [anon_sym_Model] = ACTIONS(122),
    [anon_sym_View] = ACTIONS(122),
    [anon_sym_Macro_Function] = ACTIONS(122),
    [anon_sym_Function] = ACTIONS(122),
    [anon_sym_Uid] = ACTIONS(122),
    [anon_sym_Guid] = ACTIONS(122),
    [anon_sym_Attributes] = ACTIONS(122),
    [anon_sym_SDR_Attribute] = ACTIONS(122),
    [anon_sym_Blob] = ACTIONS(122),
    [anon_sym_Screen_Text] = ACTIONS(122),
    [anon_sym_Textstyle_Data] = ACTIONS(122),
    [anon_sym_Equality_Label] = ACTIONS(122),
    [anon_sym_Undo] = ACTIONS(122),
    [anon_sym_Undo_List] = ACTIONS(122),
    [anon_sym_Widget] = ACTIONS(122),
    [anon_sym_Menu] = ACTIONS(122),
    [anon_sym_Panel] = ACTIONS(122),
    [anon_sym_Overlay_Widget] = ACTIONS(122),
    [anon_sym_Vertical_Group] = ACTIONS(122),
    [anon_sym_Horizontal_Group] = ACTIONS(122),
    [anon_sym_Widget_Pages] = ACTIONS(122),
    [anon_sym_Button] = ACTIONS(122),
    [anon_sym_Select_Button] = ACTIONS(122),
    [anon_sym_Angle_Box] = ACTIONS(122),
    [anon_sym_Attributes_Box] = ACTIONS(122),
    [anon_sym_Billboard_Box] = ACTIONS(122),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(122),
    [anon_sym_Bitmap_List_Box] = ACTIONS(122),
    [anon_sym_Chainage_Box] = ACTIONS(122),
    [anon_sym_Choice_Box] = ACTIONS(122),
    [anon_sym_Colour_Box] = ACTIONS(122),
    [anon_sym_Colour_Message_Box] = ACTIONS(122),
    [anon_sym_Date_Time_Box] = ACTIONS(122),
    [anon_sym_Directory_Box] = ACTIONS(122),
    [anon_sym_Draw_Box] = ACTIONS(122),
    [anon_sym_File_Box] = ACTIONS(122),
    [anon_sym_Function_Box] = ACTIONS(122),
    [anon_sym_Graph_Box] = ACTIONS(122),
    [anon_sym_GridCtrl_Box] = ACTIONS(122),
    [anon_sym_HyperLink_Box] = ACTIONS(122),
    [anon_sym_Input_Box] = ACTIONS(122),
    [anon_sym_Integer_Box] = ACTIONS(122),
    [anon_sym_Justify_Box] = ACTIONS(122),
    [anon_sym_Linestyle_Box] = ACTIONS(122),
    [anon_sym_List_Box] = ACTIONS(122),
    [anon_sym_ListCtrl_Box] = ACTIONS(122),
    [anon_sym_Map_File_Box] = ACTIONS(122),
    [anon_sym_Message_Box] = ACTIONS(122),
    [anon_sym_Model_Box] = ACTIONS(122),
    [anon_sym_Name_Box] = ACTIONS(122),
    [anon_sym_Named_Tick_Box] = ACTIONS(122),
    [anon_sym_New_Select_Box] = ACTIONS(122),
    [anon_sym_New_XYZ_Box] = ACTIONS(122),
    [anon_sym_Plotter_Box] = ACTIONS(122),
    [anon_sym_Polygon_Box] = ACTIONS(122),
    [anon_sym_Real_Box] = ACTIONS(122),
    [anon_sym_Report_Box] = ACTIONS(122),
    [anon_sym_Select_Box] = ACTIONS(122),
    [anon_sym_Select_Boxes] = ACTIONS(122),
    [anon_sym_Sheet_Size_Box] = ACTIONS(122),
    [anon_sym_Source_Box] = ACTIONS(122),
    [anon_sym_Symbol_Box] = ACTIONS(122),
    [anon_sym_Tab_Box] = ACTIONS(122),
    [anon_sym_Target_Box] = ACTIONS(122),
    [anon_sym_Template_Box] = ACTIONS(122),
    [anon_sym_Text_Edit_Box] = ACTIONS(122),
    [anon_sym_Text_Style_Box] = ACTIONS(122),
    [anon_sym_Texture_Box] = ACTIONS(122),
    [anon_sym_Tree_Box] = ACTIONS(122),
    [anon_sym_Tree_Page] = ACTIONS(122),
    [anon_sym_Tick_Box] = ACTIONS(122),
    [anon_sym_Tin_Box] = ACTIONS(122),
    [anon_sym_View_Box] = ACTIONS(122),
    [anon_sym_XYZ_Box] = ACTIONS(122),
    [anon_sym_File] = ACTIONS(122),
    [anon_sym_Map_File] = ACTIONS(122),
    [anon_sym_Plot_Parameter_File] = ACTIONS(122),
    [anon_sym_XML_Document] = ACTIONS(122),
    [anon_sym_XML_Node] = ACTIONS(122),
    [anon_sym_Connection] = ACTIONS(122),
    [anon_sym_Select_Query] = ACTIONS(122),
    [anon_sym_Insert_Query] = ACTIONS(122),
    [anon_sym_Update_Query] = ACTIONS(122),
    [anon_sym_Delete_Query] = ACTIONS(122),
    [anon_sym_Database_Results] = ACTIONS(122),
    [anon_sym_Transactions] = ACTIONS(122),
    [anon_sym_Parameter_Collection] = ACTIONS(122),
    [anon_sym_Query_Condition] = ACTIONS(122),
    [anon_sym_Manual_Condition] = ACTIONS(122),
    [anon_sym_Dynamic_Element] = ACTIONS(122),
    [anon_sym_Dynamic_Integer] = ACTIONS(122),
    [anon_sym_Dynamic_Real] = ACTIONS(122),
    [anon_sym_Dynamic_Text] = ACTIONS(122),
  },
  [38] = {
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_RBRACE] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_if] = ACTIONS(96),
    [anon_sym_for] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(94),
    [anon_sym_return] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [sym_number_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [anon_sym_void] = ACTIONS(96),
    [anon_sym_Integer] = ACTIONS(96),
    [anon_sym_Real] = ACTIONS(96),
    [anon_sym_Text] = ACTIONS(96),
    [anon_sym_Vector2] = ACTIONS(96),
    [anon_sym_Vector3] = ACTIONS(96),
    [anon_sym_Vector4] = ACTIONS(96),
    [anon_sym_Matrix3] = ACTIONS(96),
    [anon_sym_Matrix4] = ACTIONS(96),
    [anon_sym_Point] = ACTIONS(96),
    [anon_sym_Line] = ACTIONS(96),
    [anon_sym_Arc] = ACTIONS(96),
    [anon_sym_Spiral] = ACTIONS(96),
    [anon_sym_Parabola] = ACTIONS(96),
    [anon_sym_Segment] = ACTIONS(96),
    [anon_sym_Element] = ACTIONS(96),
    [anon_sym_Model] = ACTIONS(96),
    [anon_sym_View] = ACTIONS(96),
    [anon_sym_Macro_Function] = ACTIONS(96),
    [anon_sym_Function] = ACTIONS(96),
    [anon_sym_Uid] = ACTIONS(96),
    [anon_sym_Guid] = ACTIONS(96),
    [anon_sym_Attributes] = ACTIONS(96),
    [anon_sym_SDR_Attribute] = ACTIONS(96),
    [anon_sym_Blob] = ACTIONS(96),
    [anon_sym_Screen_Text] = ACTIONS(96),
    [anon_sym_Textstyle_Data] = ACTIONS(96),
    [anon_sym_Equality_Label] = ACTIONS(96),
    [anon_sym_Undo] = ACTIONS(96),
    [anon_sym_Undo_List] = ACTIONS(96),
    [anon_sym_Widget] = ACTIONS(96),
    [anon_sym_Menu] = ACTIONS(96),
    [anon_sym_Panel] = ACTIONS(96),
    [anon_sym_Overlay_Widget] = ACTIONS(96),
    [anon_sym_Vertical_Group] = ACTIONS(96),
    [anon_sym_Horizontal_Group] = ACTIONS(96),
    [anon_sym_Widget_Pages] = ACTIONS(96),
    [anon_sym_Button] = ACTIONS(96),
    [anon_sym_Select_Button] = ACTIONS(96),
    [anon_sym_Angle_Box] = ACTIONS(96),
    [anon_sym_Attributes_Box] = ACTIONS(96),
    [anon_sym_Billboard_Box] = ACTIONS(96),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(96),
    [anon_sym_Bitmap_List_Box] = ACTIONS(96),
    [anon_sym_Chainage_Box] = ACTIONS(96),
    [anon_sym_Choice_Box] = ACTIONS(96),
    [anon_sym_Colour_Box] = ACTIONS(96),
    [anon_sym_Colour_Message_Box] = ACTIONS(96),
    [anon_sym_Date_Time_Box] = ACTIONS(96),
    [anon_sym_Directory_Box] = ACTIONS(96),
    [anon_sym_Draw_Box] = ACTIONS(96),
    [anon_sym_File_Box] = ACTIONS(96),
    [anon_sym_Function_Box] = ACTIONS(96),
    [anon_sym_Graph_Box] = ACTIONS(96),
    [anon_sym_GridCtrl_Box] = ACTIONS(96),
    [anon_sym_HyperLink_Box] = ACTIONS(96),
    [anon_sym_Input_Box] = ACTIONS(96),
    [anon_sym_Integer_Box] = ACTIONS(96),
    [anon_sym_Justify_Box] = ACTIONS(96),
    [anon_sym_Linestyle_Box] = ACTIONS(96),
    [anon_sym_List_Box] = ACTIONS(96),
    [anon_sym_ListCtrl_Box] = ACTIONS(96),
    [anon_sym_Map_File_Box] = ACTIONS(96),
    [anon_sym_Message_Box] = ACTIONS(96),
    [anon_sym_Model_Box] = ACTIONS(96),
    [anon_sym_Name_Box] = ACTIONS(96),
    [anon_sym_Named_Tick_Box] = ACTIONS(96),
    [anon_sym_New_Select_Box] = ACTIONS(96),
    [anon_sym_New_XYZ_Box] = ACTIONS(96),
    [anon_sym_Plotter_Box] = ACTIONS(96),
    [anon_sym_Polygon_Box] = ACTIONS(96),
    [anon_sym_Real_Box] = ACTIONS(96),
    [anon_sym_Report_Box] = ACTIONS(96),
    [anon_sym_Select_Box] = ACTIONS(96),
    [anon_sym_Select_Boxes] = ACTIONS(96),
    [anon_sym_Sheet_Size_Box] = ACTIONS(96),
    [anon_sym_Source_Box] = ACTIONS(96),
    [anon_sym_Symbol_Box] = ACTIONS(96),
    [anon_sym_Tab_Box] = ACTIONS(96),
    [anon_sym_Target_Box] = ACTIONS(96),
    [anon_sym_Template_Box] = ACTIONS(96),
    [anon_sym_Text_Edit_Box] = ACTIONS(96),
    [anon_sym_Text_Style_Box] = ACTIONS(96),
    [anon_sym_Texture_Box] = ACTIONS(96),
    [anon_sym_Tree_Box] = ACTIONS(96),
    [anon_sym_Tree_Page] = ACTIONS(96),
    [anon_sym_Tick_Box] = ACTIONS(96),
    [anon_sym_Tin_Box] = ACTIONS(96),
    [anon_sym_View_Box] = ACTIONS(96),
    [anon_sym_XYZ_Box] = ACTIONS(96),
    [anon_sym_File] = ACTIONS(96),
    [anon_sym_Map_File] = ACTIONS(96),
    [anon_sym_Plot_Parameter_File] = ACTIONS(96),
    [anon_sym_XML_Document] = ACTIONS(96),
    [anon_sym_XML_Node] = ACTIONS(96),
    [anon_sym_Connection] = ACTIONS(96),
    [anon_sym_Select_Query] = ACTIONS(96),
    [anon_sym_Insert_Query] = ACTIONS(96),
    [anon_sym_Update_Query] = ACTIONS(96),
    [anon_sym_Delete_Query] = ACTIONS(96),
    [anon_sym_Database_Results] = ACTIONS(96),
    [anon_sym_Transactions] = ACTIONS(96),
    [anon_sym_Parameter_Collection] = ACTIONS(96),
    [anon_sym_Query_Condition] = ACTIONS(96),
    [anon_sym_Manual_Condition] = ACTIONS(96),
    [anon_sym_Dynamic_Element] = ACTIONS(96),
    [anon_sym_Dynamic_Integer] = ACTIONS(96),
    [anon_sym_Dynamic_Real] = ACTIONS(96),
    [anon_sym_Dynamic_Text] = ACTIONS(96),
  },
  [39] = {
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(136),
    [anon_sym_for] = ACTIONS(136),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_BANG] = ACTIONS(134),
    [anon_sym_return] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [sym_number_literal] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [anon_sym_void] = ACTIONS(136),
    [anon_sym_Integer] = ACTIONS(136),
    [anon_sym_Real] = ACTIONS(136),
    [anon_sym_Text] = ACTIONS(136),
    [anon_sym_Vector2] = ACTIONS(136),
    [anon_sym_Vector3] = ACTIONS(136),
    [anon_sym_Vector4] = ACTIONS(136),
    [anon_sym_Matrix3] = ACTIONS(136),
    [anon_sym_Matrix4] = ACTIONS(136),
    [anon_sym_Point] = ACTIONS(136),
    [anon_sym_Line] = ACTIONS(136),
    [anon_sym_Arc] = ACTIONS(136),
    [anon_sym_Spiral] = ACTIONS(136),
    [anon_sym_Parabola] = ACTIONS(136),
    [anon_sym_Segment] = ACTIONS(136),
    [anon_sym_Element] = ACTIONS(136),
    [anon_sym_Model] = ACTIONS(136),
    [anon_sym_View] = ACTIONS(136),
    [anon_sym_Macro_Function] = ACTIONS(136),
    [anon_sym_Function] = ACTIONS(136),
    [anon_sym_Uid] = ACTIONS(136),
    [anon_sym_Guid] = ACTIONS(136),
    [anon_sym_Attributes] = ACTIONS(136),
    [anon_sym_SDR_Attribute] = ACTIONS(136),
    [anon_sym_Blob] = ACTIONS(136),
    [anon_sym_Screen_Text] = ACTIONS(136),
    [anon_sym_Textstyle_Data] = ACTIONS(136),
    [anon_sym_Equality_Label] = ACTIONS(136),
    [anon_sym_Undo] = ACTIONS(136),
    [anon_sym_Undo_List] = ACTIONS(136),
    [anon_sym_Widget] = ACTIONS(136),
    [anon_sym_Menu] = ACTIONS(136),
    [anon_sym_Panel] = ACTIONS(136),
    [anon_sym_Overlay_Widget] = ACTIONS(136),
    [anon_sym_Vertical_Group] = ACTIONS(136),
    [anon_sym_Horizontal_Group] = ACTIONS(136),
    [anon_sym_Widget_Pages] = ACTIONS(136),
    [anon_sym_Button] = ACTIONS(136),
    [anon_sym_Select_Button] = ACTIONS(136),
    [anon_sym_Angle_Box] = ACTIONS(136),
    [anon_sym_Attributes_Box] = ACTIONS(136),
    [anon_sym_Billboard_Box] = ACTIONS(136),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(136),
    [anon_sym_Bitmap_List_Box] = ACTIONS(136),
    [anon_sym_Chainage_Box] = ACTIONS(136),
    [anon_sym_Choice_Box] = ACTIONS(136),
    [anon_sym_Colour_Box] = ACTIONS(136),
    [anon_sym_Colour_Message_Box] = ACTIONS(136),
    [anon_sym_Date_Time_Box] = ACTIONS(136),
    [anon_sym_Directory_Box] = ACTIONS(136),
    [anon_sym_Draw_Box] = ACTIONS(136),
    [anon_sym_File_Box] = ACTIONS(136),
    [anon_sym_Function_Box] = ACTIONS(136),
    [anon_sym_Graph_Box] = ACTIONS(136),
    [anon_sym_GridCtrl_Box] = ACTIONS(136),
    [anon_sym_HyperLink_Box] = ACTIONS(136),
    [anon_sym_Input_Box] = ACTIONS(136),
    [anon_sym_Integer_Box] = ACTIONS(136),
    [anon_sym_Justify_Box] = ACTIONS(136),
    [anon_sym_Linestyle_Box] = ACTIONS(136),
    [anon_sym_List_Box] = ACTIONS(136),
    [anon_sym_ListCtrl_Box] = ACTIONS(136),
    [anon_sym_Map_File_Box] = ACTIONS(136),
    [anon_sym_Message_Box] = ACTIONS(136),
    [anon_sym_Model_Box] = ACTIONS(136),
    [anon_sym_Name_Box] = ACTIONS(136),
    [anon_sym_Named_Tick_Box] = ACTIONS(136),
    [anon_sym_New_Select_Box] = ACTIONS(136),
    [anon_sym_New_XYZ_Box] = ACTIONS(136),
    [anon_sym_Plotter_Box] = ACTIONS(136),
    [anon_sym_Polygon_Box] = ACTIONS(136),
    [anon_sym_Real_Box] = ACTIONS(136),
    [anon_sym_Report_Box] = ACTIONS(136),
    [anon_sym_Select_Box] = ACTIONS(136),
    [anon_sym_Select_Boxes] = ACTIONS(136),
    [anon_sym_Sheet_Size_Box] = ACTIONS(136),
    [anon_sym_Source_Box] = ACTIONS(136),
    [anon_sym_Symbol_Box] = ACTIONS(136),
    [anon_sym_Tab_Box] = ACTIONS(136),
    [anon_sym_Target_Box] = ACTIONS(136),
    [anon_sym_Template_Box] = ACTIONS(136),
    [anon_sym_Text_Edit_Box] = ACTIONS(136),
    [anon_sym_Text_Style_Box] = ACTIONS(136),
    [anon_sym_Texture_Box] = ACTIONS(136),
    [anon_sym_Tree_Box] = ACTIONS(136),
    [anon_sym_Tree_Page] = ACTIONS(136),
    [anon_sym_Tick_Box] = ACTIONS(136),
    [anon_sym_Tin_Box] = ACTIONS(136),
    [anon_sym_View_Box] = ACTIONS(136),
    [anon_sym_XYZ_Box] = ACTIONS(136),
    [anon_sym_File] = ACTIONS(136),
    [anon_sym_Map_File] = ACTIONS(136),
    [anon_sym_Plot_Parameter_File] = ACTIONS(136),
    [anon_sym_XML_Document] = ACTIONS(136),
    [anon_sym_XML_Node] = ACTIONS(136),
    [anon_sym_Connection] = ACTIONS(136),
    [anon_sym_Select_Query] = ACTIONS(136),
    [anon_sym_Insert_Query] = ACTIONS(136),
    [anon_sym_Update_Query] = ACTIONS(136),
    [anon_sym_Delete_Query] = ACTIONS(136),
    [anon_sym_Database_Results] = ACTIONS(136),
    [anon_sym_Transactions] = ACTIONS(136),
    [anon_sym_Parameter_Collection] = ACTIONS(136),
    [anon_sym_Query_Condition] = ACTIONS(136),
    [anon_sym_Manual_Condition] = ACTIONS(136),
    [anon_sym_Dynamic_Element] = ACTIONS(136),
    [anon_sym_Dynamic_Integer] = ACTIONS(136),
    [anon_sym_Dynamic_Real] = ACTIONS(136),
    [anon_sym_Dynamic_Text] = ACTIONS(136),
  },
  [40] = {
    [sym__definition] = STATE(41),
    [sym_function_definition] = STATE(41),
    [sym_compound_statement] = STATE(41),
    [sym__declaration_specifiers] = STATE(132),
    [sym__type_specifier] = STATE(147),
    [sym_primitive_type] = STATE(147),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(138),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [41] = {
    [sym__definition] = STATE(41),
    [sym_function_definition] = STATE(41),
    [sym_compound_statement] = STATE(41),
    [sym__declaration_specifiers] = STATE(132),
    [sym__type_specifier] = STATE(147),
    [sym_primitive_type] = STATE(147),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(142),
    [anon_sym_void] = ACTIONS(145),
    [anon_sym_Integer] = ACTIONS(148),
    [anon_sym_Real] = ACTIONS(148),
    [anon_sym_Text] = ACTIONS(148),
    [anon_sym_Vector2] = ACTIONS(145),
    [anon_sym_Vector3] = ACTIONS(145),
    [anon_sym_Vector4] = ACTIONS(145),
    [anon_sym_Matrix3] = ACTIONS(145),
    [anon_sym_Matrix4] = ACTIONS(145),
    [anon_sym_Point] = ACTIONS(145),
    [anon_sym_Line] = ACTIONS(148),
    [anon_sym_Arc] = ACTIONS(145),
    [anon_sym_Spiral] = ACTIONS(145),
    [anon_sym_Parabola] = ACTIONS(145),
    [anon_sym_Segment] = ACTIONS(145),
    [anon_sym_Element] = ACTIONS(145),
    [anon_sym_Model] = ACTIONS(148),
    [anon_sym_View] = ACTIONS(148),
    [anon_sym_Macro_Function] = ACTIONS(145),
    [anon_sym_Function] = ACTIONS(148),
    [anon_sym_Uid] = ACTIONS(145),
    [anon_sym_Guid] = ACTIONS(145),
    [anon_sym_Attributes] = ACTIONS(148),
    [anon_sym_SDR_Attribute] = ACTIONS(145),
    [anon_sym_Blob] = ACTIONS(145),
    [anon_sym_Screen_Text] = ACTIONS(145),
    [anon_sym_Textstyle_Data] = ACTIONS(145),
    [anon_sym_Equality_Label] = ACTIONS(145),
    [anon_sym_Undo] = ACTIONS(148),
    [anon_sym_Undo_List] = ACTIONS(145),
    [anon_sym_Widget] = ACTIONS(148),
    [anon_sym_Menu] = ACTIONS(145),
    [anon_sym_Panel] = ACTIONS(145),
    [anon_sym_Overlay_Widget] = ACTIONS(145),
    [anon_sym_Vertical_Group] = ACTIONS(145),
    [anon_sym_Horizontal_Group] = ACTIONS(145),
    [anon_sym_Widget_Pages] = ACTIONS(145),
    [anon_sym_Button] = ACTIONS(145),
    [anon_sym_Select_Button] = ACTIONS(145),
    [anon_sym_Angle_Box] = ACTIONS(145),
    [anon_sym_Attributes_Box] = ACTIONS(145),
    [anon_sym_Billboard_Box] = ACTIONS(145),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(145),
    [anon_sym_Bitmap_List_Box] = ACTIONS(145),
    [anon_sym_Chainage_Box] = ACTIONS(145),
    [anon_sym_Choice_Box] = ACTIONS(145),
    [anon_sym_Colour_Box] = ACTIONS(145),
    [anon_sym_Colour_Message_Box] = ACTIONS(145),
    [anon_sym_Date_Time_Box] = ACTIONS(145),
    [anon_sym_Directory_Box] = ACTIONS(145),
    [anon_sym_Draw_Box] = ACTIONS(145),
    [anon_sym_File_Box] = ACTIONS(145),
    [anon_sym_Function_Box] = ACTIONS(145),
    [anon_sym_Graph_Box] = ACTIONS(145),
    [anon_sym_GridCtrl_Box] = ACTIONS(145),
    [anon_sym_HyperLink_Box] = ACTIONS(145),
    [anon_sym_Input_Box] = ACTIONS(145),
    [anon_sym_Integer_Box] = ACTIONS(145),
    [anon_sym_Justify_Box] = ACTIONS(145),
    [anon_sym_Linestyle_Box] = ACTIONS(145),
    [anon_sym_List_Box] = ACTIONS(145),
    [anon_sym_ListCtrl_Box] = ACTIONS(145),
    [anon_sym_Map_File_Box] = ACTIONS(145),
    [anon_sym_Message_Box] = ACTIONS(145),
    [anon_sym_Model_Box] = ACTIONS(145),
    [anon_sym_Name_Box] = ACTIONS(145),
    [anon_sym_Named_Tick_Box] = ACTIONS(145),
    [anon_sym_New_Select_Box] = ACTIONS(145),
    [anon_sym_New_XYZ_Box] = ACTIONS(145),
    [anon_sym_Plotter_Box] = ACTIONS(145),
    [anon_sym_Polygon_Box] = ACTIONS(145),
    [anon_sym_Real_Box] = ACTIONS(145),
    [anon_sym_Report_Box] = ACTIONS(145),
    [anon_sym_Select_Box] = ACTIONS(148),
    [anon_sym_Select_Boxes] = ACTIONS(145),
    [anon_sym_Sheet_Size_Box] = ACTIONS(145),
    [anon_sym_Source_Box] = ACTIONS(145),
    [anon_sym_Symbol_Box] = ACTIONS(145),
    [anon_sym_Tab_Box] = ACTIONS(145),
    [anon_sym_Target_Box] = ACTIONS(145),
    [anon_sym_Template_Box] = ACTIONS(145),
    [anon_sym_Text_Edit_Box] = ACTIONS(145),
    [anon_sym_Text_Style_Box] = ACTIONS(145),
    [anon_sym_Texture_Box] = ACTIONS(145),
    [anon_sym_Tree_Box] = ACTIONS(145),
    [anon_sym_Tree_Page] = ACTIONS(145),
    [anon_sym_Tick_Box] = ACTIONS(145),
    [anon_sym_Tin_Box] = ACTIONS(145),
    [anon_sym_View_Box] = ACTIONS(145),
    [anon_sym_XYZ_Box] = ACTIONS(145),
    [anon_sym_File] = ACTIONS(148),
    [anon_sym_Map_File] = ACTIONS(148),
    [anon_sym_Plot_Parameter_File] = ACTIONS(145),
    [anon_sym_XML_Document] = ACTIONS(145),
    [anon_sym_XML_Node] = ACTIONS(145),
    [anon_sym_Connection] = ACTIONS(145),
    [anon_sym_Select_Query] = ACTIONS(145),
    [anon_sym_Insert_Query] = ACTIONS(145),
    [anon_sym_Update_Query] = ACTIONS(145),
    [anon_sym_Delete_Query] = ACTIONS(145),
    [anon_sym_Database_Results] = ACTIONS(145),
    [anon_sym_Transactions] = ACTIONS(145),
    [anon_sym_Parameter_Collection] = ACTIONS(145),
    [anon_sym_Query_Condition] = ACTIONS(145),
    [anon_sym_Manual_Condition] = ACTIONS(145),
    [anon_sym_Dynamic_Element] = ACTIONS(145),
    [anon_sym_Dynamic_Integer] = ACTIONS(145),
    [anon_sym_Dynamic_Real] = ACTIONS(145),
    [anon_sym_Dynamic_Text] = ACTIONS(145),
  },
  [42] = {
    [sym_parameter_declaration] = STATE(146),
    [sym__declaration_specifiers] = STATE(120),
    [sym__type_specifier] = STATE(147),
    [sym_primitive_type] = STATE(147),
    [anon_sym_RPAREN] = ACTIONS(151),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [43] = {
    [sym__declaration_specifiers] = STATE(123),
    [sym__type_specifier] = STATE(147),
    [sym_declaration] = STATE(93),
    [sym_primitive_type] = STATE(147),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [44] = {
    [sym_parameter_declaration] = STATE(153),
    [sym__declaration_specifiers] = STATE(120),
    [sym__type_specifier] = STATE(147),
    [sym_primitive_type] = STATE(147),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [45] = {
    [sym__declaration_specifiers] = STATE(123),
    [sym__type_specifier] = STATE(147),
    [sym_declaration] = STATE(89),
    [sym_primitive_type] = STATE(147),
    [anon_sym_void] = ACTIONS(7),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(7),
    [anon_sym_Panel] = ACTIONS(7),
    [anon_sym_Overlay_Widget] = ACTIONS(7),
    [anon_sym_Vertical_Group] = ACTIONS(7),
    [anon_sym_Horizontal_Group] = ACTIONS(7),
    [anon_sym_Widget_Pages] = ACTIONS(7),
    [anon_sym_Button] = ACTIONS(7),
    [anon_sym_Select_Button] = ACTIONS(7),
    [anon_sym_Angle_Box] = ACTIONS(7),
    [anon_sym_Attributes_Box] = ACTIONS(7),
    [anon_sym_Billboard_Box] = ACTIONS(7),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(7),
    [anon_sym_Bitmap_List_Box] = ACTIONS(7),
    [anon_sym_Chainage_Box] = ACTIONS(7),
    [anon_sym_Choice_Box] = ACTIONS(7),
    [anon_sym_Colour_Box] = ACTIONS(7),
    [anon_sym_Colour_Message_Box] = ACTIONS(7),
    [anon_sym_Date_Time_Box] = ACTIONS(7),
    [anon_sym_Directory_Box] = ACTIONS(7),
    [anon_sym_Draw_Box] = ACTIONS(7),
    [anon_sym_File_Box] = ACTIONS(7),
    [anon_sym_Function_Box] = ACTIONS(7),
    [anon_sym_Graph_Box] = ACTIONS(7),
    [anon_sym_GridCtrl_Box] = ACTIONS(7),
    [anon_sym_HyperLink_Box] = ACTIONS(7),
    [anon_sym_Input_Box] = ACTIONS(7),
    [anon_sym_Integer_Box] = ACTIONS(7),
    [anon_sym_Justify_Box] = ACTIONS(7),
    [anon_sym_Linestyle_Box] = ACTIONS(7),
    [anon_sym_List_Box] = ACTIONS(7),
    [anon_sym_ListCtrl_Box] = ACTIONS(7),
    [anon_sym_Map_File_Box] = ACTIONS(7),
    [anon_sym_Message_Box] = ACTIONS(7),
    [anon_sym_Model_Box] = ACTIONS(7),
    [anon_sym_Name_Box] = ACTIONS(7),
    [anon_sym_Named_Tick_Box] = ACTIONS(7),
    [anon_sym_New_Select_Box] = ACTIONS(7),
    [anon_sym_New_XYZ_Box] = ACTIONS(7),
    [anon_sym_Plotter_Box] = ACTIONS(7),
    [anon_sym_Polygon_Box] = ACTIONS(7),
    [anon_sym_Real_Box] = ACTIONS(7),
    [anon_sym_Report_Box] = ACTIONS(7),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(7),
    [anon_sym_Sheet_Size_Box] = ACTIONS(7),
    [anon_sym_Source_Box] = ACTIONS(7),
    [anon_sym_Symbol_Box] = ACTIONS(7),
    [anon_sym_Tab_Box] = ACTIONS(7),
    [anon_sym_Target_Box] = ACTIONS(7),
    [anon_sym_Template_Box] = ACTIONS(7),
    [anon_sym_Text_Edit_Box] = ACTIONS(7),
    [anon_sym_Text_Style_Box] = ACTIONS(7),
    [anon_sym_Texture_Box] = ACTIONS(7),
    [anon_sym_Tree_Box] = ACTIONS(7),
    [anon_sym_Tree_Page] = ACTIONS(7),
    [anon_sym_Tick_Box] = ACTIONS(7),
    [anon_sym_Tin_Box] = ACTIONS(7),
    [anon_sym_View_Box] = ACTIONS(7),
    [anon_sym_XYZ_Box] = ACTIONS(7),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(7),
    [anon_sym_XML_Document] = ACTIONS(7),
    [anon_sym_XML_Node] = ACTIONS(7),
    [anon_sym_Connection] = ACTIONS(7),
    [anon_sym_Select_Query] = ACTIONS(7),
    [anon_sym_Insert_Query] = ACTIONS(7),
    [anon_sym_Update_Query] = ACTIONS(7),
    [anon_sym_Delete_Query] = ACTIONS(7),
    [anon_sym_Database_Results] = ACTIONS(7),
    [anon_sym_Transactions] = ACTIONS(7),
    [anon_sym_Parameter_Collection] = ACTIONS(7),
    [anon_sym_Query_Condition] = ACTIONS(7),
    [anon_sym_Manual_Condition] = ACTIONS(7),
    [anon_sym_Dynamic_Element] = ACTIONS(7),
    [anon_sym_Dynamic_Integer] = ACTIONS(7),
    [anon_sym_Dynamic_Real] = ACTIONS(7),
    [anon_sym_Dynamic_Text] = ACTIONS(7),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(102),
    [anon_sym_void] = ACTIONS(102),
    [anon_sym_Integer] = ACTIONS(104),
    [anon_sym_Real] = ACTIONS(104),
    [anon_sym_Text] = ACTIONS(104),
    [anon_sym_Vector2] = ACTIONS(102),
    [anon_sym_Vector3] = ACTIONS(102),
    [anon_sym_Vector4] = ACTIONS(102),
    [anon_sym_Matrix3] = ACTIONS(102),
    [anon_sym_Matrix4] = ACTIONS(102),
    [anon_sym_Point] = ACTIONS(102),
    [anon_sym_Line] = ACTIONS(104),
    [anon_sym_Arc] = ACTIONS(102),
    [anon_sym_Spiral] = ACTIONS(102),
    [anon_sym_Parabola] = ACTIONS(102),
    [anon_sym_Segment] = ACTIONS(102),
    [anon_sym_Element] = ACTIONS(102),
    [anon_sym_Model] = ACTIONS(104),
    [anon_sym_View] = ACTIONS(104),
    [anon_sym_Macro_Function] = ACTIONS(102),
    [anon_sym_Function] = ACTIONS(104),
    [anon_sym_Uid] = ACTIONS(102),
    [anon_sym_Guid] = ACTIONS(102),
    [anon_sym_Attributes] = ACTIONS(104),
    [anon_sym_SDR_Attribute] = ACTIONS(102),
    [anon_sym_Blob] = ACTIONS(102),
    [anon_sym_Screen_Text] = ACTIONS(102),
    [anon_sym_Textstyle_Data] = ACTIONS(102),
    [anon_sym_Equality_Label] = ACTIONS(102),
    [anon_sym_Undo] = ACTIONS(104),
    [anon_sym_Undo_List] = ACTIONS(102),
    [anon_sym_Widget] = ACTIONS(104),
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
    [anon_sym_Select_Box] = ACTIONS(104),
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
    [anon_sym_File] = ACTIONS(104),
    [anon_sym_Map_File] = ACTIONS(104),
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
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_void] = ACTIONS(126),
    [anon_sym_Integer] = ACTIONS(128),
    [anon_sym_Real] = ACTIONS(128),
    [anon_sym_Text] = ACTIONS(128),
    [anon_sym_Vector2] = ACTIONS(126),
    [anon_sym_Vector3] = ACTIONS(126),
    [anon_sym_Vector4] = ACTIONS(126),
    [anon_sym_Matrix3] = ACTIONS(126),
    [anon_sym_Matrix4] = ACTIONS(126),
    [anon_sym_Point] = ACTIONS(126),
    [anon_sym_Line] = ACTIONS(128),
    [anon_sym_Arc] = ACTIONS(126),
    [anon_sym_Spiral] = ACTIONS(126),
    [anon_sym_Parabola] = ACTIONS(126),
    [anon_sym_Segment] = ACTIONS(126),
    [anon_sym_Element] = ACTIONS(126),
    [anon_sym_Model] = ACTIONS(128),
    [anon_sym_View] = ACTIONS(128),
    [anon_sym_Macro_Function] = ACTIONS(126),
    [anon_sym_Function] = ACTIONS(128),
    [anon_sym_Uid] = ACTIONS(126),
    [anon_sym_Guid] = ACTIONS(126),
    [anon_sym_Attributes] = ACTIONS(128),
    [anon_sym_SDR_Attribute] = ACTIONS(126),
    [anon_sym_Blob] = ACTIONS(126),
    [anon_sym_Screen_Text] = ACTIONS(126),
    [anon_sym_Textstyle_Data] = ACTIONS(126),
    [anon_sym_Equality_Label] = ACTIONS(126),
    [anon_sym_Undo] = ACTIONS(128),
    [anon_sym_Undo_List] = ACTIONS(126),
    [anon_sym_Widget] = ACTIONS(128),
    [anon_sym_Menu] = ACTIONS(126),
    [anon_sym_Panel] = ACTIONS(126),
    [anon_sym_Overlay_Widget] = ACTIONS(126),
    [anon_sym_Vertical_Group] = ACTIONS(126),
    [anon_sym_Horizontal_Group] = ACTIONS(126),
    [anon_sym_Widget_Pages] = ACTIONS(126),
    [anon_sym_Button] = ACTIONS(126),
    [anon_sym_Select_Button] = ACTIONS(126),
    [anon_sym_Angle_Box] = ACTIONS(126),
    [anon_sym_Attributes_Box] = ACTIONS(126),
    [anon_sym_Billboard_Box] = ACTIONS(126),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(126),
    [anon_sym_Bitmap_List_Box] = ACTIONS(126),
    [anon_sym_Chainage_Box] = ACTIONS(126),
    [anon_sym_Choice_Box] = ACTIONS(126),
    [anon_sym_Colour_Box] = ACTIONS(126),
    [anon_sym_Colour_Message_Box] = ACTIONS(126),
    [anon_sym_Date_Time_Box] = ACTIONS(126),
    [anon_sym_Directory_Box] = ACTIONS(126),
    [anon_sym_Draw_Box] = ACTIONS(126),
    [anon_sym_File_Box] = ACTIONS(126),
    [anon_sym_Function_Box] = ACTIONS(126),
    [anon_sym_Graph_Box] = ACTIONS(126),
    [anon_sym_GridCtrl_Box] = ACTIONS(126),
    [anon_sym_HyperLink_Box] = ACTIONS(126),
    [anon_sym_Input_Box] = ACTIONS(126),
    [anon_sym_Integer_Box] = ACTIONS(126),
    [anon_sym_Justify_Box] = ACTIONS(126),
    [anon_sym_Linestyle_Box] = ACTIONS(126),
    [anon_sym_List_Box] = ACTIONS(126),
    [anon_sym_ListCtrl_Box] = ACTIONS(126),
    [anon_sym_Map_File_Box] = ACTIONS(126),
    [anon_sym_Message_Box] = ACTIONS(126),
    [anon_sym_Model_Box] = ACTIONS(126),
    [anon_sym_Name_Box] = ACTIONS(126),
    [anon_sym_Named_Tick_Box] = ACTIONS(126),
    [anon_sym_New_Select_Box] = ACTIONS(126),
    [anon_sym_New_XYZ_Box] = ACTIONS(126),
    [anon_sym_Plotter_Box] = ACTIONS(126),
    [anon_sym_Polygon_Box] = ACTIONS(126),
    [anon_sym_Real_Box] = ACTIONS(126),
    [anon_sym_Report_Box] = ACTIONS(126),
    [anon_sym_Select_Box] = ACTIONS(128),
    [anon_sym_Select_Boxes] = ACTIONS(126),
    [anon_sym_Sheet_Size_Box] = ACTIONS(126),
    [anon_sym_Source_Box] = ACTIONS(126),
    [anon_sym_Symbol_Box] = ACTIONS(126),
    [anon_sym_Tab_Box] = ACTIONS(126),
    [anon_sym_Target_Box] = ACTIONS(126),
    [anon_sym_Template_Box] = ACTIONS(126),
    [anon_sym_Text_Edit_Box] = ACTIONS(126),
    [anon_sym_Text_Style_Box] = ACTIONS(126),
    [anon_sym_Texture_Box] = ACTIONS(126),
    [anon_sym_Tree_Box] = ACTIONS(126),
    [anon_sym_Tree_Page] = ACTIONS(126),
    [anon_sym_Tick_Box] = ACTIONS(126),
    [anon_sym_Tin_Box] = ACTIONS(126),
    [anon_sym_View_Box] = ACTIONS(126),
    [anon_sym_XYZ_Box] = ACTIONS(126),
    [anon_sym_File] = ACTIONS(128),
    [anon_sym_Map_File] = ACTIONS(128),
    [anon_sym_Plot_Parameter_File] = ACTIONS(126),
    [anon_sym_XML_Document] = ACTIONS(126),
    [anon_sym_XML_Node] = ACTIONS(126),
    [anon_sym_Connection] = ACTIONS(126),
    [anon_sym_Select_Query] = ACTIONS(126),
    [anon_sym_Insert_Query] = ACTIONS(126),
    [anon_sym_Update_Query] = ACTIONS(126),
    [anon_sym_Delete_Query] = ACTIONS(126),
    [anon_sym_Database_Results] = ACTIONS(126),
    [anon_sym_Transactions] = ACTIONS(126),
    [anon_sym_Parameter_Collection] = ACTIONS(126),
    [anon_sym_Query_Condition] = ACTIONS(126),
    [anon_sym_Manual_Condition] = ACTIONS(126),
    [anon_sym_Dynamic_Element] = ACTIONS(126),
    [anon_sym_Dynamic_Integer] = ACTIONS(126),
    [anon_sym_Dynamic_Real] = ACTIONS(126),
    [anon_sym_Dynamic_Text] = ACTIONS(126),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACE] = ACTIONS(153),
    [anon_sym_void] = ACTIONS(153),
    [anon_sym_Integer] = ACTIONS(155),
    [anon_sym_Real] = ACTIONS(155),
    [anon_sym_Text] = ACTIONS(155),
    [anon_sym_Vector2] = ACTIONS(153),
    [anon_sym_Vector3] = ACTIONS(153),
    [anon_sym_Vector4] = ACTIONS(153),
    [anon_sym_Matrix3] = ACTIONS(153),
    [anon_sym_Matrix4] = ACTIONS(153),
    [anon_sym_Point] = ACTIONS(153),
    [anon_sym_Line] = ACTIONS(155),
    [anon_sym_Arc] = ACTIONS(153),
    [anon_sym_Spiral] = ACTIONS(153),
    [anon_sym_Parabola] = ACTIONS(153),
    [anon_sym_Segment] = ACTIONS(153),
    [anon_sym_Element] = ACTIONS(153),
    [anon_sym_Model] = ACTIONS(155),
    [anon_sym_View] = ACTIONS(155),
    [anon_sym_Macro_Function] = ACTIONS(153),
    [anon_sym_Function] = ACTIONS(155),
    [anon_sym_Uid] = ACTIONS(153),
    [anon_sym_Guid] = ACTIONS(153),
    [anon_sym_Attributes] = ACTIONS(155),
    [anon_sym_SDR_Attribute] = ACTIONS(153),
    [anon_sym_Blob] = ACTIONS(153),
    [anon_sym_Screen_Text] = ACTIONS(153),
    [anon_sym_Textstyle_Data] = ACTIONS(153),
    [anon_sym_Equality_Label] = ACTIONS(153),
    [anon_sym_Undo] = ACTIONS(155),
    [anon_sym_Undo_List] = ACTIONS(153),
    [anon_sym_Widget] = ACTIONS(155),
    [anon_sym_Menu] = ACTIONS(153),
    [anon_sym_Panel] = ACTIONS(153),
    [anon_sym_Overlay_Widget] = ACTIONS(153),
    [anon_sym_Vertical_Group] = ACTIONS(153),
    [anon_sym_Horizontal_Group] = ACTIONS(153),
    [anon_sym_Widget_Pages] = ACTIONS(153),
    [anon_sym_Button] = ACTIONS(153),
    [anon_sym_Select_Button] = ACTIONS(153),
    [anon_sym_Angle_Box] = ACTIONS(153),
    [anon_sym_Attributes_Box] = ACTIONS(153),
    [anon_sym_Billboard_Box] = ACTIONS(153),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(153),
    [anon_sym_Bitmap_List_Box] = ACTIONS(153),
    [anon_sym_Chainage_Box] = ACTIONS(153),
    [anon_sym_Choice_Box] = ACTIONS(153),
    [anon_sym_Colour_Box] = ACTIONS(153),
    [anon_sym_Colour_Message_Box] = ACTIONS(153),
    [anon_sym_Date_Time_Box] = ACTIONS(153),
    [anon_sym_Directory_Box] = ACTIONS(153),
    [anon_sym_Draw_Box] = ACTIONS(153),
    [anon_sym_File_Box] = ACTIONS(153),
    [anon_sym_Function_Box] = ACTIONS(153),
    [anon_sym_Graph_Box] = ACTIONS(153),
    [anon_sym_GridCtrl_Box] = ACTIONS(153),
    [anon_sym_HyperLink_Box] = ACTIONS(153),
    [anon_sym_Input_Box] = ACTIONS(153),
    [anon_sym_Integer_Box] = ACTIONS(153),
    [anon_sym_Justify_Box] = ACTIONS(153),
    [anon_sym_Linestyle_Box] = ACTIONS(153),
    [anon_sym_List_Box] = ACTIONS(153),
    [anon_sym_ListCtrl_Box] = ACTIONS(153),
    [anon_sym_Map_File_Box] = ACTIONS(153),
    [anon_sym_Message_Box] = ACTIONS(153),
    [anon_sym_Model_Box] = ACTIONS(153),
    [anon_sym_Name_Box] = ACTIONS(153),
    [anon_sym_Named_Tick_Box] = ACTIONS(153),
    [anon_sym_New_Select_Box] = ACTIONS(153),
    [anon_sym_New_XYZ_Box] = ACTIONS(153),
    [anon_sym_Plotter_Box] = ACTIONS(153),
    [anon_sym_Polygon_Box] = ACTIONS(153),
    [anon_sym_Real_Box] = ACTIONS(153),
    [anon_sym_Report_Box] = ACTIONS(153),
    [anon_sym_Select_Box] = ACTIONS(155),
    [anon_sym_Select_Boxes] = ACTIONS(153),
    [anon_sym_Sheet_Size_Box] = ACTIONS(153),
    [anon_sym_Source_Box] = ACTIONS(153),
    [anon_sym_Symbol_Box] = ACTIONS(153),
    [anon_sym_Tab_Box] = ACTIONS(153),
    [anon_sym_Target_Box] = ACTIONS(153),
    [anon_sym_Template_Box] = ACTIONS(153),
    [anon_sym_Text_Edit_Box] = ACTIONS(153),
    [anon_sym_Text_Style_Box] = ACTIONS(153),
    [anon_sym_Texture_Box] = ACTIONS(153),
    [anon_sym_Tree_Box] = ACTIONS(153),
    [anon_sym_Tree_Page] = ACTIONS(153),
    [anon_sym_Tick_Box] = ACTIONS(153),
    [anon_sym_Tin_Box] = ACTIONS(153),
    [anon_sym_View_Box] = ACTIONS(153),
    [anon_sym_XYZ_Box] = ACTIONS(153),
    [anon_sym_File] = ACTIONS(155),
    [anon_sym_Map_File] = ACTIONS(155),
    [anon_sym_Plot_Parameter_File] = ACTIONS(153),
    [anon_sym_XML_Document] = ACTIONS(153),
    [anon_sym_XML_Node] = ACTIONS(153),
    [anon_sym_Connection] = ACTIONS(153),
    [anon_sym_Select_Query] = ACTIONS(153),
    [anon_sym_Insert_Query] = ACTIONS(153),
    [anon_sym_Update_Query] = ACTIONS(153),
    [anon_sym_Delete_Query] = ACTIONS(153),
    [anon_sym_Database_Results] = ACTIONS(153),
    [anon_sym_Transactions] = ACTIONS(153),
    [anon_sym_Parameter_Collection] = ACTIONS(153),
    [anon_sym_Query_Condition] = ACTIONS(153),
    [anon_sym_Manual_Condition] = ACTIONS(153),
    [anon_sym_Dynamic_Element] = ACTIONS(153),
    [anon_sym_Dynamic_Integer] = ACTIONS(153),
    [anon_sym_Dynamic_Real] = ACTIONS(153),
    [anon_sym_Dynamic_Text] = ACTIONS(153),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(159), 11,
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
    ACTIONS(157), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [40] = 2,
    ACTIONS(163), 11,
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
    ACTIONS(161), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [80] = 2,
    ACTIONS(167), 11,
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
    ACTIONS(165), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [120] = 2,
    ACTIONS(171), 11,
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
    ACTIONS(169), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [160] = 2,
    ACTIONS(175), 11,
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
    ACTIONS(173), 24,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [200] = 4,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 8,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(179), 10,
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
    ACTIONS(177), 16,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [244] = 11,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(193), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
  [294] = 14,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [350] = 8,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(193), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [394] = 9,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(193), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_RBRACK,
  [440] = 12,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(193), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [492] = 13,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [546] = 14,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [602] = 15,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(187), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [660] = 6,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(193), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [700] = 7,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(193), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(187), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
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
  [742] = 5,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(217), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(215), 18,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [780] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [840] = 2,
    ACTIONS(225), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(223), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [871] = 18,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_argument_list,
    STATE(135), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [934] = 2,
    ACTIONS(233), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(231), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [965] = 2,
    ACTIONS(237), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(235), 20,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_SLASH,
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
  [996] = 17,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1056] = 17,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1116] = 17,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1176] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1234] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1292] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1349] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1406] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1463] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(257), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1520] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1577] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1634] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(263), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1691] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1748] = 16,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_PIPE,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(209), 1,
      anon_sym_AMP,
    ACTIONS(213), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_argument_list,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(203), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(191), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [1805] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(273), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(68), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [1840] = 9,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(275), 1,
      sym_number_literal,
    STATE(156), 1,
      sym_comma_expression,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(71), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [1875] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(277), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(64), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [1907] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(279), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(83), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [1939] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(281), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(82), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [1971] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(75), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2003] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(285), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(57), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2035] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(81), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2067] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(289), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(84), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2099] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(59), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2131] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(293), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(80), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2163] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(295), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(60), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2195] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(297), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(74), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2227] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(299), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(61), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2259] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(301), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(66), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2291] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(303), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(56), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2323] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(305), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(62), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2355] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(307), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(76), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2387] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(309), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(78), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2419] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(311), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(65), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2451] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(313), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(58), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2483] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(315), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(63), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2515] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(317), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(77), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2547] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(319), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(55), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2579] = 8,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      sym_identifier,
    ACTIONS(321), 1,
      sym_number_literal,
    STATE(54), 2,
      sym_call_expression,
      sym_subscript_expression,
    STATE(110), 2,
      sym__assignment_left_expression,
      sym_parenthesized_expression,
    STATE(79), 6,
      sym_unary_expression,
      sym_binary_expression,
      sym_assignment_expression,
      sym_update_expression,
      sym__expression,
      sym_string_literal,
  [2611] = 1,
    ACTIONS(323), 9,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_AMP_EQ,
      anon_sym_CARET_EQ,
      anon_sym_PIPE_EQ,
  [2623] = 7,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_SEMI,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_parameter_list,
    STATE(144), 1,
      aux_sym_declaration_repeat1,
  [2645] = 1,
    ACTIONS(335), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [2655] = 1,
    ACTIONS(337), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [2665] = 1,
    ACTIONS(339), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [2675] = 1,
    ACTIONS(341), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [2685] = 1,
    ACTIONS(343), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [2695] = 7,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_parameter_list,
    STATE(151), 1,
      aux_sym_declaration_repeat1,
  [2717] = 7,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_parameter_list,
    STATE(136), 1,
      aux_sym_declaration_repeat1,
  [2739] = 5,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_parameter_list,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2756] = 3,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(122), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2769] = 5,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_compound_statement,
    STATE(113), 1,
      sym_parameter_list,
  [2785] = 4,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_parameter_list,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2799] = 3,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(148), 1,
      sym_init_declarator,
    STATE(117), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2811] = 3,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(140), 1,
      sym_init_declarator,
    STATE(111), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2823] = 3,
    ACTIONS(361), 1,
      sym_identifier,
    STATE(142), 1,
      sym_init_declarator,
    STATE(118), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2835] = 3,
    ACTIONS(363), 1,
      sym_identifier,
    STATE(155), 1,
      sym_init_declarator,
    STATE(119), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2847] = 1,
    ACTIONS(94), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [2855] = 1,
    ACTIONS(94), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [2863] = 1,
    ACTIONS(120), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [2871] = 1,
    ACTIONS(120), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
  [2879] = 4,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    ACTIONS(367), 1,
      aux_sym_string_literal_token1,
    ACTIONS(370), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym_string_literal_repeat1,
  [2892] = 2,
    ACTIONS(373), 1,
      sym_identifier,
    STATE(121), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [2901] = 4,
    ACTIONS(375), 1,
      anon_sym_DQUOTE,
    ACTIONS(377), 1,
      aux_sym_string_literal_token1,
    ACTIONS(379), 1,
      sym_escape_sequence,
    STATE(131), 1,
      aux_sym_string_literal_repeat1,
  [2914] = 4,
    ACTIONS(381), 1,
      anon_sym_DQUOTE,
    ACTIONS(383), 1,
      aux_sym_string_literal_token1,
    ACTIONS(385), 1,
      sym_escape_sequence,
    STATE(133), 1,
      aux_sym_string_literal_repeat1,
  [2927] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
  [2937] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [2947] = 1,
    ACTIONS(391), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [2953] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [2963] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_parameter_list_repeat1,
  [2973] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_SEMI,
    STATE(143), 1,
      aux_sym_declaration_repeat1,
  [2983] = 3,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [2993] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      aux_sym_declaration_repeat1,
  [3003] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [3013] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [3023] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
  [3033] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_parameter_list_repeat1,
  [3043] = 1,
    ACTIONS(420), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [3049] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_declaration_repeat1,
  [3059] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_parameter_list_repeat1,
  [3069] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [3079] = 3,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      aux_sym_declaration_repeat1,
  [3089] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_parenthesized_expression,
  [3096] = 1,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3101] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_parenthesized_expression,
  [3108] = 1,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3113] = 1,
    ACTIONS(241), 1,
      anon_sym_SEMI,
  [3117] = 1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [3121] = 1,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [3125] = 1,
    ACTIONS(430), 1,
      anon_sym_LPAREN,
  [3129] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [3133] = 1,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(49)] = 0,
  [SMALL_STATE(50)] = 40,
  [SMALL_STATE(51)] = 80,
  [SMALL_STATE(52)] = 120,
  [SMALL_STATE(53)] = 160,
  [SMALL_STATE(54)] = 200,
  [SMALL_STATE(55)] = 244,
  [SMALL_STATE(56)] = 294,
  [SMALL_STATE(57)] = 350,
  [SMALL_STATE(58)] = 394,
  [SMALL_STATE(59)] = 440,
  [SMALL_STATE(60)] = 492,
  [SMALL_STATE(61)] = 546,
  [SMALL_STATE(62)] = 602,
  [SMALL_STATE(63)] = 660,
  [SMALL_STATE(64)] = 700,
  [SMALL_STATE(65)] = 742,
  [SMALL_STATE(66)] = 780,
  [SMALL_STATE(67)] = 840,
  [SMALL_STATE(68)] = 871,
  [SMALL_STATE(69)] = 934,
  [SMALL_STATE(70)] = 965,
  [SMALL_STATE(71)] = 996,
  [SMALL_STATE(72)] = 1056,
  [SMALL_STATE(73)] = 1116,
  [SMALL_STATE(74)] = 1176,
  [SMALL_STATE(75)] = 1234,
  [SMALL_STATE(76)] = 1292,
  [SMALL_STATE(77)] = 1349,
  [SMALL_STATE(78)] = 1406,
  [SMALL_STATE(79)] = 1463,
  [SMALL_STATE(80)] = 1520,
  [SMALL_STATE(81)] = 1577,
  [SMALL_STATE(82)] = 1634,
  [SMALL_STATE(83)] = 1691,
  [SMALL_STATE(84)] = 1748,
  [SMALL_STATE(85)] = 1805,
  [SMALL_STATE(86)] = 1840,
  [SMALL_STATE(87)] = 1875,
  [SMALL_STATE(88)] = 1907,
  [SMALL_STATE(89)] = 1939,
  [SMALL_STATE(90)] = 1971,
  [SMALL_STATE(91)] = 2003,
  [SMALL_STATE(92)] = 2035,
  [SMALL_STATE(93)] = 2067,
  [SMALL_STATE(94)] = 2099,
  [SMALL_STATE(95)] = 2131,
  [SMALL_STATE(96)] = 2163,
  [SMALL_STATE(97)] = 2195,
  [SMALL_STATE(98)] = 2227,
  [SMALL_STATE(99)] = 2259,
  [SMALL_STATE(100)] = 2291,
  [SMALL_STATE(101)] = 2323,
  [SMALL_STATE(102)] = 2355,
  [SMALL_STATE(103)] = 2387,
  [SMALL_STATE(104)] = 2419,
  [SMALL_STATE(105)] = 2451,
  [SMALL_STATE(106)] = 2483,
  [SMALL_STATE(107)] = 2515,
  [SMALL_STATE(108)] = 2547,
  [SMALL_STATE(109)] = 2579,
  [SMALL_STATE(110)] = 2611,
  [SMALL_STATE(111)] = 2623,
  [SMALL_STATE(112)] = 2645,
  [SMALL_STATE(113)] = 2655,
  [SMALL_STATE(114)] = 2665,
  [SMALL_STATE(115)] = 2675,
  [SMALL_STATE(116)] = 2685,
  [SMALL_STATE(117)] = 2695,
  [SMALL_STATE(118)] = 2717,
  [SMALL_STATE(119)] = 2739,
  [SMALL_STATE(120)] = 2756,
  [SMALL_STATE(121)] = 2769,
  [SMALL_STATE(122)] = 2785,
  [SMALL_STATE(123)] = 2799,
  [SMALL_STATE(124)] = 2811,
  [SMALL_STATE(125)] = 2823,
  [SMALL_STATE(126)] = 2835,
  [SMALL_STATE(127)] = 2847,
  [SMALL_STATE(128)] = 2855,
  [SMALL_STATE(129)] = 2863,
  [SMALL_STATE(130)] = 2871,
  [SMALL_STATE(131)] = 2879,
  [SMALL_STATE(132)] = 2892,
  [SMALL_STATE(133)] = 2901,
  [SMALL_STATE(134)] = 2914,
  [SMALL_STATE(135)] = 2927,
  [SMALL_STATE(136)] = 2937,
  [SMALL_STATE(137)] = 2947,
  [SMALL_STATE(138)] = 2953,
  [SMALL_STATE(139)] = 2963,
  [SMALL_STATE(140)] = 2973,
  [SMALL_STATE(141)] = 2983,
  [SMALL_STATE(142)] = 2993,
  [SMALL_STATE(143)] = 3003,
  [SMALL_STATE(144)] = 3013,
  [SMALL_STATE(145)] = 3023,
  [SMALL_STATE(146)] = 3033,
  [SMALL_STATE(147)] = 3043,
  [SMALL_STATE(148)] = 3049,
  [SMALL_STATE(149)] = 3059,
  [SMALL_STATE(150)] = 3069,
  [SMALL_STATE(151)] = 3079,
  [SMALL_STATE(152)] = 3089,
  [SMALL_STATE(153)] = 3096,
  [SMALL_STATE(154)] = 3101,
  [SMALL_STATE(155)] = 3108,
  [SMALL_STATE(156)] = 3113,
  [SMALL_STATE(157)] = 3117,
  [SMALL_STATE(158)] = 3121,
  [SMALL_STATE(159)] = 3125,
  [SMALL_STATE(160)] = 3129,
  [SMALL_STATE(161)] = 3133,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(103),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(152),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(159),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(104),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(102),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(54),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(72),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(134),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(137),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 8),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 17),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 13),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subscript_expression, 4, .production_id = 16),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subscript_expression, 4, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_left_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_left_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comma_expression, 3, .production_id = 10),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_declarator, 3, .production_id = 15),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarator, 2, .production_id = 6),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 12),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 11),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 8),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(131),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(131),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(44),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 14), SHIFT_REPEAT(126),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 14),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(97),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifiers, 1, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [432] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
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
