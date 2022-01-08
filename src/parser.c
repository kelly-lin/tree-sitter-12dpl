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
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_Integer = 3,
  anon_sym_Real = 4,
  anon_sym_Text = 5,
  anon_sym_Vector2 = 6,
  anon_sym_Vector3 = 7,
  anon_sym_Vector4 = 8,
  anon_sym_Matrix3 = 9,
  anon_sym_Matrix4 = 10,
  anon_sym_Point = 11,
  anon_sym_Line = 12,
  anon_sym_Arc = 13,
  anon_sym_Spiral = 14,
  anon_sym_Parabola = 15,
  anon_sym_Segment = 16,
  anon_sym_Element = 17,
  anon_sym_Model = 18,
  anon_sym_View = 19,
  anon_sym_Macro_Function = 20,
  anon_sym_Function = 21,
  anon_sym_Uid = 22,
  anon_sym_Guid = 23,
  anon_sym_Attributes = 24,
  anon_sym_SDR_Attribute = 25,
  anon_sym_Blob = 26,
  anon_sym_Screen_Text = 27,
  anon_sym_Textstyle_Data = 28,
  anon_sym_Equality_Label = 29,
  anon_sym_Undo = 30,
  anon_sym_Undo_List = 31,
  anon_sym_Widget = 32,
  anon_sym_Menu = 33,
  anon_sym_Panel = 34,
  anon_sym_Overlay_Widget = 35,
  anon_sym_Vertical_Group = 36,
  anon_sym_Horizontal_Group = 37,
  anon_sym_Widget_Pages = 38,
  anon_sym_Button = 39,
  anon_sym_Select_Button = 40,
  anon_sym_Angle_Box = 41,
  anon_sym_Attributes_Box = 42,
  anon_sym_Billboard_Box = 43,
  anon_sym_Bitmap_Fill_Box = 44,
  anon_sym_Bitmap_List_Box = 45,
  anon_sym_Chainage_Box = 46,
  anon_sym_Choice_Box = 47,
  anon_sym_Colour_Box = 48,
  anon_sym_Colour_Message_Box = 49,
  anon_sym_Date_Time_Box = 50,
  anon_sym_Directory_Box = 51,
  anon_sym_Draw_Box = 52,
  anon_sym_File_Box = 53,
  anon_sym_Function_Box = 54,
  anon_sym_Graph_Box = 55,
  anon_sym_GridCtrl_Box = 56,
  anon_sym_HyperLink_Box = 57,
  anon_sym_Input_Box = 58,
  anon_sym_Integer_Box = 59,
  anon_sym_Justify_Box = 60,
  anon_sym_Linestyle_Box = 61,
  anon_sym_List_Box = 62,
  anon_sym_ListCtrl_Box = 63,
  anon_sym_Map_File_Box = 64,
  anon_sym_Message_Box = 65,
  anon_sym_Model_Box = 66,
  anon_sym_Name_Box = 67,
  anon_sym_Named_Tick_Box = 68,
  anon_sym_New_Select_Box = 69,
  anon_sym_New_XYZ_Box = 70,
  anon_sym_Plotter_Box = 71,
  anon_sym_Polygon_Box = 72,
  anon_sym_Real_Box = 73,
  anon_sym_Report_Box = 74,
  anon_sym_Select_Box = 75,
  anon_sym_Select_Boxes = 76,
  anon_sym_Sheet_Size_Box = 77,
  anon_sym_Source_Box = 78,
  anon_sym_Symbol_Box = 79,
  anon_sym_Tab_Box = 80,
  anon_sym_Target_Box = 81,
  anon_sym_Template_Box = 82,
  anon_sym_Text_Edit_Box = 83,
  anon_sym_Text_Style_Box = 84,
  anon_sym_Texture_Box = 85,
  anon_sym_Tree_Box = 86,
  anon_sym_Tree_Page = 87,
  anon_sym_Tick_Box = 88,
  anon_sym_Tin_Box = 89,
  anon_sym_View_Box = 90,
  anon_sym_XYZ_Box = 91,
  anon_sym_File = 92,
  anon_sym_Map_File = 93,
  anon_sym_Plot_Parameter_File = 94,
  anon_sym_XML_Document = 95,
  anon_sym_XML_Node = 96,
  anon_sym_Connection = 97,
  anon_sym_Select_Query = 98,
  anon_sym_Insert_Query = 99,
  anon_sym_Update_Query = 100,
  anon_sym_Delete_Query = 101,
  anon_sym_Database_Results = 102,
  anon_sym_Transactions = 103,
  anon_sym_Parameter_Collection = 104,
  anon_sym_Query_Condition = 105,
  anon_sym_Manual_Condition = 106,
  anon_sym_Dynamic_Element = 107,
  anon_sym_Dynamic_Integer = 108,
  anon_sym_Dynamic_Real = 109,
  anon_sym_Dynamic_Text = 110,
  anon_sym_LBRACE = 111,
  anon_sym_RBRACE = 112,
  anon_sym_return = 113,
  anon_sym_SEMI = 114,
  sym_identifier = 115,
  sym_number = 116,
  anon_sym_LBRACK = 117,
  anon_sym_RBRACK = 118,
  sym_source_file = 119,
  sym__definition = 120,
  sym_function_definition = 121,
  sym_parameter_list = 122,
  sym_primative_type = 123,
  sym_block = 124,
  sym__statement = 125,
  sym_return_statement = 126,
  sym__expression = 127,
  sym_declaration = 128,
  sym_array_declarator = 129,
  sym__declarator = 130,
  aux_sym_source_file_repeat1 = 131,
  aux_sym_block_repeat1 = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym_primative_type] = "primative_type",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_declaration] = "declaration",
  [sym_array_declarator] = "array_declarator",
  [sym__declarator] = "_declarator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym_primative_type] = sym_primative_type,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_declaration] = sym_declaration,
  [sym_array_declarator] = sym_array_declarator,
  [sym__declarator] = sym__declarator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [sym_number] = {
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
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_primative_type] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
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
  [sym__declarator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(730);
      if (lookahead == '(') ADVANCE(731);
      if (lookahead == ')') ADVANCE(732);
      if (lookahead == ';') ADVANCE(844);
      if (lookahead == 'A') ADVANCE(411);
      if (lookahead == 'B') ADVANCE(324);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(163);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'F') ADVANCE(343);
      if (lookahead == 'G') ADVANCE(530);
      if (lookahead == 'H') ADVANCE(446);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead == 'J') ADVANCE(638);
      if (lookahead == 'L') ADVANCE(325);
      if (lookahead == 'M') ADVANCE(155);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(658);
      if (lookahead == 'P') ADVANCE(157);
      if (lookahead == 'Q') ADVANCE(649);
      if (lookahead == 'R') ADVANCE(232);
      if (lookahead == 'S') ADVANCE(58);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(329);
      if (lookahead == 'V') ADVANCE(233);
      if (lookahead == 'W') ADVANCE(336);
      if (lookahead == 'X') ADVANCE(73);
      if (lookahead == '[') ADVANCE(847);
      if (lookahead == ']') ADVANCE(848);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '{') ADVANCE(841);
      if (lookahead == '}') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 1:
      if (lookahead == '2') ADVANCE(736);
      if (lookahead == '3') ADVANCE(737);
      if (lookahead == '4') ADVANCE(738);
      END_STATE();
    case 2:
      if (lookahead == '3') ADVANCE(739);
      if (lookahead == '4') ADVANCE(740);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(634);
      END_STATE();
    case 4:
      if (lookahead == 'B') ADVANCE(484);
      if (lookahead == 'Q') ADVANCE(654);
      END_STATE();
    case 5:
      if (lookahead == 'B') ADVANCE(447);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(448);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(449);
      END_STATE();
    case 8:
      if (lookahead == 'B') ADVANCE(450);
      END_STATE();
    case 9:
      if (lookahead == 'B') ADVANCE(452);
      END_STATE();
    case 10:
      if (lookahead == 'B') ADVANCE(454);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(456);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(457);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(460);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(465);
      if (lookahead == 'P') ADVANCE(184);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(467);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(469);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(471);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(474);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(476);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(478);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(480);
      if (lookahead == 'M') ADVANCE(249);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(482);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(485);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(486);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(487);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(488);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(489);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(490);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(491);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(492);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(493);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(494);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(495);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(496);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(497);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(498);
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
      if (lookahead == 'C') ADVANCE(609);
      END_STATE();
    case 54:
      if (lookahead == 'C') ADVANCE(473);
      END_STATE();
    case 55:
      if (lookahead == 'C') ADVANCE(468);
      END_STATE();
    case 56:
      if (lookahead == 'C') ADVANCE(522);
      END_STATE();
    case 57:
      if (lookahead == 'C') ADVANCE(635);
      if (lookahead == '_') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'c') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(318);
      if (lookahead == 'h') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(642);
      if (lookahead == 'p') ADVANCE(338);
      if (lookahead == 'y') ADVANCE(400);
      END_STATE();
    case 59:
      if (lookahead == 'D') ADVANCE(451);
      if (lookahead == 'N') ADVANCE(515);
      END_STATE();
    case 60:
      if (lookahead == 'D') ADVANCE(179);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == 'S') ADVANCE(637);
      END_STATE();
    case 62:
      if (lookahead == 'E') ADVANCE(393);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead == 'R') ADVANCE(286);
      if (lookahead == 'T') ADVANCE(280);
      END_STATE();
    case 63:
      if (lookahead == 'F') ADVANCE(657);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(349);
      END_STATE();
    case 65:
      if (lookahead == 'F') ADVANCE(341);
      if (lookahead == 'L') ADVANCE(346);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(353);
      END_STATE();
    case 67:
      if (lookahead == 'G') ADVANCE(552);
      END_STATE();
    case 68:
      if (lookahead == 'G') ADVANCE(554);
      END_STATE();
    case 69:
      if (lookahead == 'L') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'L') ADVANCE(171);
      END_STATE();
    case 71:
      if (lookahead == 'L') ADVANCE(340);
      END_STATE();
    case 72:
      if (lookahead == 'L') ADVANCE(344);
      END_STATE();
    case 73:
      if (lookahead == 'M') ADVANCE(69);
      if (lookahead == 'Y') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'P') ADVANCE(178);
      END_STATE();
    case 75:
      if (lookahead == 'P') ADVANCE(186);
      END_STATE();
    case 76:
      if (lookahead == 'Q') ADVANCE(652);
      END_STATE();
    case 77:
      if (lookahead == 'Q') ADVANCE(653);
      END_STATE();
    case 78:
      if (lookahead == 'Q') ADVANCE(655);
      END_STATE();
    case 79:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 81:
      if (lookahead == 'S') ADVANCE(330);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(285);
      if (lookahead == 'X') ADVANCE(87);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(347);
      END_STATE();
    case 84:
      if (lookahead == 'T') ADVANCE(337);
      END_STATE();
    case 85:
      if (lookahead == 'T') ADVANCE(271);
      END_STATE();
    case 86:
      if (lookahead == 'W') ADVANCE(360);
      END_STATE();
    case 87:
      if (lookahead == 'Y') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 'Z') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'Z') ADVANCE(129);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(3);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(5);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(14);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(4);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(62);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(67);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(80);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(70);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(8);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(17);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(22);
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
      if (lookahead == '_') ADVANCE(27);
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
      if (lookahead == '_') ADVANCE(35);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(38);
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
      if (lookahead == '_') ADVANCE(46);
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
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(68);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'e') ADVANCE(424);
      if (lookahead == 'o') ADVANCE(224);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(427);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'e') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 160:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 161:
      if (lookahead == 'a') ADVANCE(758);
      END_STATE();
    case 162:
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(592);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'y') ADVANCE(423);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(365);
      if (lookahead == 'p') ADVANCE(519);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(574);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(376);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(528);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(403);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(436);
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(399);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(368);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(379);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(369);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(661);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(319);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(633);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(720);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(309);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(407);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(310);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(394);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(320);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(321);
      END_STATE();
    case 192:
      if (lookahead == 'b') ADVANCE(756);
      END_STATE();
    case 193:
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 194:
      if (lookahead == 'b') ADVANCE(463);
      END_STATE();
    case 195:
      if (lookahead == 'b') ADVANCE(165);
      END_STATE();
    case 196:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 197:
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead == 'm') ADVANCE(273);
      END_STATE();
    case 198:
      if (lookahead == 'b') ADVANCE(262);
      END_STATE();
    case 199:
      if (lookahead == 'b') ADVANCE(650);
      END_STATE();
    case 200:
      if (lookahead == 'b') ADVANCE(651);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(743);
      END_STATE();
    case 202:
      if (lookahead == 'c') ADVANCE(362);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 203:
      if (lookahead == 'c') ADVANCE(543);
      if (lookahead == 'n') ADVANCE(648);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 't') ADVANCE(546);
      END_STATE();
    case 204:
      if (lookahead == 'c') ADVANCE(656);
      END_STATE();
    case 205:
      if (lookahead == 'c') ADVANCE(608);
      if (lookahead == 'r') ADVANCE(598);
      END_STATE();
    case 206:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 207:
      if (lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 208:
      if (lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 209:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 210:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 211:
      if (lookahead == 'c') ADVANCE(618);
      END_STATE();
    case 212:
      if (lookahead == 'c') ADVANCE(619);
      END_STATE();
    case 213:
      if (lookahead == 'c') ADVANCE(620);
      END_STATE();
    case 214:
      if (lookahead == 'c') ADVANCE(625);
      END_STATE();
    case 215:
      if (lookahead == 'c') ADVANCE(293);
      END_STATE();
    case 216:
      if (lookahead == 'c') ADVANCE(364);
      END_STATE();
    case 217:
      if (lookahead == 'c') ADVANCE(294);
      END_STATE();
    case 218:
      if (lookahead == 'c') ADVANCE(628);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(752);
      END_STATE();
    case 220:
      if (lookahead == 'd') ADVANCE(53);
      END_STATE();
    case 221:
      if (lookahead == 'd') ADVANCE(753);
      END_STATE();
    case 222:
      if (lookahead == 'd') ADVANCE(445);
      END_STATE();
    case 223:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 224:
      if (lookahead == 'd') ADVANCE(247);
      END_STATE();
    case 225:
      if (lookahead == 'd') ADVANCE(357);
      END_STATE();
    case 226:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 227:
      if (lookahead == 'd') ADVANCE(361);
      END_STATE();
    case 228:
      if (lookahead == 'd') ADVANCE(314);
      END_STATE();
    case 229:
      if (lookahead == 'd') ADVANCE(316);
      END_STATE();
    case 230:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 231:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(822);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(742);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(823);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(826);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(817);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(824);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(659);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(607);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(535);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(572);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(556);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(553);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(536);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(537);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(712);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(563);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(388);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(317);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(626);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 308:
      if (lookahead == 'f') ADVANCE(723);
      END_STATE();
    case 309:
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 310:
      if (lookahead == 'g') ADVANCE(256);
      END_STATE();
    case 311:
      if (lookahead == 'g') ADVANCE(458);
      END_STATE();
    case 312:
      if (lookahead == 'g') ADVANCE(378);
      END_STATE();
    case 313:
      if (lookahead == 'g') ADVANCE(305);
      END_STATE();
    case 314:
      if (lookahead == 'g') ADVANCE(267);
      END_STATE();
    case 315:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 316:
      if (lookahead == 'g') ADVANCE(276);
      END_STATE();
    case 317:
      if (lookahead == 'g') ADVANCE(275);
      END_STATE();
    case 318:
      if (lookahead == 'g') ADVANCE(406);
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 319:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 320:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 321:
      if (lookahead == 'g') ADVANCE(303);
      END_STATE();
    case 322:
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(373);
      END_STATE();
    case 323:
      if (lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 325:
      if (lookahead == 'i') ADVANCE(426);
      END_STATE();
    case 326:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 327:
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 328:
      if (lookahead == 'i') ADVANCE(662);
      END_STATE();
    case 329:
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'n') ADVANCE(222);
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 330:
      if (lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 331:
      if (lookahead == 'i') ADVANCE(215);
      END_STATE();
    case 332:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 333:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 334:
      if (lookahead == 'i') ADVANCE(428);
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 335:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 336:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 337:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 338:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 339:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 340:
      if (lookahead == 'i') ADVANCE(440);
      END_STATE();
    case 341:
      if (lookahead == 'i') ADVANCE(395);
      END_STATE();
    case 342:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 343:
      if (lookahead == 'i') ADVANCE(374);
      if (lookahead == 'u') ADVANCE(422);
      END_STATE();
    case 344:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 345:
      if (lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 346:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 347:
      if (lookahead == 'i') ADVANCE(410);
      END_STATE();
    case 348:
      if (lookahead == 'i') ADVANCE(461);
      END_STATE();
    case 349:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 350:
      if (lookahead == 'i') ADVANCE(470);
      END_STATE();
    case 351:
      if (lookahead == 'i') ADVANCE(472);
      END_STATE();
    case 352:
      if (lookahead == 'i') ADVANCE(477);
      END_STATE();
    case 353:
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 354:
      if (lookahead == 'i') ADVANCE(479);
      END_STATE();
    case 355:
      if (lookahead == 'i') ADVANCE(481);
      END_STATE();
    case 356:
      if (lookahead == 'i') ADVANCE(483);
      END_STATE();
    case 357:
      if (lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 358:
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 359:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 360:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 361:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 362:
      if (lookahead == 'k') ADVANCE(118);
      END_STATE();
    case 363:
      if (lookahead == 'k') ADVANCE(140);
      END_STATE();
    case 364:
      if (lookahead == 'k') ADVANCE(143);
      END_STATE();
    case 365:
      if (lookahead == 'l') ADVANCE(734);
      END_STATE();
    case 366:
      if (lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 367:
      if (lookahead == 'l') ADVANCE(764);
      END_STATE();
    case 368:
      if (lookahead == 'l') ADVANCE(744);
      END_STATE();
    case 369:
      if (lookahead == 'l') ADVANCE(839);
      END_STATE();
    case 370:
      if (lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 371:
      if (lookahead == 'l') ADVANCE(385);
      if (lookahead == 't') ADVANCE(402);
      END_STATE();
    case 372:
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'q') ADVANCE(640);
      END_STATE();
    case 373:
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 374:
      if (lookahead == 'l') ADVANCE(234);
      END_STATE();
    case 375:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 376:
      if (lookahead == 'l') ADVANCE(342);
      END_STATE();
    case 377:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 378:
      if (lookahead == 'l') ADVANCE(291);
      END_STATE();
    case 379:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 380:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 381:
      if (lookahead == 'l') ADVANCE(270);
      END_STATE();
    case 382:
      if (lookahead == 'l') ADVANCE(599);
      END_STATE();
    case 383:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 384:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 385:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 386:
      if (lookahead == 'l') ADVANCE(398);
      END_STATE();
    case 387:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 388:
      if (lookahead == 'l') ADVANCE(284);
      END_STATE();
    case 389:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 390:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 391:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 392:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 393:
      if (lookahead == 'l') ADVANCE(292);
      END_STATE();
    case 394:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 395:
      if (lookahead == 'l') ADVANCE(392);
      END_STATE();
    case 396:
      if (lookahead == 'l') ADVANCE(300);
      END_STATE();
    case 397:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 398:
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 399:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 400:
      if (lookahead == 'm') ADVANCE(194);
      END_STATE();
    case 401:
      if (lookahead == 'm') ADVANCE(527);
      if (lookahead == 'x') ADVANCE(581);
      END_STATE();
    case 402:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 403:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 404:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 405:
      if (lookahead == 'm') ADVANCE(279);
      END_STATE();
    case 406:
      if (lookahead == 'm') ADVANCE(283);
      END_STATE();
    case 407:
      if (lookahead == 'm') ADVANCE(290);
      END_STATE();
    case 408:
      if (lookahead == 'm') ADVANCE(287);
      END_STATE();
    case 409:
      if (lookahead == 'm') ADVANCE(288);
      END_STATE();
    case 410:
      if (lookahead == 'm') ADVANCE(299);
      END_STATE();
    case 411:
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == 't') ADVANCE(606);
      END_STATE();
    case 412:
      if (lookahead == 'n') ADVANCE(526);
      END_STATE();
    case 413:
      if (lookahead == 'n') ADVANCE(769);
      END_STATE();
    case 414:
      if (lookahead == 'n') ADVANCE(843);
      END_STATE();
    case 415:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 416:
      if (lookahead == 'n') ADVANCE(827);
      END_STATE();
    case 417:
      if (lookahead == 'n') ADVANCE(770);
      END_STATE();
    case 418:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 419:
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 420:
      if (lookahead == 'n') ADVANCE(836);
      END_STATE();
    case 421:
      if (lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 422:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 423:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 424:
      if (lookahead == 'n') ADVANCE(639);
      if (lookahead == 's') ADVANCE(571);
      END_STATE();
    case 425:
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 426:
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 427:
      if (lookahead == 'n') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 428:
      if (lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 429:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 430:
      if (lookahead == 'n') ADVANCE(584);
      END_STATE();
    case 431:
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 432:
      if (lookahead == 'n') ADVANCE(636);
      END_STATE();
    case 433:
      if (lookahead == 'n') ADVANCE(617);
      END_STATE();
    case 434:
      if (lookahead == 'n') ADVANCE(589);
      END_STATE();
    case 435:
      if (lookahead == 'n') ADVANCE(591);
      END_STATE();
    case 436:
      if (lookahead == 'n') ADVANCE(573);
      END_STATE();
    case 437:
      if (lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 438:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 439:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 440:
      if (lookahead == 'n') ADVANCE(363);
      END_STATE();
    case 441:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 442:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 443:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 444:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 445:
      if (lookahead == 'o') ADVANCE(760);
      END_STATE();
    case 446:
      if (lookahead == 'o') ADVANCE(538);
      if (lookahead == 'y') ADVANCE(529);
      END_STATE();
    case 447:
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 448:
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 449:
      if (lookahead == 'o') ADVANCE(665);
      END_STATE();
    case 450:
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 451:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 452:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 453:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 454:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 455:
      if (lookahead == 'o') ADVANCE(580);
      END_STATE();
    case 456:
      if (lookahead == 'o') ADVANCE(669);
      END_STATE();
    case 457:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 458:
      if (lookahead == 'o') ADVANCE(439);
      END_STATE();
    case 459:
      if (lookahead == 'o') ADVANCE(641);
      END_STATE();
    case 460:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 461:
      if (lookahead == 'o') ADVANCE(415);
      END_STATE();
    case 462:
      if (lookahead == 'o') ADVANCE(643);
      END_STATE();
    case 463:
      if (lookahead == 'o') ADVANCE(389);
      END_STATE();
    case 464:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 465:
      if (lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 466:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 467:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 468:
      if (lookahead == 'o') ADVANCE(438);
      END_STATE();
    case 469:
      if (lookahead == 'o') ADVANCE(674);
      END_STATE();
    case 470:
      if (lookahead == 'o') ADVANCE(416);
      END_STATE();
    case 471:
      if (lookahead == 'o') ADVANCE(675);
      END_STATE();
    case 472:
      if (lookahead == 'o') ADVANCE(425);
      END_STATE();
    case 473:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 474:
      if (lookahead == 'o') ADVANCE(676);
      END_STATE();
    case 475:
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 476:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 477:
      if (lookahead == 'o') ADVANCE(418);
      END_STATE();
    case 478:
      if (lookahead == 'o') ADVANCE(678);
      END_STATE();
    case 479:
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 480:
      if (lookahead == 'o') ADVANCE(679);
      END_STATE();
    case 481:
      if (lookahead == 'o') ADVANCE(420);
      END_STATE();
    case 482:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 483:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 484:
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 485:
      if (lookahead == 'o') ADVANCE(682);
      END_STATE();
    case 486:
      if (lookahead == 'o') ADVANCE(683);
      END_STATE();
    case 487:
      if (lookahead == 'o') ADVANCE(684);
      END_STATE();
    case 488:
      if (lookahead == 'o') ADVANCE(685);
      END_STATE();
    case 489:
      if (lookahead == 'o') ADVANCE(686);
      END_STATE();
    case 490:
      if (lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 491:
      if (lookahead == 'o') ADVANCE(688);
      END_STATE();
    case 492:
      if (lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 493:
      if (lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 494:
      if (lookahead == 'o') ADVANCE(691);
      END_STATE();
    case 495:
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 496:
      if (lookahead == 'o') ADVANCE(693);
      END_STATE();
    case 497:
      if (lookahead == 'o') ADVANCE(694);
      END_STATE();
    case 498:
      if (lookahead == 'o') ADVANCE(695);
      END_STATE();
    case 499:
      if (lookahead == 'o') ADVANCE(696);
      END_STATE();
    case 500:
      if (lookahead == 'o') ADVANCE(697);
      END_STATE();
    case 501:
      if (lookahead == 'o') ADVANCE(698);
      END_STATE();
    case 502:
      if (lookahead == 'o') ADVANCE(699);
      END_STATE();
    case 503:
      if (lookahead == 'o') ADVANCE(700);
      END_STATE();
    case 504:
      if (lookahead == 'o') ADVANCE(701);
      END_STATE();
    case 505:
      if (lookahead == 'o') ADVANCE(702);
      END_STATE();
    case 506:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 507:
      if (lookahead == 'o') ADVANCE(704);
      END_STATE();
    case 508:
      if (lookahead == 'o') ADVANCE(705);
      END_STATE();
    case 509:
      if (lookahead == 'o') ADVANCE(706);
      END_STATE();
    case 510:
      if (lookahead == 'o') ADVANCE(707);
      END_STATE();
    case 511:
      if (lookahead == 'o') ADVANCE(708);
      END_STATE();
    case 512:
      if (lookahead == 'o') ADVANCE(709);
      END_STATE();
    case 513:
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 514:
      if (lookahead == 'o') ADVANCE(711);
      END_STATE();
    case 515:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 516:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 517:
      if (lookahead == 'o') ADVANCE(560);
      END_STATE();
    case 518:
      if (lookahead == 'o') ADVANCE(377);
      END_STATE();
    case 519:
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 520:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 521:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 522:
      if (lookahead == 'o') ADVANCE(441);
      END_STATE();
    case 523:
      if (lookahead == 'p') ADVANCE(323);
      END_STATE();
    case 524:
      if (lookahead == 'p') ADVANCE(766);
      END_STATE();
    case 525:
      if (lookahead == 'p') ADVANCE(767);
      END_STATE();
    case 526:
      if (lookahead == 'p') ADVANCE(646);
      if (lookahead == 's') ADVANCE(255);
      if (lookahead == 't') ADVANCE(243);
      END_STATE();
    case 527:
      if (lookahead == 'p') ADVANCE(387);
      END_STATE();
    case 528:
      if (lookahead == 'p') ADVANCE(99);
      END_STATE();
    case 529:
      if (lookahead == 'p') ADVANCE(254);
      END_STATE();
    case 530:
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(339);
      END_STATE();
    case 531:
      if (lookahead == 'r') ADVANCE(1);
      END_STATE();
    case 532:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 533:
      if (lookahead == 'r') ADVANCE(838);
      END_STATE();
    case 534:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 535:
      if (lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 536:
      if (lookahead == 'r') ADVANCE(714);
      END_STATE();
    case 537:
      if (lookahead == 'r') ADVANCE(715);
      END_STATE();
    case 538:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 539:
      if (lookahead == 'r') ADVANCE(375);
      END_STATE();
    case 540:
      if (lookahead == 'r') ADVANCE(716);
      END_STATE();
    case 541:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 542:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 543:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 544:
      if (lookahead == 'r') ADVANCE(717);
      END_STATE();
    case 545:
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 546:
      if (lookahead == 'r') ADVANCE(328);
      END_STATE();
    case 547:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 548:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 549:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 550:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 551:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 552:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 553:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 554:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 555:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 556:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 557:
      if (lookahead == 'r') ADVANCE(359);
      END_STATE();
    case 558:
      if (lookahead == 'r') ADVANCE(390);
      END_STATE();
    case 559:
      if (lookahead == 'r') ADVANCE(624);
      END_STATE();
    case 560:
      if (lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 561:
      if (lookahead == 'r') ADVANCE(391);
      END_STATE();
    case 562:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 563:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 564:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 565:
      if (lookahead == 's') ADVANCE(754);
      END_STATE();
    case 566:
      if (lookahead == 's') ADVANCE(806);
      END_STATE();
    case 567:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 568:
      if (lookahead == 's') ADVANCE(768);
      END_STATE();
    case 569:
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 570:
      if (lookahead == 's') ADVANCE(596);
      END_STATE();
    case 571:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 572:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 573:
      if (lookahead == 's') ADVANCE(187);
      END_STATE();
    case 574:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 575:
      if (lookahead == 's') ADVANCE(586);
      END_STATE();
    case 576:
      if (lookahead == 's') ADVANCE(629);
      END_STATE();
    case 577:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 578:
      if (lookahead == 's') ADVANCE(577);
      END_STATE();
    case 579:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 580:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 581:
      if (lookahead == 't') ADVANCE(735);
      END_STATE();
    case 582:
      if (lookahead == 't') ADVANCE(741);
      END_STATE();
    case 583:
      if (lookahead == 't') ADVANCE(762);
      END_STATE();
    case 584:
      if (lookahead == 't') ADVANCE(747);
      END_STATE();
    case 585:
      if (lookahead == 't') ADVANCE(746);
      END_STATE();
    case 586:
      if (lookahead == 't') ADVANCE(761);
      END_STATE();
    case 587:
      if (lookahead == 't') ADVANCE(757);
      END_STATE();
    case 588:
      if (lookahead == 't') ADVANCE(840);
      END_STATE();
    case 589:
      if (lookahead == 't') ADVANCE(825);
      END_STATE();
    case 590:
      if (lookahead == 't') ADVANCE(765);
      END_STATE();
    case 591:
      if (lookahead == 't') ADVANCE(837);
      END_STATE();
    case 592:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 593:
      if (lookahead == 't') ADVANCE(725);
      END_STATE();
    case 594:
      if (lookahead == 't') ADVANCE(595);
      END_STATE();
    case 595:
      if (lookahead == 't') ADVANCE(453);
      END_STATE();
    case 596:
      if (lookahead == 't') ADVANCE(327);
      END_STATE();
    case 597:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 598:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 599:
      if (lookahead == 't') ADVANCE(569);
      END_STATE();
    case 600:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 601:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 602:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 603:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 604:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 605:
      if (lookahead == 't') ADVANCE(240);
      END_STATE();
    case 606:
      if (lookahead == 't') ADVANCE(541);
      END_STATE();
    case 607:
      if (lookahead == 't') ADVANCE(644);
      END_STATE();
    case 608:
      if (lookahead == 't') ADVANCE(466);
      END_STATE();
    case 609:
      if (lookahead == 't') ADVANCE(558);
      END_STATE();
    case 610:
      if (lookahead == 't') ADVANCE(517);
      END_STATE();
    case 611:
      if (lookahead == 't') ADVANCE(721);
      END_STATE();
    case 612:
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 613:
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 614:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 615:
      if (lookahead == 't') ADVANCE(722);
      END_STATE();
    case 616:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 617:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 618:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 619:
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 620:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 621:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 622:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 623:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 624:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 625:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 626:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(306);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(561);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(726);
      END_STATE();
    case 638:
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 639:
      if (lookahead == 'u') ADVANCE(763);
      END_STATE();
    case 640:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 641:
      if (lookahead == 'u') ADVANCE(524);
      END_STATE();
    case 642:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 643:
      if (lookahead == 'u') ADVANCE(525);
      END_STATE();
    case 644:
      if (lookahead == 'u') ADVANCE(545);
      END_STATE();
    case 645:
      if (lookahead == 'u') ADVANCE(548);
      END_STATE();
    case 646:
      if (lookahead == 'u') ADVANCE(621);
      END_STATE();
    case 647:
      if (lookahead == 'u') ADVANCE(382);
      END_STATE();
    case 648:
      if (lookahead == 'u') ADVANCE(173);
      END_STATE();
    case 649:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(604);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(605);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 654:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 655:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 656:
      if (lookahead == 'u') ADVANCE(408);
      END_STATE();
    case 657:
      if (lookahead == 'u') ADVANCE(442);
      END_STATE();
    case 658:
      if (lookahead == 'v') ADVANCE(245);
      END_STATE();
    case 659:
      if (lookahead == 'w') ADVANCE(749);
      END_STATE();
    case 660:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 661:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 662:
      if (lookahead == 'x') ADVANCE(2);
      END_STATE();
    case 663:
      if (lookahead == 'x') ADVANCE(810);
      END_STATE();
    case 664:
      if (lookahead == 'x') ADVANCE(819);
      END_STATE();
    case 665:
      if (lookahead == 'x') ADVANCE(821);
      END_STATE();
    case 666:
      if (lookahead == 'x') ADVANCE(782);
      END_STATE();
    case 667:
      if (lookahead == 'x') ADVANCE(783);
      END_STATE();
    case 668:
      if (lookahead == 'x') ADVANCE(792);
      END_STATE();
    case 669:
      if (lookahead == 'x') ADVANCE(797);
      END_STATE();
    case 670:
      if (lookahead == 'x') ADVANCE(803);
      END_STATE();
    case 671:
      if (lookahead == 'x') ADVANCE(818);
      END_STATE();
    case 672:
      if (lookahead == 'x') ADVANCE(816);
      END_STATE();
    case 673:
      if (lookahead == 'x') ADVANCE(820);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(771);
      END_STATE();
    case 675:
      if (lookahead == 'x') ADVANCE(785);
      END_STATE();
    case 676:
      if (lookahead == 'x') ADVANCE(788);
      END_STATE();
    case 677:
      if (lookahead == 'x') ADVANCE(796);
      END_STATE();
    case 678:
      if (lookahead == 'x') ADVANCE(777);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(778);
      END_STATE();
    case 680:
      if (lookahead == 'x') ADVANCE(804);
      END_STATE();
    case 681:
      if (lookahead == 'x') ADVANCE(805);
      END_STATE();
    case 682:
      if (lookahead == 'x') ADVANCE(808);
      END_STATE();
    case 683:
      if (lookahead == 'x') ADVANCE(809);
      END_STATE();
    case 684:
      if (lookahead == 'x') ADVANCE(811);
      END_STATE();
    case 685:
      if (lookahead == 'x') ADVANCE(789);
      END_STATE();
    case 686:
      if (lookahead == 'x') ADVANCE(790);
      END_STATE();
    case 687:
      if (lookahead == 'x') ADVANCE(795);
      END_STATE();
    case 688:
      if (lookahead == 'x') ADVANCE(800);
      END_STATE();
    case 689:
      if (lookahead == 'x') ADVANCE(801);
      END_STATE();
    case 690:
      if (lookahead == 'x') ADVANCE(802);
      END_STATE();
    case 691:
      if (lookahead == 'x') ADVANCE(815);
      END_STATE();
    case 692:
      if (lookahead == 'x') ADVANCE(776);
      END_STATE();
    case 693:
      if (lookahead == 'x') ADVANCE(784);
      END_STATE();
    case 694:
      if (lookahead == 'x') ADVANCE(786);
      END_STATE();
    case 695:
      if (lookahead == 'x') ADVANCE(793);
      END_STATE();
    case 696:
      if (lookahead == 'x') ADVANCE(794);
      END_STATE();
    case 697:
      if (lookahead == 'x') ADVANCE(812);
      END_STATE();
    case 698:
      if (lookahead == 'x') ADVANCE(773);
      END_STATE();
    case 699:
      if (lookahead == 'x') ADVANCE(780);
      END_STATE();
    case 700:
      if (lookahead == 'x') ADVANCE(781);
      END_STATE();
    case 701:
      if (lookahead == 'x') ADVANCE(787);
      END_STATE();
    case 702:
      if (lookahead == 'x') ADVANCE(791);
      END_STATE();
    case 703:
      if (lookahead == 'x') ADVANCE(813);
      END_STATE();
    case 704:
      if (lookahead == 'x') ADVANCE(772);
      END_STATE();
    case 705:
      if (lookahead == 'x') ADVANCE(798);
      END_STATE();
    case 706:
      if (lookahead == 'x') ADVANCE(799);
      END_STATE();
    case 707:
      if (lookahead == 'x') ADVANCE(807);
      END_STATE();
    case 708:
      if (lookahead == 'x') ADVANCE(814);
      END_STATE();
    case 709:
      if (lookahead == 'x') ADVANCE(774);
      END_STATE();
    case 710:
      if (lookahead == 'x') ADVANCE(775);
      END_STATE();
    case 711:
      if (lookahead == 'x') ADVANCE(779);
      END_STATE();
    case 712:
      if (lookahead == 'x') ADVANCE(587);
      END_STATE();
    case 713:
      if (lookahead == 'x') ADVANCE(588);
      END_STATE();
    case 714:
      if (lookahead == 'y') ADVANCE(831);
      END_STATE();
    case 715:
      if (lookahead == 'y') ADVANCE(829);
      END_STATE();
    case 716:
      if (lookahead == 'y') ADVANCE(828);
      END_STATE();
    case 717:
      if (lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 718:
      if (lookahead == 'y') ADVANCE(311);
      END_STATE();
    case 719:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 720:
      if (lookahead == 'y') ADVANCE(104);
      END_STATE();
    case 721:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 722:
      if (lookahead == 'y') ADVANCE(381);
      END_STATE();
    case 723:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 724:
      if (lookahead == 'y') ADVANCE(139);
      END_STATE();
    case 725:
      if (lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 726:
      if (lookahead == 'y') ADVANCE(397);
      END_STATE();
    case 727:
      if (lookahead == 'z') ADVANCE(521);
      END_STATE();
    case 728:
      if (lookahead == 'z') ADVANCE(301);
      END_STATE();
    case 729:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(729)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_Integer);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_Real);
      if (lookahead == '_') ADVANCE(12);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_Text);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 's') ADVANCE(615);
      if (lookahead == 'u') ADVANCE(562);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_Vector2);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_Vector3);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_Vector4);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_Matrix3);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_Matrix4);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_Point);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_Line);
      if (lookahead == 's') ADVANCE(593);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_Arc);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_Spiral);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_Parabola);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_Segment);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_Element);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_Model);
      if (lookahead == '_') ADVANCE(19);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_View);
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_Macro_Function);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_Function);
      if (lookahead == '_') ADVANCE(34);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_Uid);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_Guid);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_Attributes);
      if (lookahead == '_') ADVANCE(45);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_SDR_Attribute);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_Blob);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_Screen_Text);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_Textstyle_Data);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_Equality_Label);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_Undo);
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_Undo_List);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_Widget);
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_Menu);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_Panel);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_Overlay_Widget);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_Vertical_Group);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_Horizontal_Group);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_Widget_Pages);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_Button);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_Select_Button);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_Angle_Box);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_Attributes_Box);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_Billboard_Box);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_Bitmap_Fill_Box);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_Bitmap_List_Box);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_Chainage_Box);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_Choice_Box);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_Colour_Box);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_Colour_Message_Box);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_Date_Time_Box);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_Directory_Box);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_Draw_Box);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_File_Box);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_Function_Box);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_Graph_Box);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_GridCtrl_Box);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_HyperLink_Box);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_Input_Box);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_Integer_Box);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_Justify_Box);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_Linestyle_Box);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_List_Box);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_ListCtrl_Box);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_Map_File_Box);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_Message_Box);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_Model_Box);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_Name_Box);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_Named_Tick_Box);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_New_Select_Box);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_New_XYZ_Box);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_Plotter_Box);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_Polygon_Box);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_Real_Box);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_Report_Box);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_Select_Box);
      if (lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_Select_Boxes);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_Sheet_Size_Box);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_Source_Box);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_Symbol_Box);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_Tab_Box);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_Target_Box);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_Template_Box);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_Text_Edit_Box);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_Text_Style_Box);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_Texture_Box);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_Tree_Box);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_Tree_Page);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_Tick_Box);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_Tin_Box);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_View_Box);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_XYZ_Box);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_File);
      if (lookahead == '_') ADVANCE(9);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_Map_File);
      if (lookahead == '_') ADVANCE(37);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_Plot_Parameter_File);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_XML_Document);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_XML_Node);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_Connection);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_Select_Query);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_Insert_Query);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_Update_Query);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_Delete_Query);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_Database_Results);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_Transactions);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_Parameter_Collection);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_Query_Condition);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_Manual_Condition);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_Dynamic_Element);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_Dynamic_Integer);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_Dynamic_Real);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_Dynamic_Text);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(846);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
  [12] = {.lex_state = 729},
  [13] = {.lex_state = 729},
  [14] = {.lex_state = 729},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 729},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 729},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym__definition] = STATE(5),
    [sym_function_definition] = STATE(5),
    [sym_primative_type] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(5),
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
    [sym_primative_type] = STATE(12),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
    [anon_sym_Integer] = ACTIONS(9),
    [anon_sym_Real] = ACTIONS(9),
    [anon_sym_Text] = ACTIONS(9),
    [anon_sym_Vector2] = ACTIONS(12),
    [anon_sym_Vector3] = ACTIONS(12),
    [anon_sym_Vector4] = ACTIONS(12),
    [anon_sym_Matrix3] = ACTIONS(12),
    [anon_sym_Matrix4] = ACTIONS(12),
    [anon_sym_Point] = ACTIONS(12),
    [anon_sym_Line] = ACTIONS(9),
    [anon_sym_Arc] = ACTIONS(12),
    [anon_sym_Spiral] = ACTIONS(12),
    [anon_sym_Parabola] = ACTIONS(12),
    [anon_sym_Segment] = ACTIONS(12),
    [anon_sym_Element] = ACTIONS(12),
    [anon_sym_Model] = ACTIONS(9),
    [anon_sym_View] = ACTIONS(9),
    [anon_sym_Macro_Function] = ACTIONS(12),
    [anon_sym_Function] = ACTIONS(9),
    [anon_sym_Uid] = ACTIONS(12),
    [anon_sym_Guid] = ACTIONS(12),
    [anon_sym_Attributes] = ACTIONS(9),
    [anon_sym_SDR_Attribute] = ACTIONS(12),
    [anon_sym_Blob] = ACTIONS(12),
    [anon_sym_Screen_Text] = ACTIONS(12),
    [anon_sym_Textstyle_Data] = ACTIONS(12),
    [anon_sym_Equality_Label] = ACTIONS(12),
    [anon_sym_Undo] = ACTIONS(9),
    [anon_sym_Undo_List] = ACTIONS(12),
    [anon_sym_Widget] = ACTIONS(9),
    [anon_sym_Menu] = ACTIONS(12),
    [anon_sym_Panel] = ACTIONS(12),
    [anon_sym_Overlay_Widget] = ACTIONS(12),
    [anon_sym_Vertical_Group] = ACTIONS(12),
    [anon_sym_Horizontal_Group] = ACTIONS(12),
    [anon_sym_Widget_Pages] = ACTIONS(12),
    [anon_sym_Button] = ACTIONS(12),
    [anon_sym_Select_Button] = ACTIONS(12),
    [anon_sym_Angle_Box] = ACTIONS(12),
    [anon_sym_Attributes_Box] = ACTIONS(12),
    [anon_sym_Billboard_Box] = ACTIONS(12),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(12),
    [anon_sym_Bitmap_List_Box] = ACTIONS(12),
    [anon_sym_Chainage_Box] = ACTIONS(12),
    [anon_sym_Choice_Box] = ACTIONS(12),
    [anon_sym_Colour_Box] = ACTIONS(12),
    [anon_sym_Colour_Message_Box] = ACTIONS(12),
    [anon_sym_Date_Time_Box] = ACTIONS(12),
    [anon_sym_Directory_Box] = ACTIONS(12),
    [anon_sym_Draw_Box] = ACTIONS(12),
    [anon_sym_File_Box] = ACTIONS(12),
    [anon_sym_Function_Box] = ACTIONS(12),
    [anon_sym_Graph_Box] = ACTIONS(12),
    [anon_sym_GridCtrl_Box] = ACTIONS(12),
    [anon_sym_HyperLink_Box] = ACTIONS(12),
    [anon_sym_Input_Box] = ACTIONS(12),
    [anon_sym_Integer_Box] = ACTIONS(12),
    [anon_sym_Justify_Box] = ACTIONS(12),
    [anon_sym_Linestyle_Box] = ACTIONS(12),
    [anon_sym_List_Box] = ACTIONS(12),
    [anon_sym_ListCtrl_Box] = ACTIONS(12),
    [anon_sym_Map_File_Box] = ACTIONS(12),
    [anon_sym_Message_Box] = ACTIONS(12),
    [anon_sym_Model_Box] = ACTIONS(12),
    [anon_sym_Name_Box] = ACTIONS(12),
    [anon_sym_Named_Tick_Box] = ACTIONS(12),
    [anon_sym_New_Select_Box] = ACTIONS(12),
    [anon_sym_New_XYZ_Box] = ACTIONS(12),
    [anon_sym_Plotter_Box] = ACTIONS(12),
    [anon_sym_Polygon_Box] = ACTIONS(12),
    [anon_sym_Real_Box] = ACTIONS(12),
    [anon_sym_Report_Box] = ACTIONS(12),
    [anon_sym_Select_Box] = ACTIONS(9),
    [anon_sym_Select_Boxes] = ACTIONS(12),
    [anon_sym_Sheet_Size_Box] = ACTIONS(12),
    [anon_sym_Source_Box] = ACTIONS(12),
    [anon_sym_Symbol_Box] = ACTIONS(12),
    [anon_sym_Tab_Box] = ACTIONS(12),
    [anon_sym_Target_Box] = ACTIONS(12),
    [anon_sym_Template_Box] = ACTIONS(12),
    [anon_sym_Text_Edit_Box] = ACTIONS(12),
    [anon_sym_Text_Style_Box] = ACTIONS(12),
    [anon_sym_Texture_Box] = ACTIONS(12),
    [anon_sym_Tree_Box] = ACTIONS(12),
    [anon_sym_Tree_Page] = ACTIONS(12),
    [anon_sym_Tick_Box] = ACTIONS(12),
    [anon_sym_Tin_Box] = ACTIONS(12),
    [anon_sym_View_Box] = ACTIONS(12),
    [anon_sym_XYZ_Box] = ACTIONS(12),
    [anon_sym_File] = ACTIONS(9),
    [anon_sym_Map_File] = ACTIONS(9),
    [anon_sym_Plot_Parameter_File] = ACTIONS(12),
    [anon_sym_XML_Document] = ACTIONS(12),
    [anon_sym_XML_Node] = ACTIONS(12),
    [anon_sym_Connection] = ACTIONS(12),
    [anon_sym_Select_Query] = ACTIONS(12),
    [anon_sym_Insert_Query] = ACTIONS(12),
    [anon_sym_Update_Query] = ACTIONS(12),
    [anon_sym_Delete_Query] = ACTIONS(12),
    [anon_sym_Database_Results] = ACTIONS(12),
    [anon_sym_Transactions] = ACTIONS(12),
    [anon_sym_Parameter_Collection] = ACTIONS(12),
    [anon_sym_Query_Condition] = ACTIONS(12),
    [anon_sym_Manual_Condition] = ACTIONS(12),
    [anon_sym_Dynamic_Element] = ACTIONS(12),
    [anon_sym_Dynamic_Integer] = ACTIONS(12),
    [anon_sym_Dynamic_Real] = ACTIONS(12),
    [anon_sym_Dynamic_Text] = ACTIONS(12),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
  },
  [3] = {
    [sym_primative_type] = STATE(12),
    [sym__statement] = STATE(2),
    [sym_return_statement] = STATE(2),
    [sym_declaration] = STATE(2),
    [aux_sym_block_repeat1] = STATE(2),
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
    [anon_sym_RBRACE] = ACTIONS(20),
    [anon_sym_return] = ACTIONS(22),
  },
  [4] = {
    [sym_primative_type] = STATE(12),
    [sym__statement] = STATE(3),
    [sym_return_statement] = STATE(3),
    [sym_declaration] = STATE(3),
    [aux_sym_block_repeat1] = STATE(3),
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
    [anon_sym_RBRACE] = ACTIONS(24),
    [anon_sym_return] = ACTIONS(22),
  },
  [5] = {
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_primative_type] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(26),
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
    [sym__definition] = STATE(6),
    [sym_function_definition] = STATE(6),
    [sym_primative_type] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(28),
    [anon_sym_Integer] = ACTIONS(30),
    [anon_sym_Real] = ACTIONS(30),
    [anon_sym_Text] = ACTIONS(30),
    [anon_sym_Vector2] = ACTIONS(33),
    [anon_sym_Vector3] = ACTIONS(33),
    [anon_sym_Vector4] = ACTIONS(33),
    [anon_sym_Matrix3] = ACTIONS(33),
    [anon_sym_Matrix4] = ACTIONS(33),
    [anon_sym_Point] = ACTIONS(33),
    [anon_sym_Line] = ACTIONS(30),
    [anon_sym_Arc] = ACTIONS(33),
    [anon_sym_Spiral] = ACTIONS(33),
    [anon_sym_Parabola] = ACTIONS(33),
    [anon_sym_Segment] = ACTIONS(33),
    [anon_sym_Element] = ACTIONS(33),
    [anon_sym_Model] = ACTIONS(30),
    [anon_sym_View] = ACTIONS(30),
    [anon_sym_Macro_Function] = ACTIONS(33),
    [anon_sym_Function] = ACTIONS(30),
    [anon_sym_Uid] = ACTIONS(33),
    [anon_sym_Guid] = ACTIONS(33),
    [anon_sym_Attributes] = ACTIONS(30),
    [anon_sym_SDR_Attribute] = ACTIONS(33),
    [anon_sym_Blob] = ACTIONS(33),
    [anon_sym_Screen_Text] = ACTIONS(33),
    [anon_sym_Textstyle_Data] = ACTIONS(33),
    [anon_sym_Equality_Label] = ACTIONS(33),
    [anon_sym_Undo] = ACTIONS(30),
    [anon_sym_Undo_List] = ACTIONS(33),
    [anon_sym_Widget] = ACTIONS(30),
    [anon_sym_Menu] = ACTIONS(33),
    [anon_sym_Panel] = ACTIONS(33),
    [anon_sym_Overlay_Widget] = ACTIONS(33),
    [anon_sym_Vertical_Group] = ACTIONS(33),
    [anon_sym_Horizontal_Group] = ACTIONS(33),
    [anon_sym_Widget_Pages] = ACTIONS(33),
    [anon_sym_Button] = ACTIONS(33),
    [anon_sym_Select_Button] = ACTIONS(33),
    [anon_sym_Angle_Box] = ACTIONS(33),
    [anon_sym_Attributes_Box] = ACTIONS(33),
    [anon_sym_Billboard_Box] = ACTIONS(33),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(33),
    [anon_sym_Bitmap_List_Box] = ACTIONS(33),
    [anon_sym_Chainage_Box] = ACTIONS(33),
    [anon_sym_Choice_Box] = ACTIONS(33),
    [anon_sym_Colour_Box] = ACTIONS(33),
    [anon_sym_Colour_Message_Box] = ACTIONS(33),
    [anon_sym_Date_Time_Box] = ACTIONS(33),
    [anon_sym_Directory_Box] = ACTIONS(33),
    [anon_sym_Draw_Box] = ACTIONS(33),
    [anon_sym_File_Box] = ACTIONS(33),
    [anon_sym_Function_Box] = ACTIONS(33),
    [anon_sym_Graph_Box] = ACTIONS(33),
    [anon_sym_GridCtrl_Box] = ACTIONS(33),
    [anon_sym_HyperLink_Box] = ACTIONS(33),
    [anon_sym_Input_Box] = ACTIONS(33),
    [anon_sym_Integer_Box] = ACTIONS(33),
    [anon_sym_Justify_Box] = ACTIONS(33),
    [anon_sym_Linestyle_Box] = ACTIONS(33),
    [anon_sym_List_Box] = ACTIONS(33),
    [anon_sym_ListCtrl_Box] = ACTIONS(33),
    [anon_sym_Map_File_Box] = ACTIONS(33),
    [anon_sym_Message_Box] = ACTIONS(33),
    [anon_sym_Model_Box] = ACTIONS(33),
    [anon_sym_Name_Box] = ACTIONS(33),
    [anon_sym_Named_Tick_Box] = ACTIONS(33),
    [anon_sym_New_Select_Box] = ACTIONS(33),
    [anon_sym_New_XYZ_Box] = ACTIONS(33),
    [anon_sym_Plotter_Box] = ACTIONS(33),
    [anon_sym_Polygon_Box] = ACTIONS(33),
    [anon_sym_Real_Box] = ACTIONS(33),
    [anon_sym_Report_Box] = ACTIONS(33),
    [anon_sym_Select_Box] = ACTIONS(30),
    [anon_sym_Select_Boxes] = ACTIONS(33),
    [anon_sym_Sheet_Size_Box] = ACTIONS(33),
    [anon_sym_Source_Box] = ACTIONS(33),
    [anon_sym_Symbol_Box] = ACTIONS(33),
    [anon_sym_Tab_Box] = ACTIONS(33),
    [anon_sym_Target_Box] = ACTIONS(33),
    [anon_sym_Template_Box] = ACTIONS(33),
    [anon_sym_Text_Edit_Box] = ACTIONS(33),
    [anon_sym_Text_Style_Box] = ACTIONS(33),
    [anon_sym_Texture_Box] = ACTIONS(33),
    [anon_sym_Tree_Box] = ACTIONS(33),
    [anon_sym_Tree_Page] = ACTIONS(33),
    [anon_sym_Tick_Box] = ACTIONS(33),
    [anon_sym_Tin_Box] = ACTIONS(33),
    [anon_sym_View_Box] = ACTIONS(33),
    [anon_sym_XYZ_Box] = ACTIONS(33),
    [anon_sym_File] = ACTIONS(30),
    [anon_sym_Map_File] = ACTIONS(30),
    [anon_sym_Plot_Parameter_File] = ACTIONS(33),
    [anon_sym_XML_Document] = ACTIONS(33),
    [anon_sym_XML_Node] = ACTIONS(33),
    [anon_sym_Connection] = ACTIONS(33),
    [anon_sym_Select_Query] = ACTIONS(33),
    [anon_sym_Insert_Query] = ACTIONS(33),
    [anon_sym_Update_Query] = ACTIONS(33),
    [anon_sym_Delete_Query] = ACTIONS(33),
    [anon_sym_Database_Results] = ACTIONS(33),
    [anon_sym_Transactions] = ACTIONS(33),
    [anon_sym_Parameter_Collection] = ACTIONS(33),
    [anon_sym_Query_Condition] = ACTIONS(33),
    [anon_sym_Manual_Condition] = ACTIONS(33),
    [anon_sym_Dynamic_Element] = ACTIONS(33),
    [anon_sym_Dynamic_Integer] = ACTIONS(33),
    [anon_sym_Dynamic_Real] = ACTIONS(33),
    [anon_sym_Dynamic_Text] = ACTIONS(33),
  },
  [7] = {
    [anon_sym_Integer] = ACTIONS(36),
    [anon_sym_Real] = ACTIONS(36),
    [anon_sym_Text] = ACTIONS(36),
    [anon_sym_Vector2] = ACTIONS(38),
    [anon_sym_Vector3] = ACTIONS(38),
    [anon_sym_Vector4] = ACTIONS(38),
    [anon_sym_Matrix3] = ACTIONS(38),
    [anon_sym_Matrix4] = ACTIONS(38),
    [anon_sym_Point] = ACTIONS(38),
    [anon_sym_Line] = ACTIONS(36),
    [anon_sym_Arc] = ACTIONS(38),
    [anon_sym_Spiral] = ACTIONS(38),
    [anon_sym_Parabola] = ACTIONS(38),
    [anon_sym_Segment] = ACTIONS(38),
    [anon_sym_Element] = ACTIONS(38),
    [anon_sym_Model] = ACTIONS(36),
    [anon_sym_View] = ACTIONS(36),
    [anon_sym_Macro_Function] = ACTIONS(38),
    [anon_sym_Function] = ACTIONS(36),
    [anon_sym_Uid] = ACTIONS(38),
    [anon_sym_Guid] = ACTIONS(38),
    [anon_sym_Attributes] = ACTIONS(36),
    [anon_sym_SDR_Attribute] = ACTIONS(38),
    [anon_sym_Blob] = ACTIONS(38),
    [anon_sym_Screen_Text] = ACTIONS(38),
    [anon_sym_Textstyle_Data] = ACTIONS(38),
    [anon_sym_Equality_Label] = ACTIONS(38),
    [anon_sym_Undo] = ACTIONS(36),
    [anon_sym_Undo_List] = ACTIONS(38),
    [anon_sym_Widget] = ACTIONS(36),
    [anon_sym_Menu] = ACTIONS(38),
    [anon_sym_Panel] = ACTIONS(38),
    [anon_sym_Overlay_Widget] = ACTIONS(38),
    [anon_sym_Vertical_Group] = ACTIONS(38),
    [anon_sym_Horizontal_Group] = ACTIONS(38),
    [anon_sym_Widget_Pages] = ACTIONS(38),
    [anon_sym_Button] = ACTIONS(38),
    [anon_sym_Select_Button] = ACTIONS(38),
    [anon_sym_Angle_Box] = ACTIONS(38),
    [anon_sym_Attributes_Box] = ACTIONS(38),
    [anon_sym_Billboard_Box] = ACTIONS(38),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(38),
    [anon_sym_Bitmap_List_Box] = ACTIONS(38),
    [anon_sym_Chainage_Box] = ACTIONS(38),
    [anon_sym_Choice_Box] = ACTIONS(38),
    [anon_sym_Colour_Box] = ACTIONS(38),
    [anon_sym_Colour_Message_Box] = ACTIONS(38),
    [anon_sym_Date_Time_Box] = ACTIONS(38),
    [anon_sym_Directory_Box] = ACTIONS(38),
    [anon_sym_Draw_Box] = ACTIONS(38),
    [anon_sym_File_Box] = ACTIONS(38),
    [anon_sym_Function_Box] = ACTIONS(38),
    [anon_sym_Graph_Box] = ACTIONS(38),
    [anon_sym_GridCtrl_Box] = ACTIONS(38),
    [anon_sym_HyperLink_Box] = ACTIONS(38),
    [anon_sym_Input_Box] = ACTIONS(38),
    [anon_sym_Integer_Box] = ACTIONS(38),
    [anon_sym_Justify_Box] = ACTIONS(38),
    [anon_sym_Linestyle_Box] = ACTIONS(38),
    [anon_sym_List_Box] = ACTIONS(38),
    [anon_sym_ListCtrl_Box] = ACTIONS(38),
    [anon_sym_Map_File_Box] = ACTIONS(38),
    [anon_sym_Message_Box] = ACTIONS(38),
    [anon_sym_Model_Box] = ACTIONS(38),
    [anon_sym_Name_Box] = ACTIONS(38),
    [anon_sym_Named_Tick_Box] = ACTIONS(38),
    [anon_sym_New_Select_Box] = ACTIONS(38),
    [anon_sym_New_XYZ_Box] = ACTIONS(38),
    [anon_sym_Plotter_Box] = ACTIONS(38),
    [anon_sym_Polygon_Box] = ACTIONS(38),
    [anon_sym_Real_Box] = ACTIONS(38),
    [anon_sym_Report_Box] = ACTIONS(38),
    [anon_sym_Select_Box] = ACTIONS(36),
    [anon_sym_Select_Boxes] = ACTIONS(38),
    [anon_sym_Sheet_Size_Box] = ACTIONS(38),
    [anon_sym_Source_Box] = ACTIONS(38),
    [anon_sym_Symbol_Box] = ACTIONS(38),
    [anon_sym_Tab_Box] = ACTIONS(38),
    [anon_sym_Target_Box] = ACTIONS(38),
    [anon_sym_Template_Box] = ACTIONS(38),
    [anon_sym_Text_Edit_Box] = ACTIONS(38),
    [anon_sym_Text_Style_Box] = ACTIONS(38),
    [anon_sym_Texture_Box] = ACTIONS(38),
    [anon_sym_Tree_Box] = ACTIONS(38),
    [anon_sym_Tree_Page] = ACTIONS(38),
    [anon_sym_Tick_Box] = ACTIONS(38),
    [anon_sym_Tin_Box] = ACTIONS(38),
    [anon_sym_View_Box] = ACTIONS(38),
    [anon_sym_XYZ_Box] = ACTIONS(38),
    [anon_sym_File] = ACTIONS(36),
    [anon_sym_Map_File] = ACTIONS(36),
    [anon_sym_Plot_Parameter_File] = ACTIONS(38),
    [anon_sym_XML_Document] = ACTIONS(38),
    [anon_sym_XML_Node] = ACTIONS(38),
    [anon_sym_Connection] = ACTIONS(38),
    [anon_sym_Select_Query] = ACTIONS(38),
    [anon_sym_Insert_Query] = ACTIONS(38),
    [anon_sym_Update_Query] = ACTIONS(38),
    [anon_sym_Delete_Query] = ACTIONS(38),
    [anon_sym_Database_Results] = ACTIONS(38),
    [anon_sym_Transactions] = ACTIONS(38),
    [anon_sym_Parameter_Collection] = ACTIONS(38),
    [anon_sym_Query_Condition] = ACTIONS(38),
    [anon_sym_Manual_Condition] = ACTIONS(38),
    [anon_sym_Dynamic_Element] = ACTIONS(38),
    [anon_sym_Dynamic_Integer] = ACTIONS(38),
    [anon_sym_Dynamic_Real] = ACTIONS(38),
    [anon_sym_Dynamic_Text] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_return] = ACTIONS(38),
  },
  [8] = {
    [anon_sym_Integer] = ACTIONS(40),
    [anon_sym_Real] = ACTIONS(40),
    [anon_sym_Text] = ACTIONS(40),
    [anon_sym_Vector2] = ACTIONS(42),
    [anon_sym_Vector3] = ACTIONS(42),
    [anon_sym_Vector4] = ACTIONS(42),
    [anon_sym_Matrix3] = ACTIONS(42),
    [anon_sym_Matrix4] = ACTIONS(42),
    [anon_sym_Point] = ACTIONS(42),
    [anon_sym_Line] = ACTIONS(40),
    [anon_sym_Arc] = ACTIONS(42),
    [anon_sym_Spiral] = ACTIONS(42),
    [anon_sym_Parabola] = ACTIONS(42),
    [anon_sym_Segment] = ACTIONS(42),
    [anon_sym_Element] = ACTIONS(42),
    [anon_sym_Model] = ACTIONS(40),
    [anon_sym_View] = ACTIONS(40),
    [anon_sym_Macro_Function] = ACTIONS(42),
    [anon_sym_Function] = ACTIONS(40),
    [anon_sym_Uid] = ACTIONS(42),
    [anon_sym_Guid] = ACTIONS(42),
    [anon_sym_Attributes] = ACTIONS(40),
    [anon_sym_SDR_Attribute] = ACTIONS(42),
    [anon_sym_Blob] = ACTIONS(42),
    [anon_sym_Screen_Text] = ACTIONS(42),
    [anon_sym_Textstyle_Data] = ACTIONS(42),
    [anon_sym_Equality_Label] = ACTIONS(42),
    [anon_sym_Undo] = ACTIONS(40),
    [anon_sym_Undo_List] = ACTIONS(42),
    [anon_sym_Widget] = ACTIONS(40),
    [anon_sym_Menu] = ACTIONS(42),
    [anon_sym_Panel] = ACTIONS(42),
    [anon_sym_Overlay_Widget] = ACTIONS(42),
    [anon_sym_Vertical_Group] = ACTIONS(42),
    [anon_sym_Horizontal_Group] = ACTIONS(42),
    [anon_sym_Widget_Pages] = ACTIONS(42),
    [anon_sym_Button] = ACTIONS(42),
    [anon_sym_Select_Button] = ACTIONS(42),
    [anon_sym_Angle_Box] = ACTIONS(42),
    [anon_sym_Attributes_Box] = ACTIONS(42),
    [anon_sym_Billboard_Box] = ACTIONS(42),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(42),
    [anon_sym_Bitmap_List_Box] = ACTIONS(42),
    [anon_sym_Chainage_Box] = ACTIONS(42),
    [anon_sym_Choice_Box] = ACTIONS(42),
    [anon_sym_Colour_Box] = ACTIONS(42),
    [anon_sym_Colour_Message_Box] = ACTIONS(42),
    [anon_sym_Date_Time_Box] = ACTIONS(42),
    [anon_sym_Directory_Box] = ACTIONS(42),
    [anon_sym_Draw_Box] = ACTIONS(42),
    [anon_sym_File_Box] = ACTIONS(42),
    [anon_sym_Function_Box] = ACTIONS(42),
    [anon_sym_Graph_Box] = ACTIONS(42),
    [anon_sym_GridCtrl_Box] = ACTIONS(42),
    [anon_sym_HyperLink_Box] = ACTIONS(42),
    [anon_sym_Input_Box] = ACTIONS(42),
    [anon_sym_Integer_Box] = ACTIONS(42),
    [anon_sym_Justify_Box] = ACTIONS(42),
    [anon_sym_Linestyle_Box] = ACTIONS(42),
    [anon_sym_List_Box] = ACTIONS(42),
    [anon_sym_ListCtrl_Box] = ACTIONS(42),
    [anon_sym_Map_File_Box] = ACTIONS(42),
    [anon_sym_Message_Box] = ACTIONS(42),
    [anon_sym_Model_Box] = ACTIONS(42),
    [anon_sym_Name_Box] = ACTIONS(42),
    [anon_sym_Named_Tick_Box] = ACTIONS(42),
    [anon_sym_New_Select_Box] = ACTIONS(42),
    [anon_sym_New_XYZ_Box] = ACTIONS(42),
    [anon_sym_Plotter_Box] = ACTIONS(42),
    [anon_sym_Polygon_Box] = ACTIONS(42),
    [anon_sym_Real_Box] = ACTIONS(42),
    [anon_sym_Report_Box] = ACTIONS(42),
    [anon_sym_Select_Box] = ACTIONS(40),
    [anon_sym_Select_Boxes] = ACTIONS(42),
    [anon_sym_Sheet_Size_Box] = ACTIONS(42),
    [anon_sym_Source_Box] = ACTIONS(42),
    [anon_sym_Symbol_Box] = ACTIONS(42),
    [anon_sym_Tab_Box] = ACTIONS(42),
    [anon_sym_Target_Box] = ACTIONS(42),
    [anon_sym_Template_Box] = ACTIONS(42),
    [anon_sym_Text_Edit_Box] = ACTIONS(42),
    [anon_sym_Text_Style_Box] = ACTIONS(42),
    [anon_sym_Texture_Box] = ACTIONS(42),
    [anon_sym_Tree_Box] = ACTIONS(42),
    [anon_sym_Tree_Page] = ACTIONS(42),
    [anon_sym_Tick_Box] = ACTIONS(42),
    [anon_sym_Tin_Box] = ACTIONS(42),
    [anon_sym_View_Box] = ACTIONS(42),
    [anon_sym_XYZ_Box] = ACTIONS(42),
    [anon_sym_File] = ACTIONS(40),
    [anon_sym_Map_File] = ACTIONS(40),
    [anon_sym_Plot_Parameter_File] = ACTIONS(42),
    [anon_sym_XML_Document] = ACTIONS(42),
    [anon_sym_XML_Node] = ACTIONS(42),
    [anon_sym_Connection] = ACTIONS(42),
    [anon_sym_Select_Query] = ACTIONS(42),
    [anon_sym_Insert_Query] = ACTIONS(42),
    [anon_sym_Update_Query] = ACTIONS(42),
    [anon_sym_Delete_Query] = ACTIONS(42),
    [anon_sym_Database_Results] = ACTIONS(42),
    [anon_sym_Transactions] = ACTIONS(42),
    [anon_sym_Parameter_Collection] = ACTIONS(42),
    [anon_sym_Query_Condition] = ACTIONS(42),
    [anon_sym_Manual_Condition] = ACTIONS(42),
    [anon_sym_Dynamic_Element] = ACTIONS(42),
    [anon_sym_Dynamic_Integer] = ACTIONS(42),
    [anon_sym_Dynamic_Real] = ACTIONS(42),
    [anon_sym_Dynamic_Text] = ACTIONS(42),
    [anon_sym_RBRACE] = ACTIONS(42),
    [anon_sym_return] = ACTIONS(42),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_Integer] = ACTIONS(46),
    [anon_sym_Real] = ACTIONS(46),
    [anon_sym_Text] = ACTIONS(46),
    [anon_sym_Vector2] = ACTIONS(44),
    [anon_sym_Vector3] = ACTIONS(44),
    [anon_sym_Vector4] = ACTIONS(44),
    [anon_sym_Matrix3] = ACTIONS(44),
    [anon_sym_Matrix4] = ACTIONS(44),
    [anon_sym_Point] = ACTIONS(44),
    [anon_sym_Line] = ACTIONS(46),
    [anon_sym_Arc] = ACTIONS(44),
    [anon_sym_Spiral] = ACTIONS(44),
    [anon_sym_Parabola] = ACTIONS(44),
    [anon_sym_Segment] = ACTIONS(44),
    [anon_sym_Element] = ACTIONS(44),
    [anon_sym_Model] = ACTIONS(46),
    [anon_sym_View] = ACTIONS(46),
    [anon_sym_Macro_Function] = ACTIONS(44),
    [anon_sym_Function] = ACTIONS(46),
    [anon_sym_Uid] = ACTIONS(44),
    [anon_sym_Guid] = ACTIONS(44),
    [anon_sym_Attributes] = ACTIONS(46),
    [anon_sym_SDR_Attribute] = ACTIONS(44),
    [anon_sym_Blob] = ACTIONS(44),
    [anon_sym_Screen_Text] = ACTIONS(44),
    [anon_sym_Textstyle_Data] = ACTIONS(44),
    [anon_sym_Equality_Label] = ACTIONS(44),
    [anon_sym_Undo] = ACTIONS(46),
    [anon_sym_Undo_List] = ACTIONS(44),
    [anon_sym_Widget] = ACTIONS(46),
    [anon_sym_Menu] = ACTIONS(44),
    [anon_sym_Panel] = ACTIONS(44),
    [anon_sym_Overlay_Widget] = ACTIONS(44),
    [anon_sym_Vertical_Group] = ACTIONS(44),
    [anon_sym_Horizontal_Group] = ACTIONS(44),
    [anon_sym_Widget_Pages] = ACTIONS(44),
    [anon_sym_Button] = ACTIONS(44),
    [anon_sym_Select_Button] = ACTIONS(44),
    [anon_sym_Angle_Box] = ACTIONS(44),
    [anon_sym_Attributes_Box] = ACTIONS(44),
    [anon_sym_Billboard_Box] = ACTIONS(44),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(44),
    [anon_sym_Bitmap_List_Box] = ACTIONS(44),
    [anon_sym_Chainage_Box] = ACTIONS(44),
    [anon_sym_Choice_Box] = ACTIONS(44),
    [anon_sym_Colour_Box] = ACTIONS(44),
    [anon_sym_Colour_Message_Box] = ACTIONS(44),
    [anon_sym_Date_Time_Box] = ACTIONS(44),
    [anon_sym_Directory_Box] = ACTIONS(44),
    [anon_sym_Draw_Box] = ACTIONS(44),
    [anon_sym_File_Box] = ACTIONS(44),
    [anon_sym_Function_Box] = ACTIONS(44),
    [anon_sym_Graph_Box] = ACTIONS(44),
    [anon_sym_GridCtrl_Box] = ACTIONS(44),
    [anon_sym_HyperLink_Box] = ACTIONS(44),
    [anon_sym_Input_Box] = ACTIONS(44),
    [anon_sym_Integer_Box] = ACTIONS(44),
    [anon_sym_Justify_Box] = ACTIONS(44),
    [anon_sym_Linestyle_Box] = ACTIONS(44),
    [anon_sym_List_Box] = ACTIONS(44),
    [anon_sym_ListCtrl_Box] = ACTIONS(44),
    [anon_sym_Map_File_Box] = ACTIONS(44),
    [anon_sym_Message_Box] = ACTIONS(44),
    [anon_sym_Model_Box] = ACTIONS(44),
    [anon_sym_Name_Box] = ACTIONS(44),
    [anon_sym_Named_Tick_Box] = ACTIONS(44),
    [anon_sym_New_Select_Box] = ACTIONS(44),
    [anon_sym_New_XYZ_Box] = ACTIONS(44),
    [anon_sym_Plotter_Box] = ACTIONS(44),
    [anon_sym_Polygon_Box] = ACTIONS(44),
    [anon_sym_Real_Box] = ACTIONS(44),
    [anon_sym_Report_Box] = ACTIONS(44),
    [anon_sym_Select_Box] = ACTIONS(46),
    [anon_sym_Select_Boxes] = ACTIONS(44),
    [anon_sym_Sheet_Size_Box] = ACTIONS(44),
    [anon_sym_Source_Box] = ACTIONS(44),
    [anon_sym_Symbol_Box] = ACTIONS(44),
    [anon_sym_Tab_Box] = ACTIONS(44),
    [anon_sym_Target_Box] = ACTIONS(44),
    [anon_sym_Template_Box] = ACTIONS(44),
    [anon_sym_Text_Edit_Box] = ACTIONS(44),
    [anon_sym_Text_Style_Box] = ACTIONS(44),
    [anon_sym_Texture_Box] = ACTIONS(44),
    [anon_sym_Tree_Box] = ACTIONS(44),
    [anon_sym_Tree_Page] = ACTIONS(44),
    [anon_sym_Tick_Box] = ACTIONS(44),
    [anon_sym_Tin_Box] = ACTIONS(44),
    [anon_sym_View_Box] = ACTIONS(44),
    [anon_sym_XYZ_Box] = ACTIONS(44),
    [anon_sym_File] = ACTIONS(46),
    [anon_sym_Map_File] = ACTIONS(46),
    [anon_sym_Plot_Parameter_File] = ACTIONS(44),
    [anon_sym_XML_Document] = ACTIONS(44),
    [anon_sym_XML_Node] = ACTIONS(44),
    [anon_sym_Connection] = ACTIONS(44),
    [anon_sym_Select_Query] = ACTIONS(44),
    [anon_sym_Insert_Query] = ACTIONS(44),
    [anon_sym_Update_Query] = ACTIONS(44),
    [anon_sym_Delete_Query] = ACTIONS(44),
    [anon_sym_Database_Results] = ACTIONS(44),
    [anon_sym_Transactions] = ACTIONS(44),
    [anon_sym_Parameter_Collection] = ACTIONS(44),
    [anon_sym_Query_Condition] = ACTIONS(44),
    [anon_sym_Manual_Condition] = ACTIONS(44),
    [anon_sym_Dynamic_Element] = ACTIONS(44),
    [anon_sym_Dynamic_Integer] = ACTIONS(44),
    [anon_sym_Dynamic_Real] = ACTIONS(44),
    [anon_sym_Dynamic_Text] = ACTIONS(44),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [anon_sym_Integer] = ACTIONS(50),
    [anon_sym_Real] = ACTIONS(50),
    [anon_sym_Text] = ACTIONS(50),
    [anon_sym_Vector2] = ACTIONS(48),
    [anon_sym_Vector3] = ACTIONS(48),
    [anon_sym_Vector4] = ACTIONS(48),
    [anon_sym_Matrix3] = ACTIONS(48),
    [anon_sym_Matrix4] = ACTIONS(48),
    [anon_sym_Point] = ACTIONS(48),
    [anon_sym_Line] = ACTIONS(50),
    [anon_sym_Arc] = ACTIONS(48),
    [anon_sym_Spiral] = ACTIONS(48),
    [anon_sym_Parabola] = ACTIONS(48),
    [anon_sym_Segment] = ACTIONS(48),
    [anon_sym_Element] = ACTIONS(48),
    [anon_sym_Model] = ACTIONS(50),
    [anon_sym_View] = ACTIONS(50),
    [anon_sym_Macro_Function] = ACTIONS(48),
    [anon_sym_Function] = ACTIONS(50),
    [anon_sym_Uid] = ACTIONS(48),
    [anon_sym_Guid] = ACTIONS(48),
    [anon_sym_Attributes] = ACTIONS(50),
    [anon_sym_SDR_Attribute] = ACTIONS(48),
    [anon_sym_Blob] = ACTIONS(48),
    [anon_sym_Screen_Text] = ACTIONS(48),
    [anon_sym_Textstyle_Data] = ACTIONS(48),
    [anon_sym_Equality_Label] = ACTIONS(48),
    [anon_sym_Undo] = ACTIONS(50),
    [anon_sym_Undo_List] = ACTIONS(48),
    [anon_sym_Widget] = ACTIONS(50),
    [anon_sym_Menu] = ACTIONS(48),
    [anon_sym_Panel] = ACTIONS(48),
    [anon_sym_Overlay_Widget] = ACTIONS(48),
    [anon_sym_Vertical_Group] = ACTIONS(48),
    [anon_sym_Horizontal_Group] = ACTIONS(48),
    [anon_sym_Widget_Pages] = ACTIONS(48),
    [anon_sym_Button] = ACTIONS(48),
    [anon_sym_Select_Button] = ACTIONS(48),
    [anon_sym_Angle_Box] = ACTIONS(48),
    [anon_sym_Attributes_Box] = ACTIONS(48),
    [anon_sym_Billboard_Box] = ACTIONS(48),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(48),
    [anon_sym_Bitmap_List_Box] = ACTIONS(48),
    [anon_sym_Chainage_Box] = ACTIONS(48),
    [anon_sym_Choice_Box] = ACTIONS(48),
    [anon_sym_Colour_Box] = ACTIONS(48),
    [anon_sym_Colour_Message_Box] = ACTIONS(48),
    [anon_sym_Date_Time_Box] = ACTIONS(48),
    [anon_sym_Directory_Box] = ACTIONS(48),
    [anon_sym_Draw_Box] = ACTIONS(48),
    [anon_sym_File_Box] = ACTIONS(48),
    [anon_sym_Function_Box] = ACTIONS(48),
    [anon_sym_Graph_Box] = ACTIONS(48),
    [anon_sym_GridCtrl_Box] = ACTIONS(48),
    [anon_sym_HyperLink_Box] = ACTIONS(48),
    [anon_sym_Input_Box] = ACTIONS(48),
    [anon_sym_Integer_Box] = ACTIONS(48),
    [anon_sym_Justify_Box] = ACTIONS(48),
    [anon_sym_Linestyle_Box] = ACTIONS(48),
    [anon_sym_List_Box] = ACTIONS(48),
    [anon_sym_ListCtrl_Box] = ACTIONS(48),
    [anon_sym_Map_File_Box] = ACTIONS(48),
    [anon_sym_Message_Box] = ACTIONS(48),
    [anon_sym_Model_Box] = ACTIONS(48),
    [anon_sym_Name_Box] = ACTIONS(48),
    [anon_sym_Named_Tick_Box] = ACTIONS(48),
    [anon_sym_New_Select_Box] = ACTIONS(48),
    [anon_sym_New_XYZ_Box] = ACTIONS(48),
    [anon_sym_Plotter_Box] = ACTIONS(48),
    [anon_sym_Polygon_Box] = ACTIONS(48),
    [anon_sym_Real_Box] = ACTIONS(48),
    [anon_sym_Report_Box] = ACTIONS(48),
    [anon_sym_Select_Box] = ACTIONS(50),
    [anon_sym_Select_Boxes] = ACTIONS(48),
    [anon_sym_Sheet_Size_Box] = ACTIONS(48),
    [anon_sym_Source_Box] = ACTIONS(48),
    [anon_sym_Symbol_Box] = ACTIONS(48),
    [anon_sym_Tab_Box] = ACTIONS(48),
    [anon_sym_Target_Box] = ACTIONS(48),
    [anon_sym_Template_Box] = ACTIONS(48),
    [anon_sym_Text_Edit_Box] = ACTIONS(48),
    [anon_sym_Text_Style_Box] = ACTIONS(48),
    [anon_sym_Texture_Box] = ACTIONS(48),
    [anon_sym_Tree_Box] = ACTIONS(48),
    [anon_sym_Tree_Page] = ACTIONS(48),
    [anon_sym_Tick_Box] = ACTIONS(48),
    [anon_sym_Tin_Box] = ACTIONS(48),
    [anon_sym_View_Box] = ACTIONS(48),
    [anon_sym_XYZ_Box] = ACTIONS(48),
    [anon_sym_File] = ACTIONS(50),
    [anon_sym_Map_File] = ACTIONS(50),
    [anon_sym_Plot_Parameter_File] = ACTIONS(48),
    [anon_sym_XML_Document] = ACTIONS(48),
    [anon_sym_XML_Node] = ACTIONS(48),
    [anon_sym_Connection] = ACTIONS(48),
    [anon_sym_Select_Query] = ACTIONS(48),
    [anon_sym_Insert_Query] = ACTIONS(48),
    [anon_sym_Update_Query] = ACTIONS(48),
    [anon_sym_Delete_Query] = ACTIONS(48),
    [anon_sym_Database_Results] = ACTIONS(48),
    [anon_sym_Transactions] = ACTIONS(48),
    [anon_sym_Parameter_Collection] = ACTIONS(48),
    [anon_sym_Query_Condition] = ACTIONS(48),
    [anon_sym_Manual_Condition] = ACTIONS(48),
    [anon_sym_Dynamic_Element] = ACTIONS(48),
    [anon_sym_Dynamic_Integer] = ACTIONS(48),
    [anon_sym_Dynamic_Real] = ACTIONS(48),
    [anon_sym_Dynamic_Text] = ACTIONS(48),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_Integer] = ACTIONS(54),
    [anon_sym_Real] = ACTIONS(54),
    [anon_sym_Text] = ACTIONS(54),
    [anon_sym_Vector2] = ACTIONS(52),
    [anon_sym_Vector3] = ACTIONS(52),
    [anon_sym_Vector4] = ACTIONS(52),
    [anon_sym_Matrix3] = ACTIONS(52),
    [anon_sym_Matrix4] = ACTIONS(52),
    [anon_sym_Point] = ACTIONS(52),
    [anon_sym_Line] = ACTIONS(54),
    [anon_sym_Arc] = ACTIONS(52),
    [anon_sym_Spiral] = ACTIONS(52),
    [anon_sym_Parabola] = ACTIONS(52),
    [anon_sym_Segment] = ACTIONS(52),
    [anon_sym_Element] = ACTIONS(52),
    [anon_sym_Model] = ACTIONS(54),
    [anon_sym_View] = ACTIONS(54),
    [anon_sym_Macro_Function] = ACTIONS(52),
    [anon_sym_Function] = ACTIONS(54),
    [anon_sym_Uid] = ACTIONS(52),
    [anon_sym_Guid] = ACTIONS(52),
    [anon_sym_Attributes] = ACTIONS(54),
    [anon_sym_SDR_Attribute] = ACTIONS(52),
    [anon_sym_Blob] = ACTIONS(52),
    [anon_sym_Screen_Text] = ACTIONS(52),
    [anon_sym_Textstyle_Data] = ACTIONS(52),
    [anon_sym_Equality_Label] = ACTIONS(52),
    [anon_sym_Undo] = ACTIONS(54),
    [anon_sym_Undo_List] = ACTIONS(52),
    [anon_sym_Widget] = ACTIONS(54),
    [anon_sym_Menu] = ACTIONS(52),
    [anon_sym_Panel] = ACTIONS(52),
    [anon_sym_Overlay_Widget] = ACTIONS(52),
    [anon_sym_Vertical_Group] = ACTIONS(52),
    [anon_sym_Horizontal_Group] = ACTIONS(52),
    [anon_sym_Widget_Pages] = ACTIONS(52),
    [anon_sym_Button] = ACTIONS(52),
    [anon_sym_Select_Button] = ACTIONS(52),
    [anon_sym_Angle_Box] = ACTIONS(52),
    [anon_sym_Attributes_Box] = ACTIONS(52),
    [anon_sym_Billboard_Box] = ACTIONS(52),
    [anon_sym_Bitmap_Fill_Box] = ACTIONS(52),
    [anon_sym_Bitmap_List_Box] = ACTIONS(52),
    [anon_sym_Chainage_Box] = ACTIONS(52),
    [anon_sym_Choice_Box] = ACTIONS(52),
    [anon_sym_Colour_Box] = ACTIONS(52),
    [anon_sym_Colour_Message_Box] = ACTIONS(52),
    [anon_sym_Date_Time_Box] = ACTIONS(52),
    [anon_sym_Directory_Box] = ACTIONS(52),
    [anon_sym_Draw_Box] = ACTIONS(52),
    [anon_sym_File_Box] = ACTIONS(52),
    [anon_sym_Function_Box] = ACTIONS(52),
    [anon_sym_Graph_Box] = ACTIONS(52),
    [anon_sym_GridCtrl_Box] = ACTIONS(52),
    [anon_sym_HyperLink_Box] = ACTIONS(52),
    [anon_sym_Input_Box] = ACTIONS(52),
    [anon_sym_Integer_Box] = ACTIONS(52),
    [anon_sym_Justify_Box] = ACTIONS(52),
    [anon_sym_Linestyle_Box] = ACTIONS(52),
    [anon_sym_List_Box] = ACTIONS(52),
    [anon_sym_ListCtrl_Box] = ACTIONS(52),
    [anon_sym_Map_File_Box] = ACTIONS(52),
    [anon_sym_Message_Box] = ACTIONS(52),
    [anon_sym_Model_Box] = ACTIONS(52),
    [anon_sym_Name_Box] = ACTIONS(52),
    [anon_sym_Named_Tick_Box] = ACTIONS(52),
    [anon_sym_New_Select_Box] = ACTIONS(52),
    [anon_sym_New_XYZ_Box] = ACTIONS(52),
    [anon_sym_Plotter_Box] = ACTIONS(52),
    [anon_sym_Polygon_Box] = ACTIONS(52),
    [anon_sym_Real_Box] = ACTIONS(52),
    [anon_sym_Report_Box] = ACTIONS(52),
    [anon_sym_Select_Box] = ACTIONS(54),
    [anon_sym_Select_Boxes] = ACTIONS(52),
    [anon_sym_Sheet_Size_Box] = ACTIONS(52),
    [anon_sym_Source_Box] = ACTIONS(52),
    [anon_sym_Symbol_Box] = ACTIONS(52),
    [anon_sym_Tab_Box] = ACTIONS(52),
    [anon_sym_Target_Box] = ACTIONS(52),
    [anon_sym_Template_Box] = ACTIONS(52),
    [anon_sym_Text_Edit_Box] = ACTIONS(52),
    [anon_sym_Text_Style_Box] = ACTIONS(52),
    [anon_sym_Texture_Box] = ACTIONS(52),
    [anon_sym_Tree_Box] = ACTIONS(52),
    [anon_sym_Tree_Page] = ACTIONS(52),
    [anon_sym_Tick_Box] = ACTIONS(52),
    [anon_sym_Tin_Box] = ACTIONS(52),
    [anon_sym_View_Box] = ACTIONS(52),
    [anon_sym_XYZ_Box] = ACTIONS(52),
    [anon_sym_File] = ACTIONS(54),
    [anon_sym_Map_File] = ACTIONS(54),
    [anon_sym_Plot_Parameter_File] = ACTIONS(52),
    [anon_sym_XML_Document] = ACTIONS(52),
    [anon_sym_XML_Node] = ACTIONS(52),
    [anon_sym_Connection] = ACTIONS(52),
    [anon_sym_Select_Query] = ACTIONS(52),
    [anon_sym_Insert_Query] = ACTIONS(52),
    [anon_sym_Update_Query] = ACTIONS(52),
    [anon_sym_Delete_Query] = ACTIONS(52),
    [anon_sym_Database_Results] = ACTIONS(52),
    [anon_sym_Transactions] = ACTIONS(52),
    [anon_sym_Parameter_Collection] = ACTIONS(52),
    [anon_sym_Query_Condition] = ACTIONS(52),
    [anon_sym_Manual_Condition] = ACTIONS(52),
    [anon_sym_Dynamic_Element] = ACTIONS(52),
    [anon_sym_Dynamic_Integer] = ACTIONS(52),
    [anon_sym_Dynamic_Real] = ACTIONS(52),
    [anon_sym_Dynamic_Text] = ACTIONS(52),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(16), 2,
      sym_array_declarator,
      sym__declarator,
  [8] = 2,
    STATE(25), 1,
      sym__expression,
    ACTIONS(58), 2,
      sym_identifier,
      sym_number,
  [16] = 2,
    STATE(20), 1,
      sym__expression,
    ACTIONS(60), 2,
      sym_identifier,
      sym_number,
  [24] = 2,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_parameter_list,
  [31] = 2,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
  [38] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_block,
  [45] = 1,
    ACTIONS(70), 2,
      anon_sym_SEMI,
      anon_sym_LBRACK,
  [50] = 1,
    ACTIONS(72), 1,
      sym_identifier,
  [54] = 1,
    ACTIONS(74), 1,
      anon_sym_SEMI,
  [58] = 1,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
  [62] = 1,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
  [66] = 1,
    ACTIONS(80), 1,
      sym_identifier,
  [70] = 1,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
  [74] = 1,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 8,
  [SMALL_STATE(14)] = 16,
  [SMALL_STATE(15)] = 24,
  [SMALL_STATE(16)] = 31,
  [SMALL_STATE(17)] = 38,
  [SMALL_STATE(18)] = 45,
  [SMALL_STATE(19)] = 50,
  [SMALL_STATE(20)] = 54,
  [SMALL_STATE(21)] = 58,
  [SMALL_STATE(22)] = 62,
  [SMALL_STATE(23)] = 66,
  [SMALL_STATE(24)] = 70,
  [SMALL_STATE(25)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_declarator, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primative_type, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
