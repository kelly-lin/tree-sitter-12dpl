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
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 0
#define TOKEN_COUNT 123
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_if = 6,
  anon_sym_else = 7,
  anon_sym_BANG = 8,
  anon_sym_return = 9,
  anon_sym_SEMI = 10,
  sym_identifier = 11,
  sym_number_literal = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_Integer = 15,
  anon_sym_Real = 16,
  anon_sym_Text = 17,
  anon_sym_Vector2 = 18,
  anon_sym_Vector3 = 19,
  anon_sym_Vector4 = 20,
  anon_sym_Matrix3 = 21,
  anon_sym_Matrix4 = 22,
  anon_sym_Point = 23,
  anon_sym_Line = 24,
  anon_sym_Arc = 25,
  anon_sym_Spiral = 26,
  anon_sym_Parabola = 27,
  anon_sym_Segment = 28,
  anon_sym_Element = 29,
  anon_sym_Model = 30,
  anon_sym_View = 31,
  anon_sym_Macro_Function = 32,
  anon_sym_Function = 33,
  anon_sym_Uid = 34,
  anon_sym_Guid = 35,
  anon_sym_Attributes = 36,
  anon_sym_SDR_Attribute = 37,
  anon_sym_Blob = 38,
  anon_sym_Screen_Text = 39,
  anon_sym_Textstyle_Data = 40,
  anon_sym_Equality_Label = 41,
  anon_sym_Undo = 42,
  anon_sym_Undo_List = 43,
  anon_sym_Widget = 44,
  anon_sym_Menu = 45,
  anon_sym_Panel = 46,
  anon_sym_Overlay_Widget = 47,
  anon_sym_Vertical_Group = 48,
  anon_sym_Horizontal_Group = 49,
  anon_sym_Widget_Pages = 50,
  anon_sym_Button = 51,
  anon_sym_Select_Button = 52,
  anon_sym_Angle_Box = 53,
  anon_sym_Attributes_Box = 54,
  anon_sym_Billboard_Box = 55,
  anon_sym_Bitmap_Fill_Box = 56,
  anon_sym_Bitmap_List_Box = 57,
  anon_sym_Chainage_Box = 58,
  anon_sym_Choice_Box = 59,
  anon_sym_Colour_Box = 60,
  anon_sym_Colour_Message_Box = 61,
  anon_sym_Date_Time_Box = 62,
  anon_sym_Directory_Box = 63,
  anon_sym_Draw_Box = 64,
  anon_sym_File_Box = 65,
  anon_sym_Function_Box = 66,
  anon_sym_Graph_Box = 67,
  anon_sym_GridCtrl_Box = 68,
  anon_sym_HyperLink_Box = 69,
  anon_sym_Input_Box = 70,
  anon_sym_Integer_Box = 71,
  anon_sym_Justify_Box = 72,
  anon_sym_Linestyle_Box = 73,
  anon_sym_List_Box = 74,
  anon_sym_ListCtrl_Box = 75,
  anon_sym_Map_File_Box = 76,
  anon_sym_Message_Box = 77,
  anon_sym_Model_Box = 78,
  anon_sym_Name_Box = 79,
  anon_sym_Named_Tick_Box = 80,
  anon_sym_New_Select_Box = 81,
  anon_sym_New_XYZ_Box = 82,
  anon_sym_Plotter_Box = 83,
  anon_sym_Polygon_Box = 84,
  anon_sym_Real_Box = 85,
  anon_sym_Report_Box = 86,
  anon_sym_Select_Box = 87,
  anon_sym_Select_Boxes = 88,
  anon_sym_Sheet_Size_Box = 89,
  anon_sym_Source_Box = 90,
  anon_sym_Symbol_Box = 91,
  anon_sym_Tab_Box = 92,
  anon_sym_Target_Box = 93,
  anon_sym_Template_Box = 94,
  anon_sym_Text_Edit_Box = 95,
  anon_sym_Text_Style_Box = 96,
  anon_sym_Texture_Box = 97,
  anon_sym_Tree_Box = 98,
  anon_sym_Tree_Page = 99,
  anon_sym_Tick_Box = 100,
  anon_sym_Tin_Box = 101,
  anon_sym_View_Box = 102,
  anon_sym_XYZ_Box = 103,
  anon_sym_File = 104,
  anon_sym_Map_File = 105,
  anon_sym_Plot_Parameter_File = 106,
  anon_sym_XML_Document = 107,
  anon_sym_XML_Node = 108,
  anon_sym_Connection = 109,
  anon_sym_Select_Query = 110,
  anon_sym_Insert_Query = 111,
  anon_sym_Update_Query = 112,
  anon_sym_Delete_Query = 113,
  anon_sym_Database_Results = 114,
  anon_sym_Transactions = 115,
  anon_sym_Parameter_Collection = 116,
  anon_sym_Query_Condition = 117,
  anon_sym_Manual_Condition = 118,
  anon_sym_Dynamic_Element = 119,
  anon_sym_Dynamic_Integer = 120,
  anon_sym_Dynamic_Real = 121,
  anon_sym_Dynamic_Text = 122,
  sym_source_file = 123,
  sym__definition = 124,
  sym_function_definition = 125,
  sym_compound_statement = 126,
  sym_parameter_list = 127,
  sym_parameter_declaration = 128,
  sym__declaration_specifiers = 129,
  sym__type_specifier = 130,
  sym__statement = 131,
  sym__non_case_statement = 132,
  sym_if_statement = 133,
  sym_unary_expression = 134,
  sym_parenthesized_expression = 135,
  sym_return_statement = 136,
  sym__expression = 137,
  sym_declaration = 138,
  sym_array_declarator = 139,
  sym_function_declarator = 140,
  sym__declarator = 141,
  sym_primitive_type = 142,
  aux_sym_source_file_repeat1 = 143,
  aux_sym_compound_statement_repeat1 = 144,
  aux_sym_parameter_list_repeat1 = 145,
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
  [anon_sym_BANG] = "!",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number_literal] = "number_literal",
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
  [sym_unary_expression] = "unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_declaration] = "declaration",
  [sym_array_declarator] = "array_declarator",
  [sym_function_declarator] = "function_declarator",
  [sym__declarator] = "_declarator",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_compound_statement_repeat1] = "compound_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number_literal] = sym_number_literal,
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
  [sym_unary_expression] = sym_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_declaration] = sym_declaration,
  [sym_array_declarator] = sym_array_declarator,
  [sym_function_declarator] = sym_function_declarator,
  [sym__declarator] = sym__declarator,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_compound_statement_repeat1] = aux_sym_compound_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_unary_expression] = {
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
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_declarator = 6,
  field_operator = 7,
  field_parameters = 8,
  field_type = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_declarator] = "declarator",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 3},
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
    {field_condition, 1},
    {field_consequence, 2},
  [13] =
    {field_alternative, 4},
    {field_condition, 1},
    {field_consequence, 2},
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
      if (eof) ADVANCE(734);
      if (lookahead == '!') ADVANCE(742);
      if (lookahead == '(') ADVANCE(737);
      if (lookahead == ')') ADVANCE(739);
      if (lookahead == ',') ADVANCE(738);
      if (lookahead == ';') ADVANCE(744);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'B') ADVANCE(327);
      if (lookahead == 'C') ADVANCE(325);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == 'F') ADVANCE(334);
      if (lookahead == 'G') ADVANCE(534);
      if (lookahead == 'H') ADVANCE(450);
      if (lookahead == 'I') ADVANCE(416);
      if (lookahead == 'J') ADVANCE(643);
      if (lookahead == 'L') ADVANCE(328);
      if (lookahead == 'M') ADVANCE(156);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(663);
      if (lookahead == 'P') ADVANCE(158);
      if (lookahead == 'Q') ADVANCE(654);
      if (lookahead == 'R') ADVANCE(233);
      if (lookahead == 'S') ADVANCE(59);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == 'U') ADVANCE(332);
      if (lookahead == 'V') ADVANCE(234);
      if (lookahead == 'W') ADVANCE(340);
      if (lookahead == 'X') ADVANCE(74);
      if (lookahead == '[') ADVANCE(747);
      if (lookahead == ']') ADVANCE(748);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == '{') ADVANCE(735);
      if (lookahead == '}') ADVANCE(736);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(742);
      if (lookahead == ')') ADVANCE(739);
      if (lookahead == ',') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(752);
      if (lookahead == '3') ADVANCE(753);
      if (lookahead == '4') ADVANCE(754);
      END_STATE();
    case 3:
      if (lookahead == '3') ADVANCE(755);
      if (lookahead == '4') ADVANCE(756);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(639);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(488);
      if (lookahead == 'Q') ADVANCE(659);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(451);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(452);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(453);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(454);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(456);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(458);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(460);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(461);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(464);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(468);
      if (lookahead == 'P') ADVANCE(185);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(470);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(473);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(475);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(477);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(479);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(481);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(484);
      if (lookahead == 'M') ADVANCE(250);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(486);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(489);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(490);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(491);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(492);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(494);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(495);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(496);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(497);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(498);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(499);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(500);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(501);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(502);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(503);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(504);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(505);
      END_STATE();
    case 41:
      if (lookahead == 'B') ADVANCE(506);
      END_STATE();
    case 42:
      if (lookahead == 'B') ADVANCE(507);
      END_STATE();
    case 43:
      if (lookahead == 'B') ADVANCE(508);
      END_STATE();
    case 44:
      if (lookahead == 'B') ADVANCE(509);
      END_STATE();
    case 45:
      if (lookahead == 'B') ADVANCE(510);
      END_STATE();
    case 46:
      if (lookahead == 'B') ADVANCE(511);
      END_STATE();
    case 47:
      if (lookahead == 'B') ADVANCE(512);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(513);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(514);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(515);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(516);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(517);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(518);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(614);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(483);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(471);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(526);
      END_STATE();
    case 58:
      if (lookahead == 'C') ADVANCE(640);
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead == 'h') ADVANCE(283);
      if (lookahead == 'o') ADVANCE(647);
      if (lookahead == 'p') ADVANCE(342);
      if (lookahead == 'y') ADVANCE(404);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(455);
      if (lookahead == 'N') ADVANCE(519);
      END_STATE();
    case 61:
      if (lookahead == 'D') ADVANCE(179);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == 'S') ADVANCE(642);
      END_STATE();
    case 63:
      if (lookahead == 'E') ADVANCE(397);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == 'R') ADVANCE(288);
      if (lookahead == 'T') ADVANCE(282);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(662);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(351);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(345);
      if (lookahead == 'L') ADVANCE(349);
      END_STATE();
    case 67:
      if (lookahead == 'F') ADVANCE(355);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(556);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(558);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(170);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(344);
      END_STATE();
    case 73:
      if (lookahead == 'L') ADVANCE(347);
      END_STATE();
    case 74:
      if (lookahead == 'M') ADVANCE(70);
      if (lookahead == 'Y') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(177);
      END_STATE();
    case 76:
      if (lookahead == 'P') ADVANCE(187);
      END_STATE();
    case 77:
      if (lookahead == 'Q') ADVANCE(657);
      END_STATE();
    case 78:
      if (lookahead == 'Q') ADVANCE(658);
      END_STATE();
    case 79:
      if (lookahead == 'Q') ADVANCE(660);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 'R') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(333);
      END_STATE();
    case 83:
      if (lookahead == 'S') ADVANCE(287);
      if (lookahead == 'X') ADVANCE(88);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(350);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(341);
      END_STATE();
    case 86:
      if (lookahead == 'T') ADVANCE(273);
      END_STATE();
    case 87:
      if (lookahead == 'W') ADVANCE(363);
      END_STATE();
    case 88:
      if (lookahead == 'Y') ADVANCE(90);
      END_STATE();
    case 89:
      if (lookahead == 'Z') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 'Z') ADVANCE(130);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(4);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(5);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(87);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(61);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(30);
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
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(41);
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
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(49);
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
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(69);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(79);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'e') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(225);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(408);
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(431);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'o') ADVANCE(338);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(761);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(597);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(427);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(348);
      if (lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(523);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(380);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(371);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(383);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(551);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(553);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(666);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(579);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(322);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(725);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(411);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(636);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(398);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(323);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(324);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(772);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(316);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(472);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(181);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(467);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(522);
      if (lookahead == 'm') ADVANCE(275);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(270);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(655);
      END_STATE();
    case 201:
      if (lookahead == 'b') ADVANCE(656);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(759);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'n') ADVANCE(653);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == 't') ADVANCE(550);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(661);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(613);
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(606);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(605);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(615);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(623);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(624);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(630);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(295);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(367);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(296);
      END_STATE();
    case 219:
      if (lookahead == 'c') ADVANCE(633);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(768);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(769);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(449);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(252);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(360);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(364);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(319);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 232:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(758);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(741);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(842);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(833);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(771);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(840);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(576);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(560);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(557);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(717);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(567);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(718);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(392);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(439);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(413);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(631);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 310:
      if (lookahead == 'f') ADVANCE(740);
      END_STATE();
    case 311:
      if (lookahead == 'f') ADVANCE(728);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(382);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(268);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(261);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(277);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(410);
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 322:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 323:
      if (lookahead == 'g') ADVANCE(299);
      END_STATE();
    case 324:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 325:
      if (lookahead == 'h') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 326:
      if (lookahead == 'h') ADVANCE(121);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(377);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(599);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(430);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(732);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(311);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(223);
      if (lookahead == 'p') ADVANCE(224);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(733);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(426);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(432);
      if (lookahead == 'l') ADVANCE(723);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(444);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(580);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(447);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(581);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(414);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(384);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(465);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(474);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(476);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(482);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(485);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(487);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 362:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 363:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 364:
      if (lookahead == 'i') ADVANCE(632);
      END_STATE();
    case 365:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 366:
      if (lookahead == 'k') ADVANCE(141);
      END_STATE();
    case 367:
      if (lookahead == 'k') ADVANCE(144);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(750);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(780);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(760);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(855);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(775);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(578);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'q') ADVANCE(645);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(524);
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(389);
      if (lookahead == 't') ADVANCE(406);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(346);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(293);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(272);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(604);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(243);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(259);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(402);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(294);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 400:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 401:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 402:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 403:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(195);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(531);
      if (lookahead == 'x') ADVANCE(586);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(167);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(281);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 411:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 412:
      if (lookahead == 'm') ADVANCE(289);
      END_STATE();
    case 413:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 414:
      if (lookahead == 'm') ADVANCE(301);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(202);
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(530);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(785);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(743);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(851);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(852);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(850);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(168);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(644);
      if (lookahead == 's') ADVANCE(575);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == 's') ADVANCE(584);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(587);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(590);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(641);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(594);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(577);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 444:
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 445:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 446:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 447:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(776);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(542);
      if (lookahead == 'y') ADVANCE(533);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(443);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(646);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(648);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(442);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(429);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(712);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(713);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(714);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(715);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(716);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(227);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 523:
      if (lookahead == 'o') ADVANCE(562);
      END_STATE();
    case 524:
      if (lookahead == 'o') ADVANCE(650);
      END_STATE();
    case 525:
      if (lookahead == 'o') ADVANCE(436);
      END_STATE();
    case 526:
      if (lookahead == 'o') ADVANCE(445);
      END_STATE();
    case 527:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 528:
      if (lookahead == 'p') ADVANCE(782);
      END_STATE();
    case 529:
      if (lookahead == 'p') ADVANCE(783);
      END_STATE();
    case 530:
      if (lookahead == 'p') ADVANCE(651);
      if (lookahead == 's') ADVANCE(257);
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 531:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 532:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 533:
      if (lookahead == 'p') ADVANCE(255);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(343);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(749);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(854);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(720);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(721);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(337);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(520);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(379);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(418);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(635);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(362);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 565:
      if (lookahead == 'r') ADVANCE(395);
      END_STATE();
    case 566:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 567:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 568:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(770);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(822);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(849);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(784);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(848);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(601);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 579:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 580:
      if (lookahead == 's') ADVANCE(591);
      END_STATE();
    case 581:
      if (lookahead == 's') ADVANCE(634);
      END_STATE();
    case 582:
      if (lookahead == 's') ADVANCE(192);
      END_STATE();
    case 583:
      if (lookahead == 's') ADVANCE(582);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(751);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(778);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(763);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(777);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(773);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(841);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(781);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(853);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(730);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(242);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(544);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(649);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(469);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(563);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(521);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(478);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(727);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(357);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(358);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(143);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(637);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(565);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(731);
      END_STATE();
    case 643:
      if (lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 644:
      if (lookahead == 'u') ADVANCE(779);
      END_STATE();
    case 645:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 646:
      if (lookahead == 'u') ADVANCE(528);
      END_STATE();
    case 647:
      if (lookahead == 'u') ADVANCE(568);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(529);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(552);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(626);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(386);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(609);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(610);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 658:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 659:
      if (lookahead == 'u') ADVANCE(271);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(274);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(412);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(446);
      END_STATE();
    case 663:
      if (lookahead == 'v') ADVANCE(247);
      END_STATE();
    case 664:
      if (lookahead == 'w') ADVANCE(765);
      END_STATE();
    case 665:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 666:
      if (lookahead == 'w') ADVANCE(117);
      END_STATE();
    case 667:
      if (lookahead == 'x') ADVANCE(3);
      END_STATE();
    case 668:
      if (lookahead == 'x') ADVANCE(826);
      END_STATE();
    case 669:
      if (lookahead == 'x') ADVANCE(835);
      END_STATE();
    case 670:
      if (lookahead == 'x') ADVANCE(837);
      END_STATE();
    case 671:
      if (lookahead == 'x') ADVANCE(798);
      END_STATE();
    case 672:
      if (lookahead == 'x') ADVANCE(799);
      END_STATE();
    case 673:
      if (lookahead == 'x') ADVANCE(808);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(813);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(819);
      END_STATE();
    case 676:
      if (lookahead == 'x') ADVANCE(834);
      END_STATE();
    case 677:
      if (lookahead == 'x') ADVANCE(832);
      END_STATE();
    case 678:
      if (lookahead == 'x') ADVANCE(836);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(787);
      END_STATE();
    case 680:
      if (lookahead == 'x') ADVANCE(801);
      END_STATE();
    case 681:
      if (lookahead == 'x') ADVANCE(804);
      END_STATE();
    case 682:
      if (lookahead == 'x') ADVANCE(812);
      END_STATE();
    case 683:
      if (lookahead == 'x') ADVANCE(793);
      END_STATE();
    case 684:
      if (lookahead == 'x') ADVANCE(794);
      END_STATE();
    case 685:
      if (lookahead == 'x') ADVANCE(820);
      END_STATE();
    case 686:
      if (lookahead == 'x') ADVANCE(821);
      END_STATE();
    case 687:
      if (lookahead == 'x') ADVANCE(824);
      END_STATE();
    case 688:
      if (lookahead == 'x') ADVANCE(825);
      END_STATE();
    case 689:
      if (lookahead == 'x') ADVANCE(827);
      END_STATE();
    case 690:
      if (lookahead == 'x') ADVANCE(805);
      END_STATE();
    case 691:
      if (lookahead == 'x') ADVANCE(806);
      END_STATE();
    case 692:
      if (lookahead == 'x') ADVANCE(811);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(816);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(817);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(831);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(792);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(800);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(802);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(809);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(810);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(828);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(789);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(796);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(797);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(803);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(807);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(829);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(788);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(814);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(815);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(823);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(830);
      END_STATE();
    case 714:
      if (lookahead == 'x') ADVANCE(790);
      END_STATE();
    case 715:
      if (lookahead == 'x') ADVANCE(791);
      END_STATE();
    case 716:
      if (lookahead == 'x') ADVANCE(795);
      END_STATE();
    case 717:
      if (lookahead == 'x') ADVANCE(592);
      END_STATE();
    case 718:
      if (lookahead == 'x') ADVANCE(593);
      END_STATE();
    case 719:
      if (lookahead == 'y') ADVANCE(847);
      END_STATE();
    case 720:
      if (lookahead == 'y') ADVANCE(845);
      END_STATE();
    case 721:
      if (lookahead == 'y') ADVANCE(844);
      END_STATE();
    case 722:
      if (lookahead == 'y') ADVANCE(846);
      END_STATE();
    case 723:
      if (lookahead == 'y') ADVANCE(315);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 725:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 726:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 727:
      if (lookahead == 'y') ADVANCE(385);
      END_STATE();
    case 728:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 729:
      if (lookahead == 'y') ADVANCE(140);
      END_STATE();
    case 730:
      if (lookahead == 'y') ADVANCE(400);
      END_STATE();
    case 731:
      if (lookahead == 'y') ADVANCE(401);
      END_STATE();
    case 732:
      if (lookahead == 'z') ADVANCE(525);
      END_STATE();
    case 733:
      if (lookahead == 'z') ADVANCE(303);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(745);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 's') ADVANCE(620);
      if (lookahead == 'u') ADVANCE(566);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(598);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(570);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(38);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 856:
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
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
    [sym_source_file] = STATE(45),
    [sym__definition] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym__declaration_specifiers] = STATE(33),
    [sym__type_specifier] = STATE(39),
    [sym_primitive_type] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    [sym_compound_statement] = STATE(4),
    [sym__statement] = STATE(4),
    [sym__non_case_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_return_statement] = STATE(4),
    [sym_declaration] = STATE(4),
    [sym_primitive_type] = STATE(32),
    [aux_sym_compound_statement_repeat1] = STATE(4),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
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
  [3] = {
    [sym_compound_statement] = STATE(3),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(32),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(20),
    [anon_sym_if] = ACTIONS(22),
    [anon_sym_return] = ACTIONS(25),
    [anon_sym_Integer] = ACTIONS(28),
    [anon_sym_Real] = ACTIONS(28),
    [anon_sym_Text] = ACTIONS(28),
    [anon_sym_Vector2] = ACTIONS(31),
    [anon_sym_Vector3] = ACTIONS(31),
    [anon_sym_Vector4] = ACTIONS(31),
    [anon_sym_Matrix3] = ACTIONS(31),
    [anon_sym_Matrix4] = ACTIONS(31),
    [anon_sym_Point] = ACTIONS(31),
    [anon_sym_Line] = ACTIONS(28),
    [anon_sym_Arc] = ACTIONS(31),
    [anon_sym_Spiral] = ACTIONS(31),
    [anon_sym_Parabola] = ACTIONS(31),
    [anon_sym_Segment] = ACTIONS(31),
    [anon_sym_Element] = ACTIONS(31),
    [anon_sym_Model] = ACTIONS(28),
    [anon_sym_View] = ACTIONS(28),
    [anon_sym_Macro_Function] = ACTIONS(31),
    [anon_sym_Function] = ACTIONS(28),
    [anon_sym_Uid] = ACTIONS(31),
    [anon_sym_Guid] = ACTIONS(31),
    [anon_sym_Attributes] = ACTIONS(28),
    [anon_sym_SDR_Attribute] = ACTIONS(31),
    [anon_sym_Blob] = ACTIONS(31),
    [anon_sym_Screen_Text] = ACTIONS(31),
    [anon_sym_Textstyle_Data] = ACTIONS(31),
    [anon_sym_Equality_Label] = ACTIONS(31),
    [anon_sym_Undo] = ACTIONS(28),
    [anon_sym_Undo_List] = ACTIONS(31),
    [anon_sym_Widget] = ACTIONS(28),
    [anon_sym_Menu] = ACTIONS(31),
    [anon_sym_Panel] = ACTIONS(31),
    [anon_sym_Overlay_Widget] = ACTIONS(31),
    [anon_sym_Vertical_Group] = ACTIONS(31),
    [anon_sym_Horizontal_Group] = ACTIONS(31),
    [anon_sym_Widget_Pages] = ACTIONS(31),
    [anon_sym_Button] = ACTIONS(31),
    [anon_sym_Select_Button] = ACTIONS(31),
    [anon_sym_Angle_Box] = ACTIONS(31),
    [anon_sym_Attributes_Box] = ACTIONS(31),
    [anon_sym_Billboard_Box] = ACTIONS(31),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(31),
    [anon_sym_Bitmap_List_Box] = ACTIONS(31),
    [anon_sym_Chainage_Box] = ACTIONS(31),
    [anon_sym_Choice_Box] = ACTIONS(31),
    [anon_sym_Colour_Box] = ACTIONS(31),
    [anon_sym_Colour_Message_Box] = ACTIONS(31),
    [anon_sym_Date_Time_Box] = ACTIONS(31),
    [anon_sym_Directory_Box] = ACTIONS(31),
    [anon_sym_Draw_Box] = ACTIONS(31),
    [anon_sym_File_Box] = ACTIONS(31),
    [anon_sym_Function_Box] = ACTIONS(31),
    [anon_sym_Graph_Box] = ACTIONS(31),
    [anon_sym_GridCtrl_Box] = ACTIONS(31),
    [anon_sym_HyperLink_Box] = ACTIONS(31),
    [anon_sym_Input_Box] = ACTIONS(31),
    [anon_sym_Integer_Box] = ACTIONS(31),
    [anon_sym_Justify_Box] = ACTIONS(31),
    [anon_sym_Linestyle_Box] = ACTIONS(31),
    [anon_sym_List_Box] = ACTIONS(31),
    [anon_sym_ListCtrl_Box] = ACTIONS(31),
    [anon_sym_Map_File_Box] = ACTIONS(31),
    [anon_sym_Message_Box] = ACTIONS(31),
    [anon_sym_Model_Box] = ACTIONS(31),
    [anon_sym_Name_Box] = ACTIONS(31),
    [anon_sym_Named_Tick_Box] = ACTIONS(31),
    [anon_sym_New_Select_Box] = ACTIONS(31),
    [anon_sym_New_XYZ_Box] = ACTIONS(31),
    [anon_sym_Plotter_Box] = ACTIONS(31),
    [anon_sym_Polygon_Box] = ACTIONS(31),
    [anon_sym_Real_Box] = ACTIONS(31),
    [anon_sym_Report_Box] = ACTIONS(31),
    [anon_sym_Select_Box] = ACTIONS(28),
    [anon_sym_Select_Boxes] = ACTIONS(31),
    [anon_sym_Sheet_Size_Box] = ACTIONS(31),
    [anon_sym_Source_Box] = ACTIONS(31),
    [anon_sym_Symbol_Box] = ACTIONS(31),
    [anon_sym_Tab_Box] = ACTIONS(31),
    [anon_sym_Target_Box] = ACTIONS(31),
    [anon_sym_Template_Box] = ACTIONS(31),
    [anon_sym_Text_Edit_Box] = ACTIONS(31),
    [anon_sym_Text_Style_Box] = ACTIONS(31),
    [anon_sym_Texture_Box] = ACTIONS(31),
    [anon_sym_Tree_Box] = ACTIONS(31),
    [anon_sym_Tree_Page] = ACTIONS(31),
    [anon_sym_Tick_Box] = ACTIONS(31),
    [anon_sym_Tin_Box] = ACTIONS(31),
    [anon_sym_View_Box] = ACTIONS(31),
    [anon_sym_XYZ_Box] = ACTIONS(31),
    [anon_sym_File] = ACTIONS(28),
    [anon_sym_Map_File] = ACTIONS(28),
    [anon_sym_Plot_Parameter_File] = ACTIONS(31),
    [anon_sym_XML_Document] = ACTIONS(31),
    [anon_sym_XML_Node] = ACTIONS(31),
    [anon_sym_Connection] = ACTIONS(31),
    [anon_sym_Select_Query] = ACTIONS(31),
    [anon_sym_Insert_Query] = ACTIONS(31),
    [anon_sym_Update_Query] = ACTIONS(31),
    [anon_sym_Delete_Query] = ACTIONS(31),
    [anon_sym_Database_Results] = ACTIONS(31),
    [anon_sym_Transactions] = ACTIONS(31),
    [anon_sym_Parameter_Collection] = ACTIONS(31),
    [anon_sym_Query_Condition] = ACTIONS(31),
    [anon_sym_Manual_Condition] = ACTIONS(31),
    [anon_sym_Dynamic_Element] = ACTIONS(31),
    [anon_sym_Dynamic_Integer] = ACTIONS(31),
    [anon_sym_Dynamic_Real] = ACTIONS(31),
    [anon_sym_Dynamic_Text] = ACTIONS(31),
  },
  [4] = {
    [sym_compound_statement] = STATE(3),
    [sym__statement] = STATE(3),
    [sym__non_case_statement] = STATE(3),
    [sym_if_statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_declaration] = STATE(3),
    [sym_primitive_type] = STATE(32),
    [aux_sym_compound_statement_repeat1] = STATE(3),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(34),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
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
    [sym_compound_statement] = STATE(14),
    [sym__statement] = STATE(14),
    [sym__non_case_statement] = STATE(14),
    [sym_if_statement] = STATE(14),
    [sym_return_statement] = STATE(14),
    [sym_declaration] = STATE(14),
    [sym_primitive_type] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
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
    [sym_compound_statement] = STATE(15),
    [sym__statement] = STATE(15),
    [sym__non_case_statement] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_return_statement] = STATE(15),
    [sym_declaration] = STATE(15),
    [sym_primitive_type] = STATE(32),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_return] = ACTIONS(15),
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
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym__declaration_specifiers] = STATE(33),
    [sym__type_specifier] = STATE(39),
    [sym_primitive_type] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(36),
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
    [sym__definition] = STATE(8),
    [sym_function_definition] = STATE(8),
    [sym__declaration_specifiers] = STATE(33),
    [sym__type_specifier] = STATE(39),
    [sym_primitive_type] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_Integer] = ACTIONS(40),
    [anon_sym_Real] = ACTIONS(40),
    [anon_sym_Text] = ACTIONS(40),
    [anon_sym_Vector2] = ACTIONS(43),
    [anon_sym_Vector3] = ACTIONS(43),
    [anon_sym_Vector4] = ACTIONS(43),
    [anon_sym_Matrix3] = ACTIONS(43),
    [anon_sym_Matrix4] = ACTIONS(43),
    [anon_sym_Point] = ACTIONS(43),
    [anon_sym_Line] = ACTIONS(40),
    [anon_sym_Arc] = ACTIONS(43),
    [anon_sym_Spiral] = ACTIONS(43),
    [anon_sym_Parabola] = ACTIONS(43),
    [anon_sym_Segment] = ACTIONS(43),
    [anon_sym_Element] = ACTIONS(43),
    [anon_sym_Model] = ACTIONS(40),
    [anon_sym_View] = ACTIONS(40),
    [anon_sym_Macro_Function] = ACTIONS(43),
    [anon_sym_Function] = ACTIONS(40),
    [anon_sym_Uid] = ACTIONS(43),
    [anon_sym_Guid] = ACTIONS(43),
    [anon_sym_Attributes] = ACTIONS(40),
    [anon_sym_SDR_Attribute] = ACTIONS(43),
    [anon_sym_Blob] = ACTIONS(43),
    [anon_sym_Screen_Text] = ACTIONS(43),
    [anon_sym_Textstyle_Data] = ACTIONS(43),
    [anon_sym_Equality_Label] = ACTIONS(43),
    [anon_sym_Undo] = ACTIONS(40),
    [anon_sym_Undo_List] = ACTIONS(43),
    [anon_sym_Widget] = ACTIONS(40),
    [anon_sym_Menu] = ACTIONS(43),
    [anon_sym_Panel] = ACTIONS(43),
    [anon_sym_Overlay_Widget] = ACTIONS(43),
    [anon_sym_Vertical_Group] = ACTIONS(43),
    [anon_sym_Horizontal_Group] = ACTIONS(43),
    [anon_sym_Widget_Pages] = ACTIONS(43),
    [anon_sym_Button] = ACTIONS(43),
    [anon_sym_Select_Button] = ACTIONS(43),
    [anon_sym_Angle_Box] = ACTIONS(43),
    [anon_sym_Attributes_Box] = ACTIONS(43),
    [anon_sym_Billboard_Box] = ACTIONS(43),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(43),
    [anon_sym_Bitmap_List_Box] = ACTIONS(43),
    [anon_sym_Chainage_Box] = ACTIONS(43),
    [anon_sym_Choice_Box] = ACTIONS(43),
    [anon_sym_Colour_Box] = ACTIONS(43),
    [anon_sym_Colour_Message_Box] = ACTIONS(43),
    [anon_sym_Date_Time_Box] = ACTIONS(43),
    [anon_sym_Directory_Box] = ACTIONS(43),
    [anon_sym_Draw_Box] = ACTIONS(43),
    [anon_sym_File_Box] = ACTIONS(43),
    [anon_sym_Function_Box] = ACTIONS(43),
    [anon_sym_Graph_Box] = ACTIONS(43),
    [anon_sym_GridCtrl_Box] = ACTIONS(43),
    [anon_sym_HyperLink_Box] = ACTIONS(43),
    [anon_sym_Input_Box] = ACTIONS(43),
    [anon_sym_Integer_Box] = ACTIONS(43),
    [anon_sym_Justify_Box] = ACTIONS(43),
    [anon_sym_Linestyle_Box] = ACTIONS(43),
    [anon_sym_List_Box] = ACTIONS(43),
    [anon_sym_ListCtrl_Box] = ACTIONS(43),
    [anon_sym_Map_File_Box] = ACTIONS(43),
    [anon_sym_Message_Box] = ACTIONS(43),
    [anon_sym_Model_Box] = ACTIONS(43),
    [anon_sym_Name_Box] = ACTIONS(43),
    [anon_sym_Named_Tick_Box] = ACTIONS(43),
    [anon_sym_New_Select_Box] = ACTIONS(43),
    [anon_sym_New_XYZ_Box] = ACTIONS(43),
    [anon_sym_Plotter_Box] = ACTIONS(43),
    [anon_sym_Polygon_Box] = ACTIONS(43),
    [anon_sym_Real_Box] = ACTIONS(43),
    [anon_sym_Report_Box] = ACTIONS(43),
    [anon_sym_Select_Box] = ACTIONS(40),
    [anon_sym_Select_Boxes] = ACTIONS(43),
    [anon_sym_Sheet_Size_Box] = ACTIONS(43),
    [anon_sym_Source_Box] = ACTIONS(43),
    [anon_sym_Symbol_Box] = ACTIONS(43),
    [anon_sym_Tab_Box] = ACTIONS(43),
    [anon_sym_Target_Box] = ACTIONS(43),
    [anon_sym_Template_Box] = ACTIONS(43),
    [anon_sym_Text_Edit_Box] = ACTIONS(43),
    [anon_sym_Text_Style_Box] = ACTIONS(43),
    [anon_sym_Texture_Box] = ACTIONS(43),
    [anon_sym_Tree_Box] = ACTIONS(43),
    [anon_sym_Tree_Page] = ACTIONS(43),
    [anon_sym_Tick_Box] = ACTIONS(43),
    [anon_sym_Tin_Box] = ACTIONS(43),
    [anon_sym_View_Box] = ACTIONS(43),
    [anon_sym_XYZ_Box] = ACTIONS(43),
    [anon_sym_File] = ACTIONS(40),
    [anon_sym_Map_File] = ACTIONS(40),
    [anon_sym_Plot_Parameter_File] = ACTIONS(43),
    [anon_sym_XML_Document] = ACTIONS(43),
    [anon_sym_XML_Node] = ACTIONS(43),
    [anon_sym_Connection] = ACTIONS(43),
    [anon_sym_Select_Query] = ACTIONS(43),
    [anon_sym_Insert_Query] = ACTIONS(43),
    [anon_sym_Update_Query] = ACTIONS(43),
    [anon_sym_Delete_Query] = ACTIONS(43),
    [anon_sym_Database_Results] = ACTIONS(43),
    [anon_sym_Transactions] = ACTIONS(43),
    [anon_sym_Parameter_Collection] = ACTIONS(43),
    [anon_sym_Query_Condition] = ACTIONS(43),
    [anon_sym_Manual_Condition] = ACTIONS(43),
    [anon_sym_Dynamic_Element] = ACTIONS(43),
    [anon_sym_Dynamic_Integer] = ACTIONS(43),
    [anon_sym_Dynamic_Real] = ACTIONS(43),
    [anon_sym_Dynamic_Text] = ACTIONS(43),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(46),
    [anon_sym_LBRACE] = ACTIONS(46),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_if] = ACTIONS(46),
    [anon_sym_else] = ACTIONS(46),
    [anon_sym_return] = ACTIONS(46),
    [anon_sym_Integer] = ACTIONS(48),
    [anon_sym_Real] = ACTIONS(48),
    [anon_sym_Text] = ACTIONS(48),
    [anon_sym_Vector2] = ACTIONS(46),
    [anon_sym_Vector3] = ACTIONS(46),
    [anon_sym_Vector4] = ACTIONS(46),
    [anon_sym_Matrix3] = ACTIONS(46),
    [anon_sym_Matrix4] = ACTIONS(46),
    [anon_sym_Point] = ACTIONS(46),
    [anon_sym_Line] = ACTIONS(48),
    [anon_sym_Arc] = ACTIONS(46),
    [anon_sym_Spiral] = ACTIONS(46),
    [anon_sym_Parabola] = ACTIONS(46),
    [anon_sym_Segment] = ACTIONS(46),
    [anon_sym_Element] = ACTIONS(46),
    [anon_sym_Model] = ACTIONS(48),
    [anon_sym_View] = ACTIONS(48),
    [anon_sym_Macro_Function] = ACTIONS(46),
    [anon_sym_Function] = ACTIONS(48),
    [anon_sym_Uid] = ACTIONS(46),
    [anon_sym_Guid] = ACTIONS(46),
    [anon_sym_Attributes] = ACTIONS(48),
    [anon_sym_SDR_Attribute] = ACTIONS(46),
    [anon_sym_Blob] = ACTIONS(46),
    [anon_sym_Screen_Text] = ACTIONS(46),
    [anon_sym_Textstyle_Data] = ACTIONS(46),
    [anon_sym_Equality_Label] = ACTIONS(46),
    [anon_sym_Undo] = ACTIONS(48),
    [anon_sym_Undo_List] = ACTIONS(46),
    [anon_sym_Widget] = ACTIONS(48),
    [anon_sym_Menu] = ACTIONS(46),
    [anon_sym_Panel] = ACTIONS(46),
    [anon_sym_Overlay_Widget] = ACTIONS(46),
    [anon_sym_Vertical_Group] = ACTIONS(46),
    [anon_sym_Horizontal_Group] = ACTIONS(46),
    [anon_sym_Widget_Pages] = ACTIONS(46),
    [anon_sym_Button] = ACTIONS(46),
    [anon_sym_Select_Button] = ACTIONS(46),
    [anon_sym_Angle_Box] = ACTIONS(46),
    [anon_sym_Attributes_Box] = ACTIONS(46),
    [anon_sym_Billboard_Box] = ACTIONS(46),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(46),
    [anon_sym_Bitmap_List_Box] = ACTIONS(46),
    [anon_sym_Chainage_Box] = ACTIONS(46),
    [anon_sym_Choice_Box] = ACTIONS(46),
    [anon_sym_Colour_Box] = ACTIONS(46),
    [anon_sym_Colour_Message_Box] = ACTIONS(46),
    [anon_sym_Date_Time_Box] = ACTIONS(46),
    [anon_sym_Directory_Box] = ACTIONS(46),
    [anon_sym_Draw_Box] = ACTIONS(46),
    [anon_sym_File_Box] = ACTIONS(46),
    [anon_sym_Function_Box] = ACTIONS(46),
    [anon_sym_Graph_Box] = ACTIONS(46),
    [anon_sym_GridCtrl_Box] = ACTIONS(46),
    [anon_sym_HyperLink_Box] = ACTIONS(46),
    [anon_sym_Input_Box] = ACTIONS(46),
    [anon_sym_Integer_Box] = ACTIONS(46),
    [anon_sym_Justify_Box] = ACTIONS(46),
    [anon_sym_Linestyle_Box] = ACTIONS(46),
    [anon_sym_List_Box] = ACTIONS(46),
    [anon_sym_ListCtrl_Box] = ACTIONS(46),
    [anon_sym_Map_File_Box] = ACTIONS(46),
    [anon_sym_Message_Box] = ACTIONS(46),
    [anon_sym_Model_Box] = ACTIONS(46),
    [anon_sym_Name_Box] = ACTIONS(46),
    [anon_sym_Named_Tick_Box] = ACTIONS(46),
    [anon_sym_New_Select_Box] = ACTIONS(46),
    [anon_sym_New_XYZ_Box] = ACTIONS(46),
    [anon_sym_Plotter_Box] = ACTIONS(46),
    [anon_sym_Polygon_Box] = ACTIONS(46),
    [anon_sym_Real_Box] = ACTIONS(46),
    [anon_sym_Report_Box] = ACTIONS(46),
    [anon_sym_Select_Box] = ACTIONS(48),
    [anon_sym_Select_Boxes] = ACTIONS(46),
    [anon_sym_Sheet_Size_Box] = ACTIONS(46),
    [anon_sym_Source_Box] = ACTIONS(46),
    [anon_sym_Symbol_Box] = ACTIONS(46),
    [anon_sym_Tab_Box] = ACTIONS(46),
    [anon_sym_Target_Box] = ACTIONS(46),
    [anon_sym_Template_Box] = ACTIONS(46),
    [anon_sym_Text_Edit_Box] = ACTIONS(46),
    [anon_sym_Text_Style_Box] = ACTIONS(46),
    [anon_sym_Texture_Box] = ACTIONS(46),
    [anon_sym_Tree_Box] = ACTIONS(46),
    [anon_sym_Tree_Page] = ACTIONS(46),
    [anon_sym_Tick_Box] = ACTIONS(46),
    [anon_sym_Tin_Box] = ACTIONS(46),
    [anon_sym_View_Box] = ACTIONS(46),
    [anon_sym_XYZ_Box] = ACTIONS(46),
    [anon_sym_File] = ACTIONS(48),
    [anon_sym_Map_File] = ACTIONS(48),
    [anon_sym_Plot_Parameter_File] = ACTIONS(46),
    [anon_sym_XML_Document] = ACTIONS(46),
    [anon_sym_XML_Node] = ACTIONS(46),
    [anon_sym_Connection] = ACTIONS(46),
    [anon_sym_Select_Query] = ACTIONS(46),
    [anon_sym_Insert_Query] = ACTIONS(46),
    [anon_sym_Update_Query] = ACTIONS(46),
    [anon_sym_Delete_Query] = ACTIONS(46),
    [anon_sym_Database_Results] = ACTIONS(46),
    [anon_sym_Transactions] = ACTIONS(46),
    [anon_sym_Parameter_Collection] = ACTIONS(46),
    [anon_sym_Query_Condition] = ACTIONS(46),
    [anon_sym_Manual_Condition] = ACTIONS(46),
    [anon_sym_Dynamic_Element] = ACTIONS(46),
    [anon_sym_Dynamic_Integer] = ACTIONS(46),
    [anon_sym_Dynamic_Real] = ACTIONS(46),
    [anon_sym_Dynamic_Text] = ACTIONS(46),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACE] = ACTIONS(50),
    [anon_sym_RBRACE] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_return] = ACTIONS(50),
    [anon_sym_Integer] = ACTIONS(52),
    [anon_sym_Real] = ACTIONS(52),
    [anon_sym_Text] = ACTIONS(52),
    [anon_sym_Vector2] = ACTIONS(50),
    [anon_sym_Vector3] = ACTIONS(50),
    [anon_sym_Vector4] = ACTIONS(50),
    [anon_sym_Matrix3] = ACTIONS(50),
    [anon_sym_Matrix4] = ACTIONS(50),
    [anon_sym_Point] = ACTIONS(50),
    [anon_sym_Line] = ACTIONS(52),
    [anon_sym_Arc] = ACTIONS(50),
    [anon_sym_Spiral] = ACTIONS(50),
    [anon_sym_Parabola] = ACTIONS(50),
    [anon_sym_Segment] = ACTIONS(50),
    [anon_sym_Element] = ACTIONS(50),
    [anon_sym_Model] = ACTIONS(52),
    [anon_sym_View] = ACTIONS(52),
    [anon_sym_Macro_Function] = ACTIONS(50),
    [anon_sym_Function] = ACTIONS(52),
    [anon_sym_Uid] = ACTIONS(50),
    [anon_sym_Guid] = ACTIONS(50),
    [anon_sym_Attributes] = ACTIONS(52),
    [anon_sym_SDR_Attribute] = ACTIONS(50),
    [anon_sym_Blob] = ACTIONS(50),
    [anon_sym_Screen_Text] = ACTIONS(50),
    [anon_sym_Textstyle_Data] = ACTIONS(50),
    [anon_sym_Equality_Label] = ACTIONS(50),
    [anon_sym_Undo] = ACTIONS(52),
    [anon_sym_Undo_List] = ACTIONS(50),
    [anon_sym_Widget] = ACTIONS(52),
    [anon_sym_Menu] = ACTIONS(50),
    [anon_sym_Panel] = ACTIONS(50),
    [anon_sym_Overlay_Widget] = ACTIONS(50),
    [anon_sym_Vertical_Group] = ACTIONS(50),
    [anon_sym_Horizontal_Group] = ACTIONS(50),
    [anon_sym_Widget_Pages] = ACTIONS(50),
    [anon_sym_Button] = ACTIONS(50),
    [anon_sym_Select_Button] = ACTIONS(50),
    [anon_sym_Angle_Box] = ACTIONS(50),
    [anon_sym_Attributes_Box] = ACTIONS(50),
    [anon_sym_Billboard_Box] = ACTIONS(50),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(50),
    [anon_sym_Bitmap_List_Box] = ACTIONS(50),
    [anon_sym_Chainage_Box] = ACTIONS(50),
    [anon_sym_Choice_Box] = ACTIONS(50),
    [anon_sym_Colour_Box] = ACTIONS(50),
    [anon_sym_Colour_Message_Box] = ACTIONS(50),
    [anon_sym_Date_Time_Box] = ACTIONS(50),
    [anon_sym_Directory_Box] = ACTIONS(50),
    [anon_sym_Draw_Box] = ACTIONS(50),
    [anon_sym_File_Box] = ACTIONS(50),
    [anon_sym_Function_Box] = ACTIONS(50),
    [anon_sym_Graph_Box] = ACTIONS(50),
    [anon_sym_GridCtrl_Box] = ACTIONS(50),
    [anon_sym_HyperLink_Box] = ACTIONS(50),
    [anon_sym_Input_Box] = ACTIONS(50),
    [anon_sym_Integer_Box] = ACTIONS(50),
    [anon_sym_Justify_Box] = ACTIONS(50),
    [anon_sym_Linestyle_Box] = ACTIONS(50),
    [anon_sym_List_Box] = ACTIONS(50),
    [anon_sym_ListCtrl_Box] = ACTIONS(50),
    [anon_sym_Map_File_Box] = ACTIONS(50),
    [anon_sym_Message_Box] = ACTIONS(50),
    [anon_sym_Model_Box] = ACTIONS(50),
    [anon_sym_Name_Box] = ACTIONS(50),
    [anon_sym_Named_Tick_Box] = ACTIONS(50),
    [anon_sym_New_Select_Box] = ACTIONS(50),
    [anon_sym_New_XYZ_Box] = ACTIONS(50),
    [anon_sym_Plotter_Box] = ACTIONS(50),
    [anon_sym_Polygon_Box] = ACTIONS(50),
    [anon_sym_Real_Box] = ACTIONS(50),
    [anon_sym_Report_Box] = ACTIONS(50),
    [anon_sym_Select_Box] = ACTIONS(52),
    [anon_sym_Select_Boxes] = ACTIONS(50),
    [anon_sym_Sheet_Size_Box] = ACTIONS(50),
    [anon_sym_Source_Box] = ACTIONS(50),
    [anon_sym_Symbol_Box] = ACTIONS(50),
    [anon_sym_Tab_Box] = ACTIONS(50),
    [anon_sym_Target_Box] = ACTIONS(50),
    [anon_sym_Template_Box] = ACTIONS(50),
    [anon_sym_Text_Edit_Box] = ACTIONS(50),
    [anon_sym_Text_Style_Box] = ACTIONS(50),
    [anon_sym_Texture_Box] = ACTIONS(50),
    [anon_sym_Tree_Box] = ACTIONS(50),
    [anon_sym_Tree_Page] = ACTIONS(50),
    [anon_sym_Tick_Box] = ACTIONS(50),
    [anon_sym_Tin_Box] = ACTIONS(50),
    [anon_sym_View_Box] = ACTIONS(50),
    [anon_sym_XYZ_Box] = ACTIONS(50),
    [anon_sym_File] = ACTIONS(52),
    [anon_sym_Map_File] = ACTIONS(52),
    [anon_sym_Plot_Parameter_File] = ACTIONS(50),
    [anon_sym_XML_Document] = ACTIONS(50),
    [anon_sym_XML_Node] = ACTIONS(50),
    [anon_sym_Connection] = ACTIONS(50),
    [anon_sym_Select_Query] = ACTIONS(50),
    [anon_sym_Insert_Query] = ACTIONS(50),
    [anon_sym_Update_Query] = ACTIONS(50),
    [anon_sym_Delete_Query] = ACTIONS(50),
    [anon_sym_Database_Results] = ACTIONS(50),
    [anon_sym_Transactions] = ACTIONS(50),
    [anon_sym_Parameter_Collection] = ACTIONS(50),
    [anon_sym_Query_Condition] = ACTIONS(50),
    [anon_sym_Manual_Condition] = ACTIONS(50),
    [anon_sym_Dynamic_Element] = ACTIONS(50),
    [anon_sym_Dynamic_Integer] = ACTIONS(50),
    [anon_sym_Dynamic_Real] = ACTIONS(50),
    [anon_sym_Dynamic_Text] = ACTIONS(50),
  },
  [11] = {
    [anon_sym_LBRACE] = ACTIONS(54),
    [anon_sym_RBRACE] = ACTIONS(54),
    [anon_sym_if] = ACTIONS(54),
    [anon_sym_else] = ACTIONS(54),
    [anon_sym_return] = ACTIONS(54),
    [anon_sym_Integer] = ACTIONS(56),
    [anon_sym_Real] = ACTIONS(56),
    [anon_sym_Text] = ACTIONS(56),
    [anon_sym_Vector2] = ACTIONS(54),
    [anon_sym_Vector3] = ACTIONS(54),
    [anon_sym_Vector4] = ACTIONS(54),
    [anon_sym_Matrix3] = ACTIONS(54),
    [anon_sym_Matrix4] = ACTIONS(54),
    [anon_sym_Point] = ACTIONS(54),
    [anon_sym_Line] = ACTIONS(56),
    [anon_sym_Arc] = ACTIONS(54),
    [anon_sym_Spiral] = ACTIONS(54),
    [anon_sym_Parabola] = ACTIONS(54),
    [anon_sym_Segment] = ACTIONS(54),
    [anon_sym_Element] = ACTIONS(54),
    [anon_sym_Model] = ACTIONS(56),
    [anon_sym_View] = ACTIONS(56),
    [anon_sym_Macro_Function] = ACTIONS(54),
    [anon_sym_Function] = ACTIONS(56),
    [anon_sym_Uid] = ACTIONS(54),
    [anon_sym_Guid] = ACTIONS(54),
    [anon_sym_Attributes] = ACTIONS(56),
    [anon_sym_SDR_Attribute] = ACTIONS(54),
    [anon_sym_Blob] = ACTIONS(54),
    [anon_sym_Screen_Text] = ACTIONS(54),
    [anon_sym_Textstyle_Data] = ACTIONS(54),
    [anon_sym_Equality_Label] = ACTIONS(54),
    [anon_sym_Undo] = ACTIONS(56),
    [anon_sym_Undo_List] = ACTIONS(54),
    [anon_sym_Widget] = ACTIONS(56),
    [anon_sym_Menu] = ACTIONS(54),
    [anon_sym_Panel] = ACTIONS(54),
    [anon_sym_Overlay_Widget] = ACTIONS(54),
    [anon_sym_Vertical_Group] = ACTIONS(54),
    [anon_sym_Horizontal_Group] = ACTIONS(54),
    [anon_sym_Widget_Pages] = ACTIONS(54),
    [anon_sym_Button] = ACTIONS(54),
    [anon_sym_Select_Button] = ACTIONS(54),
    [anon_sym_Angle_Box] = ACTIONS(54),
    [anon_sym_Attributes_Box] = ACTIONS(54),
    [anon_sym_Billboard_Box] = ACTIONS(54),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(54),
    [anon_sym_Bitmap_List_Box] = ACTIONS(54),
    [anon_sym_Chainage_Box] = ACTIONS(54),
    [anon_sym_Choice_Box] = ACTIONS(54),
    [anon_sym_Colour_Box] = ACTIONS(54),
    [anon_sym_Colour_Message_Box] = ACTIONS(54),
    [anon_sym_Date_Time_Box] = ACTIONS(54),
    [anon_sym_Directory_Box] = ACTIONS(54),
    [anon_sym_Draw_Box] = ACTIONS(54),
    [anon_sym_File_Box] = ACTIONS(54),
    [anon_sym_Function_Box] = ACTIONS(54),
    [anon_sym_Graph_Box] = ACTIONS(54),
    [anon_sym_GridCtrl_Box] = ACTIONS(54),
    [anon_sym_HyperLink_Box] = ACTIONS(54),
    [anon_sym_Input_Box] = ACTIONS(54),
    [anon_sym_Integer_Box] = ACTIONS(54),
    [anon_sym_Justify_Box] = ACTIONS(54),
    [anon_sym_Linestyle_Box] = ACTIONS(54),
    [anon_sym_List_Box] = ACTIONS(54),
    [anon_sym_ListCtrl_Box] = ACTIONS(54),
    [anon_sym_Map_File_Box] = ACTIONS(54),
    [anon_sym_Message_Box] = ACTIONS(54),
    [anon_sym_Model_Box] = ACTIONS(54),
    [anon_sym_Name_Box] = ACTIONS(54),
    [anon_sym_Named_Tick_Box] = ACTIONS(54),
    [anon_sym_New_Select_Box] = ACTIONS(54),
    [anon_sym_New_XYZ_Box] = ACTIONS(54),
    [anon_sym_Plotter_Box] = ACTIONS(54),
    [anon_sym_Polygon_Box] = ACTIONS(54),
    [anon_sym_Real_Box] = ACTIONS(54),
    [anon_sym_Report_Box] = ACTIONS(54),
    [anon_sym_Select_Box] = ACTIONS(56),
    [anon_sym_Select_Boxes] = ACTIONS(54),
    [anon_sym_Sheet_Size_Box] = ACTIONS(54),
    [anon_sym_Source_Box] = ACTIONS(54),
    [anon_sym_Symbol_Box] = ACTIONS(54),
    [anon_sym_Tab_Box] = ACTIONS(54),
    [anon_sym_Target_Box] = ACTIONS(54),
    [anon_sym_Template_Box] = ACTIONS(54),
    [anon_sym_Text_Edit_Box] = ACTIONS(54),
    [anon_sym_Text_Style_Box] = ACTIONS(54),
    [anon_sym_Texture_Box] = ACTIONS(54),
    [anon_sym_Tree_Box] = ACTIONS(54),
    [anon_sym_Tree_Page] = ACTIONS(54),
    [anon_sym_Tick_Box] = ACTIONS(54),
    [anon_sym_Tin_Box] = ACTIONS(54),
    [anon_sym_View_Box] = ACTIONS(54),
    [anon_sym_XYZ_Box] = ACTIONS(54),
    [anon_sym_File] = ACTIONS(56),
    [anon_sym_Map_File] = ACTIONS(56),
    [anon_sym_Plot_Parameter_File] = ACTIONS(54),
    [anon_sym_XML_Document] = ACTIONS(54),
    [anon_sym_XML_Node] = ACTIONS(54),
    [anon_sym_Connection] = ACTIONS(54),
    [anon_sym_Select_Query] = ACTIONS(54),
    [anon_sym_Insert_Query] = ACTIONS(54),
    [anon_sym_Update_Query] = ACTIONS(54),
    [anon_sym_Delete_Query] = ACTIONS(54),
    [anon_sym_Database_Results] = ACTIONS(54),
    [anon_sym_Transactions] = ACTIONS(54),
    [anon_sym_Parameter_Collection] = ACTIONS(54),
    [anon_sym_Query_Condition] = ACTIONS(54),
    [anon_sym_Manual_Condition] = ACTIONS(54),
    [anon_sym_Dynamic_Element] = ACTIONS(54),
    [anon_sym_Dynamic_Integer] = ACTIONS(54),
    [anon_sym_Dynamic_Real] = ACTIONS(54),
    [anon_sym_Dynamic_Text] = ACTIONS(54),
  },
  [12] = {
    [sym_parameter_declaration] = STATE(35),
    [sym__declaration_specifiers] = STATE(23),
    [sym__type_specifier] = STATE(39),
    [sym_primitive_type] = STATE(39),
    [anon_sym_RPAREN] = ACTIONS(58),
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
  [13] = {
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(60),
    [anon_sym_if] = ACTIONS(60),
    [anon_sym_else] = ACTIONS(60),
    [anon_sym_return] = ACTIONS(60),
    [anon_sym_Integer] = ACTIONS(62),
    [anon_sym_Real] = ACTIONS(62),
    [anon_sym_Text] = ACTIONS(62),
    [anon_sym_Vector2] = ACTIONS(60),
    [anon_sym_Vector3] = ACTIONS(60),
    [anon_sym_Vector4] = ACTIONS(60),
    [anon_sym_Matrix3] = ACTIONS(60),
    [anon_sym_Matrix4] = ACTIONS(60),
    [anon_sym_Point] = ACTIONS(60),
    [anon_sym_Line] = ACTIONS(62),
    [anon_sym_Arc] = ACTIONS(60),
    [anon_sym_Spiral] = ACTIONS(60),
    [anon_sym_Parabola] = ACTIONS(60),
    [anon_sym_Segment] = ACTIONS(60),
    [anon_sym_Element] = ACTIONS(60),
    [anon_sym_Model] = ACTIONS(62),
    [anon_sym_View] = ACTIONS(62),
    [anon_sym_Macro_Function] = ACTIONS(60),
    [anon_sym_Function] = ACTIONS(62),
    [anon_sym_Uid] = ACTIONS(60),
    [anon_sym_Guid] = ACTIONS(60),
    [anon_sym_Attributes] = ACTIONS(62),
    [anon_sym_SDR_Attribute] = ACTIONS(60),
    [anon_sym_Blob] = ACTIONS(60),
    [anon_sym_Screen_Text] = ACTIONS(60),
    [anon_sym_Textstyle_Data] = ACTIONS(60),
    [anon_sym_Equality_Label] = ACTIONS(60),
    [anon_sym_Undo] = ACTIONS(62),
    [anon_sym_Undo_List] = ACTIONS(60),
    [anon_sym_Widget] = ACTIONS(62),
    [anon_sym_Menu] = ACTIONS(60),
    [anon_sym_Panel] = ACTIONS(60),
    [anon_sym_Overlay_Widget] = ACTIONS(60),
    [anon_sym_Vertical_Group] = ACTIONS(60),
    [anon_sym_Horizontal_Group] = ACTIONS(60),
    [anon_sym_Widget_Pages] = ACTIONS(60),
    [anon_sym_Button] = ACTIONS(60),
    [anon_sym_Select_Button] = ACTIONS(60),
    [anon_sym_Angle_Box] = ACTIONS(60),
    [anon_sym_Attributes_Box] = ACTIONS(60),
    [anon_sym_Billboard_Box] = ACTIONS(60),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(60),
    [anon_sym_Bitmap_List_Box] = ACTIONS(60),
    [anon_sym_Chainage_Box] = ACTIONS(60),
    [anon_sym_Choice_Box] = ACTIONS(60),
    [anon_sym_Colour_Box] = ACTIONS(60),
    [anon_sym_Colour_Message_Box] = ACTIONS(60),
    [anon_sym_Date_Time_Box] = ACTIONS(60),
    [anon_sym_Directory_Box] = ACTIONS(60),
    [anon_sym_Draw_Box] = ACTIONS(60),
    [anon_sym_File_Box] = ACTIONS(60),
    [anon_sym_Function_Box] = ACTIONS(60),
    [anon_sym_Graph_Box] = ACTIONS(60),
    [anon_sym_GridCtrl_Box] = ACTIONS(60),
    [anon_sym_HyperLink_Box] = ACTIONS(60),
    [anon_sym_Input_Box] = ACTIONS(60),
    [anon_sym_Integer_Box] = ACTIONS(60),
    [anon_sym_Justify_Box] = ACTIONS(60),
    [anon_sym_Linestyle_Box] = ACTIONS(60),
    [anon_sym_List_Box] = ACTIONS(60),
    [anon_sym_ListCtrl_Box] = ACTIONS(60),
    [anon_sym_Map_File_Box] = ACTIONS(60),
    [anon_sym_Message_Box] = ACTIONS(60),
    [anon_sym_Model_Box] = ACTIONS(60),
    [anon_sym_Name_Box] = ACTIONS(60),
    [anon_sym_Named_Tick_Box] = ACTIONS(60),
    [anon_sym_New_Select_Box] = ACTIONS(60),
    [anon_sym_New_XYZ_Box] = ACTIONS(60),
    [anon_sym_Plotter_Box] = ACTIONS(60),
    [anon_sym_Polygon_Box] = ACTIONS(60),
    [anon_sym_Real_Box] = ACTIONS(60),
    [anon_sym_Report_Box] = ACTIONS(60),
    [anon_sym_Select_Box] = ACTIONS(62),
    [anon_sym_Select_Boxes] = ACTIONS(60),
    [anon_sym_Sheet_Size_Box] = ACTIONS(60),
    [anon_sym_Source_Box] = ACTIONS(60),
    [anon_sym_Symbol_Box] = ACTIONS(60),
    [anon_sym_Tab_Box] = ACTIONS(60),
    [anon_sym_Target_Box] = ACTIONS(60),
    [anon_sym_Template_Box] = ACTIONS(60),
    [anon_sym_Text_Edit_Box] = ACTIONS(60),
    [anon_sym_Text_Style_Box] = ACTIONS(60),
    [anon_sym_Texture_Box] = ACTIONS(60),
    [anon_sym_Tree_Box] = ACTIONS(60),
    [anon_sym_Tree_Page] = ACTIONS(60),
    [anon_sym_Tick_Box] = ACTIONS(60),
    [anon_sym_Tin_Box] = ACTIONS(60),
    [anon_sym_View_Box] = ACTIONS(60),
    [anon_sym_XYZ_Box] = ACTIONS(60),
    [anon_sym_File] = ACTIONS(62),
    [anon_sym_Map_File] = ACTIONS(62),
    [anon_sym_Plot_Parameter_File] = ACTIONS(60),
    [anon_sym_XML_Document] = ACTIONS(60),
    [anon_sym_XML_Node] = ACTIONS(60),
    [anon_sym_Connection] = ACTIONS(60),
    [anon_sym_Select_Query] = ACTIONS(60),
    [anon_sym_Insert_Query] = ACTIONS(60),
    [anon_sym_Update_Query] = ACTIONS(60),
    [anon_sym_Delete_Query] = ACTIONS(60),
    [anon_sym_Database_Results] = ACTIONS(60),
    [anon_sym_Transactions] = ACTIONS(60),
    [anon_sym_Parameter_Collection] = ACTIONS(60),
    [anon_sym_Query_Condition] = ACTIONS(60),
    [anon_sym_Manual_Condition] = ACTIONS(60),
    [anon_sym_Dynamic_Element] = ACTIONS(60),
    [anon_sym_Dynamic_Integer] = ACTIONS(60),
    [anon_sym_Dynamic_Real] = ACTIONS(60),
    [anon_sym_Dynamic_Text] = ACTIONS(60),
  },
  [14] = {
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_if] = ACTIONS(64),
    [anon_sym_else] = ACTIONS(66),
    [anon_sym_return] = ACTIONS(64),
    [anon_sym_Integer] = ACTIONS(68),
    [anon_sym_Real] = ACTIONS(68),
    [anon_sym_Text] = ACTIONS(68),
    [anon_sym_Vector2] = ACTIONS(64),
    [anon_sym_Vector3] = ACTIONS(64),
    [anon_sym_Vector4] = ACTIONS(64),
    [anon_sym_Matrix3] = ACTIONS(64),
    [anon_sym_Matrix4] = ACTIONS(64),
    [anon_sym_Point] = ACTIONS(64),
    [anon_sym_Line] = ACTIONS(68),
    [anon_sym_Arc] = ACTIONS(64),
    [anon_sym_Spiral] = ACTIONS(64),
    [anon_sym_Parabola] = ACTIONS(64),
    [anon_sym_Segment] = ACTIONS(64),
    [anon_sym_Element] = ACTIONS(64),
    [anon_sym_Model] = ACTIONS(68),
    [anon_sym_View] = ACTIONS(68),
    [anon_sym_Macro_Function] = ACTIONS(64),
    [anon_sym_Function] = ACTIONS(68),
    [anon_sym_Uid] = ACTIONS(64),
    [anon_sym_Guid] = ACTIONS(64),
    [anon_sym_Attributes] = ACTIONS(68),
    [anon_sym_SDR_Attribute] = ACTIONS(64),
    [anon_sym_Blob] = ACTIONS(64),
    [anon_sym_Screen_Text] = ACTIONS(64),
    [anon_sym_Textstyle_Data] = ACTIONS(64),
    [anon_sym_Equality_Label] = ACTIONS(64),
    [anon_sym_Undo] = ACTIONS(68),
    [anon_sym_Undo_List] = ACTIONS(64),
    [anon_sym_Widget] = ACTIONS(68),
    [anon_sym_Menu] = ACTIONS(64),
    [anon_sym_Panel] = ACTIONS(64),
    [anon_sym_Overlay_Widget] = ACTIONS(64),
    [anon_sym_Vertical_Group] = ACTIONS(64),
    [anon_sym_Horizontal_Group] = ACTIONS(64),
    [anon_sym_Widget_Pages] = ACTIONS(64),
    [anon_sym_Button] = ACTIONS(64),
    [anon_sym_Select_Button] = ACTIONS(64),
    [anon_sym_Angle_Box] = ACTIONS(64),
    [anon_sym_Attributes_Box] = ACTIONS(64),
    [anon_sym_Billboard_Box] = ACTIONS(64),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(64),
    [anon_sym_Bitmap_List_Box] = ACTIONS(64),
    [anon_sym_Chainage_Box] = ACTIONS(64),
    [anon_sym_Choice_Box] = ACTIONS(64),
    [anon_sym_Colour_Box] = ACTIONS(64),
    [anon_sym_Colour_Message_Box] = ACTIONS(64),
    [anon_sym_Date_Time_Box] = ACTIONS(64),
    [anon_sym_Directory_Box] = ACTIONS(64),
    [anon_sym_Draw_Box] = ACTIONS(64),
    [anon_sym_File_Box] = ACTIONS(64),
    [anon_sym_Function_Box] = ACTIONS(64),
    [anon_sym_Graph_Box] = ACTIONS(64),
    [anon_sym_GridCtrl_Box] = ACTIONS(64),
    [anon_sym_HyperLink_Box] = ACTIONS(64),
    [anon_sym_Input_Box] = ACTIONS(64),
    [anon_sym_Integer_Box] = ACTIONS(64),
    [anon_sym_Justify_Box] = ACTIONS(64),
    [anon_sym_Linestyle_Box] = ACTIONS(64),
    [anon_sym_List_Box] = ACTIONS(64),
    [anon_sym_ListCtrl_Box] = ACTIONS(64),
    [anon_sym_Map_File_Box] = ACTIONS(64),
    [anon_sym_Message_Box] = ACTIONS(64),
    [anon_sym_Model_Box] = ACTIONS(64),
    [anon_sym_Name_Box] = ACTIONS(64),
    [anon_sym_Named_Tick_Box] = ACTIONS(64),
    [anon_sym_New_Select_Box] = ACTIONS(64),
    [anon_sym_New_XYZ_Box] = ACTIONS(64),
    [anon_sym_Plotter_Box] = ACTIONS(64),
    [anon_sym_Polygon_Box] = ACTIONS(64),
    [anon_sym_Real_Box] = ACTIONS(64),
    [anon_sym_Report_Box] = ACTIONS(64),
    [anon_sym_Select_Box] = ACTIONS(68),
    [anon_sym_Select_Boxes] = ACTIONS(64),
    [anon_sym_Sheet_Size_Box] = ACTIONS(64),
    [anon_sym_Source_Box] = ACTIONS(64),
    [anon_sym_Symbol_Box] = ACTIONS(64),
    [anon_sym_Tab_Box] = ACTIONS(64),
    [anon_sym_Target_Box] = ACTIONS(64),
    [anon_sym_Template_Box] = ACTIONS(64),
    [anon_sym_Text_Edit_Box] = ACTIONS(64),
    [anon_sym_Text_Style_Box] = ACTIONS(64),
    [anon_sym_Texture_Box] = ACTIONS(64),
    [anon_sym_Tree_Box] = ACTIONS(64),
    [anon_sym_Tree_Page] = ACTIONS(64),
    [anon_sym_Tick_Box] = ACTIONS(64),
    [anon_sym_Tin_Box] = ACTIONS(64),
    [anon_sym_View_Box] = ACTIONS(64),
    [anon_sym_XYZ_Box] = ACTIONS(64),
    [anon_sym_File] = ACTIONS(68),
    [anon_sym_Map_File] = ACTIONS(68),
    [anon_sym_Plot_Parameter_File] = ACTIONS(64),
    [anon_sym_XML_Document] = ACTIONS(64),
    [anon_sym_XML_Node] = ACTIONS(64),
    [anon_sym_Connection] = ACTIONS(64),
    [anon_sym_Select_Query] = ACTIONS(64),
    [anon_sym_Insert_Query] = ACTIONS(64),
    [anon_sym_Update_Query] = ACTIONS(64),
    [anon_sym_Delete_Query] = ACTIONS(64),
    [anon_sym_Database_Results] = ACTIONS(64),
    [anon_sym_Transactions] = ACTIONS(64),
    [anon_sym_Parameter_Collection] = ACTIONS(64),
    [anon_sym_Query_Condition] = ACTIONS(64),
    [anon_sym_Manual_Condition] = ACTIONS(64),
    [anon_sym_Dynamic_Element] = ACTIONS(64),
    [anon_sym_Dynamic_Integer] = ACTIONS(64),
    [anon_sym_Dynamic_Real] = ACTIONS(64),
    [anon_sym_Dynamic_Text] = ACTIONS(64),
  },
  [15] = {
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_if] = ACTIONS(70),
    [anon_sym_else] = ACTIONS(70),
    [anon_sym_return] = ACTIONS(70),
    [anon_sym_Integer] = ACTIONS(72),
    [anon_sym_Real] = ACTIONS(72),
    [anon_sym_Text] = ACTIONS(72),
    [anon_sym_Vector2] = ACTIONS(70),
    [anon_sym_Vector3] = ACTIONS(70),
    [anon_sym_Vector4] = ACTIONS(70),
    [anon_sym_Matrix3] = ACTIONS(70),
    [anon_sym_Matrix4] = ACTIONS(70),
    [anon_sym_Point] = ACTIONS(70),
    [anon_sym_Line] = ACTIONS(72),
    [anon_sym_Arc] = ACTIONS(70),
    [anon_sym_Spiral] = ACTIONS(70),
    [anon_sym_Parabola] = ACTIONS(70),
    [anon_sym_Segment] = ACTIONS(70),
    [anon_sym_Element] = ACTIONS(70),
    [anon_sym_Model] = ACTIONS(72),
    [anon_sym_View] = ACTIONS(72),
    [anon_sym_Macro_Function] = ACTIONS(70),
    [anon_sym_Function] = ACTIONS(72),
    [anon_sym_Uid] = ACTIONS(70),
    [anon_sym_Guid] = ACTIONS(70),
    [anon_sym_Attributes] = ACTIONS(72),
    [anon_sym_SDR_Attribute] = ACTIONS(70),
    [anon_sym_Blob] = ACTIONS(70),
    [anon_sym_Screen_Text] = ACTIONS(70),
    [anon_sym_Textstyle_Data] = ACTIONS(70),
    [anon_sym_Equality_Label] = ACTIONS(70),
    [anon_sym_Undo] = ACTIONS(72),
    [anon_sym_Undo_List] = ACTIONS(70),
    [anon_sym_Widget] = ACTIONS(72),
    [anon_sym_Menu] = ACTIONS(70),
    [anon_sym_Panel] = ACTIONS(70),
    [anon_sym_Overlay_Widget] = ACTIONS(70),
    [anon_sym_Vertical_Group] = ACTIONS(70),
    [anon_sym_Horizontal_Group] = ACTIONS(70),
    [anon_sym_Widget_Pages] = ACTIONS(70),
    [anon_sym_Button] = ACTIONS(70),
    [anon_sym_Select_Button] = ACTIONS(70),
    [anon_sym_Angle_Box] = ACTIONS(70),
    [anon_sym_Attributes_Box] = ACTIONS(70),
    [anon_sym_Billboard_Box] = ACTIONS(70),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(70),
    [anon_sym_Bitmap_List_Box] = ACTIONS(70),
    [anon_sym_Chainage_Box] = ACTIONS(70),
    [anon_sym_Choice_Box] = ACTIONS(70),
    [anon_sym_Colour_Box] = ACTIONS(70),
    [anon_sym_Colour_Message_Box] = ACTIONS(70),
    [anon_sym_Date_Time_Box] = ACTIONS(70),
    [anon_sym_Directory_Box] = ACTIONS(70),
    [anon_sym_Draw_Box] = ACTIONS(70),
    [anon_sym_File_Box] = ACTIONS(70),
    [anon_sym_Function_Box] = ACTIONS(70),
    [anon_sym_Graph_Box] = ACTIONS(70),
    [anon_sym_GridCtrl_Box] = ACTIONS(70),
    [anon_sym_HyperLink_Box] = ACTIONS(70),
    [anon_sym_Input_Box] = ACTIONS(70),
    [anon_sym_Integer_Box] = ACTIONS(70),
    [anon_sym_Justify_Box] = ACTIONS(70),
    [anon_sym_Linestyle_Box] = ACTIONS(70),
    [anon_sym_List_Box] = ACTIONS(70),
    [anon_sym_ListCtrl_Box] = ACTIONS(70),
    [anon_sym_Map_File_Box] = ACTIONS(70),
    [anon_sym_Message_Box] = ACTIONS(70),
    [anon_sym_Model_Box] = ACTIONS(70),
    [anon_sym_Name_Box] = ACTIONS(70),
    [anon_sym_Named_Tick_Box] = ACTIONS(70),
    [anon_sym_New_Select_Box] = ACTIONS(70),
    [anon_sym_New_XYZ_Box] = ACTIONS(70),
    [anon_sym_Plotter_Box] = ACTIONS(70),
    [anon_sym_Polygon_Box] = ACTIONS(70),
    [anon_sym_Real_Box] = ACTIONS(70),
    [anon_sym_Report_Box] = ACTIONS(70),
    [anon_sym_Select_Box] = ACTIONS(72),
    [anon_sym_Select_Boxes] = ACTIONS(70),
    [anon_sym_Sheet_Size_Box] = ACTIONS(70),
    [anon_sym_Source_Box] = ACTIONS(70),
    [anon_sym_Symbol_Box] = ACTIONS(70),
    [anon_sym_Tab_Box] = ACTIONS(70),
    [anon_sym_Target_Box] = ACTIONS(70),
    [anon_sym_Template_Box] = ACTIONS(70),
    [anon_sym_Text_Edit_Box] = ACTIONS(70),
    [anon_sym_Text_Style_Box] = ACTIONS(70),
    [anon_sym_Texture_Box] = ACTIONS(70),
    [anon_sym_Tree_Box] = ACTIONS(70),
    [anon_sym_Tree_Page] = ACTIONS(70),
    [anon_sym_Tick_Box] = ACTIONS(70),
    [anon_sym_Tin_Box] = ACTIONS(70),
    [anon_sym_View_Box] = ACTIONS(70),
    [anon_sym_XYZ_Box] = ACTIONS(70),
    [anon_sym_File] = ACTIONS(72),
    [anon_sym_Map_File] = ACTIONS(72),
    [anon_sym_Plot_Parameter_File] = ACTIONS(70),
    [anon_sym_XML_Document] = ACTIONS(70),
    [anon_sym_XML_Node] = ACTIONS(70),
    [anon_sym_Connection] = ACTIONS(70),
    [anon_sym_Select_Query] = ACTIONS(70),
    [anon_sym_Insert_Query] = ACTIONS(70),
    [anon_sym_Update_Query] = ACTIONS(70),
    [anon_sym_Delete_Query] = ACTIONS(70),
    [anon_sym_Database_Results] = ACTIONS(70),
    [anon_sym_Transactions] = ACTIONS(70),
    [anon_sym_Parameter_Collection] = ACTIONS(70),
    [anon_sym_Query_Condition] = ACTIONS(70),
    [anon_sym_Manual_Condition] = ACTIONS(70),
    [anon_sym_Dynamic_Element] = ACTIONS(70),
    [anon_sym_Dynamic_Integer] = ACTIONS(70),
    [anon_sym_Dynamic_Real] = ACTIONS(70),
    [anon_sym_Dynamic_Text] = ACTIONS(70),
  },
  [16] = {
    [sym_parameter_declaration] = STATE(41),
    [sym__declaration_specifiers] = STATE(23),
    [sym__type_specifier] = STATE(39),
    [sym_primitive_type] = STATE(39),
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
  [17] = {
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_if] = ACTIONS(74),
    [anon_sym_return] = ACTIONS(74),
    [anon_sym_Integer] = ACTIONS(76),
    [anon_sym_Real] = ACTIONS(76),
    [anon_sym_Text] = ACTIONS(76),
    [anon_sym_Vector2] = ACTIONS(74),
    [anon_sym_Vector3] = ACTIONS(74),
    [anon_sym_Vector4] = ACTIONS(74),
    [anon_sym_Matrix3] = ACTIONS(74),
    [anon_sym_Matrix4] = ACTIONS(74),
    [anon_sym_Point] = ACTIONS(74),
    [anon_sym_Line] = ACTIONS(76),
    [anon_sym_Arc] = ACTIONS(74),
    [anon_sym_Spiral] = ACTIONS(74),
    [anon_sym_Parabola] = ACTIONS(74),
    [anon_sym_Segment] = ACTIONS(74),
    [anon_sym_Element] = ACTIONS(74),
    [anon_sym_Model] = ACTIONS(76),
    [anon_sym_View] = ACTIONS(76),
    [anon_sym_Macro_Function] = ACTIONS(74),
    [anon_sym_Function] = ACTIONS(76),
    [anon_sym_Uid] = ACTIONS(74),
    [anon_sym_Guid] = ACTIONS(74),
    [anon_sym_Attributes] = ACTIONS(76),
    [anon_sym_SDR_Attribute] = ACTIONS(74),
    [anon_sym_Blob] = ACTIONS(74),
    [anon_sym_Screen_Text] = ACTIONS(74),
    [anon_sym_Textstyle_Data] = ACTIONS(74),
    [anon_sym_Equality_Label] = ACTIONS(74),
    [anon_sym_Undo] = ACTIONS(76),
    [anon_sym_Undo_List] = ACTIONS(74),
    [anon_sym_Widget] = ACTIONS(76),
    [anon_sym_Menu] = ACTIONS(74),
    [anon_sym_Panel] = ACTIONS(74),
    [anon_sym_Overlay_Widget] = ACTIONS(74),
    [anon_sym_Vertical_Group] = ACTIONS(74),
    [anon_sym_Horizontal_Group] = ACTIONS(74),
    [anon_sym_Widget_Pages] = ACTIONS(74),
    [anon_sym_Button] = ACTIONS(74),
    [anon_sym_Select_Button] = ACTIONS(74),
    [anon_sym_Angle_Box] = ACTIONS(74),
    [anon_sym_Attributes_Box] = ACTIONS(74),
    [anon_sym_Billboard_Box] = ACTIONS(74),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(74),
    [anon_sym_Bitmap_List_Box] = ACTIONS(74),
    [anon_sym_Chainage_Box] = ACTIONS(74),
    [anon_sym_Choice_Box] = ACTIONS(74),
    [anon_sym_Colour_Box] = ACTIONS(74),
    [anon_sym_Colour_Message_Box] = ACTIONS(74),
    [anon_sym_Date_Time_Box] = ACTIONS(74),
    [anon_sym_Directory_Box] = ACTIONS(74),
    [anon_sym_Draw_Box] = ACTIONS(74),
    [anon_sym_File_Box] = ACTIONS(74),
    [anon_sym_Function_Box] = ACTIONS(74),
    [anon_sym_Graph_Box] = ACTIONS(74),
    [anon_sym_GridCtrl_Box] = ACTIONS(74),
    [anon_sym_HyperLink_Box] = ACTIONS(74),
    [anon_sym_Input_Box] = ACTIONS(74),
    [anon_sym_Integer_Box] = ACTIONS(74),
    [anon_sym_Justify_Box] = ACTIONS(74),
    [anon_sym_Linestyle_Box] = ACTIONS(74),
    [anon_sym_List_Box] = ACTIONS(74),
    [anon_sym_ListCtrl_Box] = ACTIONS(74),
    [anon_sym_Map_File_Box] = ACTIONS(74),
    [anon_sym_Message_Box] = ACTIONS(74),
    [anon_sym_Model_Box] = ACTIONS(74),
    [anon_sym_Name_Box] = ACTIONS(74),
    [anon_sym_Named_Tick_Box] = ACTIONS(74),
    [anon_sym_New_Select_Box] = ACTIONS(74),
    [anon_sym_New_XYZ_Box] = ACTIONS(74),
    [anon_sym_Plotter_Box] = ACTIONS(74),
    [anon_sym_Polygon_Box] = ACTIONS(74),
    [anon_sym_Real_Box] = ACTIONS(74),
    [anon_sym_Report_Box] = ACTIONS(74),
    [anon_sym_Select_Box] = ACTIONS(76),
    [anon_sym_Select_Boxes] = ACTIONS(74),
    [anon_sym_Sheet_Size_Box] = ACTIONS(74),
    [anon_sym_Source_Box] = ACTIONS(74),
    [anon_sym_Symbol_Box] = ACTIONS(74),
    [anon_sym_Tab_Box] = ACTIONS(74),
    [anon_sym_Target_Box] = ACTIONS(74),
    [anon_sym_Template_Box] = ACTIONS(74),
    [anon_sym_Text_Edit_Box] = ACTIONS(74),
    [anon_sym_Text_Style_Box] = ACTIONS(74),
    [anon_sym_Texture_Box] = ACTIONS(74),
    [anon_sym_Tree_Box] = ACTIONS(74),
    [anon_sym_Tree_Page] = ACTIONS(74),
    [anon_sym_Tick_Box] = ACTIONS(74),
    [anon_sym_Tin_Box] = ACTIONS(74),
    [anon_sym_View_Box] = ACTIONS(74),
    [anon_sym_XYZ_Box] = ACTIONS(74),
    [anon_sym_File] = ACTIONS(76),
    [anon_sym_Map_File] = ACTIONS(76),
    [anon_sym_Plot_Parameter_File] = ACTIONS(74),
    [anon_sym_XML_Document] = ACTIONS(74),
    [anon_sym_XML_Node] = ACTIONS(74),
    [anon_sym_Connection] = ACTIONS(74),
    [anon_sym_Select_Query] = ACTIONS(74),
    [anon_sym_Insert_Query] = ACTIONS(74),
    [anon_sym_Update_Query] = ACTIONS(74),
    [anon_sym_Delete_Query] = ACTIONS(74),
    [anon_sym_Database_Results] = ACTIONS(74),
    [anon_sym_Transactions] = ACTIONS(74),
    [anon_sym_Parameter_Collection] = ACTIONS(74),
    [anon_sym_Query_Condition] = ACTIONS(74),
    [anon_sym_Manual_Condition] = ACTIONS(74),
    [anon_sym_Dynamic_Element] = ACTIONS(74),
    [anon_sym_Dynamic_Integer] = ACTIONS(74),
    [anon_sym_Dynamic_Real] = ACTIONS(74),
    [anon_sym_Dynamic_Text] = ACTIONS(74),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_Integer] = ACTIONS(80),
    [anon_sym_Real] = ACTIONS(80),
    [anon_sym_Text] = ACTIONS(80),
    [anon_sym_Vector2] = ACTIONS(78),
    [anon_sym_Vector3] = ACTIONS(78),
    [anon_sym_Vector4] = ACTIONS(78),
    [anon_sym_Matrix3] = ACTIONS(78),
    [anon_sym_Matrix4] = ACTIONS(78),
    [anon_sym_Point] = ACTIONS(78),
    [anon_sym_Line] = ACTIONS(80),
    [anon_sym_Arc] = ACTIONS(78),
    [anon_sym_Spiral] = ACTIONS(78),
    [anon_sym_Parabola] = ACTIONS(78),
    [anon_sym_Segment] = ACTIONS(78),
    [anon_sym_Element] = ACTIONS(78),
    [anon_sym_Model] = ACTIONS(80),
    [anon_sym_View] = ACTIONS(80),
    [anon_sym_Macro_Function] = ACTIONS(78),
    [anon_sym_Function] = ACTIONS(80),
    [anon_sym_Uid] = ACTIONS(78),
    [anon_sym_Guid] = ACTIONS(78),
    [anon_sym_Attributes] = ACTIONS(80),
    [anon_sym_SDR_Attribute] = ACTIONS(78),
    [anon_sym_Blob] = ACTIONS(78),
    [anon_sym_Screen_Text] = ACTIONS(78),
    [anon_sym_Textstyle_Data] = ACTIONS(78),
    [anon_sym_Equality_Label] = ACTIONS(78),
    [anon_sym_Undo] = ACTIONS(80),
    [anon_sym_Undo_List] = ACTIONS(78),
    [anon_sym_Widget] = ACTIONS(80),
    [anon_sym_Menu] = ACTIONS(78),
    [anon_sym_Panel] = ACTIONS(78),
    [anon_sym_Overlay_Widget] = ACTIONS(78),
    [anon_sym_Vertical_Group] = ACTIONS(78),
    [anon_sym_Horizontal_Group] = ACTIONS(78),
    [anon_sym_Widget_Pages] = ACTIONS(78),
    [anon_sym_Button] = ACTIONS(78),
    [anon_sym_Select_Button] = ACTIONS(78),
    [anon_sym_Angle_Box] = ACTIONS(78),
    [anon_sym_Attributes_Box] = ACTIONS(78),
    [anon_sym_Billboard_Box] = ACTIONS(78),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(78),
    [anon_sym_Bitmap_List_Box] = ACTIONS(78),
    [anon_sym_Chainage_Box] = ACTIONS(78),
    [anon_sym_Choice_Box] = ACTIONS(78),
    [anon_sym_Colour_Box] = ACTIONS(78),
    [anon_sym_Colour_Message_Box] = ACTIONS(78),
    [anon_sym_Date_Time_Box] = ACTIONS(78),
    [anon_sym_Directory_Box] = ACTIONS(78),
    [anon_sym_Draw_Box] = ACTIONS(78),
    [anon_sym_File_Box] = ACTIONS(78),
    [anon_sym_Function_Box] = ACTIONS(78),
    [anon_sym_Graph_Box] = ACTIONS(78),
    [anon_sym_GridCtrl_Box] = ACTIONS(78),
    [anon_sym_HyperLink_Box] = ACTIONS(78),
    [anon_sym_Input_Box] = ACTIONS(78),
    [anon_sym_Integer_Box] = ACTIONS(78),
    [anon_sym_Justify_Box] = ACTIONS(78),
    [anon_sym_Linestyle_Box] = ACTIONS(78),
    [anon_sym_List_Box] = ACTIONS(78),
    [anon_sym_ListCtrl_Box] = ACTIONS(78),
    [anon_sym_Map_File_Box] = ACTIONS(78),
    [anon_sym_Message_Box] = ACTIONS(78),
    [anon_sym_Model_Box] = ACTIONS(78),
    [anon_sym_Name_Box] = ACTIONS(78),
    [anon_sym_Named_Tick_Box] = ACTIONS(78),
    [anon_sym_New_Select_Box] = ACTIONS(78),
    [anon_sym_New_XYZ_Box] = ACTIONS(78),
    [anon_sym_Plotter_Box] = ACTIONS(78),
    [anon_sym_Polygon_Box] = ACTIONS(78),
    [anon_sym_Real_Box] = ACTIONS(78),
    [anon_sym_Report_Box] = ACTIONS(78),
    [anon_sym_Select_Box] = ACTIONS(80),
    [anon_sym_Select_Boxes] = ACTIONS(78),
    [anon_sym_Sheet_Size_Box] = ACTIONS(78),
    [anon_sym_Source_Box] = ACTIONS(78),
    [anon_sym_Symbol_Box] = ACTIONS(78),
    [anon_sym_Tab_Box] = ACTIONS(78),
    [anon_sym_Target_Box] = ACTIONS(78),
    [anon_sym_Template_Box] = ACTIONS(78),
    [anon_sym_Text_Edit_Box] = ACTIONS(78),
    [anon_sym_Text_Style_Box] = ACTIONS(78),
    [anon_sym_Texture_Box] = ACTIONS(78),
    [anon_sym_Tree_Box] = ACTIONS(78),
    [anon_sym_Tree_Page] = ACTIONS(78),
    [anon_sym_Tick_Box] = ACTIONS(78),
    [anon_sym_Tin_Box] = ACTIONS(78),
    [anon_sym_View_Box] = ACTIONS(78),
    [anon_sym_XYZ_Box] = ACTIONS(78),
    [anon_sym_File] = ACTIONS(80),
    [anon_sym_Map_File] = ACTIONS(80),
    [anon_sym_Plot_Parameter_File] = ACTIONS(78),
    [anon_sym_XML_Document] = ACTIONS(78),
    [anon_sym_XML_Node] = ACTIONS(78),
    [anon_sym_Connection] = ACTIONS(78),
    [anon_sym_Select_Query] = ACTIONS(78),
    [anon_sym_Insert_Query] = ACTIONS(78),
    [anon_sym_Update_Query] = ACTIONS(78),
    [anon_sym_Delete_Query] = ACTIONS(78),
    [anon_sym_Database_Results] = ACTIONS(78),
    [anon_sym_Transactions] = ACTIONS(78),
    [anon_sym_Parameter_Collection] = ACTIONS(78),
    [anon_sym_Query_Condition] = ACTIONS(78),
    [anon_sym_Manual_Condition] = ACTIONS(78),
    [anon_sym_Dynamic_Element] = ACTIONS(78),
    [anon_sym_Dynamic_Integer] = ACTIONS(78),
    [anon_sym_Dynamic_Real] = ACTIONS(78),
    [anon_sym_Dynamic_Text] = ACTIONS(78),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(82), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [9] = 1,
    ACTIONS(84), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [18] = 1,
    ACTIONS(86), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [27] = 1,
    ACTIONS(88), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [36] = 3,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(27), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [49] = 1,
    ACTIONS(94), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [58] = 3,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(98), 2,
      sym_identifier,
      sym_number_literal,
    STATE(37), 2,
      sym_unary_expression,
      sym__expression,
  [70] = 3,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number_literal,
    STATE(44), 2,
      sym_unary_expression,
      sym__expression,
  [82] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_parameter_list,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [96] = 3,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(108), 2,
      sym_identifier,
      sym_number_literal,
    STATE(42), 2,
      sym_unary_expression,
      sym__expression,
  [108] = 3,
    ACTIONS(96), 1,
      anon_sym_BANG,
    ACTIONS(110), 2,
      sym_identifier,
      sym_number_literal,
    STATE(43), 2,
      sym_unary_expression,
      sym__expression,
  [120] = 5,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_compound_statement,
    STATE(19), 1,
      sym_parameter_list,
  [136] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_parameter_list,
  [149] = 2,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(31), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [158] = 2,
    ACTIONS(116), 1,
      sym_identifier,
    STATE(30), 3,
      sym_array_declarator,
      sym_function_declarator,
      sym__declarator,
  [167] = 1,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [173] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
  [183] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameter_list_repeat1,
  [193] = 1,
    ACTIONS(126), 3,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [199] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameter_list_repeat1,
  [209] = 1,
    ACTIONS(133), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_identifier,
  [215] = 2,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym_parenthesized_expression,
  [222] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [227] = 1,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [231] = 1,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
  [235] = 1,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
  [239] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 9,
  [SMALL_STATE(21)] = 18,
  [SMALL_STATE(22)] = 27,
  [SMALL_STATE(23)] = 36,
  [SMALL_STATE(24)] = 49,
  [SMALL_STATE(25)] = 58,
  [SMALL_STATE(26)] = 70,
  [SMALL_STATE(27)] = 82,
  [SMALL_STATE(28)] = 96,
  [SMALL_STATE(29)] = 108,
  [SMALL_STATE(30)] = 120,
  [SMALL_STATE(31)] = 136,
  [SMALL_STATE(32)] = 149,
  [SMALL_STATE(33)] = 158,
  [SMALL_STATE(34)] = 167,
  [SMALL_STATE(35)] = 173,
  [SMALL_STATE(36)] = 183,
  [SMALL_STATE(37)] = 193,
  [SMALL_STATE(38)] = 199,
  [SMALL_STATE(39)] = 209,
  [SMALL_STATE(40)] = 215,
  [SMALL_STATE(41)] = 222,
  [SMALL_STATE(42)] = 227,
  [SMALL_STATE(43)] = 231,
  [SMALL_STATE(44)] = 235,
  [SMALL_STATE(45)] = 239,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(40),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(34),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_statement_repeat1, 2), SHIFT_REPEAT(34),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_statement, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 8),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declarator, 2, .production_id = 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 1, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 2, .production_id = 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 6),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__declaration_specifiers, 1, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
