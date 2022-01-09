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
#define STATE_COUNT 96
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 173
#define ALIAS_COUNT 0
#define TOKEN_COUNT 145
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 16

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
  anon_sym_DASH_DASH = 29,
  anon_sym_PLUS_PLUS = 30,
  anon_sym_return = 31,
  sym_identifier = 32,
  sym_number_literal = 33,
  anon_sym_EQ = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_Integer = 37,
  anon_sym_Real = 38,
  anon_sym_Text = 39,
  anon_sym_Vector2 = 40,
  anon_sym_Vector3 = 41,
  anon_sym_Vector4 = 42,
  anon_sym_Matrix3 = 43,
  anon_sym_Matrix4 = 44,
  anon_sym_Point = 45,
  anon_sym_Line = 46,
  anon_sym_Arc = 47,
  anon_sym_Spiral = 48,
  anon_sym_Parabola = 49,
  anon_sym_Segment = 50,
  anon_sym_Element = 51,
  anon_sym_Model = 52,
  anon_sym_View = 53,
  anon_sym_Macro_Function = 54,
  anon_sym_Function = 55,
  anon_sym_Uid = 56,
  anon_sym_Guid = 57,
  anon_sym_Attributes = 58,
  anon_sym_SDR_Attribute = 59,
  anon_sym_Blob = 60,
  anon_sym_Screen_Text = 61,
  anon_sym_Textstyle_Data = 62,
  anon_sym_Equality_Label = 63,
  anon_sym_Undo = 64,
  anon_sym_Undo_List = 65,
  anon_sym_Widget = 66,
  anon_sym_Menu = 67,
  anon_sym_Panel = 68,
  anon_sym_Overlay_Widget = 69,
  anon_sym_Vertical_Group = 70,
  anon_sym_Horizontal_Group = 71,
  anon_sym_Widget_Pages = 72,
  anon_sym_Button = 73,
  anon_sym_Select_Button = 74,
  anon_sym_Angle_Box = 75,
  anon_sym_Attributes_Box = 76,
  anon_sym_Billboard_Box = 77,
  anon_sym_Bitmap_Fill_Box = 78,
  anon_sym_Bitmap_List_Box = 79,
  anon_sym_Chainage_Box = 80,
  anon_sym_Choice_Box = 81,
  anon_sym_Colour_Box = 82,
  anon_sym_Colour_Message_Box = 83,
  anon_sym_Date_Time_Box = 84,
  anon_sym_Directory_Box = 85,
  anon_sym_Draw_Box = 86,
  anon_sym_File_Box = 87,
  anon_sym_Function_Box = 88,
  anon_sym_Graph_Box = 89,
  anon_sym_GridCtrl_Box = 90,
  anon_sym_HyperLink_Box = 91,
  anon_sym_Input_Box = 92,
  anon_sym_Integer_Box = 93,
  anon_sym_Justify_Box = 94,
  anon_sym_Linestyle_Box = 95,
  anon_sym_List_Box = 96,
  anon_sym_ListCtrl_Box = 97,
  anon_sym_Map_File_Box = 98,
  anon_sym_Message_Box = 99,
  anon_sym_Model_Box = 100,
  anon_sym_Name_Box = 101,
  anon_sym_Named_Tick_Box = 102,
  anon_sym_New_Select_Box = 103,
  anon_sym_New_XYZ_Box = 104,
  anon_sym_Plotter_Box = 105,
  anon_sym_Polygon_Box = 106,
  anon_sym_Real_Box = 107,
  anon_sym_Report_Box = 108,
  anon_sym_Select_Box = 109,
  anon_sym_Select_Boxes = 110,
  anon_sym_Sheet_Size_Box = 111,
  anon_sym_Source_Box = 112,
  anon_sym_Symbol_Box = 113,
  anon_sym_Tab_Box = 114,
  anon_sym_Target_Box = 115,
  anon_sym_Template_Box = 116,
  anon_sym_Text_Edit_Box = 117,
  anon_sym_Text_Style_Box = 118,
  anon_sym_Texture_Box = 119,
  anon_sym_Tree_Box = 120,
  anon_sym_Tree_Page = 121,
  anon_sym_Tick_Box = 122,
  anon_sym_Tin_Box = 123,
  anon_sym_View_Box = 124,
  anon_sym_XYZ_Box = 125,
  anon_sym_File = 126,
  anon_sym_Map_File = 127,
  anon_sym_Plot_Parameter_File = 128,
  anon_sym_XML_Document = 129,
  anon_sym_XML_Node = 130,
  anon_sym_Connection = 131,
  anon_sym_Select_Query = 132,
  anon_sym_Insert_Query = 133,
  anon_sym_Update_Query = 134,
  anon_sym_Delete_Query = 135,
  anon_sym_Database_Results = 136,
  anon_sym_Transactions = 137,
  anon_sym_Parameter_Collection = 138,
  anon_sym_Query_Condition = 139,
  anon_sym_Manual_Condition = 140,
  anon_sym_Dynamic_Element = 141,
  anon_sym_Dynamic_Integer = 142,
  anon_sym_Dynamic_Real = 143,
  anon_sym_Dynamic_Text = 144,
  sym_source_file = 145,
  sym__definition = 146,
  sym_function_definition = 147,
  sym_compound_statement = 148,
  sym_parameter_list = 149,
  sym_parameter_declaration = 150,
  sym__declaration_specifiers = 151,
  sym__type_specifier = 152,
  sym__statement = 153,
  sym__non_case_statement = 154,
  sym_if_statement = 155,
  sym_for_statement = 156,
  sym_unary_expression = 157,
  sym_binary_expression = 158,
  sym_update_expression = 159,
  sym_parenthesized_expression = 160,
  sym_return_statement = 161,
  sym__expression = 162,
  sym_declaration = 163,
  sym_init_declarator = 164,
  sym_array_declarator = 165,
  sym_function_declarator = 166,
  sym__declarator = 167,
  sym_primitive_type = 168,
  aux_sym_source_file_repeat1 = 169,
  aux_sym_compound_statement_repeat1 = 170,
  aux_sym_parameter_list_repeat1 = 171,
  aux_sym_declaration_repeat1 = 172,
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
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_return] = "return",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_binary_expression] = "binary_expression",
  [sym_update_expression] = "update_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_declaration] = "declaration",
  [sym_init_declarator] = "init_declarator",
  [sym_array_declarator] = "array_declarator",
  [sym_function_declarator] = "function_declarator",
  [sym__declarator] = "_declarator",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_return] = anon_sym_return,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_binary_expression] = sym_binary_expression,
  [sym_update_expression] = sym_update_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_declaration] = sym_declaration,
  [sym_init_declarator] = sym_init_declarator,
  [sym_array_declarator] = sym_array_declarator,
  [sym_function_declarator] = sym_function_declarator,
  [sym__declarator] = sym__declarator,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_EQ] = {
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
  [sym_binary_expression] = {
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
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_declarator = 6,
  field_initializer = 7,
  field_left = 8,
  field_operator = 9,
  field_parameters = 10,
  field_right = 11,
  field_type = 12,
  field_update = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_declarator] = "declarator",
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
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 3},
  [10] = {.index = 18, .length = 1},
  [11] = {.index = 19, .length = 3},
  [12] = {.index = 22, .length = 2},
  [13] = {.index = 24, .length = 2},
  [14] = {.index = 26, .length = 3},
  [15] = {.index = 29, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
  [1] =
    {field_body, 2},
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [4] =
    {field_declarator, 0},
    {field_parameters, 1},
  [6] =
    {field_type, 0, .inherited = true},
  [7] =
    {field_declarator, 1},
    {field_type, 0, .inherited = true},
  [9] =
    {field_argument, 1},
    {field_operator, 0},
  [11] =
    {field_argument, 0},
    {field_operator, 1},
  [13] =
    {field_condition, 1},
    {field_consequence, 2},
  [15] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [18] =
    {field_declarator, 1},
  [19] =
    {field_declarator, 1},
    {field_declarator, 2, .inherited = true},
    {field_type, 0, .inherited = true},
  [22] =
    {field_declarator, 0, .inherited = true},
    {field_declarator, 1, .inherited = true},
  [24] =
    {field_declarator, 0},
    {field_value, 2},
  [26] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
  [29] =
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
      if (eof) ADVANCE(739);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '&') ADVANCE(760);
      if (lookahead == '(') ADVANCE(742);
      if (lookahead == ')') ADVANCE(744);
      if (lookahead == '*') ADVANCE(753);
      if (lookahead == '+') ADVANCE(751);
      if (lookahead == ',') ADVANCE(743);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == '/') ADVANCE(754);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(766);
      if (lookahead == '=') ADVANCE(775);
      if (lookahead == '>') ADVANCE(763);
      if (lookahead == 'A') ADVANCE(418);
      if (lookahead == 'B') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(328);
      if (lookahead == 'D') ADVANCE(167);
      if (lookahead == 'E') ADVANCE(378);
      if (lookahead == 'F') ADVANCE(337);
      if (lookahead == 'G') ADVANCE(538);
      if (lookahead == 'H') ADVANCE(453);
      if (lookahead == 'I') ADVANCE(419);
      if (lookahead == 'J') ADVANCE(648);
      if (lookahead == 'L') ADVANCE(331);
      if (lookahead == 'M') ADVANCE(159);
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(668);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == 'Q') ADVANCE(659);
      if (lookahead == 'R') ADVANCE(236);
      if (lookahead == 'S') ADVANCE(62);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == 'U') ADVANCE(335);
      if (lookahead == 'V') ADVANCE(237);
      if (lookahead == 'W') ADVANCE(343);
      if (lookahead == 'X') ADVANCE(77);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == '^') ADVANCE(759);
      if (lookahead == 'e') ADVANCE(377);
      if (lookahead == 'f') ADVANCE(455);
      if (lookahead == 'i') ADVANCE(313);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '{') ADVANCE(740);
      if (lookahead == '|') ADVANCE(758);
      if (lookahead == '}') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '%') ADVANCE(755);
      if (lookahead == '&') ADVANCE(760);
      if (lookahead == ')') ADVANCE(744);
      if (lookahead == '*') ADVANCE(753);
      if (lookahead == '+') ADVANCE(751);
      if (lookahead == ',') ADVANCE(743);
      if (lookahead == '-') ADVANCE(752);
      if (lookahead == '/') ADVANCE(754);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '<') ADVANCE(766);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(763);
      if (lookahead == ']') ADVANCE(777);
      if (lookahead == '^') ADVANCE(759);
      if (lookahead == '|') ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(749);
      if (lookahead == '(') ADVANCE(742);
      if (lookahead == ')') ADVANCE(744);
      if (lookahead == ',') ADVANCE(743);
      if (lookahead == ';') ADVANCE(748);
      if (lookahead == '=') ADVANCE(774);
      if (lookahead == '[') ADVANCE(776);
      if (lookahead == '{') ADVANCE(740);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(781);
      if (lookahead == '3') ADVANCE(782);
      if (lookahead == '4') ADVANCE(783);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(784);
      if (lookahead == '4') ADVANCE(785);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(762);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(761);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(645);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(492);
      if (lookahead == 'Q') ADVANCE(664);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(454);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(456);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(457);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(458);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(460);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(462);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(464);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(465);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(468);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(472);
      if (lookahead == 'P') ADVANCE(188);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(473);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(477);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(479);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(481);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(483);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(485);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(488);
      if (lookahead == 'M') ADVANCE(252);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(490);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(494);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(495);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(496);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(497);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(498);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(499);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(500);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(501);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(502);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(503);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(504);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(505);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(506);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(507);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(508);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(509);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(510);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(511);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(512);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(513);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(514);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(515);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(516);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(517);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(518);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(519);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(520);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(521);
      END_STATE();
    case 56:
      if (lookahead == 'B') ADVANCE(522);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(618);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(487);
      END_STATE();
    case 59:
      if (lookahead == 'C') ADVANCE(474);
      END_STATE();
    case 60:
      if (lookahead == 'C') ADVANCE(530);
      END_STATE();
    case 61:
      if (lookahead == 'C') ADVANCE(646);
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 62:
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(559);
      if (lookahead == 'e') ADVANCE(324);
      if (lookahead == 'h') ADVANCE(286);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead == 'p') ADVANCE(346);
      if (lookahead == 'y') ADVANCE(407);
      END_STATE();
    case 63:
      if (lookahead == 'D') ADVANCE(459);
      if (lookahead == 'N') ADVANCE(523);
      END_STATE();
    case 64:
      if (lookahead == 'D') ADVANCE(182);
      END_STATE();
    case 65:
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'S') ADVANCE(647);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(401);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead == 'R') ADVANCE(291);
      if (lookahead == 'T') ADVANCE(285);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(667);
      END_STATE();
    case 68:
      if (lookahead == 'F') ADVANCE(354);
      END_STATE();
    case 69:
      if (lookahead == 'F') ADVANCE(348);
      if (lookahead == 'L') ADVANCE(352);
      END_STATE();
    case 70:
      if (lookahead == 'F') ADVANCE(358);
      END_STATE();
    case 71:
      if (lookahead == 'G') ADVANCE(561);
      END_STATE();
    case 72:
      if (lookahead == 'G') ADVANCE(562);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(98);
      END_STATE();
    case 74:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'L') ADVANCE(347);
      END_STATE();
    case 76:
      if (lookahead == 'L') ADVANCE(350);
      END_STATE();
    case 77:
      if (lookahead == 'M') ADVANCE(73);
      if (lookahead == 'Y') ADVANCE(92);
      END_STATE();
    case 78:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(190);
      END_STATE();
    case 80:
      if (lookahead == 'Q') ADVANCE(662);
      END_STATE();
    case 81:
      if (lookahead == 'Q') ADVANCE(663);
      END_STATE();
    case 82:
      if (lookahead == 'Q') ADVANCE(665);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'R') ADVANCE(254);
      END_STATE();
    case 85:
      if (lookahead == 'S') ADVANCE(336);
      END_STATE();
    case 86:
      if (lookahead == 'S') ADVANCE(290);
      if (lookahead == 'X') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'T') ADVANCE(353);
      END_STATE();
    case 88:
      if (lookahead == 'T') ADVANCE(344);
      END_STATE();
    case 89:
      if (lookahead == 'T') ADVANCE(275);
      END_STATE();
    case 90:
      if (lookahead == 'W') ADVANCE(366);
      END_STATE();
    case 91:
      if (lookahead == 'Y') ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == 'Z') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'Z') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == 't') ADVANCE(266);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(42);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(51);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(53);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(434);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead == 'o') ADVANCE(341);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(790);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(803);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(531);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(602);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(536);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(410);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(371);
      if (lookahead == 'p') ADVANCE(527);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(406);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(374);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(386);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(375);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(558);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(612);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(584);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(325);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(644);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(730);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(315);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(414);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(316);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(395);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(327);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(801);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(319);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(475);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(184);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(471);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(526);
      if (lookahead == 'm') ADVANCE(277);
      END_STATE();
    case 202:
      if (lookahead == 'b') ADVANCE(272);
      END_STATE();
    case 203:
      if (lookahead == 'b') ADVANCE(660);
      END_STATE();
    case 204:
      if (lookahead == 'b') ADVANCE(661);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(788);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(551);
      if (lookahead == 'n') ADVANCE(658);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(619);
      if (lookahead == 'r') ADVANCE(608);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(178);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(620);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(629);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(635);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(298);
      END_STATE();
    case 220:
      if (lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 221:
      if (lookahead == 'c') ADVANCE(299);
      END_STATE();
    case 222:
      if (lookahead == 'c') ADVANCE(638);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(797);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(798);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(452);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(243);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(367);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 233:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 234:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 235:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'i') ADVANCE(247);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(867);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(746);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(868);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(871);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(800);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(869);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(669);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(321);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(574);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(581);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(545);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(722);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(552);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(542);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(437);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(323);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 313:
      if (lookahead == 'f') ADVANCE(745);
      END_STATE();
    case 314:
      if (lookahead == 'f') ADVANCE(733);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(244);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(385);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(466);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(310);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(270);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(265);
      END_STATE();
    case 322:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 325:
      if (lookahead == 'g') ADVANCE(300);
      END_STATE();
    case 326:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 327:
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 328:
      if (lookahead == 'h') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(380);
      END_STATE();
    case 329:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(379);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(433);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(314);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(381);
      if (lookahead == 'u') ADVANCE(429);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(219);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(203);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(435);
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(402);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(621);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(585);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(450);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(586);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(417);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(478);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(390);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(484);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(486);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(489);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(633);
      END_STATE();
    case 365:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 366:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 367:
      if (lookahead == 'i') ADVANCE(637);
      END_STATE();
    case 368:
      if (lookahead == 'k') ADVANCE(122);
      END_STATE();
    case 369:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 370:
      if (lookahead == 'k') ADVANCE(147);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(779);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(793);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(809);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(789);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(884);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(804);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(583);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(282);
      if (lookahead == 'q') ADVANCE(650);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(392);
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(349);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(296);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(274);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(609);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(405);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(297);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(400);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 404:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 405:
      if (lookahead == 'l') ADVANCE(312);
      END_STATE();
    case 406:
      if (lookahead == 'l') ADVANCE(158);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(198);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(535);
      if (lookahead == 'x') ADVANCE(591);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(170);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(284);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 415:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 416:
      if (lookahead == 'm') ADVANCE(293);
      END_STATE();
    case 417:
      if (lookahead == 'm') ADVANCE(304);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 'r') ADVANCE(205);
      if (lookahead == 't') ADVANCE(616);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(534);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(771);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(796);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(872);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(815);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(881);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(879);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(212);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == 's') ADVANCE(580);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(576);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 's') ADVANCE(589);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(592);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(595);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(627);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(599);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(601);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(229);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(369);
      END_STATE();
    case 448:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 449:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 450:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(805);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead == 'y') ADVANCE(537);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(539);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(446);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(651);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(652);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(397);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(428);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(691);
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(717);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(718);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(719);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(720);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(721);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(569);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(384);
      END_STATE();
    case 527:
      if (lookahead == 'o') ADVANCE(567);
      END_STATE();
    case 528:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 529:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 530:
      if (lookahead == 'o') ADVANCE(448);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(811);
      END_STATE();
    case 533:
      if (lookahead == 'p') ADVANCE(812);
      END_STATE();
    case 534:
      if (lookahead == 'p') ADVANCE(655);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 535:
      if (lookahead == 'p') ADVANCE(394);
      END_STATE();
    case 536:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 537:
      if (lookahead == 'p') ADVANCE(259);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(883);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(725);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(332);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(726);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(283);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(524);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(421);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(365);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(634);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(398);
      END_STATE();
    case 569:
      if (lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 570:
      if (lookahead == 'r') ADVANCE(399);
      END_STATE();
    case 571:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 572:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 573:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(799);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(851);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(878);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(813);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(877);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(606);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(657);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(241);
      END_STATE();
    case 584:
      if (lookahead == 's') ADVANCE(267);
      END_STATE();
    case 585:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 586:
      if (lookahead == 's') ADVANCE(639);
      END_STATE();
    case 587:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 588:
      if (lookahead == 's') ADVANCE(587);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(780);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(786);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(807);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(792);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(791);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(806);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(885);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(870);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(810);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(882);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(461);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(339);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(549);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(654);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(525);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(268);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(482);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(732);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(294);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(566);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(303);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(642);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(570);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(579);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(808);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(532);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(533);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(573);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(554);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(631);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(557);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 658:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(253);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(614);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(615);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(276);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(278);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(415);
      END_STATE();
    case 667:
      if (lookahead == 'u') ADVANCE(449);
      END_STATE();
    case 668:
      if (lookahead == 'v') ADVANCE(251);
      END_STATE();
    case 669:
      if (lookahead == 'w') ADVANCE(794);
      END_STATE();
    case 670:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 671:
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 672:
      if (lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 673:
      if (lookahead == 'x') ADVANCE(855);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(864);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(866);
      END_STATE();
    case 676:
      if (lookahead == 'x') ADVANCE(827);
      END_STATE();
    case 677:
      if (lookahead == 'x') ADVANCE(828);
      END_STATE();
    case 678:
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(842);
      END_STATE();
    case 680:
      if (lookahead == 'x') ADVANCE(848);
      END_STATE();
    case 681:
      if (lookahead == 'x') ADVANCE(863);
      END_STATE();
    case 682:
      if (lookahead == 'x') ADVANCE(861);
      END_STATE();
    case 683:
      if (lookahead == 'x') ADVANCE(865);
      END_STATE();
    case 684:
      if (lookahead == 'x') ADVANCE(816);
      END_STATE();
    case 685:
      if (lookahead == 'x') ADVANCE(830);
      END_STATE();
    case 686:
      if (lookahead == 'x') ADVANCE(833);
      END_STATE();
    case 687:
      if (lookahead == 'x') ADVANCE(841);
      END_STATE();
    case 688:
      if (lookahead == 'x') ADVANCE(822);
      END_STATE();
    case 689:
      if (lookahead == 'x') ADVANCE(823);
      END_STATE();
    case 690:
      if (lookahead == 'x') ADVANCE(849);
      END_STATE();
    case 691:
      if (lookahead == 'x') ADVANCE(850);
      END_STATE();
    case 692:
      if (lookahead == 'x') ADVANCE(853);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(854);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(856);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(834);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(835);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(840);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(845);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(846);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(847);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(860);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(821);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(829);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(831);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(838);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(839);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(857);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(825);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(826);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(832);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(836);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(858);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(817);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(843);
      END_STATE();
    case 716:
      if (lookahead == 'x') ADVANCE(844);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(852);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(859);
      END_STATE();
    case 719:
      if (lookahead == 'x') ADVANCE(819);
      END_STATE();
    case 720:
      if (lookahead == 'x') ADVANCE(820);
      END_STATE();
    case 721:
      if (lookahead == 'x') ADVANCE(824);
      END_STATE();
    case 722:
      if (lookahead == 'x') ADVANCE(597);
      END_STATE();
    case 723:
      if (lookahead == 'x') ADVANCE(598);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(876);
      END_STATE();
    case 725:
      if (lookahead == 'y') ADVANCE(874);
      END_STATE();
    case 726:
      if (lookahead == 'y') ADVANCE(873);
      END_STATE();
    case 727:
      if (lookahead == 'y') ADVANCE(875);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(318);
      END_STATE();
    case 729:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 731:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 732:
      if (lookahead == 'y') ADVANCE(388);
      END_STATE();
    case 733:
      if (lookahead == 'y') ADVANCE(131);
      END_STATE();
    case 734:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 735:
      if (lookahead == 'y') ADVANCE(403);
      END_STATE();
    case 736:
      if (lookahead == 'y') ADVANCE(404);
      END_STATE();
    case 737:
      if (lookahead == 'z') ADVANCE(529);
      END_STATE();
    case 738:
      if (lookahead == 'z') ADVANCE(306);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(762);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(770);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(769);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(756);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(757);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(764);
      if (lookahead == '>') ADVANCE(768);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(767);
      if (lookahead == '=') ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(772);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(761);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead == 'u') ADVANCE(571);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(603);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(49);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
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
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_source_file] = STATE(95),
    [sym__definition] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym__declaration_specifiers] = STATE(74),
    [sym__type_specifier] = STATE(80),
    [sym_primitive_type] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
    [sym_compound_statement] = STATE(2),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(2),
    [sym__non_case_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_primitive_type] = STATE(80),
    [aux_sym_compound_statement_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(12),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_for] = ACTIONS(17),
    [anon_sym_return] = ACTIONS(20),
    [anon_sym_Integer] = ACTIONS(23),
    [anon_sym_Real] = ACTIONS(23),
    [anon_sym_Text] = ACTIONS(23),
    [anon_sym_Vector2] = ACTIONS(26),
    [anon_sym_Vector3] = ACTIONS(26),
    [anon_sym_Vector4] = ACTIONS(26),
    [anon_sym_Matrix3] = ACTIONS(26),
    [anon_sym_Matrix4] = ACTIONS(26),
    [anon_sym_Point] = ACTIONS(26),
    [anon_sym_Line] = ACTIONS(23),
    [anon_sym_Arc] = ACTIONS(26),
    [anon_sym_Spiral] = ACTIONS(26),
    [anon_sym_Parabola] = ACTIONS(26),
    [anon_sym_Segment] = ACTIONS(26),
    [anon_sym_Element] = ACTIONS(26),
    [anon_sym_Model] = ACTIONS(23),
    [anon_sym_View] = ACTIONS(23),
    [anon_sym_Macro_Function] = ACTIONS(26),
    [anon_sym_Function] = ACTIONS(23),
    [anon_sym_Uid] = ACTIONS(26),
    [anon_sym_Guid] = ACTIONS(26),
    [anon_sym_Attributes] = ACTIONS(23),
    [anon_sym_SDR_Attribute] = ACTIONS(26),
    [anon_sym_Blob] = ACTIONS(26),
    [anon_sym_Screen_Text] = ACTIONS(26),
    [anon_sym_Textstyle_Data] = ACTIONS(26),
    [anon_sym_Equality_Label] = ACTIONS(26),
    [anon_sym_Undo] = ACTIONS(23),
    [anon_sym_Undo_List] = ACTIONS(26),
    [anon_sym_Widget] = ACTIONS(23),
    [anon_sym_Menu] = ACTIONS(26),
    [anon_sym_Panel] = ACTIONS(26),
    [anon_sym_Overlay_Widget] = ACTIONS(26),
    [anon_sym_Vertical_Group] = ACTIONS(26),
    [anon_sym_Horizontal_Group] = ACTIONS(26),
    [anon_sym_Widget_Pages] = ACTIONS(26),
    [anon_sym_Button] = ACTIONS(26),
    [anon_sym_Select_Button] = ACTIONS(26),
    [anon_sym_Angle_Box] = ACTIONS(26),
    [anon_sym_Attributes_Box] = ACTIONS(26),
    [anon_sym_Billboard_Box] = ACTIONS(26),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(26),
    [anon_sym_Bitmap_List_Box] = ACTIONS(26),
    [anon_sym_Chainage_Box] = ACTIONS(26),
    [anon_sym_Choice_Box] = ACTIONS(26),
    [anon_sym_Colour_Box] = ACTIONS(26),
    [anon_sym_Colour_Message_Box] = ACTIONS(26),
    [anon_sym_Date_Time_Box] = ACTIONS(26),
    [anon_sym_Directory_Box] = ACTIONS(26),
    [anon_sym_Draw_Box] = ACTIONS(26),
    [anon_sym_File_Box] = ACTIONS(26),
    [anon_sym_Function_Box] = ACTIONS(26),
    [anon_sym_Graph_Box] = ACTIONS(26),
    [anon_sym_GridCtrl_Box] = ACTIONS(26),
    [anon_sym_HyperLink_Box] = ACTIONS(26),
    [anon_sym_Input_Box] = ACTIONS(26),
    [anon_sym_Integer_Box] = ACTIONS(26),
    [anon_sym_Justify_Box] = ACTIONS(26),
    [anon_sym_Linestyle_Box] = ACTIONS(26),
    [anon_sym_List_Box] = ACTIONS(26),
    [anon_sym_ListCtrl_Box] = ACTIONS(26),
    [anon_sym_Map_File_Box] = ACTIONS(26),
    [anon_sym_Message_Box] = ACTIONS(26),
    [anon_sym_Model_Box] = ACTIONS(26),
    [anon_sym_Name_Box] = ACTIONS(26),
    [anon_sym_Named_Tick_Box] = ACTIONS(26),
    [anon_sym_New_Select_Box] = ACTIONS(26),
    [anon_sym_New_XYZ_Box] = ACTIONS(26),
    [anon_sym_Plotter_Box] = ACTIONS(26),
    [anon_sym_Polygon_Box] = ACTIONS(26),
    [anon_sym_Real_Box] = ACTIONS(26),
    [anon_sym_Report_Box] = ACTIONS(26),
    [anon_sym_Select_Box] = ACTIONS(23),
    [anon_sym_Select_Boxes] = ACTIONS(26),
    [anon_sym_Sheet_Size_Box] = ACTIONS(26),
    [anon_sym_Source_Box] = ACTIONS(26),
    [anon_sym_Symbol_Box] = ACTIONS(26),
    [anon_sym_Tab_Box] = ACTIONS(26),
    [anon_sym_Target_Box] = ACTIONS(26),
    [anon_sym_Template_Box] = ACTIONS(26),
    [anon_sym_Text_Edit_Box] = ACTIONS(26),
    [anon_sym_Text_Style_Box] = ACTIONS(26),
    [anon_sym_Texture_Box] = ACTIONS(26),
    [anon_sym_Tree_Box] = ACTIONS(26),
    [anon_sym_Tree_Page] = ACTIONS(26),
    [anon_sym_Tick_Box] = ACTIONS(26),
    [anon_sym_Tin_Box] = ACTIONS(26),
    [anon_sym_View_Box] = ACTIONS(26),
    [anon_sym_XYZ_Box] = ACTIONS(26),
    [anon_sym_File] = ACTIONS(23),
    [anon_sym_Map_File] = ACTIONS(23),
    [anon_sym_Plot_Parameter_File] = ACTIONS(26),
    [anon_sym_XML_Document] = ACTIONS(26),
    [anon_sym_XML_Node] = ACTIONS(26),
    [anon_sym_Connection] = ACTIONS(26),
    [anon_sym_Select_Query] = ACTIONS(26),
    [anon_sym_Insert_Query] = ACTIONS(26),
    [anon_sym_Update_Query] = ACTIONS(26),
    [anon_sym_Delete_Query] = ACTIONS(26),
    [anon_sym_Database_Results] = ACTIONS(26),
    [anon_sym_Transactions] = ACTIONS(26),
    [anon_sym_Parameter_Collection] = ACTIONS(26),
    [anon_sym_Query_Condition] = ACTIONS(26),
    [anon_sym_Manual_Condition] = ACTIONS(26),
    [anon_sym_Dynamic_Element] = ACTIONS(26),
    [anon_sym_Dynamic_Integer] = ACTIONS(26),
    [anon_sym_Dynamic_Real] = ACTIONS(26),
    [anon_sym_Dynamic_Text] = ACTIONS(26),
  },
  [3] = {
    [sym_compound_statement] = STATE(4),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(4),
    [sym__non_case_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym_declaration] = STATE(4),
    [sym_primitive_type] = STATE(80),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [4] = {
    [sym_compound_statement] = STATE(2),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(2),
    [sym__non_case_statement] = STATE(2),
    [sym_if_statement] = STATE(2),
    [sym_for_statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [sym_primitive_type] = STATE(80),
    [aux_sym_compound_statement_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [5] = {
    [sym_compound_statement] = STATE(19),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(19),
    [sym__non_case_statement] = STATE(19),
    [sym_if_statement] = STATE(19),
    [sym_for_statement] = STATE(19),
    [sym_return_statement] = STATE(19),
    [sym_declaration] = STATE(19),
    [sym_primitive_type] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [6] = {
    [sym_compound_statement] = STATE(14),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_for_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [7] = {
    [sym_compound_statement] = STATE(18),
    [sym__declaration_specifiers] = STATE(72),
    [sym__type_specifier] = STATE(80),
    [sym__statement] = STATE(18),
    [sym__non_case_statement] = STATE(18),
    [sym_if_statement] = STATE(18),
    [sym_for_statement] = STATE(18),
    [sym_return_statement] = STATE(18),
    [sym_declaration] = STATE(18),
    [sym_primitive_type] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
    [anon_sym_return] = ACTIONS(37),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_if] = ACTIONS(41),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_for] = ACTIONS(41),
    [anon_sym_return] = ACTIONS(41),
    [anon_sym_Integer] = ACTIONS(43),
    [anon_sym_Real] = ACTIONS(43),
    [anon_sym_Text] = ACTIONS(43),
    [anon_sym_Vector2] = ACTIONS(41),
    [anon_sym_Vector3] = ACTIONS(41),
    [anon_sym_Vector4] = ACTIONS(41),
    [anon_sym_Matrix3] = ACTIONS(41),
    [anon_sym_Matrix4] = ACTIONS(41),
    [anon_sym_Point] = ACTIONS(41),
    [anon_sym_Line] = ACTIONS(43),
    [anon_sym_Arc] = ACTIONS(41),
    [anon_sym_Spiral] = ACTIONS(41),
    [anon_sym_Parabola] = ACTIONS(41),
    [anon_sym_Segment] = ACTIONS(41),
    [anon_sym_Element] = ACTIONS(41),
    [anon_sym_Model] = ACTIONS(43),
    [anon_sym_View] = ACTIONS(43),
    [anon_sym_Macro_Function] = ACTIONS(41),
    [anon_sym_Function] = ACTIONS(43),
    [anon_sym_Uid] = ACTIONS(41),
    [anon_sym_Guid] = ACTIONS(41),
    [anon_sym_Attributes] = ACTIONS(43),
    [anon_sym_SDR_Attribute] = ACTIONS(41),
    [anon_sym_Blob] = ACTIONS(41),
    [anon_sym_Screen_Text] = ACTIONS(41),
    [anon_sym_Textstyle_Data] = ACTIONS(41),
    [anon_sym_Equality_Label] = ACTIONS(41),
    [anon_sym_Undo] = ACTIONS(43),
    [anon_sym_Undo_List] = ACTIONS(41),
    [anon_sym_Widget] = ACTIONS(43),
    [anon_sym_Menu] = ACTIONS(41),
    [anon_sym_Panel] = ACTIONS(41),
    [anon_sym_Overlay_Widget] = ACTIONS(41),
    [anon_sym_Vertical_Group] = ACTIONS(41),
    [anon_sym_Horizontal_Group] = ACTIONS(41),
    [anon_sym_Widget_Pages] = ACTIONS(41),
    [anon_sym_Button] = ACTIONS(41),
    [anon_sym_Select_Button] = ACTIONS(41),
    [anon_sym_Angle_Box] = ACTIONS(41),
    [anon_sym_Attributes_Box] = ACTIONS(41),
    [anon_sym_Billboard_Box] = ACTIONS(41),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(41),
    [anon_sym_Bitmap_List_Box] = ACTIONS(41),
    [anon_sym_Chainage_Box] = ACTIONS(41),
    [anon_sym_Choice_Box] = ACTIONS(41),
    [anon_sym_Colour_Box] = ACTIONS(41),
    [anon_sym_Colour_Message_Box] = ACTIONS(41),
    [anon_sym_Date_Time_Box] = ACTIONS(41),
    [anon_sym_Directory_Box] = ACTIONS(41),
    [anon_sym_Draw_Box] = ACTIONS(41),
    [anon_sym_File_Box] = ACTIONS(41),
    [anon_sym_Function_Box] = ACTIONS(41),
    [anon_sym_Graph_Box] = ACTIONS(41),
    [anon_sym_GridCtrl_Box] = ACTIONS(41),
    [anon_sym_HyperLink_Box] = ACTIONS(41),
    [anon_sym_Input_Box] = ACTIONS(41),
    [anon_sym_Integer_Box] = ACTIONS(41),
    [anon_sym_Justify_Box] = ACTIONS(41),
    [anon_sym_Linestyle_Box] = ACTIONS(41),
    [anon_sym_List_Box] = ACTIONS(41),
    [anon_sym_ListCtrl_Box] = ACTIONS(41),
    [anon_sym_Map_File_Box] = ACTIONS(41),
    [anon_sym_Message_Box] = ACTIONS(41),
    [anon_sym_Model_Box] = ACTIONS(41),
    [anon_sym_Name_Box] = ACTIONS(41),
    [anon_sym_Named_Tick_Box] = ACTIONS(41),
    [anon_sym_New_Select_Box] = ACTIONS(41),
    [anon_sym_New_XYZ_Box] = ACTIONS(41),
    [anon_sym_Plotter_Box] = ACTIONS(41),
    [anon_sym_Polygon_Box] = ACTIONS(41),
    [anon_sym_Real_Box] = ACTIONS(41),
    [anon_sym_Report_Box] = ACTIONS(41),
    [anon_sym_Select_Box] = ACTIONS(43),
    [anon_sym_Select_Boxes] = ACTIONS(41),
    [anon_sym_Sheet_Size_Box] = ACTIONS(41),
    [anon_sym_Source_Box] = ACTIONS(41),
    [anon_sym_Symbol_Box] = ACTIONS(41),
    [anon_sym_Tab_Box] = ACTIONS(41),
    [anon_sym_Target_Box] = ACTIONS(41),
    [anon_sym_Template_Box] = ACTIONS(41),
    [anon_sym_Text_Edit_Box] = ACTIONS(41),
    [anon_sym_Text_Style_Box] = ACTIONS(41),
    [anon_sym_Texture_Box] = ACTIONS(41),
    [anon_sym_Tree_Box] = ACTIONS(41),
    [anon_sym_Tree_Page] = ACTIONS(41),
    [anon_sym_Tick_Box] = ACTIONS(41),
    [anon_sym_Tin_Box] = ACTIONS(41),
    [anon_sym_View_Box] = ACTIONS(41),
    [anon_sym_XYZ_Box] = ACTIONS(41),
    [anon_sym_File] = ACTIONS(43),
    [anon_sym_Map_File] = ACTIONS(43),
    [anon_sym_Plot_Parameter_File] = ACTIONS(41),
    [anon_sym_XML_Document] = ACTIONS(41),
    [anon_sym_XML_Node] = ACTIONS(41),
    [anon_sym_Connection] = ACTIONS(41),
    [anon_sym_Select_Query] = ACTIONS(41),
    [anon_sym_Insert_Query] = ACTIONS(41),
    [anon_sym_Update_Query] = ACTIONS(41),
    [anon_sym_Delete_Query] = ACTIONS(41),
    [anon_sym_Database_Results] = ACTIONS(41),
    [anon_sym_Transactions] = ACTIONS(41),
    [anon_sym_Parameter_Collection] = ACTIONS(41),
    [anon_sym_Query_Condition] = ACTIONS(41),
    [anon_sym_Manual_Condition] = ACTIONS(41),
    [anon_sym_Dynamic_Element] = ACTIONS(41),
    [anon_sym_Dynamic_Integer] = ACTIONS(41),
    [anon_sym_Dynamic_Real] = ACTIONS(41),
    [anon_sym_Dynamic_Text] = ACTIONS(41),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_if] = ACTIONS(45),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_for] = ACTIONS(45),
    [anon_sym_return] = ACTIONS(45),
    [anon_sym_Integer] = ACTIONS(47),
    [anon_sym_Real] = ACTIONS(47),
    [anon_sym_Text] = ACTIONS(47),
    [anon_sym_Vector2] = ACTIONS(45),
    [anon_sym_Vector3] = ACTIONS(45),
    [anon_sym_Vector4] = ACTIONS(45),
    [anon_sym_Matrix3] = ACTIONS(45),
    [anon_sym_Matrix4] = ACTIONS(45),
    [anon_sym_Point] = ACTIONS(45),
    [anon_sym_Line] = ACTIONS(47),
    [anon_sym_Arc] = ACTIONS(45),
    [anon_sym_Spiral] = ACTIONS(45),
    [anon_sym_Parabola] = ACTIONS(45),
    [anon_sym_Segment] = ACTIONS(45),
    [anon_sym_Element] = ACTIONS(45),
    [anon_sym_Model] = ACTIONS(47),
    [anon_sym_View] = ACTIONS(47),
    [anon_sym_Macro_Function] = ACTIONS(45),
    [anon_sym_Function] = ACTIONS(47),
    [anon_sym_Uid] = ACTIONS(45),
    [anon_sym_Guid] = ACTIONS(45),
    [anon_sym_Attributes] = ACTIONS(47),
    [anon_sym_SDR_Attribute] = ACTIONS(45),
    [anon_sym_Blob] = ACTIONS(45),
    [anon_sym_Screen_Text] = ACTIONS(45),
    [anon_sym_Textstyle_Data] = ACTIONS(45),
    [anon_sym_Equality_Label] = ACTIONS(45),
    [anon_sym_Undo] = ACTIONS(47),
    [anon_sym_Undo_List] = ACTIONS(45),
    [anon_sym_Widget] = ACTIONS(47),
    [anon_sym_Menu] = ACTIONS(45),
    [anon_sym_Panel] = ACTIONS(45),
    [anon_sym_Overlay_Widget] = ACTIONS(45),
    [anon_sym_Vertical_Group] = ACTIONS(45),
    [anon_sym_Horizontal_Group] = ACTIONS(45),
    [anon_sym_Widget_Pages] = ACTIONS(45),
    [anon_sym_Button] = ACTIONS(45),
    [anon_sym_Select_Button] = ACTIONS(45),
    [anon_sym_Angle_Box] = ACTIONS(45),
    [anon_sym_Attributes_Box] = ACTIONS(45),
    [anon_sym_Billboard_Box] = ACTIONS(45),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(45),
    [anon_sym_Bitmap_List_Box] = ACTIONS(45),
    [anon_sym_Chainage_Box] = ACTIONS(45),
    [anon_sym_Choice_Box] = ACTIONS(45),
    [anon_sym_Colour_Box] = ACTIONS(45),
    [anon_sym_Colour_Message_Box] = ACTIONS(45),
    [anon_sym_Date_Time_Box] = ACTIONS(45),
    [anon_sym_Directory_Box] = ACTIONS(45),
    [anon_sym_Draw_Box] = ACTIONS(45),
    [anon_sym_File_Box] = ACTIONS(45),
    [anon_sym_Function_Box] = ACTIONS(45),
    [anon_sym_Graph_Box] = ACTIONS(45),
    [anon_sym_GridCtrl_Box] = ACTIONS(45),
    [anon_sym_HyperLink_Box] = ACTIONS(45),
    [anon_sym_Input_Box] = ACTIONS(45),
    [anon_sym_Integer_Box] = ACTIONS(45),
    [anon_sym_Justify_Box] = ACTIONS(45),
    [anon_sym_Linestyle_Box] = ACTIONS(45),
    [anon_sym_List_Box] = ACTIONS(45),
    [anon_sym_ListCtrl_Box] = ACTIONS(45),
    [anon_sym_Map_File_Box] = ACTIONS(45),
    [anon_sym_Message_Box] = ACTIONS(45),
    [anon_sym_Model_Box] = ACTIONS(45),
    [anon_sym_Name_Box] = ACTIONS(45),
    [anon_sym_Named_Tick_Box] = ACTIONS(45),
    [anon_sym_New_Select_Box] = ACTIONS(45),
    [anon_sym_New_XYZ_Box] = ACTIONS(45),
    [anon_sym_Plotter_Box] = ACTIONS(45),
    [anon_sym_Polygon_Box] = ACTIONS(45),
    [anon_sym_Real_Box] = ACTIONS(45),
    [anon_sym_Report_Box] = ACTIONS(45),
    [anon_sym_Select_Box] = ACTIONS(47),
    [anon_sym_Select_Boxes] = ACTIONS(45),
    [anon_sym_Sheet_Size_Box] = ACTIONS(45),
    [anon_sym_Source_Box] = ACTIONS(45),
    [anon_sym_Symbol_Box] = ACTIONS(45),
    [anon_sym_Tab_Box] = ACTIONS(45),
    [anon_sym_Target_Box] = ACTIONS(45),
    [anon_sym_Template_Box] = ACTIONS(45),
    [anon_sym_Text_Edit_Box] = ACTIONS(45),
    [anon_sym_Text_Style_Box] = ACTIONS(45),
    [anon_sym_Texture_Box] = ACTIONS(45),
    [anon_sym_Tree_Box] = ACTIONS(45),
    [anon_sym_Tree_Page] = ACTIONS(45),
    [anon_sym_Tick_Box] = ACTIONS(45),
    [anon_sym_Tin_Box] = ACTIONS(45),
    [anon_sym_View_Box] = ACTIONS(45),
    [anon_sym_XYZ_Box] = ACTIONS(45),
    [anon_sym_File] = ACTIONS(47),
    [anon_sym_Map_File] = ACTIONS(47),
    [anon_sym_Plot_Parameter_File] = ACTIONS(45),
    [anon_sym_XML_Document] = ACTIONS(45),
    [anon_sym_XML_Node] = ACTIONS(45),
    [anon_sym_Connection] = ACTIONS(45),
    [anon_sym_Select_Query] = ACTIONS(45),
    [anon_sym_Insert_Query] = ACTIONS(45),
    [anon_sym_Update_Query] = ACTIONS(45),
    [anon_sym_Delete_Query] = ACTIONS(45),
    [anon_sym_Database_Results] = ACTIONS(45),
    [anon_sym_Transactions] = ACTIONS(45),
    [anon_sym_Parameter_Collection] = ACTIONS(45),
    [anon_sym_Query_Condition] = ACTIONS(45),
    [anon_sym_Manual_Condition] = ACTIONS(45),
    [anon_sym_Dynamic_Element] = ACTIONS(45),
    [anon_sym_Dynamic_Integer] = ACTIONS(45),
    [anon_sym_Dynamic_Real] = ACTIONS(45),
    [anon_sym_Dynamic_Text] = ACTIONS(45),
  },
  [10] = {
    [sym__definition] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym__declaration_specifiers] = STATE(74),
    [sym__type_specifier] = STATE(80),
    [sym_primitive_type] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [11] = {
    [sym__definition] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym__declaration_specifiers] = STATE(74),
    [sym__type_specifier] = STATE(80),
    [sym_primitive_type] = STATE(80),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_Integer] = ACTIONS(53),
    [anon_sym_Real] = ACTIONS(53),
    [anon_sym_Text] = ACTIONS(53),
    [anon_sym_Vector2] = ACTIONS(56),
    [anon_sym_Vector3] = ACTIONS(56),
    [anon_sym_Vector4] = ACTIONS(56),
    [anon_sym_Matrix3] = ACTIONS(56),
    [anon_sym_Matrix4] = ACTIONS(56),
    [anon_sym_Point] = ACTIONS(56),
    [anon_sym_Line] = ACTIONS(53),
    [anon_sym_Arc] = ACTIONS(56),
    [anon_sym_Spiral] = ACTIONS(56),
    [anon_sym_Parabola] = ACTIONS(56),
    [anon_sym_Segment] = ACTIONS(56),
    [anon_sym_Element] = ACTIONS(56),
    [anon_sym_Model] = ACTIONS(53),
    [anon_sym_View] = ACTIONS(53),
    [anon_sym_Macro_Function] = ACTIONS(56),
    [anon_sym_Function] = ACTIONS(53),
    [anon_sym_Uid] = ACTIONS(56),
    [anon_sym_Guid] = ACTIONS(56),
    [anon_sym_Attributes] = ACTIONS(53),
    [anon_sym_SDR_Attribute] = ACTIONS(56),
    [anon_sym_Blob] = ACTIONS(56),
    [anon_sym_Screen_Text] = ACTIONS(56),
    [anon_sym_Textstyle_Data] = ACTIONS(56),
    [anon_sym_Equality_Label] = ACTIONS(56),
    [anon_sym_Undo] = ACTIONS(53),
    [anon_sym_Undo_List] = ACTIONS(56),
    [anon_sym_Widget] = ACTIONS(53),
    [anon_sym_Menu] = ACTIONS(56),
    [anon_sym_Panel] = ACTIONS(56),
    [anon_sym_Overlay_Widget] = ACTIONS(56),
    [anon_sym_Vertical_Group] = ACTIONS(56),
    [anon_sym_Horizontal_Group] = ACTIONS(56),
    [anon_sym_Widget_Pages] = ACTIONS(56),
    [anon_sym_Button] = ACTIONS(56),
    [anon_sym_Select_Button] = ACTIONS(56),
    [anon_sym_Angle_Box] = ACTIONS(56),
    [anon_sym_Attributes_Box] = ACTIONS(56),
    [anon_sym_Billboard_Box] = ACTIONS(56),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(56),
    [anon_sym_Bitmap_List_Box] = ACTIONS(56),
    [anon_sym_Chainage_Box] = ACTIONS(56),
    [anon_sym_Choice_Box] = ACTIONS(56),
    [anon_sym_Colour_Box] = ACTIONS(56),
    [anon_sym_Colour_Message_Box] = ACTIONS(56),
    [anon_sym_Date_Time_Box] = ACTIONS(56),
    [anon_sym_Directory_Box] = ACTIONS(56),
    [anon_sym_Draw_Box] = ACTIONS(56),
    [anon_sym_File_Box] = ACTIONS(56),
    [anon_sym_Function_Box] = ACTIONS(56),
    [anon_sym_Graph_Box] = ACTIONS(56),
    [anon_sym_GridCtrl_Box] = ACTIONS(56),
    [anon_sym_HyperLink_Box] = ACTIONS(56),
    [anon_sym_Input_Box] = ACTIONS(56),
    [anon_sym_Integer_Box] = ACTIONS(56),
    [anon_sym_Justify_Box] = ACTIONS(56),
    [anon_sym_Linestyle_Box] = ACTIONS(56),
    [anon_sym_List_Box] = ACTIONS(56),
    [anon_sym_ListCtrl_Box] = ACTIONS(56),
    [anon_sym_Map_File_Box] = ACTIONS(56),
    [anon_sym_Message_Box] = ACTIONS(56),
    [anon_sym_Model_Box] = ACTIONS(56),
    [anon_sym_Name_Box] = ACTIONS(56),
    [anon_sym_Named_Tick_Box] = ACTIONS(56),
    [anon_sym_New_Select_Box] = ACTIONS(56),
    [anon_sym_New_XYZ_Box] = ACTIONS(56),
    [anon_sym_Plotter_Box] = ACTIONS(56),
    [anon_sym_Polygon_Box] = ACTIONS(56),
    [anon_sym_Real_Box] = ACTIONS(56),
    [anon_sym_Report_Box] = ACTIONS(56),
    [anon_sym_Select_Box] = ACTIONS(53),
    [anon_sym_Select_Boxes] = ACTIONS(56),
    [anon_sym_Sheet_Size_Box] = ACTIONS(56),
    [anon_sym_Source_Box] = ACTIONS(56),
    [anon_sym_Symbol_Box] = ACTIONS(56),
    [anon_sym_Tab_Box] = ACTIONS(56),
    [anon_sym_Target_Box] = ACTIONS(56),
    [anon_sym_Template_Box] = ACTIONS(56),
    [anon_sym_Text_Edit_Box] = ACTIONS(56),
    [anon_sym_Text_Style_Box] = ACTIONS(56),
    [anon_sym_Texture_Box] = ACTIONS(56),
    [anon_sym_Tree_Box] = ACTIONS(56),
    [anon_sym_Tree_Page] = ACTIONS(56),
    [anon_sym_Tick_Box] = ACTIONS(56),
    [anon_sym_Tin_Box] = ACTIONS(56),
    [anon_sym_View_Box] = ACTIONS(56),
    [anon_sym_XYZ_Box] = ACTIONS(56),
    [anon_sym_File] = ACTIONS(53),
    [anon_sym_Map_File] = ACTIONS(53),
    [anon_sym_Plot_Parameter_File] = ACTIONS(56),
    [anon_sym_XML_Document] = ACTIONS(56),
    [anon_sym_XML_Node] = ACTIONS(56),
    [anon_sym_Connection] = ACTIONS(56),
    [anon_sym_Select_Query] = ACTIONS(56),
    [anon_sym_Insert_Query] = ACTIONS(56),
    [anon_sym_Update_Query] = ACTIONS(56),
    [anon_sym_Delete_Query] = ACTIONS(56),
    [anon_sym_Database_Results] = ACTIONS(56),
    [anon_sym_Transactions] = ACTIONS(56),
    [anon_sym_Parameter_Collection] = ACTIONS(56),
    [anon_sym_Query_Condition] = ACTIONS(56),
    [anon_sym_Manual_Condition] = ACTIONS(56),
    [anon_sym_Dynamic_Element] = ACTIONS(56),
    [anon_sym_Dynamic_Integer] = ACTIONS(56),
    [anon_sym_Dynamic_Real] = ACTIONS(56),
    [anon_sym_Dynamic_Text] = ACTIONS(56),
  },
  [12] = {
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_Integer] = ACTIONS(61),
    [anon_sym_Real] = ACTIONS(61),
    [anon_sym_Text] = ACTIONS(61),
    [anon_sym_Vector2] = ACTIONS(59),
    [anon_sym_Vector3] = ACTIONS(59),
    [anon_sym_Vector4] = ACTIONS(59),
    [anon_sym_Matrix3] = ACTIONS(59),
    [anon_sym_Matrix4] = ACTIONS(59),
    [anon_sym_Point] = ACTIONS(59),
    [anon_sym_Line] = ACTIONS(61),
    [anon_sym_Arc] = ACTIONS(59),
    [anon_sym_Spiral] = ACTIONS(59),
    [anon_sym_Parabola] = ACTIONS(59),
    [anon_sym_Segment] = ACTIONS(59),
    [anon_sym_Element] = ACTIONS(59),
    [anon_sym_Model] = ACTIONS(61),
    [anon_sym_View] = ACTIONS(61),
    [anon_sym_Macro_Function] = ACTIONS(59),
    [anon_sym_Function] = ACTIONS(61),
    [anon_sym_Uid] = ACTIONS(59),
    [anon_sym_Guid] = ACTIONS(59),
    [anon_sym_Attributes] = ACTIONS(61),
    [anon_sym_SDR_Attribute] = ACTIONS(59),
    [anon_sym_Blob] = ACTIONS(59),
    [anon_sym_Screen_Text] = ACTIONS(59),
    [anon_sym_Textstyle_Data] = ACTIONS(59),
    [anon_sym_Equality_Label] = ACTIONS(59),
    [anon_sym_Undo] = ACTIONS(61),
    [anon_sym_Undo_List] = ACTIONS(59),
    [anon_sym_Widget] = ACTIONS(61),
    [anon_sym_Menu] = ACTIONS(59),
    [anon_sym_Panel] = ACTIONS(59),
    [anon_sym_Overlay_Widget] = ACTIONS(59),
    [anon_sym_Vertical_Group] = ACTIONS(59),
    [anon_sym_Horizontal_Group] = ACTIONS(59),
    [anon_sym_Widget_Pages] = ACTIONS(59),
    [anon_sym_Button] = ACTIONS(59),
    [anon_sym_Select_Button] = ACTIONS(59),
    [anon_sym_Angle_Box] = ACTIONS(59),
    [anon_sym_Attributes_Box] = ACTIONS(59),
    [anon_sym_Billboard_Box] = ACTIONS(59),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(59),
    [anon_sym_Bitmap_List_Box] = ACTIONS(59),
    [anon_sym_Chainage_Box] = ACTIONS(59),
    [anon_sym_Choice_Box] = ACTIONS(59),
    [anon_sym_Colour_Box] = ACTIONS(59),
    [anon_sym_Colour_Message_Box] = ACTIONS(59),
    [anon_sym_Date_Time_Box] = ACTIONS(59),
    [anon_sym_Directory_Box] = ACTIONS(59),
    [anon_sym_Draw_Box] = ACTIONS(59),
    [anon_sym_File_Box] = ACTIONS(59),
    [anon_sym_Function_Box] = ACTIONS(59),
    [anon_sym_Graph_Box] = ACTIONS(59),
    [anon_sym_GridCtrl_Box] = ACTIONS(59),
    [anon_sym_HyperLink_Box] = ACTIONS(59),
    [anon_sym_Input_Box] = ACTIONS(59),
    [anon_sym_Integer_Box] = ACTIONS(59),
    [anon_sym_Justify_Box] = ACTIONS(59),
    [anon_sym_Linestyle_Box] = ACTIONS(59),
    [anon_sym_List_Box] = ACTIONS(59),
    [anon_sym_ListCtrl_Box] = ACTIONS(59),
    [anon_sym_Map_File_Box] = ACTIONS(59),
    [anon_sym_Message_Box] = ACTIONS(59),
    [anon_sym_Model_Box] = ACTIONS(59),
    [anon_sym_Name_Box] = ACTIONS(59),
    [anon_sym_Named_Tick_Box] = ACTIONS(59),
    [anon_sym_New_Select_Box] = ACTIONS(59),
    [anon_sym_New_XYZ_Box] = ACTIONS(59),
    [anon_sym_Plotter_Box] = ACTIONS(59),
    [anon_sym_Polygon_Box] = ACTIONS(59),
    [anon_sym_Real_Box] = ACTIONS(59),
    [anon_sym_Report_Box] = ACTIONS(59),
    [anon_sym_Select_Box] = ACTIONS(61),
    [anon_sym_Select_Boxes] = ACTIONS(59),
    [anon_sym_Sheet_Size_Box] = ACTIONS(59),
    [anon_sym_Source_Box] = ACTIONS(59),
    [anon_sym_Symbol_Box] = ACTIONS(59),
    [anon_sym_Tab_Box] = ACTIONS(59),
    [anon_sym_Target_Box] = ACTIONS(59),
    [anon_sym_Template_Box] = ACTIONS(59),
    [anon_sym_Text_Edit_Box] = ACTIONS(59),
    [anon_sym_Text_Style_Box] = ACTIONS(59),
    [anon_sym_Texture_Box] = ACTIONS(59),
    [anon_sym_Tree_Box] = ACTIONS(59),
    [anon_sym_Tree_Page] = ACTIONS(59),
    [anon_sym_Tick_Box] = ACTIONS(59),
    [anon_sym_Tin_Box] = ACTIONS(59),
    [anon_sym_View_Box] = ACTIONS(59),
    [anon_sym_XYZ_Box] = ACTIONS(59),
    [anon_sym_File] = ACTIONS(61),
    [anon_sym_Map_File] = ACTIONS(61),
    [anon_sym_Plot_Parameter_File] = ACTIONS(59),
    [anon_sym_XML_Document] = ACTIONS(59),
    [anon_sym_XML_Node] = ACTIONS(59),
    [anon_sym_Connection] = ACTIONS(59),
    [anon_sym_Select_Query] = ACTIONS(59),
    [anon_sym_Insert_Query] = ACTIONS(59),
    [anon_sym_Update_Query] = ACTIONS(59),
    [anon_sym_Delete_Query] = ACTIONS(59),
    [anon_sym_Database_Results] = ACTIONS(59),
    [anon_sym_Transactions] = ACTIONS(59),
    [anon_sym_Parameter_Collection] = ACTIONS(59),
    [anon_sym_Query_Condition] = ACTIONS(59),
    [anon_sym_Manual_Condition] = ACTIONS(59),
    [anon_sym_Dynamic_Element] = ACTIONS(59),
    [anon_sym_Dynamic_Integer] = ACTIONS(59),
    [anon_sym_Dynamic_Real] = ACTIONS(59),
    [anon_sym_Dynamic_Text] = ACTIONS(59),
  },
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_Integer] = ACTIONS(65),
    [anon_sym_Real] = ACTIONS(65),
    [anon_sym_Text] = ACTIONS(65),
    [anon_sym_Vector2] = ACTIONS(63),
    [anon_sym_Vector3] = ACTIONS(63),
    [anon_sym_Vector4] = ACTIONS(63),
    [anon_sym_Matrix3] = ACTIONS(63),
    [anon_sym_Matrix4] = ACTIONS(63),
    [anon_sym_Point] = ACTIONS(63),
    [anon_sym_Line] = ACTIONS(65),
    [anon_sym_Arc] = ACTIONS(63),
    [anon_sym_Spiral] = ACTIONS(63),
    [anon_sym_Parabola] = ACTIONS(63),
    [anon_sym_Segment] = ACTIONS(63),
    [anon_sym_Element] = ACTIONS(63),
    [anon_sym_Model] = ACTIONS(65),
    [anon_sym_View] = ACTIONS(65),
    [anon_sym_Macro_Function] = ACTIONS(63),
    [anon_sym_Function] = ACTIONS(65),
    [anon_sym_Uid] = ACTIONS(63),
    [anon_sym_Guid] = ACTIONS(63),
    [anon_sym_Attributes] = ACTIONS(65),
    [anon_sym_SDR_Attribute] = ACTIONS(63),
    [anon_sym_Blob] = ACTIONS(63),
    [anon_sym_Screen_Text] = ACTIONS(63),
    [anon_sym_Textstyle_Data] = ACTIONS(63),
    [anon_sym_Equality_Label] = ACTIONS(63),
    [anon_sym_Undo] = ACTIONS(65),
    [anon_sym_Undo_List] = ACTIONS(63),
    [anon_sym_Widget] = ACTIONS(65),
    [anon_sym_Menu] = ACTIONS(63),
    [anon_sym_Panel] = ACTIONS(63),
    [anon_sym_Overlay_Widget] = ACTIONS(63),
    [anon_sym_Vertical_Group] = ACTIONS(63),
    [anon_sym_Horizontal_Group] = ACTIONS(63),
    [anon_sym_Widget_Pages] = ACTIONS(63),
    [anon_sym_Button] = ACTIONS(63),
    [anon_sym_Select_Button] = ACTIONS(63),
    [anon_sym_Angle_Box] = ACTIONS(63),
    [anon_sym_Attributes_Box] = ACTIONS(63),
    [anon_sym_Billboard_Box] = ACTIONS(63),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(63),
    [anon_sym_Bitmap_List_Box] = ACTIONS(63),
    [anon_sym_Chainage_Box] = ACTIONS(63),
    [anon_sym_Choice_Box] = ACTIONS(63),
    [anon_sym_Colour_Box] = ACTIONS(63),
    [anon_sym_Colour_Message_Box] = ACTIONS(63),
    [anon_sym_Date_Time_Box] = ACTIONS(63),
    [anon_sym_Directory_Box] = ACTIONS(63),
    [anon_sym_Draw_Box] = ACTIONS(63),
    [anon_sym_File_Box] = ACTIONS(63),
    [anon_sym_Function_Box] = ACTIONS(63),
    [anon_sym_Graph_Box] = ACTIONS(63),
    [anon_sym_GridCtrl_Box] = ACTIONS(63),
    [anon_sym_HyperLink_Box] = ACTIONS(63),
    [anon_sym_Input_Box] = ACTIONS(63),
    [anon_sym_Integer_Box] = ACTIONS(63),
    [anon_sym_Justify_Box] = ACTIONS(63),
    [anon_sym_Linestyle_Box] = ACTIONS(63),
    [anon_sym_List_Box] = ACTIONS(63),
    [anon_sym_ListCtrl_Box] = ACTIONS(63),
    [anon_sym_Map_File_Box] = ACTIONS(63),
    [anon_sym_Message_Box] = ACTIONS(63),
    [anon_sym_Model_Box] = ACTIONS(63),
    [anon_sym_Name_Box] = ACTIONS(63),
    [anon_sym_Named_Tick_Box] = ACTIONS(63),
    [anon_sym_New_Select_Box] = ACTIONS(63),
    [anon_sym_New_XYZ_Box] = ACTIONS(63),
    [anon_sym_Plotter_Box] = ACTIONS(63),
    [anon_sym_Polygon_Box] = ACTIONS(63),
    [anon_sym_Real_Box] = ACTIONS(63),
    [anon_sym_Report_Box] = ACTIONS(63),
    [anon_sym_Select_Box] = ACTIONS(65),
    [anon_sym_Select_Boxes] = ACTIONS(63),
    [anon_sym_Sheet_Size_Box] = ACTIONS(63),
    [anon_sym_Source_Box] = ACTIONS(63),
    [anon_sym_Symbol_Box] = ACTIONS(63),
    [anon_sym_Tab_Box] = ACTIONS(63),
    [anon_sym_Target_Box] = ACTIONS(63),
    [anon_sym_Template_Box] = ACTIONS(63),
    [anon_sym_Text_Edit_Box] = ACTIONS(63),
    [anon_sym_Text_Style_Box] = ACTIONS(63),
    [anon_sym_Texture_Box] = ACTIONS(63),
    [anon_sym_Tree_Box] = ACTIONS(63),
    [anon_sym_Tree_Page] = ACTIONS(63),
    [anon_sym_Tick_Box] = ACTIONS(63),
    [anon_sym_Tin_Box] = ACTIONS(63),
    [anon_sym_View_Box] = ACTIONS(63),
    [anon_sym_XYZ_Box] = ACTIONS(63),
    [anon_sym_File] = ACTIONS(65),
    [anon_sym_Map_File] = ACTIONS(65),
    [anon_sym_Plot_Parameter_File] = ACTIONS(63),
    [anon_sym_XML_Document] = ACTIONS(63),
    [anon_sym_XML_Node] = ACTIONS(63),
    [anon_sym_Connection] = ACTIONS(63),
    [anon_sym_Select_Query] = ACTIONS(63),
    [anon_sym_Insert_Query] = ACTIONS(63),
    [anon_sym_Update_Query] = ACTIONS(63),
    [anon_sym_Delete_Query] = ACTIONS(63),
    [anon_sym_Database_Results] = ACTIONS(63),
    [anon_sym_Transactions] = ACTIONS(63),
    [anon_sym_Parameter_Collection] = ACTIONS(63),
    [anon_sym_Query_Condition] = ACTIONS(63),
    [anon_sym_Manual_Condition] = ACTIONS(63),
    [anon_sym_Dynamic_Element] = ACTIONS(63),
    [anon_sym_Dynamic_Integer] = ACTIONS(63),
    [anon_sym_Dynamic_Real] = ACTIONS(63),
    [anon_sym_Dynamic_Text] = ACTIONS(63),
  },
  [14] = {
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(67),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_for] = ACTIONS(67),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_Integer] = ACTIONS(69),
    [anon_sym_Real] = ACTIONS(69),
    [anon_sym_Text] = ACTIONS(69),
    [anon_sym_Vector2] = ACTIONS(67),
    [anon_sym_Vector3] = ACTIONS(67),
    [anon_sym_Vector4] = ACTIONS(67),
    [anon_sym_Matrix3] = ACTIONS(67),
    [anon_sym_Matrix4] = ACTIONS(67),
    [anon_sym_Point] = ACTIONS(67),
    [anon_sym_Line] = ACTIONS(69),
    [anon_sym_Arc] = ACTIONS(67),
    [anon_sym_Spiral] = ACTIONS(67),
    [anon_sym_Parabola] = ACTIONS(67),
    [anon_sym_Segment] = ACTIONS(67),
    [anon_sym_Element] = ACTIONS(67),
    [anon_sym_Model] = ACTIONS(69),
    [anon_sym_View] = ACTIONS(69),
    [anon_sym_Macro_Function] = ACTIONS(67),
    [anon_sym_Function] = ACTIONS(69),
    [anon_sym_Uid] = ACTIONS(67),
    [anon_sym_Guid] = ACTIONS(67),
    [anon_sym_Attributes] = ACTIONS(69),
    [anon_sym_SDR_Attribute] = ACTIONS(67),
    [anon_sym_Blob] = ACTIONS(67),
    [anon_sym_Screen_Text] = ACTIONS(67),
    [anon_sym_Textstyle_Data] = ACTIONS(67),
    [anon_sym_Equality_Label] = ACTIONS(67),
    [anon_sym_Undo] = ACTIONS(69),
    [anon_sym_Undo_List] = ACTIONS(67),
    [anon_sym_Widget] = ACTIONS(69),
    [anon_sym_Menu] = ACTIONS(67),
    [anon_sym_Panel] = ACTIONS(67),
    [anon_sym_Overlay_Widget] = ACTIONS(67),
    [anon_sym_Vertical_Group] = ACTIONS(67),
    [anon_sym_Horizontal_Group] = ACTIONS(67),
    [anon_sym_Widget_Pages] = ACTIONS(67),
    [anon_sym_Button] = ACTIONS(67),
    [anon_sym_Select_Button] = ACTIONS(67),
    [anon_sym_Angle_Box] = ACTIONS(67),
    [anon_sym_Attributes_Box] = ACTIONS(67),
    [anon_sym_Billboard_Box] = ACTIONS(67),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(67),
    [anon_sym_Bitmap_List_Box] = ACTIONS(67),
    [anon_sym_Chainage_Box] = ACTIONS(67),
    [anon_sym_Choice_Box] = ACTIONS(67),
    [anon_sym_Colour_Box] = ACTIONS(67),
    [anon_sym_Colour_Message_Box] = ACTIONS(67),
    [anon_sym_Date_Time_Box] = ACTIONS(67),
    [anon_sym_Directory_Box] = ACTIONS(67),
    [anon_sym_Draw_Box] = ACTIONS(67),
    [anon_sym_File_Box] = ACTIONS(67),
    [anon_sym_Function_Box] = ACTIONS(67),
    [anon_sym_Graph_Box] = ACTIONS(67),
    [anon_sym_GridCtrl_Box] = ACTIONS(67),
    [anon_sym_HyperLink_Box] = ACTIONS(67),
    [anon_sym_Input_Box] = ACTIONS(67),
    [anon_sym_Integer_Box] = ACTIONS(67),
    [anon_sym_Justify_Box] = ACTIONS(67),
    [anon_sym_Linestyle_Box] = ACTIONS(67),
    [anon_sym_List_Box] = ACTIONS(67),
    [anon_sym_ListCtrl_Box] = ACTIONS(67),
    [anon_sym_Map_File_Box] = ACTIONS(67),
    [anon_sym_Message_Box] = ACTIONS(67),
    [anon_sym_Model_Box] = ACTIONS(67),
    [anon_sym_Name_Box] = ACTIONS(67),
    [anon_sym_Named_Tick_Box] = ACTIONS(67),
    [anon_sym_New_Select_Box] = ACTIONS(67),
    [anon_sym_New_XYZ_Box] = ACTIONS(67),
    [anon_sym_Plotter_Box] = ACTIONS(67),
    [anon_sym_Polygon_Box] = ACTIONS(67),
    [anon_sym_Real_Box] = ACTIONS(67),
    [anon_sym_Report_Box] = ACTIONS(67),
    [anon_sym_Select_Box] = ACTIONS(69),
    [anon_sym_Select_Boxes] = ACTIONS(67),
    [anon_sym_Sheet_Size_Box] = ACTIONS(67),
    [anon_sym_Source_Box] = ACTIONS(67),
    [anon_sym_Symbol_Box] = ACTIONS(67),
    [anon_sym_Tab_Box] = ACTIONS(67),
    [anon_sym_Target_Box] = ACTIONS(67),
    [anon_sym_Template_Box] = ACTIONS(67),
    [anon_sym_Text_Edit_Box] = ACTIONS(67),
    [anon_sym_Text_Style_Box] = ACTIONS(67),
    [anon_sym_Texture_Box] = ACTIONS(67),
    [anon_sym_Tree_Box] = ACTIONS(67),
    [anon_sym_Tree_Page] = ACTIONS(67),
    [anon_sym_Tick_Box] = ACTIONS(67),
    [anon_sym_Tin_Box] = ACTIONS(67),
    [anon_sym_View_Box] = ACTIONS(67),
    [anon_sym_XYZ_Box] = ACTIONS(67),
    [anon_sym_File] = ACTIONS(69),
    [anon_sym_Map_File] = ACTIONS(69),
    [anon_sym_Plot_Parameter_File] = ACTIONS(67),
    [anon_sym_XML_Document] = ACTIONS(67),
    [anon_sym_XML_Node] = ACTIONS(67),
    [anon_sym_Connection] = ACTIONS(67),
    [anon_sym_Select_Query] = ACTIONS(67),
    [anon_sym_Insert_Query] = ACTIONS(67),
    [anon_sym_Update_Query] = ACTIONS(67),
    [anon_sym_Delete_Query] = ACTIONS(67),
    [anon_sym_Database_Results] = ACTIONS(67),
    [anon_sym_Transactions] = ACTIONS(67),
    [anon_sym_Parameter_Collection] = ACTIONS(67),
    [anon_sym_Query_Condition] = ACTIONS(67),
    [anon_sym_Manual_Condition] = ACTIONS(67),
    [anon_sym_Dynamic_Element] = ACTIONS(67),
    [anon_sym_Dynamic_Integer] = ACTIONS(67),
    [anon_sym_Dynamic_Real] = ACTIONS(67),
    [anon_sym_Dynamic_Text] = ACTIONS(67),
  },
  [15] = {
    [anon_sym_LBRACE] = ACTIONS(59),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(59),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(59),
    [anon_sym_return] = ACTIONS(59),
    [anon_sym_Integer] = ACTIONS(61),
    [anon_sym_Real] = ACTIONS(61),
    [anon_sym_Text] = ACTIONS(61),
    [anon_sym_Vector2] = ACTIONS(59),
    [anon_sym_Vector3] = ACTIONS(59),
    [anon_sym_Vector4] = ACTIONS(59),
    [anon_sym_Matrix3] = ACTIONS(59),
    [anon_sym_Matrix4] = ACTIONS(59),
    [anon_sym_Point] = ACTIONS(59),
    [anon_sym_Line] = ACTIONS(61),
    [anon_sym_Arc] = ACTIONS(59),
    [anon_sym_Spiral] = ACTIONS(59),
    [anon_sym_Parabola] = ACTIONS(59),
    [anon_sym_Segment] = ACTIONS(59),
    [anon_sym_Element] = ACTIONS(59),
    [anon_sym_Model] = ACTIONS(61),
    [anon_sym_View] = ACTIONS(61),
    [anon_sym_Macro_Function] = ACTIONS(59),
    [anon_sym_Function] = ACTIONS(61),
    [anon_sym_Uid] = ACTIONS(59),
    [anon_sym_Guid] = ACTIONS(59),
    [anon_sym_Attributes] = ACTIONS(61),
    [anon_sym_SDR_Attribute] = ACTIONS(59),
    [anon_sym_Blob] = ACTIONS(59),
    [anon_sym_Screen_Text] = ACTIONS(59),
    [anon_sym_Textstyle_Data] = ACTIONS(59),
    [anon_sym_Equality_Label] = ACTIONS(59),
    [anon_sym_Undo] = ACTIONS(61),
    [anon_sym_Undo_List] = ACTIONS(59),
    [anon_sym_Widget] = ACTIONS(61),
    [anon_sym_Menu] = ACTIONS(59),
    [anon_sym_Panel] = ACTIONS(59),
    [anon_sym_Overlay_Widget] = ACTIONS(59),
    [anon_sym_Vertical_Group] = ACTIONS(59),
    [anon_sym_Horizontal_Group] = ACTIONS(59),
    [anon_sym_Widget_Pages] = ACTIONS(59),
    [anon_sym_Button] = ACTIONS(59),
    [anon_sym_Select_Button] = ACTIONS(59),
    [anon_sym_Angle_Box] = ACTIONS(59),
    [anon_sym_Attributes_Box] = ACTIONS(59),
    [anon_sym_Billboard_Box] = ACTIONS(59),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(59),
    [anon_sym_Bitmap_List_Box] = ACTIONS(59),
    [anon_sym_Chainage_Box] = ACTIONS(59),
    [anon_sym_Choice_Box] = ACTIONS(59),
    [anon_sym_Colour_Box] = ACTIONS(59),
    [anon_sym_Colour_Message_Box] = ACTIONS(59),
    [anon_sym_Date_Time_Box] = ACTIONS(59),
    [anon_sym_Directory_Box] = ACTIONS(59),
    [anon_sym_Draw_Box] = ACTIONS(59),
    [anon_sym_File_Box] = ACTIONS(59),
    [anon_sym_Function_Box] = ACTIONS(59),
    [anon_sym_Graph_Box] = ACTIONS(59),
    [anon_sym_GridCtrl_Box] = ACTIONS(59),
    [anon_sym_HyperLink_Box] = ACTIONS(59),
    [anon_sym_Input_Box] = ACTIONS(59),
    [anon_sym_Integer_Box] = ACTIONS(59),
    [anon_sym_Justify_Box] = ACTIONS(59),
    [anon_sym_Linestyle_Box] = ACTIONS(59),
    [anon_sym_List_Box] = ACTIONS(59),
    [anon_sym_ListCtrl_Box] = ACTIONS(59),
    [anon_sym_Map_File_Box] = ACTIONS(59),
    [anon_sym_Message_Box] = ACTIONS(59),
    [anon_sym_Model_Box] = ACTIONS(59),
    [anon_sym_Name_Box] = ACTIONS(59),
    [anon_sym_Named_Tick_Box] = ACTIONS(59),
    [anon_sym_New_Select_Box] = ACTIONS(59),
    [anon_sym_New_XYZ_Box] = ACTIONS(59),
    [anon_sym_Plotter_Box] = ACTIONS(59),
    [anon_sym_Polygon_Box] = ACTIONS(59),
    [anon_sym_Real_Box] = ACTIONS(59),
    [anon_sym_Report_Box] = ACTIONS(59),
    [anon_sym_Select_Box] = ACTIONS(61),
    [anon_sym_Select_Boxes] = ACTIONS(59),
    [anon_sym_Sheet_Size_Box] = ACTIONS(59),
    [anon_sym_Source_Box] = ACTIONS(59),
    [anon_sym_Symbol_Box] = ACTIONS(59),
    [anon_sym_Tab_Box] = ACTIONS(59),
    [anon_sym_Target_Box] = ACTIONS(59),
    [anon_sym_Template_Box] = ACTIONS(59),
    [anon_sym_Text_Edit_Box] = ACTIONS(59),
    [anon_sym_Text_Style_Box] = ACTIONS(59),
    [anon_sym_Texture_Box] = ACTIONS(59),
    [anon_sym_Tree_Box] = ACTIONS(59),
    [anon_sym_Tree_Page] = ACTIONS(59),
    [anon_sym_Tick_Box] = ACTIONS(59),
    [anon_sym_Tin_Box] = ACTIONS(59),
    [anon_sym_View_Box] = ACTIONS(59),
    [anon_sym_XYZ_Box] = ACTIONS(59),
    [anon_sym_File] = ACTIONS(61),
    [anon_sym_Map_File] = ACTIONS(61),
    [anon_sym_Plot_Parameter_File] = ACTIONS(59),
    [anon_sym_XML_Document] = ACTIONS(59),
    [anon_sym_XML_Node] = ACTIONS(59),
    [anon_sym_Connection] = ACTIONS(59),
    [anon_sym_Select_Query] = ACTIONS(59),
    [anon_sym_Insert_Query] = ACTIONS(59),
    [anon_sym_Update_Query] = ACTIONS(59),
    [anon_sym_Delete_Query] = ACTIONS(59),
    [anon_sym_Database_Results] = ACTIONS(59),
    [anon_sym_Transactions] = ACTIONS(59),
    [anon_sym_Parameter_Collection] = ACTIONS(59),
    [anon_sym_Query_Condition] = ACTIONS(59),
    [anon_sym_Manual_Condition] = ACTIONS(59),
    [anon_sym_Dynamic_Element] = ACTIONS(59),
    [anon_sym_Dynamic_Integer] = ACTIONS(59),
    [anon_sym_Dynamic_Real] = ACTIONS(59),
    [anon_sym_Dynamic_Text] = ACTIONS(59),
  },
  [16] = {
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_if] = ACTIONS(71),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_for] = ACTIONS(71),
    [anon_sym_return] = ACTIONS(71),
    [anon_sym_Integer] = ACTIONS(73),
    [anon_sym_Real] = ACTIONS(73),
    [anon_sym_Text] = ACTIONS(73),
    [anon_sym_Vector2] = ACTIONS(71),
    [anon_sym_Vector3] = ACTIONS(71),
    [anon_sym_Vector4] = ACTIONS(71),
    [anon_sym_Matrix3] = ACTIONS(71),
    [anon_sym_Matrix4] = ACTIONS(71),
    [anon_sym_Point] = ACTIONS(71),
    [anon_sym_Line] = ACTIONS(73),
    [anon_sym_Arc] = ACTIONS(71),
    [anon_sym_Spiral] = ACTIONS(71),
    [anon_sym_Parabola] = ACTIONS(71),
    [anon_sym_Segment] = ACTIONS(71),
    [anon_sym_Element] = ACTIONS(71),
    [anon_sym_Model] = ACTIONS(73),
    [anon_sym_View] = ACTIONS(73),
    [anon_sym_Macro_Function] = ACTIONS(71),
    [anon_sym_Function] = ACTIONS(73),
    [anon_sym_Uid] = ACTIONS(71),
    [anon_sym_Guid] = ACTIONS(71),
    [anon_sym_Attributes] = ACTIONS(73),
    [anon_sym_SDR_Attribute] = ACTIONS(71),
    [anon_sym_Blob] = ACTIONS(71),
    [anon_sym_Screen_Text] = ACTIONS(71),
    [anon_sym_Textstyle_Data] = ACTIONS(71),
    [anon_sym_Equality_Label] = ACTIONS(71),
    [anon_sym_Undo] = ACTIONS(73),
    [anon_sym_Undo_List] = ACTIONS(71),
    [anon_sym_Widget] = ACTIONS(73),
    [anon_sym_Menu] = ACTIONS(71),
    [anon_sym_Panel] = ACTIONS(71),
    [anon_sym_Overlay_Widget] = ACTIONS(71),
    [anon_sym_Vertical_Group] = ACTIONS(71),
    [anon_sym_Horizontal_Group] = ACTIONS(71),
    [anon_sym_Widget_Pages] = ACTIONS(71),
    [anon_sym_Button] = ACTIONS(71),
    [anon_sym_Select_Button] = ACTIONS(71),
    [anon_sym_Angle_Box] = ACTIONS(71),
    [anon_sym_Attributes_Box] = ACTIONS(71),
    [anon_sym_Billboard_Box] = ACTIONS(71),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(71),
    [anon_sym_Bitmap_List_Box] = ACTIONS(71),
    [anon_sym_Chainage_Box] = ACTIONS(71),
    [anon_sym_Choice_Box] = ACTIONS(71),
    [anon_sym_Colour_Box] = ACTIONS(71),
    [anon_sym_Colour_Message_Box] = ACTIONS(71),
    [anon_sym_Date_Time_Box] = ACTIONS(71),
    [anon_sym_Directory_Box] = ACTIONS(71),
    [anon_sym_Draw_Box] = ACTIONS(71),
    [anon_sym_File_Box] = ACTIONS(71),
    [anon_sym_Function_Box] = ACTIONS(71),
    [anon_sym_Graph_Box] = ACTIONS(71),
    [anon_sym_GridCtrl_Box] = ACTIONS(71),
    [anon_sym_HyperLink_Box] = ACTIONS(71),
    [anon_sym_Input_Box] = ACTIONS(71),
    [anon_sym_Integer_Box] = ACTIONS(71),
    [anon_sym_Justify_Box] = ACTIONS(71),
    [anon_sym_Linestyle_Box] = ACTIONS(71),
    [anon_sym_List_Box] = ACTIONS(71),
    [anon_sym_ListCtrl_Box] = ACTIONS(71),
    [anon_sym_Map_File_Box] = ACTIONS(71),
    [anon_sym_Message_Box] = ACTIONS(71),
    [anon_sym_Model_Box] = ACTIONS(71),
    [anon_sym_Name_Box] = ACTIONS(71),
    [anon_sym_Named_Tick_Box] = ACTIONS(71),
    [anon_sym_New_Select_Box] = ACTIONS(71),
    [anon_sym_New_XYZ_Box] = ACTIONS(71),
    [anon_sym_Plotter_Box] = ACTIONS(71),
    [anon_sym_Polygon_Box] = ACTIONS(71),
    [anon_sym_Real_Box] = ACTIONS(71),
    [anon_sym_Report_Box] = ACTIONS(71),
    [anon_sym_Select_Box] = ACTIONS(73),
    [anon_sym_Select_Boxes] = ACTIONS(71),
    [anon_sym_Sheet_Size_Box] = ACTIONS(71),
    [anon_sym_Source_Box] = ACTIONS(71),
    [anon_sym_Symbol_Box] = ACTIONS(71),
    [anon_sym_Tab_Box] = ACTIONS(71),
    [anon_sym_Target_Box] = ACTIONS(71),
    [anon_sym_Template_Box] = ACTIONS(71),
    [anon_sym_Text_Edit_Box] = ACTIONS(71),
    [anon_sym_Text_Style_Box] = ACTIONS(71),
    [anon_sym_Texture_Box] = ACTIONS(71),
    [anon_sym_Tree_Box] = ACTIONS(71),
    [anon_sym_Tree_Page] = ACTIONS(71),
    [anon_sym_Tick_Box] = ACTIONS(71),
    [anon_sym_Tin_Box] = ACTIONS(71),
    [anon_sym_View_Box] = ACTIONS(71),
    [anon_sym_XYZ_Box] = ACTIONS(71),
    [anon_sym_File] = ACTIONS(73),
    [anon_sym_Map_File] = ACTIONS(73),
    [anon_sym_Plot_Parameter_File] = ACTIONS(71),
    [anon_sym_XML_Document] = ACTIONS(71),
    [anon_sym_XML_Node] = ACTIONS(71),
    [anon_sym_Connection] = ACTIONS(71),
    [anon_sym_Select_Query] = ACTIONS(71),
    [anon_sym_Insert_Query] = ACTIONS(71),
    [anon_sym_Update_Query] = ACTIONS(71),
    [anon_sym_Delete_Query] = ACTIONS(71),
    [anon_sym_Database_Results] = ACTIONS(71),
    [anon_sym_Transactions] = ACTIONS(71),
    [anon_sym_Parameter_Collection] = ACTIONS(71),
    [anon_sym_Query_Condition] = ACTIONS(71),
    [anon_sym_Manual_Condition] = ACTIONS(71),
    [anon_sym_Dynamic_Element] = ACTIONS(71),
    [anon_sym_Dynamic_Integer] = ACTIONS(71),
    [anon_sym_Dynamic_Real] = ACTIONS(71),
    [anon_sym_Dynamic_Text] = ACTIONS(71),
  },
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_if] = ACTIONS(63),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_for] = ACTIONS(63),
    [anon_sym_return] = ACTIONS(63),
    [anon_sym_Integer] = ACTIONS(65),
    [anon_sym_Real] = ACTIONS(65),
    [anon_sym_Text] = ACTIONS(65),
    [anon_sym_Vector2] = ACTIONS(63),
    [anon_sym_Vector3] = ACTIONS(63),
    [anon_sym_Vector4] = ACTIONS(63),
    [anon_sym_Matrix3] = ACTIONS(63),
    [anon_sym_Matrix4] = ACTIONS(63),
    [anon_sym_Point] = ACTIONS(63),
    [anon_sym_Line] = ACTIONS(65),
    [anon_sym_Arc] = ACTIONS(63),
    [anon_sym_Spiral] = ACTIONS(63),
    [anon_sym_Parabola] = ACTIONS(63),
    [anon_sym_Segment] = ACTIONS(63),
    [anon_sym_Element] = ACTIONS(63),
    [anon_sym_Model] = ACTIONS(65),
    [anon_sym_View] = ACTIONS(65),
    [anon_sym_Macro_Function] = ACTIONS(63),
    [anon_sym_Function] = ACTIONS(65),
    [anon_sym_Uid] = ACTIONS(63),
    [anon_sym_Guid] = ACTIONS(63),
    [anon_sym_Attributes] = ACTIONS(65),
    [anon_sym_SDR_Attribute] = ACTIONS(63),
    [anon_sym_Blob] = ACTIONS(63),
    [anon_sym_Screen_Text] = ACTIONS(63),
    [anon_sym_Textstyle_Data] = ACTIONS(63),
    [anon_sym_Equality_Label] = ACTIONS(63),
    [anon_sym_Undo] = ACTIONS(65),
    [anon_sym_Undo_List] = ACTIONS(63),
    [anon_sym_Widget] = ACTIONS(65),
    [anon_sym_Menu] = ACTIONS(63),
    [anon_sym_Panel] = ACTIONS(63),
    [anon_sym_Overlay_Widget] = ACTIONS(63),
    [anon_sym_Vertical_Group] = ACTIONS(63),
    [anon_sym_Horizontal_Group] = ACTIONS(63),
    [anon_sym_Widget_Pages] = ACTIONS(63),
    [anon_sym_Button] = ACTIONS(63),
    [anon_sym_Select_Button] = ACTIONS(63),
    [anon_sym_Angle_Box] = ACTIONS(63),
    [anon_sym_Attributes_Box] = ACTIONS(63),
    [anon_sym_Billboard_Box] = ACTIONS(63),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(63),
    [anon_sym_Bitmap_List_Box] = ACTIONS(63),
    [anon_sym_Chainage_Box] = ACTIONS(63),
    [anon_sym_Choice_Box] = ACTIONS(63),
    [anon_sym_Colour_Box] = ACTIONS(63),
    [anon_sym_Colour_Message_Box] = ACTIONS(63),
    [anon_sym_Date_Time_Box] = ACTIONS(63),
    [anon_sym_Directory_Box] = ACTIONS(63),
    [anon_sym_Draw_Box] = ACTIONS(63),
    [anon_sym_File_Box] = ACTIONS(63),
    [anon_sym_Function_Box] = ACTIONS(63),
    [anon_sym_Graph_Box] = ACTIONS(63),
    [anon_sym_GridCtrl_Box] = ACTIONS(63),
    [anon_sym_HyperLink_Box] = ACTIONS(63),
    [anon_sym_Input_Box] = ACTIONS(63),
    [anon_sym_Integer_Box] = ACTIONS(63),
    [anon_sym_Justify_Box] = ACTIONS(63),
    [anon_sym_Linestyle_Box] = ACTIONS(63),
    [anon_sym_List_Box] = ACTIONS(63),
    [anon_sym_ListCtrl_Box] = ACTIONS(63),
    [anon_sym_Map_File_Box] = ACTIONS(63),
    [anon_sym_Message_Box] = ACTIONS(63),
    [anon_sym_Model_Box] = ACTIONS(63),
    [anon_sym_Name_Box] = ACTIONS(63),
    [anon_sym_Named_Tick_Box] = ACTIONS(63),
    [anon_sym_New_Select_Box] = ACTIONS(63),
    [anon_sym_New_XYZ_Box] = ACTIONS(63),
    [anon_sym_Plotter_Box] = ACTIONS(63),
    [anon_sym_Polygon_Box] = ACTIONS(63),
    [anon_sym_Real_Box] = ACTIONS(63),
    [anon_sym_Report_Box] = ACTIONS(63),
    [anon_sym_Select_Box] = ACTIONS(65),
    [anon_sym_Select_Boxes] = ACTIONS(63),
    [anon_sym_Sheet_Size_Box] = ACTIONS(63),
    [anon_sym_Source_Box] = ACTIONS(63),
    [anon_sym_Symbol_Box] = ACTIONS(63),
    [anon_sym_Tab_Box] = ACTIONS(63),
    [anon_sym_Target_Box] = ACTIONS(63),
    [anon_sym_Template_Box] = ACTIONS(63),
    [anon_sym_Text_Edit_Box] = ACTIONS(63),
    [anon_sym_Text_Style_Box] = ACTIONS(63),
    [anon_sym_Texture_Box] = ACTIONS(63),
    [anon_sym_Tree_Box] = ACTIONS(63),
    [anon_sym_Tree_Page] = ACTIONS(63),
    [anon_sym_Tick_Box] = ACTIONS(63),
    [anon_sym_Tin_Box] = ACTIONS(63),
    [anon_sym_View_Box] = ACTIONS(63),
    [anon_sym_XYZ_Box] = ACTIONS(63),
    [anon_sym_File] = ACTIONS(65),
    [anon_sym_Map_File] = ACTIONS(65),
    [anon_sym_Plot_Parameter_File] = ACTIONS(63),
    [anon_sym_XML_Document] = ACTIONS(63),
    [anon_sym_XML_Node] = ACTIONS(63),
    [anon_sym_Connection] = ACTIONS(63),
    [anon_sym_Select_Query] = ACTIONS(63),
    [anon_sym_Insert_Query] = ACTIONS(63),
    [anon_sym_Update_Query] = ACTIONS(63),
    [anon_sym_Delete_Query] = ACTIONS(63),
    [anon_sym_Database_Results] = ACTIONS(63),
    [anon_sym_Transactions] = ACTIONS(63),
    [anon_sym_Parameter_Collection] = ACTIONS(63),
    [anon_sym_Query_Condition] = ACTIONS(63),
    [anon_sym_Manual_Condition] = ACTIONS(63),
    [anon_sym_Dynamic_Element] = ACTIONS(63),
    [anon_sym_Dynamic_Integer] = ACTIONS(63),
    [anon_sym_Dynamic_Real] = ACTIONS(63),
    [anon_sym_Dynamic_Text] = ACTIONS(63),
  },
  [18] = {
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(75),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_for] = ACTIONS(75),
    [anon_sym_return] = ACTIONS(75),
    [anon_sym_Integer] = ACTIONS(77),
    [anon_sym_Real] = ACTIONS(77),
    [anon_sym_Text] = ACTIONS(77),
    [anon_sym_Vector2] = ACTIONS(75),
    [anon_sym_Vector3] = ACTIONS(75),
    [anon_sym_Vector4] = ACTIONS(75),
    [anon_sym_Matrix3] = ACTIONS(75),
    [anon_sym_Matrix4] = ACTIONS(75),
    [anon_sym_Point] = ACTIONS(75),
    [anon_sym_Line] = ACTIONS(77),
    [anon_sym_Arc] = ACTIONS(75),
    [anon_sym_Spiral] = ACTIONS(75),
    [anon_sym_Parabola] = ACTIONS(75),
    [anon_sym_Segment] = ACTIONS(75),
    [anon_sym_Element] = ACTIONS(75),
    [anon_sym_Model] = ACTIONS(77),
    [anon_sym_View] = ACTIONS(77),
    [anon_sym_Macro_Function] = ACTIONS(75),
    [anon_sym_Function] = ACTIONS(77),
    [anon_sym_Uid] = ACTIONS(75),
    [anon_sym_Guid] = ACTIONS(75),
    [anon_sym_Attributes] = ACTIONS(77),
    [anon_sym_SDR_Attribute] = ACTIONS(75),
    [anon_sym_Blob] = ACTIONS(75),
    [anon_sym_Screen_Text] = ACTIONS(75),
    [anon_sym_Textstyle_Data] = ACTIONS(75),
    [anon_sym_Equality_Label] = ACTIONS(75),
    [anon_sym_Undo] = ACTIONS(77),
    [anon_sym_Undo_List] = ACTIONS(75),
    [anon_sym_Widget] = ACTIONS(77),
    [anon_sym_Menu] = ACTIONS(75),
    [anon_sym_Panel] = ACTIONS(75),
    [anon_sym_Overlay_Widget] = ACTIONS(75),
    [anon_sym_Vertical_Group] = ACTIONS(75),
    [anon_sym_Horizontal_Group] = ACTIONS(75),
    [anon_sym_Widget_Pages] = ACTIONS(75),
    [anon_sym_Button] = ACTIONS(75),
    [anon_sym_Select_Button] = ACTIONS(75),
    [anon_sym_Angle_Box] = ACTIONS(75),
    [anon_sym_Attributes_Box] = ACTIONS(75),
    [anon_sym_Billboard_Box] = ACTIONS(75),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(75),
    [anon_sym_Bitmap_List_Box] = ACTIONS(75),
    [anon_sym_Chainage_Box] = ACTIONS(75),
    [anon_sym_Choice_Box] = ACTIONS(75),
    [anon_sym_Colour_Box] = ACTIONS(75),
    [anon_sym_Colour_Message_Box] = ACTIONS(75),
    [anon_sym_Date_Time_Box] = ACTIONS(75),
    [anon_sym_Directory_Box] = ACTIONS(75),
    [anon_sym_Draw_Box] = ACTIONS(75),
    [anon_sym_File_Box] = ACTIONS(75),
    [anon_sym_Function_Box] = ACTIONS(75),
    [anon_sym_Graph_Box] = ACTIONS(75),
    [anon_sym_GridCtrl_Box] = ACTIONS(75),
    [anon_sym_HyperLink_Box] = ACTIONS(75),
    [anon_sym_Input_Box] = ACTIONS(75),
    [anon_sym_Integer_Box] = ACTIONS(75),
    [anon_sym_Justify_Box] = ACTIONS(75),
    [anon_sym_Linestyle_Box] = ACTIONS(75),
    [anon_sym_List_Box] = ACTIONS(75),
    [anon_sym_ListCtrl_Box] = ACTIONS(75),
    [anon_sym_Map_File_Box] = ACTIONS(75),
    [anon_sym_Message_Box] = ACTIONS(75),
    [anon_sym_Model_Box] = ACTIONS(75),
    [anon_sym_Name_Box] = ACTIONS(75),
    [anon_sym_Named_Tick_Box] = ACTIONS(75),
    [anon_sym_New_Select_Box] = ACTIONS(75),
    [anon_sym_New_XYZ_Box] = ACTIONS(75),
    [anon_sym_Plotter_Box] = ACTIONS(75),
    [anon_sym_Polygon_Box] = ACTIONS(75),
    [anon_sym_Real_Box] = ACTIONS(75),
    [anon_sym_Report_Box] = ACTIONS(75),
    [anon_sym_Select_Box] = ACTIONS(77),
    [anon_sym_Select_Boxes] = ACTIONS(75),
    [anon_sym_Sheet_Size_Box] = ACTIONS(75),
    [anon_sym_Source_Box] = ACTIONS(75),
    [anon_sym_Symbol_Box] = ACTIONS(75),
    [anon_sym_Tab_Box] = ACTIONS(75),
    [anon_sym_Target_Box] = ACTIONS(75),
    [anon_sym_Template_Box] = ACTIONS(75),
    [anon_sym_Text_Edit_Box] = ACTIONS(75),
    [anon_sym_Text_Style_Box] = ACTIONS(75),
    [anon_sym_Texture_Box] = ACTIONS(75),
    [anon_sym_Tree_Box] = ACTIONS(75),
    [anon_sym_Tree_Page] = ACTIONS(75),
    [anon_sym_Tick_Box] = ACTIONS(75),
    [anon_sym_Tin_Box] = ACTIONS(75),
    [anon_sym_View_Box] = ACTIONS(75),
    [anon_sym_XYZ_Box] = ACTIONS(75),
    [anon_sym_File] = ACTIONS(77),
    [anon_sym_Map_File] = ACTIONS(77),
    [anon_sym_Plot_Parameter_File] = ACTIONS(75),
    [anon_sym_XML_Document] = ACTIONS(75),
    [anon_sym_XML_Node] = ACTIONS(75),
    [anon_sym_Connection] = ACTIONS(75),
    [anon_sym_Select_Query] = ACTIONS(75),
    [anon_sym_Insert_Query] = ACTIONS(75),
    [anon_sym_Update_Query] = ACTIONS(75),
    [anon_sym_Delete_Query] = ACTIONS(75),
    [anon_sym_Database_Results] = ACTIONS(75),
    [anon_sym_Transactions] = ACTIONS(75),
    [anon_sym_Parameter_Collection] = ACTIONS(75),
    [anon_sym_Query_Condition] = ACTIONS(75),
    [anon_sym_Manual_Condition] = ACTIONS(75),
    [anon_sym_Dynamic_Element] = ACTIONS(75),
    [anon_sym_Dynamic_Integer] = ACTIONS(75),
    [anon_sym_Dynamic_Real] = ACTIONS(75),
    [anon_sym_Dynamic_Text] = ACTIONS(75),
  },
  [19] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_if] = ACTIONS(79),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_for] = ACTIONS(79),
    [anon_sym_return] = ACTIONS(79),
    [anon_sym_Integer] = ACTIONS(83),
    [anon_sym_Real] = ACTIONS(83),
    [anon_sym_Text] = ACTIONS(83),
    [anon_sym_Vector2] = ACTIONS(79),
    [anon_sym_Vector3] = ACTIONS(79),
    [anon_sym_Vector4] = ACTIONS(79),
    [anon_sym_Matrix3] = ACTIONS(79),
    [anon_sym_Matrix4] = ACTIONS(79),
    [anon_sym_Point] = ACTIONS(79),
    [anon_sym_Line] = ACTIONS(83),
    [anon_sym_Arc] = ACTIONS(79),
    [anon_sym_Spiral] = ACTIONS(79),
    [anon_sym_Parabola] = ACTIONS(79),
    [anon_sym_Segment] = ACTIONS(79),
    [anon_sym_Element] = ACTIONS(79),
    [anon_sym_Model] = ACTIONS(83),
    [anon_sym_View] = ACTIONS(83),
    [anon_sym_Macro_Function] = ACTIONS(79),
    [anon_sym_Function] = ACTIONS(83),
    [anon_sym_Uid] = ACTIONS(79),
    [anon_sym_Guid] = ACTIONS(79),
    [anon_sym_Attributes] = ACTIONS(83),
    [anon_sym_SDR_Attribute] = ACTIONS(79),
    [anon_sym_Blob] = ACTIONS(79),
    [anon_sym_Screen_Text] = ACTIONS(79),
    [anon_sym_Textstyle_Data] = ACTIONS(79),
    [anon_sym_Equality_Label] = ACTIONS(79),
    [anon_sym_Undo] = ACTIONS(83),
    [anon_sym_Undo_List] = ACTIONS(79),
    [anon_sym_Widget] = ACTIONS(83),
    [anon_sym_Menu] = ACTIONS(79),
    [anon_sym_Panel] = ACTIONS(79),
    [anon_sym_Overlay_Widget] = ACTIONS(79),
    [anon_sym_Vertical_Group] = ACTIONS(79),
    [anon_sym_Horizontal_Group] = ACTIONS(79),
    [anon_sym_Widget_Pages] = ACTIONS(79),
    [anon_sym_Button] = ACTIONS(79),
    [anon_sym_Select_Button] = ACTIONS(79),
    [anon_sym_Angle_Box] = ACTIONS(79),
    [anon_sym_Attributes_Box] = ACTIONS(79),
    [anon_sym_Billboard_Box] = ACTIONS(79),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(79),
    [anon_sym_Bitmap_List_Box] = ACTIONS(79),
    [anon_sym_Chainage_Box] = ACTIONS(79),
    [anon_sym_Choice_Box] = ACTIONS(79),
    [anon_sym_Colour_Box] = ACTIONS(79),
    [anon_sym_Colour_Message_Box] = ACTIONS(79),
    [anon_sym_Date_Time_Box] = ACTIONS(79),
    [anon_sym_Directory_Box] = ACTIONS(79),
    [anon_sym_Draw_Box] = ACTIONS(79),
    [anon_sym_File_Box] = ACTIONS(79),
    [anon_sym_Function_Box] = ACTIONS(79),
    [anon_sym_Graph_Box] = ACTIONS(79),
    [anon_sym_GridCtrl_Box] = ACTIONS(79),
    [anon_sym_HyperLink_Box] = ACTIONS(79),
    [anon_sym_Input_Box] = ACTIONS(79),
    [anon_sym_Integer_Box] = ACTIONS(79),
    [anon_sym_Justify_Box] = ACTIONS(79),
    [anon_sym_Linestyle_Box] = ACTIONS(79),
    [anon_sym_List_Box] = ACTIONS(79),
    [anon_sym_ListCtrl_Box] = ACTIONS(79),
    [anon_sym_Map_File_Box] = ACTIONS(79),
    [anon_sym_Message_Box] = ACTIONS(79),
    [anon_sym_Model_Box] = ACTIONS(79),
    [anon_sym_Name_Box] = ACTIONS(79),
    [anon_sym_Named_Tick_Box] = ACTIONS(79),
    [anon_sym_New_Select_Box] = ACTIONS(79),
    [anon_sym_New_XYZ_Box] = ACTIONS(79),
    [anon_sym_Plotter_Box] = ACTIONS(79),
    [anon_sym_Polygon_Box] = ACTIONS(79),
    [anon_sym_Real_Box] = ACTIONS(79),
    [anon_sym_Report_Box] = ACTIONS(79),
    [anon_sym_Select_Box] = ACTIONS(83),
    [anon_sym_Select_Boxes] = ACTIONS(79),
    [anon_sym_Sheet_Size_Box] = ACTIONS(79),
    [anon_sym_Source_Box] = ACTIONS(79),
    [anon_sym_Symbol_Box] = ACTIONS(79),
    [anon_sym_Tab_Box] = ACTIONS(79),
    [anon_sym_Target_Box] = ACTIONS(79),
    [anon_sym_Template_Box] = ACTIONS(79),
    [anon_sym_Text_Edit_Box] = ACTIONS(79),
    [anon_sym_Text_Style_Box] = ACTIONS(79),
    [anon_sym_Texture_Box] = ACTIONS(79),
    [anon_sym_Tree_Box] = ACTIONS(79),
    [anon_sym_Tree_Page] = ACTIONS(79),
    [anon_sym_Tick_Box] = ACTIONS(79),
    [anon_sym_Tin_Box] = ACTIONS(79),
    [anon_sym_View_Box] = ACTIONS(79),
    [anon_sym_XYZ_Box] = ACTIONS(79),
    [anon_sym_File] = ACTIONS(83),
    [anon_sym_Map_File] = ACTIONS(83),
    [anon_sym_Plot_Parameter_File] = ACTIONS(79),
    [anon_sym_XML_Document] = ACTIONS(79),
    [anon_sym_XML_Node] = ACTIONS(79),
    [anon_sym_Connection] = ACTIONS(79),
    [anon_sym_Select_Query] = ACTIONS(79),
    [anon_sym_Insert_Query] = ACTIONS(79),
    [anon_sym_Update_Query] = ACTIONS(79),
    [anon_sym_Delete_Query] = ACTIONS(79),
    [anon_sym_Database_Results] = ACTIONS(79),
    [anon_sym_Transactions] = ACTIONS(79),
    [anon_sym_Parameter_Collection] = ACTIONS(79),
    [anon_sym_Query_Condition] = ACTIONS(79),
    [anon_sym_Manual_Condition] = ACTIONS(79),
    [anon_sym_Dynamic_Element] = ACTIONS(79),
    [anon_sym_Dynamic_Integer] = ACTIONS(79),
    [anon_sym_Dynamic_Real] = ACTIONS(79),
    [anon_sym_Dynamic_Text] = ACTIONS(79),
  },
  [20] = {
    [sym_parameter_declaration] = STATE(87),
    [sym__declaration_specifiers] = STATE(67),
    [sym__type_specifier] = STATE(80),
    [sym_primitive_type] = STATE(80),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [21] = {
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_if] = ACTIONS(87),
    [anon_sym_for] = ACTIONS(87),
    [anon_sym_return] = ACTIONS(87),
    [anon_sym_Integer] = ACTIONS(89),
    [anon_sym_Real] = ACTIONS(89),
    [anon_sym_Text] = ACTIONS(89),
    [anon_sym_Vector2] = ACTIONS(87),
    [anon_sym_Vector3] = ACTIONS(87),
    [anon_sym_Vector4] = ACTIONS(87),
    [anon_sym_Matrix3] = ACTIONS(87),
    [anon_sym_Matrix4] = ACTIONS(87),
    [anon_sym_Point] = ACTIONS(87),
    [anon_sym_Line] = ACTIONS(89),
    [anon_sym_Arc] = ACTIONS(87),
    [anon_sym_Spiral] = ACTIONS(87),
    [anon_sym_Parabola] = ACTIONS(87),
    [anon_sym_Segment] = ACTIONS(87),
    [anon_sym_Element] = ACTIONS(87),
    [anon_sym_Model] = ACTIONS(89),
    [anon_sym_View] = ACTIONS(89),
    [anon_sym_Macro_Function] = ACTIONS(87),
    [anon_sym_Function] = ACTIONS(89),
    [anon_sym_Uid] = ACTIONS(87),
    [anon_sym_Guid] = ACTIONS(87),
    [anon_sym_Attributes] = ACTIONS(89),
    [anon_sym_SDR_Attribute] = ACTIONS(87),
    [anon_sym_Blob] = ACTIONS(87),
    [anon_sym_Screen_Text] = ACTIONS(87),
    [anon_sym_Textstyle_Data] = ACTIONS(87),
    [anon_sym_Equality_Label] = ACTIONS(87),
    [anon_sym_Undo] = ACTIONS(89),
    [anon_sym_Undo_List] = ACTIONS(87),
    [anon_sym_Widget] = ACTIONS(89),
    [anon_sym_Menu] = ACTIONS(87),
    [anon_sym_Panel] = ACTIONS(87),
    [anon_sym_Overlay_Widget] = ACTIONS(87),
    [anon_sym_Vertical_Group] = ACTIONS(87),
    [anon_sym_Horizontal_Group] = ACTIONS(87),
    [anon_sym_Widget_Pages] = ACTIONS(87),
    [anon_sym_Button] = ACTIONS(87),
    [anon_sym_Select_Button] = ACTIONS(87),
    [anon_sym_Angle_Box] = ACTIONS(87),
    [anon_sym_Attributes_Box] = ACTIONS(87),
    [anon_sym_Billboard_Box] = ACTIONS(87),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(87),
    [anon_sym_Bitmap_List_Box] = ACTIONS(87),
    [anon_sym_Chainage_Box] = ACTIONS(87),
    [anon_sym_Choice_Box] = ACTIONS(87),
    [anon_sym_Colour_Box] = ACTIONS(87),
    [anon_sym_Colour_Message_Box] = ACTIONS(87),
    [anon_sym_Date_Time_Box] = ACTIONS(87),
    [anon_sym_Directory_Box] = ACTIONS(87),
    [anon_sym_Draw_Box] = ACTIONS(87),
    [anon_sym_File_Box] = ACTIONS(87),
    [anon_sym_Function_Box] = ACTIONS(87),
    [anon_sym_Graph_Box] = ACTIONS(87),
    [anon_sym_GridCtrl_Box] = ACTIONS(87),
    [anon_sym_HyperLink_Box] = ACTIONS(87),
    [anon_sym_Input_Box] = ACTIONS(87),
    [anon_sym_Integer_Box] = ACTIONS(87),
    [anon_sym_Justify_Box] = ACTIONS(87),
    [anon_sym_Linestyle_Box] = ACTIONS(87),
    [anon_sym_List_Box] = ACTIONS(87),
    [anon_sym_ListCtrl_Box] = ACTIONS(87),
    [anon_sym_Map_File_Box] = ACTIONS(87),
    [anon_sym_Message_Box] = ACTIONS(87),
    [anon_sym_Model_Box] = ACTIONS(87),
    [anon_sym_Name_Box] = ACTIONS(87),
    [anon_sym_Named_Tick_Box] = ACTIONS(87),
    [anon_sym_New_Select_Box] = ACTIONS(87),
    [anon_sym_New_XYZ_Box] = ACTIONS(87),
    [anon_sym_Plotter_Box] = ACTIONS(87),
    [anon_sym_Polygon_Box] = ACTIONS(87),
    [anon_sym_Real_Box] = ACTIONS(87),
    [anon_sym_Report_Box] = ACTIONS(87),
    [anon_sym_Select_Box] = ACTIONS(89),
    [anon_sym_Select_Boxes] = ACTIONS(87),
    [anon_sym_Sheet_Size_Box] = ACTIONS(87),
    [anon_sym_Source_Box] = ACTIONS(87),
    [anon_sym_Symbol_Box] = ACTIONS(87),
    [anon_sym_Tab_Box] = ACTIONS(87),
    [anon_sym_Target_Box] = ACTIONS(87),
    [anon_sym_Template_Box] = ACTIONS(87),
    [anon_sym_Text_Edit_Box] = ACTIONS(87),
    [anon_sym_Text_Style_Box] = ACTIONS(87),
    [anon_sym_Texture_Box] = ACTIONS(87),
    [anon_sym_Tree_Box] = ACTIONS(87),
    [anon_sym_Tree_Page] = ACTIONS(87),
    [anon_sym_Tick_Box] = ACTIONS(87),
    [anon_sym_Tin_Box] = ACTIONS(87),
    [anon_sym_View_Box] = ACTIONS(87),
    [anon_sym_XYZ_Box] = ACTIONS(87),
    [anon_sym_File] = ACTIONS(89),
    [anon_sym_Map_File] = ACTIONS(89),
    [anon_sym_Plot_Parameter_File] = ACTIONS(87),
    [anon_sym_XML_Document] = ACTIONS(87),
    [anon_sym_XML_Node] = ACTIONS(87),
    [anon_sym_Connection] = ACTIONS(87),
    [anon_sym_Select_Query] = ACTIONS(87),
    [anon_sym_Insert_Query] = ACTIONS(87),
    [anon_sym_Update_Query] = ACTIONS(87),
    [anon_sym_Delete_Query] = ACTIONS(87),
    [anon_sym_Database_Results] = ACTIONS(87),
    [anon_sym_Transactions] = ACTIONS(87),
    [anon_sym_Parameter_Collection] = ACTIONS(87),
    [anon_sym_Query_Condition] = ACTIONS(87),
    [anon_sym_Manual_Condition] = ACTIONS(87),
    [anon_sym_Dynamic_Element] = ACTIONS(87),
    [anon_sym_Dynamic_Integer] = ACTIONS(87),
    [anon_sym_Dynamic_Real] = ACTIONS(87),
    [anon_sym_Dynamic_Text] = ACTIONS(87),
  },
  [22] = {
    [sym__declaration_specifiers] = STATE(69),
    [sym__type_specifier] = STATE(80),
    [sym_declaration] = STATE(52),
    [sym_primitive_type] = STATE(80),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [23] = {
    [sym_parameter_declaration] = STATE(93),
    [sym__declaration_specifiers] = STATE(67),
    [sym__type_specifier] = STATE(80),
    [sym_primitive_type] = STATE(80),
    [anon_sym_Integer] = ACTIONS(5),
    [anon_sym_Real] = ACTIONS(5),
    [anon_sym_Text] = ACTIONS(5),
    [anon_sym_Vector2] = ACTIONS(7),
    [anon_sym_Vector3] = ACTIONS(7),
    [anon_sym_Vector4] = ACTIONS(7),
    [anon_sym_Matrix3] = ACTIONS(7),
    [anon_sym_Matrix4] = ACTIONS(7),
    [anon_sym_Point] = ACTIONS(7),
    [anon_sym_Line] = ACTIONS(5),
    [anon_sym_Arc] = ACTIONS(7),
    [anon_sym_Spiral] = ACTIONS(7),
    [anon_sym_Parabola] = ACTIONS(7),
    [anon_sym_Segment] = ACTIONS(7),
    [anon_sym_Element] = ACTIONS(7),
    [anon_sym_Model] = ACTIONS(5),
    [anon_sym_View] = ACTIONS(5),
    [anon_sym_Macro_Function] = ACTIONS(7),
    [anon_sym_Function] = ACTIONS(5),
    [anon_sym_Uid] = ACTIONS(7),
    [anon_sym_Guid] = ACTIONS(7),
    [anon_sym_Attributes] = ACTIONS(5),
    [anon_sym_SDR_Attribute] = ACTIONS(7),
    [anon_sym_Blob] = ACTIONS(7),
    [anon_sym_Screen_Text] = ACTIONS(7),
    [anon_sym_Textstyle_Data] = ACTIONS(7),
    [anon_sym_Equality_Label] = ACTIONS(7),
    [anon_sym_Undo] = ACTIONS(5),
    [anon_sym_Undo_List] = ACTIONS(7),
    [anon_sym_Widget] = ACTIONS(5),
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
    [anon_sym_Select_Box] = ACTIONS(5),
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
    [anon_sym_File] = ACTIONS(5),
    [anon_sym_Map_File] = ACTIONS(5),
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
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_Integer] = ACTIONS(93),
    [anon_sym_Real] = ACTIONS(93),
    [anon_sym_Text] = ACTIONS(93),
    [anon_sym_Vector2] = ACTIONS(91),
    [anon_sym_Vector3] = ACTIONS(91),
    [anon_sym_Vector4] = ACTIONS(91),
    [anon_sym_Matrix3] = ACTIONS(91),
    [anon_sym_Matrix4] = ACTIONS(91),
    [anon_sym_Point] = ACTIONS(91),
    [anon_sym_Line] = ACTIONS(93),
    [anon_sym_Arc] = ACTIONS(91),
    [anon_sym_Spiral] = ACTIONS(91),
    [anon_sym_Parabola] = ACTIONS(91),
    [anon_sym_Segment] = ACTIONS(91),
    [anon_sym_Element] = ACTIONS(91),
    [anon_sym_Model] = ACTIONS(93),
    [anon_sym_View] = ACTIONS(93),
    [anon_sym_Macro_Function] = ACTIONS(91),
    [anon_sym_Function] = ACTIONS(93),
    [anon_sym_Uid] = ACTIONS(91),
    [anon_sym_Guid] = ACTIONS(91),
    [anon_sym_Attributes] = ACTIONS(93),
    [anon_sym_SDR_Attribute] = ACTIONS(91),
    [anon_sym_Blob] = ACTIONS(91),
    [anon_sym_Screen_Text] = ACTIONS(91),
    [anon_sym_Textstyle_Data] = ACTIONS(91),
    [anon_sym_Equality_Label] = ACTIONS(91),
    [anon_sym_Undo] = ACTIONS(93),
    [anon_sym_Undo_List] = ACTIONS(91),
    [anon_sym_Widget] = ACTIONS(93),
    [anon_sym_Menu] = ACTIONS(91),
    [anon_sym_Panel] = ACTIONS(91),
    [anon_sym_Overlay_Widget] = ACTIONS(91),
    [anon_sym_Vertical_Group] = ACTIONS(91),
    [anon_sym_Horizontal_Group] = ACTIONS(91),
    [anon_sym_Widget_Pages] = ACTIONS(91),
    [anon_sym_Button] = ACTIONS(91),
    [anon_sym_Select_Button] = ACTIONS(91),
    [anon_sym_Angle_Box] = ACTIONS(91),
    [anon_sym_Attributes_Box] = ACTIONS(91),
    [anon_sym_Billboard_Box] = ACTIONS(91),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(91),
    [anon_sym_Bitmap_List_Box] = ACTIONS(91),
    [anon_sym_Chainage_Box] = ACTIONS(91),
    [anon_sym_Choice_Box] = ACTIONS(91),
    [anon_sym_Colour_Box] = ACTIONS(91),
    [anon_sym_Colour_Message_Box] = ACTIONS(91),
    [anon_sym_Date_Time_Box] = ACTIONS(91),
    [anon_sym_Directory_Box] = ACTIONS(91),
    [anon_sym_Draw_Box] = ACTIONS(91),
    [anon_sym_File_Box] = ACTIONS(91),
    [anon_sym_Function_Box] = ACTIONS(91),
    [anon_sym_Graph_Box] = ACTIONS(91),
    [anon_sym_GridCtrl_Box] = ACTIONS(91),
    [anon_sym_HyperLink_Box] = ACTIONS(91),
    [anon_sym_Input_Box] = ACTIONS(91),
    [anon_sym_Integer_Box] = ACTIONS(91),
    [anon_sym_Justify_Box] = ACTIONS(91),
    [anon_sym_Linestyle_Box] = ACTIONS(91),
    [anon_sym_List_Box] = ACTIONS(91),
    [anon_sym_ListCtrl_Box] = ACTIONS(91),
    [anon_sym_Map_File_Box] = ACTIONS(91),
    [anon_sym_Message_Box] = ACTIONS(91),
    [anon_sym_Model_Box] = ACTIONS(91),
    [anon_sym_Name_Box] = ACTIONS(91),
    [anon_sym_Named_Tick_Box] = ACTIONS(91),
    [anon_sym_New_Select_Box] = ACTIONS(91),
    [anon_sym_New_XYZ_Box] = ACTIONS(91),
    [anon_sym_Plotter_Box] = ACTIONS(91),
    [anon_sym_Polygon_Box] = ACTIONS(91),
    [anon_sym_Real_Box] = ACTIONS(91),
    [anon_sym_Report_Box] = ACTIONS(91),
    [anon_sym_Select_Box] = ACTIONS(93),
    [anon_sym_Select_Boxes] = ACTIONS(91),
    [anon_sym_Sheet_Size_Box] = ACTIONS(91),
    [anon_sym_Source_Box] = ACTIONS(91),
    [anon_sym_Symbol_Box] = ACTIONS(91),
    [anon_sym_Tab_Box] = ACTIONS(91),
    [anon_sym_Target_Box] = ACTIONS(91),
    [anon_sym_Template_Box] = ACTIONS(91),
    [anon_sym_Text_Edit_Box] = ACTIONS(91),
    [anon_sym_Text_Style_Box] = ACTIONS(91),
    [anon_sym_Texture_Box] = ACTIONS(91),
    [anon_sym_Tree_Box] = ACTIONS(91),
    [anon_sym_Tree_Page] = ACTIONS(91),
    [anon_sym_Tick_Box] = ACTIONS(91),
    [anon_sym_Tin_Box] = ACTIONS(91),
    [anon_sym_View_Box] = ACTIONS(91),
    [anon_sym_XYZ_Box] = ACTIONS(91),
    [anon_sym_File] = ACTIONS(93),
    [anon_sym_Map_File] = ACTIONS(93),
    [anon_sym_Plot_Parameter_File] = ACTIONS(91),
    [anon_sym_XML_Document] = ACTIONS(91),
    [anon_sym_XML_Node] = ACTIONS(91),
    [anon_sym_Connection] = ACTIONS(91),
    [anon_sym_Select_Query] = ACTIONS(91),
    [anon_sym_Insert_Query] = ACTIONS(91),
    [anon_sym_Update_Query] = ACTIONS(91),
    [anon_sym_Delete_Query] = ACTIONS(91),
    [anon_sym_Database_Results] = ACTIONS(91),
    [anon_sym_Transactions] = ACTIONS(91),
    [anon_sym_Parameter_Collection] = ACTIONS(91),
    [anon_sym_Query_Condition] = ACTIONS(91),
    [anon_sym_Manual_Condition] = ACTIONS(91),
    [anon_sym_Dynamic_Element] = ACTIONS(91),
    [anon_sym_Dynamic_Integer] = ACTIONS(91),
    [anon_sym_Dynamic_Real] = ACTIONS(91),
    [anon_sym_Dynamic_Text] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 11,
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
  [37] = 10,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [82] = 11,
    ACTIONS(101), 1,
      anon_sym_PIPE,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [129] = 11,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [176] = 9,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(101), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_RBRACK,
  [219] = 8,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(101), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
  [260] = 12,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(95), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [309] = 3,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(101), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 16,
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
  [340] = 4,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(101), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 13,
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
  [373] = 2,
    ACTIONS(123), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(121), 18,
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
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_RBRACK,
  [402] = 2,
    ACTIONS(127), 6,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(125), 18,
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
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
      anon_sym_RBRACK,
  [431] = 5,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(101), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 13,
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
  [466] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [515] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [563] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(135), 1,
      anon_sym_SEMI,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [611] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [659] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(139), 1,
      anon_sym_SEMI,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [707] = 13,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(115), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      anon_sym_PIPE,
    ACTIONS(119), 1,
      anon_sym_AMP_AMP,
    ACTIONS(131), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(97), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(103), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(105), 2,
      anon_sym_DASH_DASH,
      anon_sym_PLUS_PLUS,
    ACTIONS(109), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(111), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(99), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [755] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 2,
      sym_identifier,
      sym_number_literal,
    STATE(34), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [769] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(151), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_parameter_list,
    STATE(77), 1,
      aux_sym_declaration_repeat1,
  [791] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(157), 2,
      sym_identifier,
      sym_number_literal,
    STATE(30), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [805] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(159), 2,
      sym_identifier,
      sym_number_literal,
    STATE(25), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [819] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(161), 2,
      sym_identifier,
      sym_number_literal,
    STATE(36), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [833] = 7,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_parameter_list,
    STATE(89), 1,
      aux_sym_declaration_repeat1,
  [855] = 1,
    ACTIONS(165), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [865] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(167), 2,
      sym_identifier,
      sym_number_literal,
    STATE(26), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [879] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(169), 2,
      sym_identifier,
      sym_number_literal,
    STATE(27), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [893] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(171), 2,
      sym_identifier,
      sym_number_literal,
    STATE(41), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [907] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(173), 2,
      sym_identifier,
      sym_number_literal,
    STATE(28), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [921] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(175), 2,
      sym_identifier,
      sym_number_literal,
    STATE(40), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [935] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(177), 2,
      sym_identifier,
      sym_number_literal,
    STATE(31), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [949] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(179), 2,
      sym_identifier,
      sym_number_literal,
    STATE(38), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [963] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(181), 2,
      sym_identifier,
      sym_number_literal,
    STATE(32), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [977] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(183), 2,
      sym_identifier,
      sym_number_literal,
    STATE(37), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [991] = 1,
    ACTIONS(185), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [1001] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(187), 2,
      sym_identifier,
      sym_number_literal,
    STATE(39), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [1015] = 1,
    ACTIONS(189), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [1025] = 1,
    ACTIONS(191), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [1035] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(193), 2,
      sym_identifier,
      sym_number_literal,
    STATE(33), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [1049] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(195), 2,
      sym_identifier,
      sym_number_literal,
    STATE(29), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [1063] = 3,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(197), 2,
      sym_identifier,
      sym_number_literal,
    STATE(42), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_update_expression,
      sym__expression,
  [1077] = 1,
    ACTIONS(199), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
  [1087] = 3,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(71), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [1100] = 5,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      anon_sym_EQ,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_parameter_list,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1117] = 3,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(86), 1,
      sym_init_declarator,
    STATE(48), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [1129] = 3,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(91), 1,
      sym_init_declarator,
    STATE(68), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [1141] = 4,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_parameter_list,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1155] = 3,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(78), 1,
      sym_init_declarator,
    STATE(44), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [1167] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_compound_statement,
    STATE(59), 1,
      sym_parameter_list,
  [1183] = 2,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(73), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [1192] = 1,
    ACTIONS(63), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
  [1198] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
  [1208] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
  [1218] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      aux_sym_declaration_repeat1,
  [1228] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(226), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
  [1238] = 1,
    ACTIONS(228), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [1244] = 3,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameter_list_repeat1,
  [1254] = 1,
    ACTIONS(59), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
  [1260] = 1,
    ACTIONS(59), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
  [1266] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameter_list_repeat1,
  [1276] = 1,
    ACTIONS(63), 3,
      anon_sym_BANG,
      sym_identifier,
      sym_number_literal,
  [1282] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_SEMI,
    STATE(88), 1,
      aux_sym_declaration_repeat1,
  [1292] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(84), 1,
      aux_sym_parameter_list_repeat1,
  [1302] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
  [1312] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      aux_sym_declaration_repeat1,
  [1322] = 1,
    ACTIONS(247), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [1328] = 1,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1333] = 2,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_parenthesized_expression,
  [1340] = 1,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1345] = 1,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
  [1349] = 1,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 37,
  [SMALL_STATE(27)] = 82,
  [SMALL_STATE(28)] = 129,
  [SMALL_STATE(29)] = 176,
  [SMALL_STATE(30)] = 219,
  [SMALL_STATE(31)] = 260,
  [SMALL_STATE(32)] = 309,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 402,
  [SMALL_STATE(36)] = 431,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 563,
  [SMALL_STATE(40)] = 611,
  [SMALL_STATE(41)] = 659,
  [SMALL_STATE(42)] = 707,
  [SMALL_STATE(43)] = 755,
  [SMALL_STATE(44)] = 769,
  [SMALL_STATE(45)] = 791,
  [SMALL_STATE(46)] = 805,
  [SMALL_STATE(47)] = 819,
  [SMALL_STATE(48)] = 833,
  [SMALL_STATE(49)] = 855,
  [SMALL_STATE(50)] = 865,
  [SMALL_STATE(51)] = 879,
  [SMALL_STATE(52)] = 893,
  [SMALL_STATE(53)] = 907,
  [SMALL_STATE(54)] = 921,
  [SMALL_STATE(55)] = 935,
  [SMALL_STATE(56)] = 949,
  [SMALL_STATE(57)] = 963,
  [SMALL_STATE(58)] = 977,
  [SMALL_STATE(59)] = 991,
  [SMALL_STATE(60)] = 1001,
  [SMALL_STATE(61)] = 1015,
  [SMALL_STATE(62)] = 1025,
  [SMALL_STATE(63)] = 1035,
  [SMALL_STATE(64)] = 1049,
  [SMALL_STATE(65)] = 1063,
  [SMALL_STATE(66)] = 1077,
  [SMALL_STATE(67)] = 1087,
  [SMALL_STATE(68)] = 1100,
  [SMALL_STATE(69)] = 1117,
  [SMALL_STATE(70)] = 1129,
  [SMALL_STATE(71)] = 1141,
  [SMALL_STATE(72)] = 1155,
  [SMALL_STATE(73)] = 1167,
  [SMALL_STATE(74)] = 1183,
  [SMALL_STATE(75)] = 1192,
  [SMALL_STATE(76)] = 1198,
  [SMALL_STATE(77)] = 1208,
  [SMALL_STATE(78)] = 1218,
  [SMALL_STATE(79)] = 1228,
  [SMALL_STATE(80)] = 1238,
  [SMALL_STATE(81)] = 1244,
  [SMALL_STATE(82)] = 1254,
  [SMALL_STATE(83)] = 1260,
  [SMALL_STATE(84)] = 1266,
  [SMALL_STATE(85)] = 1276,
  [SMALL_STATE(86)] = 1282,
  [SMALL_STATE(87)] = 1292,
  [SMALL_STATE(88)] = 1302,
  [SMALL_STATE(89)] = 1312,
  [SMALL_STATE(90)] = 1322,
  [SMALL_STATE(91)] = 1328,
  [SMALL_STATE(92)] = 1333,
  [SMALL_STATE(93)] = 1340,
  [SMALL_STATE(94)] = 1345,
  [SMALL_STATE(95)] = 1349,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(3),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(92),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(94),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(60),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(90),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 4, .production_id = 11),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 4, .production_id = 11),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, .production_id = 15),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, .production_id = 15),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 14),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 14),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 8),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 6),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_expression, 2, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_update_expression, 2, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init_declarator, 3, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarator, 2, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 12), SHIFT_REPEAT(70),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declaration_repeat1, 2, .production_id = 12),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifiers, 1, .production_id = 1),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [253] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
