#include "set_ups.h"
#define MACRO_NAME "Segmentize"

void Expire() {
    Integer d = 0;
    Integer m = 0;
    Integer y = 0;
    Date(d, m, y);
    if(y > 2022) {
        Exit("");
    }
}

void CleanModel(Model &model) {
	Dynamic_Element elts;
	Integer numOfElts = 0;
	Get_elements(model, elts, numOfElts);
 	Element elt;
	Integer cntr = 1;
	while(cntr <= numOfElts){
		Get_item(elts, cntr, elt);
		Element_delete(elt);
		cntr++;
	}
	Null(elt);
	Null(elts);
}

void CreateSegment(Element elt, Model &model, Integer bdy1, Integer bdy2){
	Element newString;
	Element_duplicate(elt, newString);
	
	Set_model(newString, model);

	// Remove LHS
	Super_remove_vertex(newString, 1, bdy1 - 1);
	
	// Remove RHS
	Integer numPts = 0;
	Get_points(newString, numPts);
	
	// Adjust bdy2 for the number of vertices removed
	bdy2 -= bdy1 - 1;
	Super_remove_vertex(newString, bdy2 + 1, numPts - bdy2);
	
	Calc_extent(newString);
}

void Segmentize(Dynamic_Element elts, Model &targetModel) {
    Integer numOfElts = 0;
    Get_number_of_items(elts, numOfElts);
    for(Integer i = 1; i <= numOfElts; i++) {
        Element elt;
        Get_item(elts, i, elt);

        Text eltType = "";
        Get_type(elt, eltType);
        if(eltType != "Super") {
            Element newString;
	        Element_duplicate(elt, newString);
            Set_model(newString, targetModel);
            Calc_extent(newString);
            continue;
        }

        Integer numOfPts = 0;
        Get_points(elt, numOfPts);
        for(Integer pt = 1; pt < numOfPts; pt++) { 
            Integer ptr1 = pt;
            Integer ptr2 = ptr1 + 1;
            CreateSegment(elt, targetModel, ptr1, ptr2);
        }
    }
}

void MakeSegments(Source_Box &srcBox, Model_Box &modelBox, Colour_Message_Box &msgBox) {
    Dynamic_Element elts;
    if(Validate(srcBox, elts) != 1) {
        Set_data(msgBox, "Error, please select a valid element source\n", 3);
        return;
    }

    Model targetModel;
    if(Validate(modelBox, GET_MODEL_CREATE, targetModel) != MODEL_EXISTS) {
        Set_data(msgBox, "Error, please select a valid target model\n", 3);
        return;
    }

    CleanModel(targetModel);
    Segmentize(elts, targetModel);

    Set_data(msgBox, "Success!\n", 1);
}

void main() {
    Expire();
    
    Integer wdgtID = 0;
    Text wdgtCMD = "", wdgtMSG = "";

    Vertical_Group grpVMain = Create_vertical_group(1);
    Vertical_Group grpVMsgBox = Create_vertical_group(1);

    Integer isResizeable = TRUE;
    Panel panel = Create_panel(MACRO_NAME, isResizeable);
    
    Colour_Message_Box msgBox = Create_colour_message_box("");
    Source_Box srcBox = Create_source_box("", msgBox, 0);
    Model_Box modelBox = Create_model_box("Target model", msgBox, GET_MODEL_CREATE);

    Button btnFinish = Create_finish_button("Finish", "cmdFinish");
    Button btnHelp = Create_button("Help", "cmdHelp");
    Button btnRun = Create_button("Run", "cmdRun");
    Horizontal_Group grpHBtns = Create_button_group();
    Append(btnRun, grpHBtns);
    Append(btnFinish, grpHBtns);

    Set_gap(grpVMain, 5);

    Append(srcBox, grpVMain);
    Append(modelBox, grpVMain);
    Append(msgBox, grpVMsgBox);
    Append(grpVMsgBox, grpVMain);
    Append(grpHBtns, grpVMain);
    Append(grpVMain, panel);

    Show_widget(panel);
    
    Clear_console();
    
    while(TRUE) {
        Integer wowRet = Wait_on_widgets(wdgtID, wdgtCMD, wdgtMSG);
        
        switch(wdgtID) {
            case Get_id(panel): {
                if(wdgtCMD == "Panel Quit"){
                    return;
                }
            }

            case Get_id(btnFinish): {
                if(wdgtCMD == "cmdFinish"){
                    return;
                }
            }

            case Get_id(btnRun): {
                if(wdgtCMD == "cmdRun"){
                    Set_data(msgBox, "Running...\n");
                    MakeSegments(srcBox, modelBox, msgBox);

                    break;
                }
            }
        }
    }
}
