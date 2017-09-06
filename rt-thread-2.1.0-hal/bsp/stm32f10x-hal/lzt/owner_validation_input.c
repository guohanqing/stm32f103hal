/*********************************************************************
*                                                                    *
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                                                                    *
**********************************************************************
*                                                                    *
* C-file generated by:                                               *
*                                                                    *
*        GUI_Builder for emWin version 5.28                          *
*        Compiled Jan 30 2015, 16:41:06                              *
*        (c) 2015 Segger Microcontroller GmbH & Co. KG               *
*                                                                    *
**********************************************************************
*                                                                    *
*        Internet: www.segger.com  Support: support@segger.com       *
*                                                                    *
**********************************************************************
*/

// USER START (Optionally insert additional includes)
// USER END

#include "DIALOG.h"
#include "app.h"
/*********************************************************************
*
*       Defines
*
**********************************************************************
*/
#define ID_WINDOW_OWNER_VALIDATION                             (GUI_ID_USER + 0x15)
#define ID_TEXT_OWNER_VALIDATION_NUMBER_TIP     		        (GUI_ID_USER + 0x16)
#define ID_EDIT_OWNER_VALIDATION_NUMBER     		            (GUI_ID_USER + 0x17)
#define ID_BUTTON_OWNER_VALIDATION_CANCEL                      (GUI_ID_USER + 0x18)
#define ID_BUTTON_OWNER_VALIDATION_SEND                        (GUI_ID_USER + 0x19)

// USER START (Optionally insert additional defines)
// USER END

/*********************************************************************
*
*       Static data
*
**********************************************************************
*/

// USER START (Optionally insert additional static data)
// USER END

/*********************************************************************
*
*       _aDialogCreate
*/
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = {
    { WINDOW_CreateIndirect, "phone_win",       ID_WINDOW_OWNER_VALIDATION,            0,      0,      240,    320,    0,  0x0,    0 },
    { TEXT_CreateIndirect,   "phone_num_tip",   ID_TEXT_OWNER_VALIDATION_NUMBER_TIP,   2,      16,     128,    20,     0,  0x0,    0 },
    { EDIT_CreateIndirect, "phone_num",         ID_EDIT_OWNER_VALIDATION_NUMBER,       2,      40,     235,    30,     0,  0x0b,   0 },
    { BUTTON_CreateIndirect, "cancel",   	    ID_BUTTON_OWNER_VALIDATION_CANCEL, 	20, 	80, 	60, 	40, 	0, 	0, 		0 },
    { BUTTON_CreateIndirect, "send",            ID_BUTTON_OWNER_VALIDATION_SEND, 	    160, 	80, 	60, 	40, 	0, 	0, 		0 },
  // USER START (Optionally insert additional widgets)
  // USER END
};
//extern WM_HWIN hMulti;
/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) 
{
    WM_HWIN hItem;
    int     NCode;
    int     Id; 
    switch (pMsg->MsgId) 
    {
        case WM_INIT_DIALOG:
        {
            //
            // Initialization of 'wifi_jap'
            //
            hItem = pMsg->hWin;
            BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
            WINDOW_SetBkColor(hItem, 0x00FF9E3E);
            TEXT_Handle hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_OWNER_VALIDATION_NUMBER_TIP);
            TEXT_SetFont(hItem,&GUI_Font_song16);
            TEXT_SetText(hItem,"请输入验证码");			
            hItem = WM_GetDialogItem(pMsg->hWin, ID_EDIT_OWNER_VALIDATION_NUMBER);           
            EDIT_SetText(hItem, "");
            EDIT_SetTextAlign(hItem, GUI_TA_LEFT | GUI_TA_VCENTER);
            EDIT_SetTextColor(hItem, EDIT_CI_ENABLED, 0x00000000);
            EDIT_SetFont(hItem, GUI_FONT_20_1);
            WM_SetFocus(hItem);
            //hMulti = hItem;
            // USER START (Optionally insert additional code for further widget initialization)
            hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_OWNER_VALIDATION_CANCEL);
			BUTTON_SetFont(hItem,&GUI_Font_song16);
			BUTTON_SetText(hItem,"取消");
			hItem = WM_GetDialogItem(pMsg->hWin, ID_BUTTON_OWNER_VALIDATION_SEND);
			BUTTON_SetFont(hItem,&GUI_Font_song16);
			BUTTON_SetText(hItem,"发送");
            // USER END
        }
        break;
        case WM_KEY:
        {
            switch (((WM_KEY_INFO*)(pMsg->Data.p))->Key)
            {  //char read_buf[22];
                
                case GUI_KEY_ENTER:
                {
                    char buf[12] = {0};
                    EDIT_GetText(WM_GetDialogItem(pMsg->hWin,ID_EDIT_OWNER_VALIDATION_NUMBER),buf,12);
                    send_frame_package(CMD_SEND_OWNER_PHONE_CHECK,0,buf,RT_NULL);
                    //run_to_win(ID_TASK_OWNER_REGISTER_PHONE);
                }
                //GUI_EndDialog(hDlg, 0);
                break;
                default:
                    break;
            }
        }
        break;
        case WM_NOTIFY_PARENT:
        Id    = WM_GetId(pMsg->hWinSrc);
        NCode = pMsg->Data.v;
        switch(Id) 
		{
			case ID_EDIT_OWNER_VALIDATION_NUMBER: // Notifications sent by 'password'
				switch(NCode) 
				{
				case WM_NOTIFICATION_CLICKED:
					// USER START (Optionally insert code for reacting on notification message)
					// USER END
					break;
				case WM_NOTIFICATION_RELEASED:
					// USER START (Optionally insert code for reacting on notification message)
					// USER END
					break;
				case WM_NOTIFICATION_VALUE_CHANGED:
					// USER START (Optionally insert code for reacting on notification message)
					// USER END
					break;
				// USER START (Optionally insert additional code for further notification handling)
				// USER END
				}
				break;
			case ID_BUTTON_OWNER_VALIDATION_CANCEL: // Notifications sent by 'Button'
				switch(NCode) 
				{
					case WM_NOTIFICATION_CLICKED:
						// USER START (Optionally insert code for reacting on notification message)
                        
						// USER END
						break;
					case WM_NOTIFICATION_RELEASED:
                    {
                        run_to_win(ID_TASK_OWNER_REGISTER_PHONE);
                    }
                    break;
					// USER START (Optionally insert additional code for further notification handling)
					// USER END
				}
				break;	
			case ID_BUTTON_OWNER_VALIDATION_SEND: // Notifications sent by 'Button'
					switch(NCode) 
					{
						case WM_NOTIFICATION_CLICKED:
							// USER START (Optionally insert code for reacting on notification message)
							// USER END
							break;
						case WM_NOTIFICATION_RELEASED:
                        {
                            char buf[12] = {0};
                            EDIT_GetText(WM_GetDialogItem(pMsg->hWin,ID_EDIT_OWNER_VALIDATION_NUMBER),buf,12);
                            send_frame_package(CMD_SEND_OWNER_PHONE_CHECK,0,buf,RT_NULL);
                            //WM_DeleteWindow(hWinCurrent);
                        }
							// USER START (Optionally insert code for reacting on notification message)
							// USER END
							break;
						// USER START (Optionally insert additional code for further notification handling)
						// USER END
					}
					break;	
				// USER START (Optionally insert additional code for further Ids)
				// USER END
    }
    break;
  // USER START (Optionally insert additional message handling)
  // USER END
  default:
    WM_DefaultProc(pMsg);
    break;
  }
}

/*********************************************************************
*
*       Public code
*
**********************************************************************
*/
/*********************************************************************
*
*       Createwifi_jap
*/
WM_HWIN Creat_owner_validation_input(void);
WM_HWIN Creat_owner_validation_input(void) 
{
    WM_HWIN hWin;

    hWin = GUI_CreateDialogBox(_aDialogCreate, GUI_COUNTOF(_aDialogCreate), _cbDialog, WM_HBKWIN, 0, 0);
    WM_EnableMemdev(hWin);
	//HwinCurr_Keyboard = keyboard_num(hWin);
    return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
