<?php
/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Some predefined constants to assit on the code generation.
 * 
 * The purpose is to assist the code generator manually in case
 * the xml_parser didn't return some required constants.
 * 
*/

//wxSplitterWindow
$defConsts["wxSP_3D"] = true;
$defConsts["wxSP_3DSASH"] = true;
$defConsts["wxSP_3DBORDER"] = true;
$defConsts["wxSP_BORDER"] = true;
$defConsts["wxSP_NOBORDER"] = true;
$defConsts["wxSP_NO_XP_THEME"] = true;
$defConsts["wxSP_PERMIT_UNSPLIT"] = true;
$defConsts["wxSP_LIVE_UPDATE"] = true;
	
//wxSizer, wxStaticText, etc...
$defConsts["wxHORIZONTAL"] = true;
$defConsts["wxVERTICAL"] = true;
$defConsts["wxTOP"] = true;
$defConsts["wxBOTTOM"] = true;
$defConsts["wxLEFT"] = true;
$defConsts["wxRIGHT"] = true;
$defConsts["wxALL"] = true;
$defConsts["wxEXPAND"] = true;
$defConsts["wxSHAPED"] = true;
$defConsts["wxFIXED_MINSIZE"] = true;
$defConsts["wxALIGN_CENTER"] = true;
$defConsts["wxALIGN_CENTRE"] = true;
$defConsts["wxALIGN_LEFT"] = true;
$defConsts["wxALIGN_RIGHT"] = true;
$defConsts["wxALIGN_TOP"] = true;
$defConsts["wxALIGN_BOTTOM"] = true;
$defConsts["wxALIGN_CENTER_VERTICAL"] = true;
$defConsts["wxALIGN_CENTRE_VERTICAL"] = true;
$defConsts["wxALIGN_CENTER_HORIZONTAL"] = true;
$defConsts["wxALIGN_CENTRE_HORIZONTAL"] = true;
$defConsts["wxST_NO_AUTORESIZE"] = true;
	
//wxGauge
$defConsts["wxGA_HORIZONTAL"] = true;
$defConsts["wxGA_VERTICAL"] = true;
$defConsts["wxGA_SMOOTH"] = true;
	
//wxButton
$defConsts["wxBU_LEFT"] = true;
$defConsts["wxBU_TOP"] = true;
$defConsts["wxBU_RIGHT"] = true;
$defConsts["wxBU_BOTTOM"] = true;
$defConsts["wxBU_EXACTFIT"] = true;
$defConsts["wxNO_BORDER"] = true;
	
//Image types
$defConsts["wxBITMAP_TYPE_BMP"] = true;
$defConsts["wxBITMAP_TYPE_BMP_RESOURCE"] = true;
$defConsts["wxBITMAP_TYPE_PICT_RESOURCE"] = true;
$defConsts["wxBITMAP_TYPE_GIF"] = true;
$defConsts["wxBITMAP_TYPE_XBM"] = true;
$defConsts["wxBITMAP_TYPE_XPM"] = true;
	
//wxCalendarCtrl
$defConsts["wxCAL_SUNDAY_FIRST"] = true;
$defConsts["wxCAL_MONDAY_FIRST"] = true;
$defConsts["wxCAL_SHOW_HOLIDAYS"] = true;
$defConsts["wxCAL_NO_YEAR_CHANGE"] = true;
$defConsts["wxCAL_NO_MONTH_CHANGE"] = true;
$defConsts["wxCAL_SHOW_SURROUNDING_WEEKS"] = true;
$defConsts["wxCAL_SEQUENTIAL_MONTH_SELECTION"] = true;
	
//wxCheckBox
$defConsts["wxCHK_2STATE"] = true;
$defConsts["wxCHK_3STATE"] = true;
$defConsts["wxCHK_ALLOW_3RD_STATE_FOR_USER"] = true;
	
//wxToolBar
$defConsts["wxTB_FLAT"] = true;
$defConsts["wxTB_DOCKABLE"] = true;
$defConsts["wxTB_HORIZONTAL"] = true;
$defConsts["wxTB_VERTICAL"] = true;
$defConsts["wxTB_TEXT"] = true;
$defConsts["wxTB_NOICONS"] = true;
$defConsts["wxTB_NODIVIDER"] = true;
$defConsts["wxTB_NOALIGN"] = true;
$defConsts["wxTB_HORZ_LAYOUT"] = true;
$defConsts["wxTB_HORZ_TEXT"] = true;
$defConsts["wxTB_NO_TOOLTIPS"] = true;
$defConsts["wxTB_BOTTOM"] = true;
$defConsts["wxTB_RIGHT"] = true;
	
//wxListCtrl
$defConsts["wxLC_LIST"] = true;
$defConsts["wxLC_REPORT"] = true;
$defConsts["wxLC_VIRTUAL"] = true;
$defConsts["wxLC_ICON"] = true;
$defConsts["wxLC_SMALL_ICON"] = true;
$defConsts["wxLC_ALIGN_TOP"] = true;
$defConsts["wxLC_ALIGN_LEFT"] = true;
$defConsts["wxLC_AUTOARRANGE"] = true;
$defConsts["wxLC_EDIT_LABELS"] = true;
$defConsts["wxLC_NO_HEADER"] = true;
$defConsts["wxLC_SINGLE_SEL"] = true;
$defConsts["wxLC_SORT_ASCENDING"] = true;
$defConsts["wxLC_SORT_DESCENDING"] = true;
$defConsts["wxLC_HRULES"] = true;
$defConsts["wxLC_VRULES"] = true;
	
//wxNoteBook
$defConsts["wxNB_TOP"] = true;
$defConsts["wxNB_LEFT"] = true;
$defConsts["wxNB_RIGHT"] = true;
$defConsts["wxNB_BOTTOM"] = true;
$defConsts["wxNB_FIXEDWIDTH"] = true;
$defConsts["wxNB_MULTILINE"] = true;
$defConsts["wxNB_NOPAGETHEME"] = true;
$defConsts["wxNB_FLAT"] = true;
	
//Id's
$defConsts["wxID_LOWEST"] = true;
$defConsts["wxID_OPEN"] = true;
$defConsts["wxID_CLOSE"] = true;
$defConsts["wxID_NEW"] = true;
$defConsts["wxID_SAVE"] = true;
$defConsts["wxID_SAVEAS"] = true;
$defConsts["wxID_REVERT"] = true;
$defConsts["wxID_EXIT"] = true;
$defConsts["wxID_UNDO"] = true;
$defConsts["wxID_REDO"] = true;
$defConsts["wxID_HELP"] = true;
$defConsts["wxID_PRINT"] = true;
$defConsts["wxID_PRINT_SETUP"] = true;
$defConsts["wxID_PAGE_SETUP"] = true;
$defConsts["wxID_PREVIEW"] = true;
$defConsts["wxID_ABOUT"] = true;
$defConsts["wxID_HELP_CONTENTS"] = true;
$defConsts["wxID_HELP_INDEX"] = true;
$defConsts["wxID_HELP_SEARCH"] = true;
$defConsts["wxID_HELP_COMMANDS"] = true;
$defConsts["wxID_HELP_PROCEDURES"] = true;
$defConsts["wxID_HELP_CONTEXT"] = true;
$defConsts["wxID_CLOSE_ALL"] = true;
$defConsts["wxID_EDIT"] = true;
$defConsts["wxID_CUT"] = true;
$defConsts["wxID_COPY"] = true;
$defConsts["wxID_PASTE"] = true;
$defConsts["wxID_CLEAR"] = true;
$defConsts["wxID_FIND"] = true;
$defConsts["wxID_DUPLICATE"] = true;
$defConsts["wxID_SELECTALL"] = true;
$defConsts["wxID_DELETE"] = true;
$defConsts["wxID_REPLACE"] = true;
$defConsts["wxID_REPLACE_ALL"] = true;
$defConsts["wxID_PROPERTIES"] = true;
$defConsts["wxID_VIEW_DETAILS"] = true;
$defConsts["wxID_VIEW_LARGEICONS"] = true;
$defConsts["wxID_VIEW_SMALLICONS"] = true;
$defConsts["wxID_VIEW_LIST"] = true;
$defConsts["wxID_VIEW_SORTDATE"] = true;
$defConsts["wxID_VIEW_SORTNAME"] = true;
$defConsts["wxID_VIEW_SORTSIZE"] = true;
$defConsts["wxID_VIEW_SORTTYPE"] = true;
$defConsts["wxID_FILE"] = true;
$defConsts["wxID_FILE1"] = true;
$defConsts["wxID_FILE2"] = true;
$defConsts["wxID_FILE3"] = true;
$defConsts["wxID_FILE4"] = true;
$defConsts["wxID_FILE5"] = true;
$defConsts["wxID_FILE6"] = true;
$defConsts["wxID_FILE7"] = true;
$defConsts["wxID_FILE8"] = true;
$defConsts["wxID_FILE9"] = true;

// Standard button IDs
$defConsts["wxID_OK"] = true;
$defConsts["wxID_CANCEL"] = true;
$defConsts["wxID_APPLY"] = true;
$defConsts["wxID_YES"] = true;
$defConsts["wxID_NO"] = true;
$defConsts["wxID_STATIC"] = true;
$defConsts["wxID_FORWARD"] = true;
$defConsts["wxID_BACKWARD"] = true;
$defConsts["wxID_DEFAULT"] = true;
$defConsts["wxID_MORE"] = true;
$defConsts["wxID_SETUP"] = true;
$defConsts["wxID_RESET"] = true;
$defConsts["wxID_CONTEXT_HELP"] = true;
$defConsts["wxID_YESTOALL"] = true;
$defConsts["wxID_NOTOALL"] = true;
$defConsts["wxID_ABORT"] = true;
$defConsts["wxID_RETRY"] = true;
$defConsts["wxID_IGNORE"] = true;
$defConsts["wxID_UP"] = true;
$defConsts["wxID_DOWN"] = true;
$defConsts["wxID_HOME"] = true;
$defConsts["wxID_REFRESH"] = true;
$defConsts["wxID_STOP"] = true;
$defConsts["wxID_INDEX"] = true;
$defConsts["wxID_BOLD"] = true;
$defConsts["wxID_ITALIC"] = true;
$defConsts["wxID_JUSTIFY_CENTER"] = true;
$defConsts["wxID_JUSTIFY_FILL"] = true;
$defConsts["wxID_JUSTIFY_RIGHT"] = true;
$defConsts["wxID_JUSTIFY_LEFT"] = true;
$defConsts["wxID_UNDERLINE"] = true;
$defConsts["wxID_INDENT"] = true;
$defConsts["wxID_UNINDENT"] = true;
$defConsts["wxID_ZOOM_100"] = true;
$defConsts["wxID_ZOOM_FIT"] = true;
$defConsts["wxID_ZOOM_IN"] = true;
$defConsts["wxID_ZOOM_OUT"] = true;
$defConsts["wxID_UNDELETE"] = true;
$defConsts["wxID_REVERT_TO_SAVED"] = true;

// System menu IDs (used by "wxUniv)
$defConsts["wxID_SYSTEM_MENU"] = true;
$defConsts["wxID_CLOSE_FRAME"] = true;
$defConsts["wxID_MOVE_FRAME"] = true;
$defConsts["wxID_RESIZE_FRAME"] = true;
$defConsts["wxID_MAXIMIZE_FRAME"] = true;
$defConsts["wxID_ICONIZE_FRAME"] = true;
$defConsts["wxID_RESTORE_FRAME"] = true;

// IDs used by generic file dialog (13 consecutive starting from this value)
$defConsts["wxID_FILEDLGG"] = true;
$defConsts["wxID_HIGHEST"] = true;
    
//Keycodes
$defConsts["WXK_BACK"] = true;
$defConsts["WXK_TAB"] = true;
$defConsts["WXK_RETURN"] = true;
$defConsts["WXK_ESCAPE"] = true;
$defConsts["WXK_SPACE"] = true;
$defConsts["WXK_DELETE"] = true;

// These are by design not compatible with unicode characters.
// If you want to get a unicode character from a key event use
// "WXKeyEvent::GetUnicodeKey instead.
$defConsts["WXK_START"] = true;
$defConsts["WXK_LBUTTON"] = true;
$defConsts["WXK_RBUTTON"] = true;
$defConsts["WXK_CANCEL"] = true;
$defConsts["WXK_MBUTTON"] = true;
$defConsts["WXK_CLEAR"] = true;
$defConsts["WXK_SHIFT"] = true;
$defConsts["WXK_ALT"] = true;
$defConsts["WXK_CONTROL"] = true;
$defConsts["WXK_MENU"] = true;
$defConsts["WXK_PAUSE"] = true;
$defConsts["WXK_CAPITAL"] = true;
$defConsts["WXK_END"] = true;
$defConsts["WXK_HOME"] = true;
$defConsts["WXK_LEFT"] = true;
$defConsts["WXK_UP"] = true;
$defConsts["WXK_RIGHT"] = true;
$defConsts["WXK_DOWN"] = true;
$defConsts["WXK_SELECT"] = true;
$defConsts["WXK_PRINT"] = true;
$defConsts["WXK_EXECUTE"] = true;
$defConsts["WXK_SNAPSHOT"] = true;
$defConsts["WXK_INSERT"] = true;
$defConsts["WXK_HELP"] = true;
$defConsts["WXK_NUMPAD0"] = true;
$defConsts["WXK_NUMPAD1"] = true;
$defConsts["WXK_NUMPAD2"] = true;
$defConsts["WXK_NUMPAD3"] = true;
$defConsts["WXK_NUMPAD4"] = true;
$defConsts["WXK_NUMPAD5"] = true;
$defConsts["WXK_NUMPAD6"] = true;
$defConsts["WXK_NUMPAD7"] = true;
$defConsts["WXK_NUMPAD8"] = true;
$defConsts["WXK_NUMPAD9"] = true;
$defConsts["WXK_MULTIPLY"] = true;
$defConsts["WXK_ADD"] = true;
$defConsts["WXK_SEPARATOR"] = true;
$defConsts["WXK_SUBTRACT"] = true;
$defConsts["WXK_DECIMAL"] = true;
$defConsts["WXK_DIVIDE"] = true;
$defConsts["WXK_F1"] = true;
$defConsts["WXK_F2"] = true;
$defConsts["WXK_F3"] = true;
$defConsts["WXK_F4"] = true;
$defConsts["WXK_F5"] = true;
$defConsts["WXK_F6"] = true;
$defConsts["WXK_F7"] = true;
$defConsts["WXK_F8"] = true;
$defConsts["WXK_F9"] = true;
$defConsts["WXK_F10"] = true;
$defConsts["WXK_F11"] = true;
$defConsts["WXK_F12"] = true;
$defConsts["WXK_F13"] = true;
$defConsts["WXK_F14"] = true;
$defConsts["WXK_F15"] = true;
$defConsts["WXK_F16"] = true;
$defConsts["WXK_F17"] = true;
$defConsts["WXK_F18"] = true;
$defConsts["WXK_F19"] = true;
$defConsts["WXK_F20"] = true;
$defConsts["WXK_F21"] = true;
$defConsts["WXK_F22"] = true;
$defConsts["WXK_F23"] = true;
$defConsts["WXK_F24"] = true;
$defConsts["WXK_NUMLOCK"] = true;
$defConsts["WXK_SCROLL"] = true;
$defConsts["WXK_PAGEUP"] = true;
$defConsts["WXK_PAGEDOWN"] = true;
$defConsts["WXK_NUMPAD_SPACE"] = true;
$defConsts["WXK_NUMPAD_TAB"] = true;
$defConsts["WXK_NUMPAD_ENTER"] = true;
$defConsts["WXK_NUMPAD_F1"] = true;
$defConsts["WXK_NUMPAD_F2"] = true;
$defConsts["WXK_NUMPAD_F3"] = true;
$defConsts["WXK_NUMPAD_F4"] = true;
$defConsts["WXK_NUMPAD_HOME"] = true;
$defConsts["WXK_NUMPAD_LEFT"] = true;
$defConsts["WXK_NUMPAD_UP"] = true;
$defConsts["WXK_NUMPAD_RIGHT"] = true;
$defConsts["WXK_NUMPAD_DOWN"] = true;
$defConsts["WXK_NUMPAD_PAGEUP"] = true;
$defConsts["WXK_NUMPAD_PAGEDOWN"] = true;
$defConsts["WXK_NUMPAD_END"] = true;
$defConsts["WXK_NUMPAD_BEGIN"] = true;
$defConsts["WXK_NUMPAD_INSERT"] = true;
$defConsts["WXK_NUMPAD_DELETE"] = true;
$defConsts["WXK_NUMPAD_EQUAL"] = true;
$defConsts["WXK_NUMPAD_MULTIPLY"] = true;
$defConsts["WXK_NUMPAD_ADD"] = true;
$defConsts["WXK_NUMPAD_SEPARATOR"] = true;
$defConsts["WXK_NUMPAD_SUBTRACT"] = true;
$defConsts["WXK_NUMPAD_DECIMAL"] = true;
$defConsts["WXK_NUMPAD_DIVIDE"] = true;

// the following key codes are only generated under Windows currently
$defConsts["WXK_WINDOWS_LEFT"] = true;
$defConsts["WXK_WINDOWS_RIGHT"] = true;
$defConsts["WXK_WINDOWS_MENU"] = true;
$defConsts["WXK_COMMAND"] = true;

// Hardware-specific buttons
$defConsts["WXK_SPECIAL1"] = true;
$defConsts["WXK_SPECIAL2"] = true;
$defConsts["WXK_SPECIAL3"] = true;
$defConsts["WXK_SPECIAL4"] = true;
$defConsts["WXK_SPECIAL5"] = true;
$defConsts["WXK_SPECIAL6"] = true;
$defConsts["WXK_SPECIAL7"] = true;
$defConsts["WXK_SPECIAL8"] = true;
$defConsts["WXK_SPECIAL9"] = true;
$defConsts["WXK_SPECIAL10"] = true;
$defConsts["WXK_SPECIAL11"] = true;
$defConsts["WXK_SPECIAL12"] = true;
$defConsts["WXK_SPECIAL13"] = true;
$defConsts["WXK_SPECIAL14"] = true;
$defConsts["WXK_SPECIAL15"] = true;
$defConsts["WXK_SPECIAL16"] = true;
$defConsts["WXK_SPECIAL17"] = true;
$defConsts["WXK_SPECIAL18"] = true;
$defConsts["WXK_SPECIAL19"] = true;
$defConsts["WXK_SPECIAL20"] = true;
	
//wxTextCtrl, wxRichTexCtrl, wxSearchCtrl etc...
$defConsts["wxTE_MULTILINE"] = true;
$defConsts["wxTE_PASSWORD"] = true;
$defConsts["wxTE_READONLY"] = true;
$defConsts["wxTE_PROCESS_ENTER"] = true;
$defConsts["wxTE_PROCESS_TAB"] = true;
$defConsts["wxTE_RICH"] = true;
$defConsts["wxTE_RICH2"] = true;
$defConsts["wxTE_AUTO_URL"] = true;
$defConsts["wxTE_NOHIDESEL"] = true;
$defConsts["wxTE_NO_VSCROLL"] = true;
$defConsts["wxTE_LEFT"] = true;
$defConsts["wxTE_CENTRE"] = true;
$defConsts["wxTE_RIGHT"] = true;
$defConsts["wxTE_DONTWRAP"] = true;
$defConsts["wxTE_CHARWRAP"] = true;
$defConsts["wxTE_WORDWRAP"] = true;
$defConsts["wxTE_BESTWRAP"] = true;
$defConsts["wxTE_CAPITALIZE"] = true;
	
$defConsts["wxHSCROLL"] = true;
$defConsts["wxOK"] = true;
$defConsts["wxCANCEL"] = true;
$defConsts["wxYES_DEFAULT"] = true;
$defConsts["wxNO_DEFAULT"] = true;
$defConsts["wxICON_EXCLAMATION"] = true;
$defConsts["wxICON_HAND"] = true;
$defConsts["wxICON_ERROR"] = true;
$defConsts["wxICON_QUESTION"] = true;
$defConsts["wxICON_INFORMATION"] = true;
$defConsts["wxSTAY_ON_TOP"] = true;
$defConsts["wxBORDER_DEFAULT"] = true;
$defConsts["wxBORDER_SIMPLE"] = true;
$defConsts["wxBORDER_SUNKEN"] = true;
$defConsts["wxBORDER_RAISED"] = true;
$defConsts["wxBORDER_STATIC"] = true;
$defConsts["wxBORDER_THEME"] = true;
$defConsts["wxBORDER_NONE"] = true;
$defConsts["wxBORDER_DOUBLE"] = true;
$defConsts["wxTRANSPARENT_WINDOW"] = true;
$defConsts["wxTAB_TRAVERSAL"] = true;
$defConsts["wxWANTS_CHARS"] = true;
$defConsts["wxNO_FULL_REPAINT_ON_RESIZE"] = true;
$defConsts["wxVSCROLL"] = true;
$defConsts["wxHSCROLL"] = true;
$defConsts["wxALWAYS_SHOW_SB"] = true;
$defConsts["wxCLIP_CHILDREN"] = true;
$defConsts["wxFULL_REPAINT_ON_RESIZE"] = true;
	
//wxListBox, wxCheckListBox, etc..
$defConsts["wxLB_SINGLE"] = true;
$defConsts["wxLB_MULTIPLE"] = true;
$defConsts["wxLB_EXTENDED"] = true;
$defConsts["wxLB_HSCROLL"] = true;
$defConsts["wxLB_ALWAYS_SB"] = true;
$defConsts["wxLB_NEEDED_SB"] = true;
$defConsts["wxLB_SORT"] = true;
	
//wxSocketBase
$defConsts["wxSOCKET_NOERROR"] = true;
$defConsts["wxSOCKET_INVOP"] = true;
$defConsts["wxSOCKET_IOERR"] = true;
$defConsts["wxSOCKET_INVADDR"] = true;
$defConsts["wxSOCKET_INVSOCK"] = true;
$defConsts["wxSOCKET_NOHOST"] = true;
$defConsts["wxSOCKET_INVPORT"] = true;
$defConsts["wxSOCKET_WOULDBLOCK"] = true;
$defConsts["wxSOCKET_TIMEDOUT"] = true;
$defConsts["wxSOCKET_MEMERR"] = true;
$defConsts["wxSOCKET_INPUT"] = true;
$defConsts["wxSOCKET_OUTPUT"] = true;
$defConsts["wxSOCKET_CONNECTION"] = true;
$defConsts["wxSOCKET_LOST"] = true;
	
//wxFileDialog
$defConsts["wxFD_DEFAULT_STYLE"] = true;
$defConsts["wxFD_OPEN"] = true;
$defConsts["wxFD_SAVE"] = true;
$defConsts["wxFD_OVERWRITE_PROMPT"] = true;
$defConsts["wxFD_FILE_MUST_EXIST"] = true;
$defConsts["wxFD_MULTIPLE"] = true;
$defConsts["wxFD_CHANGE_DIR"] = true;
$defConsts["wxFD_PREVIEW"] = true;
	
//wxComboBox
$defConsts["wxCB_SIMPLE"] = true;
$defConsts["wxCB_DROPDOWN"] = true;
$defConsts["wxCB_READONLY"] = true;
$defConsts["wxCB_SORT"] = true;
	
//wxTreeCtrl
$defConsts["wxTR_DEFAULT_STYLE"] = true;
$defConsts["wxTR_EDIT_LABELS"] = true;
$defConsts["wxTR_EXTENDED"] = true;
$defConsts["wxTR_FULL_ROW_HIGHLIGHT"] = true;
$defConsts["wxTR_HAS_BUTTONS"] = true;
$defConsts["wxTR_HAS_VARIABLE_ROW_HEIGHT"] = true;
$defConsts["wxTR_HIDE_ROOT"] = true;
$defConsts["wxTR_LINES_AT_ROOT"] = true;
$defConsts["wxTR_MULTIPLE"] = true;
$defConsts["wxTR_NO_BUTTONS"] = true;
$defConsts["wxTR_NO_LINES"] = true;
$defConsts["wxTR_ROW_LINES"] = true;
$defConsts["wxTR_SINGLE"] = true;
$defConsts["wxTR_TWIST_BUTTONS"] = true;
	
//wxHyperlinkCtrl
$defConsts["wxHL_CONTEXTMENU"] = true;
$defConsts["wxHL_ALIGN_LEFT"] = true;
$defConsts["wxHL_ALIGN_RIGHT"] = true;
$defConsts["wxHL_ALIGN_CENTRE"] = true;
$defConsts["wxHL_DEFAULT_STYLE"] = true;
	
	
$defConsts["wxDEFAULT_DIALOG_STYLE"] = true;
$defConsts["wxDEFAULT_FRAME_STYLE"] = true;
$defConsts["wxST_SIZEGRIP"] = true;
	
//wxFontPickerCtrl
$defConsts["wxFNTP_DEFAULT_STYLE"] = true;
$defConsts["wxFNTP_FONTDESC_AS_LABEL"] = true;
$defConsts["wxFNTP_USEFONT_FOR_LABEL"] = true;
$defConsts["wxFNTP_USE_TEXTCTRL"] = true;
	
//wxFilePickerCtrl
$defConsts["wxFLP_DEFAULT_STYLE"] = true;
$defConsts["wxFLP_CHANGE_DIR"] = true;
$defConsts["wxFLP_FILE_MUST_EXIST"] = true;
$defConsts["wxFLP_OPEN"] = true;
$defConsts["wxFLP_OVERWRITE_PROMPT"] = true;
$defConsts["wxFLP_SAVE"] = true;
$defConsts["wxFLP_USE_TEXTCTRL"] = true;
	
//wxDirPickerCtrl
$defConsts["wxDIRP_DEFAULT_STYLE"] = true;
$defConsts["wxDIRP_CHANGE_DIR"] = true;
$defConsts["wxDIRP_DIR_MUST_EXIST"] = true;
$defConsts["wxDIRP_USE_TEXTCTRL"] = true;
	
//wxDatepickerCtrl
$defConsts["wxDP_DEFAULT"] = true;
$defConsts["wxDP_ALLOWNONE"] = true;
$defConsts["wxDP_DROPDOWN"] = true;
$defConsts["wxDP_SHOWCENTURY"] = true;
$defConsts["wxDP_SPIN"] = true;
	
//wxScrollBar
$defConsts["wxSB_HORIZONTAL"] = true;
$defConsts["wxSB_VERTICAL"] = true;
	
//wxSpinCtrl, wxSpinButton
$defConsts["wxSP_ARROW_KEYS"] = true;
$defConsts["wxSP_WRAP"] = true;
$defConsts["wxSP_VERTICAL"] = true;
$defConsts["wxSP_HORIZONTAL"] = true;
	
//wxGenericDirCtrl
$defConsts["wxDIRCTRL_3D_INTERNAL"] = true;
$defConsts["wxDIRCTRL_DIR_ONLY"] = true;
$defConsts["wxDIRCTRL_EDIT_LABELS"] = true;
$defConsts["wxDIRCTRL_SELECT_FIRST"] = true;
$defConsts["wxDIRCTRL_SHOW_FILTERS"] = true;
	
$defConsts["wxSUNKEN_BORDER"] = true;
	
//wxHtmlWindow
$defConsts["wxHW_SCROLLBAR_AUTO"] = true;
$defConsts["wxHW_NO_SELECTION"] = true;
$defConsts["wxHW_SCROLLBAR_NEVER"] = true;
$defConsts["wxHW_DEFAULT_STYLE"] = true;
	
//wxBitmapButton
$defConsts["wxBU_AUTODRAW"] = true;
$defConsts["wxBU_BOTTOM"] = true;
$defConsts["wxBU_LEFT"] = true;
$defConsts["wxBU_RIGHT"] = true;
$defConsts["wxBU_TOP"] = true;
	
//wxSlider
$defConsts["wxSL_AUTOTICKS"] = true; 
$defConsts["wxSL_BOTH"] = true; 
$defConsts["wxSL_BOTTOM"] = true; 
$defConsts["wxSL_HORIZONTAL"] = true; 
$defConsts["wxSL_INVERSE"] = true; 
$defConsts["wxSL_LABELS"] = true; 
$defConsts["wxSL_LEFT"] = true; 
$defConsts["wxSL_RIGHT"] = true; 
$defConsts["wxSL_SELRANGE"] = true; 
$defConsts["wxSL_TOP"] = true; 
$defConsts["wxSL_VERTICAL"] = true;
	
//wxRadioButton
$defConsts["wxRB_GROUP"] = true;
$defConsts["wxRB_SINGLE"] = true;
	
//wxRadionBox
$defConsts["wxRA_SPECIFY_COLS"] = true;
$defConsts["wxRA_SPECIFY_ROWS"] = true;
	
//wxStaticLine
$defConsts["wxLI_HORIZONTAL"] = true;
$defConsts["wxLI_VERTICAL"] = true;
	
//wxChoicebook
$defConsts["wxCHB_BOTTOM"] = true;
$defConsts["wxCHB_DEFAULT"] = true;
$defConsts["wxCHB_LEFT"] = true;
$defConsts["wxCHB_RIGHT"] = true;
$defConsts["wxCHB_TOP"] = true;
	
//wxListbook
$defConsts["wxLB_BOTTOM"] = true;
$defConsts["wxLB_DEFAULT"] = true; 
$defConsts["wxLB_LEFT"] = true;
$defConsts["wxLB_RIGHT"] = true;
$defConsts["wxLB_TOP"] = true;
	
//wxAuiNotebook
$defConsts["wxAUI_NB_BOTTOM"] = true; 
$defConsts["wxAUI_NB_CLOSE_BUTTON"] = true; 
$defConsts["wxAUI_NB_CLOSE_ON_ACTIVE_TAB"] = true; 
$defConsts["wxAUI_NB_CLOSE_ON_ALL_TABS"] = true; 
$defConsts["wxAUI_NB_DEFAULT_STYLE"] = true; 
$defConsts["wxAUI_NB_SCROLL_BUTTONS"] = true; 
$defConsts["wxAUI_NB_TAB_EXTERNAL_MOVE"] = true; 
$defConsts["wxAUI_NB_TAB_FIXED_WIDTH"] = true; 
$defConsts["wxAUI_NB_TAB_MOVE"] = true; 
$defConsts["wxAUI_NB_TAB_SPLIT"] = true; 
$defConsts["wxAUI_NB_TOP"] = true; 
$defConsts["wxAUI_NB_WINDOWLIST_BUTTON"] = true;
	
//wxMenuBar
$defConsts["wxMB_DOCKABLE"] = true;
	
//wxToolBar Item Kind
$defConsts["wxITEM_CHECK"] = true;
$defConsts["wxITEM_NORMAL"] = true;
$defConsts["wxITEM_RADIO"] = true;
	
//Dialog buttons
$defConsts["wxOK"] = true;
$defConsts["wxCANCEL"] = true;
$defConsts["wxYES_NO"] = true;
$defConsts["wxYES"] = true;
$defConsts["wxNO"] = true;
$defConsts["wxYES_DEFAULT"] = true;
$defConsts["wxNO_DEFAULT"] = true;
$defConsts["wxICON_EXCLAMATION"] = true;
$defConsts["wxICON_HAND"] = true;
$defConsts["wxICON_ERROR"] = true;
$defConsts["wxICON_QUESTION"] = true;
$defConsts["wxICON_INFORMATION"] = true;
$defConsts["wxSTAY_ON_TOP"] = true;
	
//Splash screen
$defConsts["wxSPLASH_CENTRE_ON_PARENT"] = true;
$defConsts["wxSPLASH_CENTRE_ON_SCREEN"] = true;
$defConsts["wxSPLASH_NO_CENTRE"] = true;
$defConsts["wxSPLASH_TIMEOUT"] = true;
$defConsts["wxSPLASH_NO_TIMEOUT"] = true;

/**
 * Another set of constants used by the event functions like connect
 * and disconnect
*/
$defConsts["wxEVT_ACTIVATE"] = true;
$defConsts["wxEVT_ACTIVATE_APP"] = true;
$defConsts["wxEVT_AUI_FIND_MANAGER"] = true;
$defConsts["wxEVT_AUI_PANE_BUTTON"] = true;
$defConsts["wxEVT_AUI_PANE_CLOSE"] = true;
$defConsts["wxEVT_AUI_PANE_MAXIMIZE"] = true;
$defConsts["wxEVT_AUI_PANE_RESTORE"] = true;
$defConsts["wxEVT_AUI_RENDER"] = true;
$defConsts["wxEVT_CALCULATE_LAYOUT"] = true;
$defConsts["wxEVT_CALENDAR_DAY_CHANGED"] = true;
$defConsts["wxEVT_CALENDAR_DOUBLECLICKED"] = true;
$defConsts["wxEVT_CALENDAR_MONTH_CHANGED"] = true;
$defConsts["wxEVT_CALENDAR_SEL_CHANGED"] = true;
$defConsts["wxEVT_CALENDAR_WEEKDAY_CLICKED"] = true;
$defConsts["wxEVT_CALENDAR_YEAR_CHANGED"] = true;
$defConsts["wxEVT_CHAR"] = true;
$defConsts["wxEVT_CHAR_HOOK"] = true;
$defConsts["wxEVT_CHILD_FOCUS"] = true;
$defConsts["wxEVT_CLOSE_WINDOW"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_BEGIN_DRAG"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_BUTTON"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_DRAG_DONE"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_DRAG_MOTION"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_END_DRAG"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_DOWN"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_DOWN"] = true;
$defConsts["wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP"] = true;
$defConsts["wxEVT_COMMAND_AUITOOLBAR_BEGIN_DRAG"] = true;
$defConsts["wxEVT_COMMAND_AUITOOLBAR_MIDDLE_CLICK"] = true;
$defConsts["wxEVT_COMMAND_AUITOOLBAR_OVERFLOW_CLICK"] = true;
$defConsts["wxEVT_COMMAND_AUITOOLBAR_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN"] = true;
$defConsts["wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_BUTTON_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_CHECKBOX_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_CHECKLISTBOX_TOGGLED"] = true;
$defConsts["wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_CHOICE_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_COLLPANE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_COLOURPICKER_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_COMBOBOX_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_DIRPICKER_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_ENTER"] = true;
$defConsts["wxEVT_COMMAND_FILEPICKER_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_FIND"] = true;
$defConsts["wxEVT_COMMAND_FIND_CLOSE"] = true;
$defConsts["wxEVT_COMMAND_FIND_NEXT"] = true;
$defConsts["wxEVT_COMMAND_FIND_REPLACE"] = true;
$defConsts["wxEVT_COMMAND_FIND_REPLACE_ALL"] = true;
$defConsts["wxEVT_COMMAND_FONTPICKER_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_HTML_CELL_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_HTML_CELL_HOVER"] = true;
$defConsts["wxEVT_COMMAND_HTML_LINK_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_HYPERLINK"] = true;
$defConsts["wxEVT_COMMAND_KILL_FOCUS"] = true;
$defConsts["wxEVT_COMMAND_LEFT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_LEFT_DCLICK"] = true;
$defConsts["wxEVT_COMMAND_LISTBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_LISTBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_LISTBOX_DOUBLECLICKED"] = true;
$defConsts["wxEVT_COMMAND_LISTBOX_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_LIST_BEGIN_DRAG"] = true;
$defConsts["wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT"] = true;
$defConsts["wxEVT_COMMAND_LIST_BEGIN_RDRAG"] = true;
$defConsts["wxEVT_COMMAND_LIST_CACHE_HINT"] = true;
$defConsts["wxEVT_COMMAND_LIST_COL_BEGIN_DRAG"] = true;
$defConsts["wxEVT_COMMAND_LIST_COL_CLICK"] = true;
$defConsts["wxEVT_COMMAND_LIST_COL_DRAGGING"] = true;
$defConsts["wxEVT_COMMAND_LIST_COL_END_DRAG"] = true;
$defConsts["wxEVT_COMMAND_LIST_COL_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS"] = true;
$defConsts["wxEVT_COMMAND_LIST_DELETE_ITEM"] = true;
$defConsts["wxEVT_COMMAND_LIST_END_LABEL_EDIT"] = true;
$defConsts["wxEVT_COMMAND_LIST_GET_INFO"] = true;
$defConsts["wxEVT_COMMAND_LIST_INSERT_ITEM"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_ACTIVATED"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_DESELECTED"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_FOCUSED"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_LIST_ITEM_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_LIST_KEY_DOWN"] = true;
$defConsts["wxEVT_COMMAND_LIST_SET_INFO"] = true;
$defConsts["wxEVT_COMMAND_MENU_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_RADIOBOX_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_RADIOBUTTON_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_BUFFER_RESET"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_CHARACTER"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_CONTENT_DELETED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_CONTENT_INSERTED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_DELETE"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_LEFT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_LEFT_DCLICK"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_MIDDLE_CLICK"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_RETURN"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_SELECTION_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACED"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACING"] = true;
$defConsts["wxEVT_COMMAND_RICHTEXT_STYLE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN"] = true;
$defConsts["wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN"] = true;
$defConsts["wxEVT_COMMAND_SET_FOCUS"] = true;
$defConsts["wxEVT_COMMAND_SLIDER_UPDATED"] = true;
$defConsts["wxEVT_COMMAND_SPINCTRL_UPDATED"] = true;
$defConsts["wxEVT_COMMAND_SPLITTER_DOUBLECLICKED"] = true;
$defConsts["wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_SPLITTER_UNSPLIT"] = true;
$defConsts["wxEVT_COMMAND_TEXT_COPY"] = true;
$defConsts["wxEVT_COMMAND_TEXT_CUT"] = true;
$defConsts["wxEVT_COMMAND_TEXT_ENTER"] = true;
$defConsts["wxEVT_COMMAND_TEXT_MAXLEN"] = true;
$defConsts["wxEVT_COMMAND_TEXT_PASTE"] = true;
$defConsts["wxEVT_COMMAND_TEXT_UPDATED"] = true;
$defConsts["wxEVT_COMMAND_TEXT_URL"] = true;
$defConsts["wxEVT_COMMAND_TOGGLEBUTTON_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_TOOL_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_TOOL_ENTER"] = true;
$defConsts["wxEVT_COMMAND_TOOL_RCLICKED"] = true;
$defConsts["wxEVT_COMMAND_TREEBOOK_NODE_COLLAPSED"] = true;
$defConsts["wxEVT_COMMAND_TREEBOOK_NODE_EXPANDED"] = true;
$defConsts["wxEVT_COMMAND_TREEBOOK_PAGE_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_TREEBOOK_PAGE_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_TREE_BEGIN_DRAG"] = true;
$defConsts["wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT"] = true;
$defConsts["wxEVT_COMMAND_TREE_BEGIN_RDRAG"] = true;
$defConsts["wxEVT_COMMAND_TREE_DELETE_ITEM"] = true;
$defConsts["wxEVT_COMMAND_TREE_END_DRAG"] = true;
$defConsts["wxEVT_COMMAND_TREE_END_LABEL_EDIT"] = true;
$defConsts["wxEVT_COMMAND_TREE_GET_INFO"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_ACTIVATED"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_COLLAPSED"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_COLLAPSING"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_EXPANDED"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_EXPANDING"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_MENU"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK"] = true;
$defConsts["wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK"] = true;
$defConsts["wxEVT_COMMAND_TREE_KEY_DOWN"] = true;
$defConsts["wxEVT_COMMAND_TREE_SEL_CHANGED"] = true;
$defConsts["wxEVT_COMMAND_TREE_SEL_CHANGING"] = true;
$defConsts["wxEVT_COMMAND_TREE_SET_INFO"] = true;
$defConsts["wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK"] = true;
$defConsts["wxEVT_COMMAND_VLBOX_SELECTED"] = true;
$defConsts["wxEVT_COMPARE_ITEM		"] = true;
$defConsts["wxEVT_CONTEXT_MENU"] = true;
$defConsts["wxEVT_CREATE"] = true;
$defConsts["wxEVT_DATE_CHANGED"] = true;
$defConsts["wxEVT_DESTROY"] = true;
$defConsts["wxEVT_DETAILED_HELP"] = true;
$defConsts["wxEVT_DISPLAY_CHANGED"] = true;
$defConsts["wxEVT_DRAW_ITEM"] = true;
$defConsts["wxEVT_DROP_FILES"] = true;
$defConsts["wxEVT_END_PROCESS"] = true;
$defConsts["wxEVT_END_SESSION"] = true;
$defConsts["wxEVT_ENTER_WINDOW"] = true;
$defConsts["wxEVT_ERASE_BACKGROUND	"] = true;
$defConsts["wxEVT_GRID_CELL_BEGIN_DRAG"] = true;
$defConsts["wxEVT_GRID_CELL_CHANGE"] = true;
$defConsts["wxEVT_GRID_CELL_LEFT_CLICK"] = true;
$defConsts["wxEVT_GRID_CELL_LEFT_DCLICK"] = true;
$defConsts["wxEVT_GRID_CELL_RIGHT_CLICK"] = true;
$defConsts["wxEVT_GRID_CELL_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_GRID_COL_MOVE"] = true;
$defConsts["wxEVT_GRID_COL_SIZE"] = true;
$defConsts["wxEVT_GRID_EDITOR_CREATED"] = true;
$defConsts["wxEVT_GRID_EDITOR_HIDDEN"] = true;
$defConsts["wxEVT_GRID_EDITOR_SHOWN"] = true;
$defConsts["wxEVT_GRID_LABEL_LEFT_CLICK"] = true;
$defConsts["wxEVT_GRID_LABEL_LEFT_DCLICK"] = true;
$defConsts["wxEVT_GRID_LABEL_RIGHT_CLICK"] = true;
$defConsts["wxEVT_GRID_LABEL_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_GRID_RANGE_SELECT"] = true;
$defConsts["wxEVT_GRID_ROW_SIZE"] = true;
$defConsts["wxEVT_GRID_SELECT_CELL"] = true;
$defConsts["wxEVT_HELP"] = true;
$defConsts["wxEVT_HIBERNATE"] = true;
$defConsts["wxEVT_ICONIZE"] = true;
$defConsts["wxEVT_IDLE"] = true;
$defConsts["wxEVT_INIT_DIALOG"] = true;
$defConsts["wxEVT_JOY_BUTTON_DOWN"] = true;
$defConsts["wxEVT_JOY_BUTTON_UP"] = true;
$defConsts["wxEVT_JOY_MOVE"] = true;
$defConsts["wxEVT_JOY_ZMOVE"] = true;
$defConsts["wxEVT_KEY_DOWN"] = true;
$defConsts["wxEVT_KEY_UP"] = true;
$defConsts["wxEVT_KILL_FOCUS"] = true;
$defConsts["wxEVT_LEAVE_WINDOW"] = true;
$defConsts["wxEVT_LEFT_DCLICK"] = true;
$defConsts["wxEVT_LEFT_DOWN"] = true;
$defConsts["wxEVT_LEFT_UP"] = true;
$defConsts["wxEVT_MAXIMIZE"] = true;
$defConsts["wxEVT_MEASURE_ITEM"] = true;
$defConsts["wxEVT_MENU_CLOSE"] = true;
$defConsts["wxEVT_MENU_HIGHLIGHT"] = true;
$defConsts["wxEVT_MENU_OPEN"] = true;
$defConsts["wxEVT_MIDDLE_DCLICK"] = true;
$defConsts["wxEVT_MIDDLE_DOWN"] = true;
$defConsts["wxEVT_MIDDLE_UP"] = true;
$defConsts["wxEVT_MOTION"] = true;
$defConsts["wxEVT_MOUSEWHEEL"] = true;
$defConsts["wxEVT_MOUSE_CAPTURE_CHANGED"] = true;
$defConsts["wxEVT_MOUSE_CAPTURE_LOST"] = true;
$defConsts["wxEVT_MOVE"] = true;
$defConsts["wxEVT_MOVING"] = true;
$defConsts["wxEVT_NAVIGATION_KEY"] = true;
$defConsts["wxEVT_NC_ENTER_WINDOW"] = true;
$defConsts["wxEVT_NC_LEAVE_WINDOW"] = true;
$defConsts["wxEVT_NC_LEFT_DCLICK"] = true;
$defConsts["wxEVT_NC_LEFT_DOWN"] = true;
$defConsts["wxEVT_NC_LEFT_UP"] = true;
$defConsts["wxEVT_NC_MIDDLE_DCLICK"] = true;
$defConsts["wxEVT_NC_MIDDLE_DOWN"] = true;
$defConsts["wxEVT_NC_MIDDLE_UP"] = true;
$defConsts["wxEVT_NC_MOTION"] = true;
$defConsts["wxEVT_NC_PAINT"] = true;
$defConsts["wxEVT_NC_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_NC_RIGHT_DOWN"] = true;
$defConsts["wxEVT_NC_RIGHT_UP"] = true;
$defConsts["wxEVT_PAINT"] = true;
$defConsts["wxEVT_PAINT_ICON"] = true;
$defConsts["wxEVT_PALETTE_CHANGED"] = true;
$defConsts["wxEVT_QUERY_END_SESSION"] = true;
$defConsts["wxEVT_QUERY_LAYOUT_INFO"] = true;
$defConsts["wxEVT_QUERY_NEW_PALETTE"] = true;
$defConsts["wxEVT_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_RIGHT_DOWN"] = true;
$defConsts["wxEVT_RIGHT_UP"] = true;
$defConsts["wxEVT_SASH_DRAGGED"] = true;
$defConsts["wxEVT_SCROLLWIN_BOTTOM"] = true;
$defConsts["wxEVT_SCROLLWIN_LINEDOWN"] = true;
$defConsts["wxEVT_SCROLLWIN_LINEUP"] = true;
$defConsts["wxEVT_SCROLLWIN_PAGEDOWN"] = true;
$defConsts["wxEVT_SCROLLWIN_PAGEUP"] = true;
$defConsts["wxEVT_SCROLLWIN_THUMBRELEASE"] = true;
$defConsts["wxEVT_SCROLLWIN_THUMBTRACK"] = true;
$defConsts["wxEVT_SCROLLWIN_TOP"] = true;
$defConsts["wxEVT_SCROLL_BOTTOM"] = true;
$defConsts["wxEVT_SCROLL_CHANGED"] = true;
$defConsts["wxEVT_SCROLL_LINEDOWN"] = true;
$defConsts["wxEVT_SCROLL_LINEUP"] = true;
$defConsts["wxEVT_SCROLL_PAGEDOWN"] = true;
$defConsts["wxEVT_SCROLL_PAGEUP"] = true;
$defConsts["wxEVT_SCROLL_THUMBRELEASE"] = true;
$defConsts["wxEVT_SCROLL_THUMBTRACK"] = true;
$defConsts["wxEVT_SCROLL_TOP"] = true;
$defConsts["wxEVT_SETTING_CHANGED"] = true;
$defConsts["wxEVT_SET_CURSOR"] = true;
$defConsts["wxEVT_SET_FOCUS"] = true;
$defConsts["wxEVT_SHOW"] = true;
$defConsts["wxEVT_SIZE"] = true;
$defConsts["wxEVT_SIZING"] = true;
$defConsts["wxEVT_SOCKET"] = true;
$defConsts["wxEVT_SYS_COLOUR_CHANGED"] = true;
$defConsts["wxEVT_TASKBAR_CLICK"] = true;
$defConsts["wxEVT_TASKBAR_LEFT_DCLICK"] = true;
$defConsts["wxEVT_TASKBAR_LEFT_DOWN"] = true;
$defConsts["wxEVT_TASKBAR_LEFT_UP"] = true;
$defConsts["wxEVT_TASKBAR_MOVE"] = true;
$defConsts["wxEVT_TASKBAR_RIGHT_DCLICK"] = true;
$defConsts["wxEVT_TASKBAR_RIGHT_DOWN"] = true;
$defConsts["wxEVT_TASKBAR_RIGHT_UP"] = true;
$defConsts["wxEVT_TIMER"] = true;
$defConsts["wxEVT_UPDATE_UI"] = true;
$defConsts["wxEVT_WIZARD_CANCEL"] = true;
$defConsts["wxEVT_WIZARD_FINISHED"] = true;
$defConsts["wxEVT_WIZARD_HELP"] = true;
$defConsts["wxEVT_WIZARD_PAGE_CHANGED"] = true;
$defConsts["wxEVT_WIZARD_PAGE_CHANGING"] = true;
$defConsts["wxEVT_WIZARD_PAGE_SHOWN"] = true;
$defConsts["wxEVT_COMMAND_MENU_SELECTED"] = true;
$defConsts["wxEVT_COMMAND_TOOL_CLICKED"] = true;
$defConsts["wxEVT_COMMAND_TOOL_RCLICKED"] = true;
$defConsts["wxEVT_DETAILED_HELP"] = true;
$defConsts["wxEVT_HELP"] = true;
$defConsts["wxEVT_SASH_DRAGGED"] = true;
$defConsts["wxEVT_UPDATE_UI"] = true;

?>
