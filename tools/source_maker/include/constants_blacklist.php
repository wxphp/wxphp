<?php
/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * File to include on the main code_generator.php file after the constants
 * are loaded from json/consts.json to blacklist some of them.
 * 
*/

//Constants that need opengl support
unset($defConsts['WX_GL_AUX_BUFFERS']);
unset($defConsts['WX_GL_BUFFER_SIZE']);
unset($defConsts['WX_GL_DEPTH_SIZE']);
unset($defConsts['WX_GL_DOUBLEBUFFER']);
unset($defConsts['WX_GL_LEVEL']);
unset($defConsts['WX_GL_MIN_ACCUM_ALPHA']);
unset($defConsts['WX_GL_MIN_ACCUM_BLUE']);
unset($defConsts['WX_GL_MIN_ACCUM_GREEN']);
unset($defConsts['WX_GL_MIN_ACCUM_RED']);
unset($defConsts['WX_GL_MIN_ALPHA']);
unset($defConsts['WX_GL_MIN_BLUE']);
unset($defConsts['WX_GL_MIN_GREEN']);
unset($defConsts['WX_GL_MIN_RED']);
unset($defConsts['WX_GL_RGBA']);
unset($defConsts['WX_GL_SAMPLES']);
unset($defConsts['WX_GL_SAMPLE_BUFFERS']);
unset($defConsts['WX_GL_STENCIL_SIZE']);
unset($defConsts['WX_GL_STEREO']);

unset($defConsts['wxHTTP_GET']);
unset($defConsts['wxHTTP_POST']);
unset($defConsts['wxHTTP_HEAD']);

unset($defConsts['wxHIDE_READONLY']);
unset($defConsts['wxBATTERY_NORMAL_STATE']);
unset($defConsts['wxBATTERY_LOW_STATE']);
unset($defConsts['wxBATTERY_CRITICAL_STATE']);
unset($defConsts['wxBATTERY_SHUTDOWN_STATE']);
unset($defConsts['wxBATTERY_UNKNOWN_STATE']);
unset($defConsts['wxPOWER_SOCKET']);
unset($defConsts['wxPOWER_BATTERY']);
unset($defConsts['wxPOWER_UNKNOWN']);
unset($defConsts['wxCURSES']);
unset($defConsts['wxXVIEW_X']);
unset($defConsts['wxMOTIF_X']);
unset($defConsts['wxCOSE_X']);
unset($defConsts['wxNEXTSTEP']);
unset($defConsts['wxMAC']);
unset($defConsts['wxMAC_DARWIN']);
unset($defConsts['wxBEOS']);
unset($defConsts['wxGEOS']);
unset($defConsts['wxOS2_PM']);
unset($defConsts['wxWINDOWS']);
unset($defConsts['wxMICROWINDOWS']);
unset($defConsts['wxPENWINDOWS']);
unset($defConsts['wxWIN386']);
unset($defConsts['wxWINDOWS_CE']);
unset($defConsts['wxWINDOWS_POCKETPC']);
unset($defConsts['wxWINDOWS_SMARTPHONE']);
unset($defConsts['wxMGL_UNIX']);
unset($defConsts['wxMGL_X']);
unset($defConsts['wxMGL_WIN32']);
unset($defConsts['wxMGL_OS2']);
unset($defConsts['wxMGL_DOS']);
unset($defConsts['wxWINDOWS_OS2']);
unset($defConsts['wxUNIX']);
unset($defConsts['wxX11']);
unset($defConsts['wxPALMOS']);
unset($defConsts['wxDOS']);
unset($defConsts['wxEVT_COMMAND_LIST_SET_INFO']);
unset($defConsts['wxEVT_COMMAND_LIST_GET_INFO']);
unset($defConsts['wxEVT_POWER']);
unset($defConsts['wxGTK_WIN32']);
unset($defConsts['wxGTK_OS2']);
unset($defConsts['wxGTK_BEOS']);

unset($defConsts['wxIMAGE_LIST_NORMAL']);
unset($defConsts['wxIMAGE_LIST_SMALL']);
unset($defConsts['wxIMAGE_LIST_STATE']);
unset($defConsts['PHP_WXWIDGETS_VERSION']);

unset($defConsts['wxInside']);
unset($defConsts['wxOutLeft']);
unset($defConsts['wxOutRight']);
unset($defConsts['wxOutTop']);
unset($defConsts['wxOutBottom']);

unset($defConsts['wxTextFileType_None']);
unset($defConsts['wxTextFileType_Unix']);
unset($defConsts['wxTextFileType_Dos']);
unset($defConsts['wxTextFileType_Mac']);
unset($defConsts['wxTextFileType_Os2']);

unset($defConsts['wxACC_STATE_SYSTEM_ALERT_HIGH']);
unset($defConsts['wxACC_EVENT_SYSTEM_SOUND']);
unset($defConsts['wxPD_CAN_ABORT']);
unset($defConsts['wxEVT_COMPARE_ITEM']);
unset($defConsts['wxEVT_DRAW_ITEM']);
unset($defConsts['wxEVT_MEASURE_ITEM']);
unset($defConsts['wxEVT_NC_ENTER_WINDOW']);
unset($defConsts['wxEVT_NC_LEAVE_WINDOW']);
unset($defConsts['wxEVT_NC_LEFT_DCLICK']);
unset($defConsts['wxEVT_NC_LEFT_DOWN']);
unset($defConsts['wxEVT_NC_LEFT_UP']);
unset($defConsts['wxEVT_NC_MIDDLE_DCLICK']);
unset($defConsts['wxEVT_NC_MIDDLE_DOWN']);
unset($defConsts['wxEVT_NC_MIDDLE_UP']);
unset($defConsts['wxEVT_NC_MOTION']);
unset($defConsts['wxEVT_NC_RIGHT_DCLICK']);
unset($defConsts['wxEVT_NC_RIGHT_DOWN']);
unset($defConsts['wxEVT_NC_RIGHT_UP']);
unset($defConsts['wxEVT_PAINT_ICON']);
unset($defConsts['wxEVT_SETTING_CHANGED']);

unset($defConsts['wxEVT_COMPARE_ITEM		']);

unset($defConsts['wxBookCtrl']);
unset($defConsts['wxInvalidDateTime']);
unset($defConsts['wxNullProperty']);
unset($defConsts['wxINT32_MIN']);
unset($defConsts['wxINT32_MAX']);
unset($defConsts['wxINT64_MIN']);
unset($defConsts['wxINT64_MAX']);
unset($defConsts['wxUINT32_MAX']);
unset($defConsts['wxUINT64_MAX']);


//Disabled on wxWidgets 3.0.0
unset($defConsts['wxOleConvertVariant_Default']);
unset($defConsts['wxOleConvertVariant_ReturnSafeArrays']);
unset($defConsts['wxSTC_CP_DBCS']);
unset($defConsts['wxSTC_FS_ASM']);
unset($defConsts['wxSTC_FS_BINNUMBER']);
unset($defConsts['wxSTC_FS_ERROR']);
unset($defConsts['wxSTC_FS_HEXNUMBER']);
unset($defConsts['wxSTC_FS_LABEL']);

//Disable wxWebKitCtrl constants since it is only available for mac
unset($defConsts['wxWEBKIT_STATE_START']);
unset($defConsts['wxWEBKIT_STATE_NEGOTIATING']);
unset($defConsts['wxWEBKIT_STATE_REDIRECTING']);
unset($defConsts['wxWEBKIT_STATE_TRANSFERRING']);
unset($defConsts['wxWEBKIT_STATE_STOP']);
unset($defConsts['wxWEBKIT_STATE_FAILED']);
unset($defConsts['wxWEBKIT_NAV_LINK_CLICKED']);
unset($defConsts['wxWEBKIT_NAV_BACK_NEXT']);
unset($defConsts['wxWEBKIT_NAV_FORM_SUBMITTED']);
unset($defConsts['wxWEBKIT_NAV_RELOAD']);
unset($defConsts['wxWEBKIT_NAV_FORM_RESUBMITTED']);
unset($defConsts['wxWEBKIT_NAV_OTHER']);

unset($defGlobals['wxEVT_WEBKIT_STATE_CHANGED']);
unset($defGlobals['wxEVT_WEBKIT_BEFORE_LOAD']);
unset($defGlobals['wxEVT_WEBKIT_NEW_WINDOW']);

//Disable deprecated constants
unset($defConsts['wxTR_EXTENDED']);

?>
