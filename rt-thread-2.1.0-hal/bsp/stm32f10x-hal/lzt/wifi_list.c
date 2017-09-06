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



#define ID_WINDOW_0 (GUI_ID_USER + 0x20)
#define ID_BUTTON_0 (GUI_ID_USER + 0x21)
#define ID_BUTTON_1 (GUI_ID_USER + 0x22)
#define ID_BUTTON_2 (GUI_ID_USER + 0x23)
#define ID_BUTTON_3 (GUI_ID_USER + 0x24)
#define ID_BUTTON_4 (GUI_ID_USER + 0x25)
#define ID_BUTTON_5 (GUI_ID_USER + 0x26)
#define ID_BUTTON_6 (GUI_ID_USER + 0x27)
#define ID_BUTTON_7 (GUI_ID_USER + 0x28)
#define ID_BUTTON_8 (GUI_ID_USER + 0x29)
#define ID_BUTTON_9 (GUI_ID_USER + 0x2A)
#define ID_TEXT_NETCNNT     (GUI_ID_USER + 0x2B)
#define ID_BUTTON_RETURN    (GUI_ID_USER + 0x2C)

#define LIST_HIGH 40
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
static const GUI_WIDGET_CREATE_INFO _aDialogCreate[] = 
{
  { WINDOW_CreateIndirect, "wifi_list", ID_WINDOW_0,    0, 0,               240,    320,    0, 0x0, 0 },
  { TEXT_CreateIndirect,   "net",   ID_TEXT_NETCNNT,    2, 2,              64,     20,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "ret", ID_BUTTON_RETURN,     80,278,             80,     40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi1", ID_BUTTON_0,        2, 22,              238,    40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi2", ID_BUTTON_1, 	    2, 22+LIST_HIGH,    238,    40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi3", ID_BUTTON_2,        2, 22+LIST_HIGH*2,  238,    40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi4", ID_BUTTON_3, 	    2, 22+LIST_HIGH*3,  238,    40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi5", ID_BUTTON_4, 	    2, 22+LIST_HIGH*4,  238,    40,     0, 0x0, 0 },
  { BUTTON_CreateIndirect, "wifi6", ID_BUTTON_5, 	    2, 22+LIST_HIGH*5,  238,    40,     0, 0x0, 0 },
  // USER START (Optionally insert additional widgets)
  
  // USER END
};

/*********************************************************************
*
*       Static code
*
**********************************************************************
*/

void InitDialog_button(WM_MESSAGE * pMsg)
{
	WM_HWIN htimx;
	WM_HWIN hWin = pMsg->hWin;
	WINDOW_SetBkColor(hWin,0xFF9E3E); /*0xFF9E3E*/	
	TEXT_Handle hItem = WM_GetDialogItem(pMsg->hWin, ID_TEXT_NETCNNT);
	TEXT_SetFont(hItem,&GUI_Font_song16);
    TEXT_SetText(hItem,"网络连接");
    //BUTTON_SetBkColor(WM_GetDialogItem(hWin,ID_BUTTON_PAY),BUTTON_CI_UNPRESSED,0x3299F9 );////0xffffff	
	//button_set_BKCOLOR(BUTTON_SKINFLEX_PI_FOCUSSED,0x3299F9);
	//button_set_BKCOLOR(BUTTON_SKINFLEX_PI_ENABLED,0x3299F9);
    //BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
    //BUTTON_SetDefaultSkinClassic();
    htimx = WM_GetDialogItem(hWin,ID_BUTTON_RETURN);
    BUTTON_SetFont(htimx,&GUI_Font_song16);
    BUTTON_SetText(htimx, "取消");
    for (int i = 0 ;i < WIFI_LIST_AP_MAX+1;i++)
	{		
		int button_id = ID_BUTTON_0+i;
		htimx = WM_GetDialogItem(hWin,button_id);
		//BUTTON_SetDefaultSkinClassic();
		//BUTTON_SetDefaultSkin(BUTTON_SKIN_FLEX);
		BUTTON_SetTextColor(htimx,BUTTON_CI_UNPRESSED,GUI_BLACK );//
		BUTTON_SetBkColor(htimx,BUTTON_CI_UNPRESSED,0x3299F9 );
		BUTTON_SetTextAlign(htimx,GUI_TA_TOP);
		BUTTON_SetTextOffset(htimx,2,10);
		BUTTON_SetFocussable(htimx, 0);
		if((0 == wifi_list_AP[i].ssid[0])||(i == WIFI_LIST_AP_MAX))
		{
			GUI_UC_SetEncodeUTF8();
			BUTTON_SetFont(htimx,&GUI_Font_song16);
            BUTTON_SetText(htimx, "添加网络");
			break;
		}       
		BUTTON_SetFont(htimx,&GUI_Font20_1);
		BUTTON_SetText(htimx, wifi_list_AP[i].ssid);
		BUTTON_SetBitmapEx(htimx,BUTTON_CI_UNPRESSED,WIFI[wifi_list_AP[i].rssi],202,3); //
		
	}
	
    //BUTTON_SetBitmapEx(WM_GetDialogItem(hWin,ID_BUTTON_0),BUTTON_CI_UNPRESSED,&bmwifi4,160,3);
    /*BUTTON_SetBkColor(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),BUTTON_CI_UNPRESSED,0xFF9E3E);  //
    BUTTON_SetTextColor(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),BUTTON_CI_UNPRESSED,GUI_WHITE);
    BUTTON_SetFont(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),&GUI_Font_song16);
	BUTTON_SetTextAlign(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),GUI_TA_TOP);
	BUTTON_SetTextOffset(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),40,10);
    BUTTON_SetText(WM_GetDialogItem(hWin,ID_BUTTON_USER_REG), "会员注册");	
	BUTTON_SetBitmapEx (WM_GetDialogItem(hWin,ID_BUTTON_USER_REG),BUTTON_CI_UNPRESSED,&bmzwzc,5,3); //
	*/
	
}

// USER START (Optionally insert additional static code)
// USER END

/*********************************************************************
*
*       _cbDialog
*/
static void _cbDialog(WM_MESSAGE * pMsg) 
{
    WM_HWIN hItem;
    WM_HWIN htimx;
    int NCode;
    int Id;
    // USER START (Optionally insert additional variables)
	char buffer[32] = {0};
    // USER END
	hItem = pMsg->hWin;
	
    switch (pMsg->MsgId) 
	{
        case WM_INIT_DIALOG:
        {
            //
            // Initialization of 'wifi_jap'
            //    
            WINDOW_SetBkColor(hItem, 0x00FF9E3E);
            GUI_UC_SetEncodeUTF8();
            //GUI_SetFont(&GUI_Font_song16);
            //GUI_DispStringAt("指纹",40,2);
            InitDialog_button(pMsg);
            // USER START (Optionally insert additional code for further widget initialization)
            // USER END
        }
        break;
        case WM_NOTIFY_PARENT: 
        {       
            Id    = WM_GetId(pMsg->hWinSrc);
            NCode = pMsg->Data.v;
            switch(NCode) 
            {
                case WM_NOTIFICATION_RELEASED:  
                {       
                    // USER START (Optionally insert code for reacting on notification message)
                    if(( ID_BUTTON_0 <= Id )&&( ID_BUTTON_5 >= Id ) )
                    { 
                        //win_msg_union_t msg;
                        htimx = WM_GetDialogItem(hItem,Id);
                     
                       
                        //EDIT_GetText(htimx,msg.msg.buf,32);
                        BUTTON_GetText(htimx,buffer,32);
                       // msg.msg.id_operate = SEND_TO_SERVE;
                        //msg.msg.id_win = ID_TASK_LIST_WIFI;
                        if(0 == strcmp("添加网络",buffer))
                        {
                             memset(buffer,0,sizeof(buffer));
                        }
                        run_to_jap_wifi(buffer);
                        //rt_mq_send(&wmq,msg.buf,rt_strlen(msg.buf));
                        break;
                    }
                    if( ID_BUTTON_RETURN == Id )
                    {
                        /*WM_DeleteWindow(pMsg->hWin);*/

                        /*win_msg_union_t msg;
                        msg.msg.id_operate = RETURN_FROM_WIN;
                        msg.msg.id_win = ID_TASK_LIST_WIFI;
                        rt_mq_send(&wmq,msg.buf,rt_strlen(msg.buf));*/
                      run_to_win(ID_TASK_MAIN);

                        break;
                    }
                    // USER END   
                }                    
                break;
                default:
                    break;                    
            } 
         
        } 
        break;           
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
*       Createwifi_list
*/
WM_HWIN Createwifi_list(void);
WM_HWIN Createwifi_list(void) 
{
    WM_HWIN hWin;
    int i = 0;
	for(;i < WIFI_LIST_AP_MAX; i++)
	{		
		if(wifi_list_AP[i].rssi > 4)
			wifi_list_AP[i].rssi =  4;
		if(0 == wifi_list_AP[i].ssid[0])
			break;
	}
	i += 4;
  BUTTON_SetDefaultSkinClassic();	
  hWin = GUI_CreateDialogBox(_aDialogCreate,i, _cbDialog, WM_HBKWIN, 0, 0);
  return hWin;
}

// USER START (Optionally insert additional public code)
// USER END

/*************************** End of file ****************************/
