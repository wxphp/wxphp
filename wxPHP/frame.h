extern zend_class_entry *php_wxFrame_entry;
void php_wxFrame_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFrame_NAME "wxFrame"
#define le_wxFrame_name  "native wxFrame"

class wxFrame_php : public wxFrame{
	public:
	wxFrame_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 541072960 , const wxString& arg6 = wxFrameNameStr):wxFrame(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	wxFrame_php():wxFrame()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFrame;

static function_entry php_wxFrame_functions[] = {
        PHP_ME(php_wxFrame, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFrame, CreateStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, GetClientAreaOrigin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SendSizeEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusWidths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxEvent_entry;
void php_wxEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxEvent_NAME "wxEvent"
#define le_wxEvent_name  "native wxEvent"

class wxEvent_php : public wxEvent{
	public:
	wxEvent_php(int arg0 = 0 , int arg1 = wxEVT_NULL):wxEvent(arg0 , arg1)
	{
	}
		virtual wxEvent* Clone() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxEvent;

static function_entry php_wxEvent_functions[] = {
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxWindow_entry;
void php_wxWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxWindow_NAME "wxWindow"
#define le_wxWindow_name  "native wxWindow"

class wxWindow_php : public wxWindow{
	public:
	wxWindow_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxPanelNameStr):wxWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxWindow_php():wxWindow()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxWindow;

static function_entry php_wxWindow_functions[] = {
        PHP_ME(php_wxWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPoint_entry;
void php_wxPoint_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPoint_NAME "wxPoint"
#define le_wxPoint_name  "native wxPoint"

class wxPoint_php : public wxPoint{
	public:
	wxPoint_php(int arg0 , int arg1):wxPoint(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPoint;

static function_entry php_wxPoint_functions[] = {
        PHP_ME(php_wxPoint, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSize_entry;
void php_wxSize_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSize_NAME "wxSize"
#define le_wxSize_name  "native wxSize"

class wxSize_php : public wxSize{
	public:
	wxSize_php(int arg0 , int arg1):wxSize(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSize;

static function_entry php_wxSize_functions[] = {
        PHP_ME(php_wxSize, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBar_entry;
void php_wxToolBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBar_NAME "wxToolBar"
#define le_wxToolBar_name  "native wxToolBar"

class wxToolBar_php : public wxToolBar{
	public:
	wxToolBar_php():wxToolBar()
	{
	}
	wxToolBar_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxTB_HORIZONTAL , const wxString& arg5 = wxToolBarNameStr):wxToolBar(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBar;

static function_entry php_wxToolBar_functions[] = {
        PHP_ME(php_wxToolBar, SetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolNormalBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolDisabledBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, SetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxToolBar, FindToolForPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddCheckTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddRadioTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ClearTools, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteToolByPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, EnableTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindById, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolClientData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, RemoveTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ToggleTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStatusBar_entry;
void php_wxStatusBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStatusBar_NAME "wxStatusBar"
#define le_wxStatusBar_name  "native wxStatusBar"

class wxStatusBar_php : public wxStatusBar{
	public:
	wxStatusBar_php():wxStatusBar()
	{
	}
	wxStatusBar_php(wxWindow* arg0 , int arg1 , long int arg2 , const wxString& arg3 = wxPanelNameStr):wxStatusBar(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStatusBar;

static function_entry php_wxStatusBar_functions[] = {
        PHP_ME(php_wxStatusBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStatusBar, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBar, GetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBar, GetFieldRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PushStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PopStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, GetFieldsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetFieldsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetMinHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusWidths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusStyles, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBoxSizer_entry;
void php_wxBoxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBoxSizer_NAME "wxBoxSizer"
#define le_wxBoxSizer_name  "native wxBoxSizer"

class wxBoxSizer_php : public wxBoxSizer{
	public:
	wxBoxSizer_php(int arg0):wxBoxSizer(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBoxSizer;

static function_entry php_wxBoxSizer_functions[] = {
        PHP_ME(php_wxBoxSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBoxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, SetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizer_entry;
void php_wxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizer_NAME "wxSizer"
#define le_wxSizer_name  "native wxSizer"

class wxSizer_php : public wxSizer{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizer;

static function_entry php_wxSizer_functions[] = {
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxColour_entry;
void php_wxColour_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxColour_NAME "wxColour"
#define le_wxColour_name  "native wxColour"

class wxColour_php : public wxColour{
	public:
	wxColour_php():wxColour()
	{
	}
	wxColour_php(const wxString& arg0):wxColour(arg0)
	{
	}
	wxColour_php(const wxColour& arg0):wxColour(arg0)
	{
	}
	wxColour_php(unsigned char arg0 , unsigned char arg1 , unsigned char arg2 , unsigned char arg3 = wxALPHA_OPAQUE):wxColour(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxColour_php(long unsigned int arg0):wxColour(arg0)
	{
	}
	wxColour_php(const wchar_t* arg0):wxColour(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxColour;

static function_entry php_wxColour_functions[] = {
        PHP_ME(php_wxColour, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCursor_entry;
void php_wxCursor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCursor_NAME "wxCursor"
#define le_wxCursor_name  "native wxCursor"

class wxCursor_php : public wxCursor{
	public:
	wxCursor_php(int arg0):wxCursor(arg0)
	{
	}
	wxCursor_php():wxCursor()
	{
	}
	wxCursor_php(const wxImage& arg0):wxCursor(arg0)
	{
	}
	wxCursor_php(const wxCursor& arg0):wxCursor(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCursor;

static function_entry php_wxCursor_functions[] = {
        PHP_ME(php_wxCursor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFont_entry;
void php_wxFont_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFont_NAME "wxFont"
#define le_wxFont_name  "native wxFont"

class wxFont_php : public wxFont{
	public:
	wxFont_php():wxFont()
	{
	}
	wxFont_php(const wxString& arg0):wxFont(arg0)
	{
	}
	wxFont_php(int arg0 , int arg1 , int arg2 , int arg3 , bool arg4 = false , const wxString& arg5 = wxEmptyString , wxFontEncoding arg6 = wxFONTENCODING_DEFAULT):wxFont(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	wxFont_php(const wxFont& arg0):wxFont(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFont;

static function_entry php_wxFont_functions[] = {
        PHP_ME(php_wxFont, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxWindowBase_entry;
void php_wxWindowBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxWindowBase_NAME "wxWindowBase"
#define le_wxWindowBase_name  "native wxWindowBase"

class wxWindowBase_php : public wxWindowBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxWindowBase;

static function_entry php_wxWindowBase_functions[] = {
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizerFlags_entry;
void php_wxSizerFlags_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizerFlags_NAME "wxSizerFlags"
#define le_wxSizerFlags_name  "native wxSizerFlags"

class wxSizerFlags_php : public wxSizerFlags{
	public:
	wxSizerFlags_php(const wxSizerFlags& arg0):wxSizerFlags(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizerFlags;

static function_entry php_wxSizerFlags_functions[] = {
        PHP_ME(php_wxSizerFlags, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSizerItem_entry;
void php_wxSizerItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSizerItem_NAME "wxSizerItem"
#define le_wxSizerItem_name  "native wxSizerItem"

class wxSizerItem_php : public wxSizerItem{
	public:
	wxSizerItem_php():wxSizerItem()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSizerItem;

static function_entry php_wxSizerItem_functions[] = {
        PHP_ME(php_wxSizerItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxClassInfo_entry;
void php_wxClassInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxClassInfo_NAME "wxClassInfo"
#define le_wxClassInfo_name  "native wxClassInfo"

class wxClassInfo_php : public wxClassInfo{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxClassInfo;

static function_entry php_wxClassInfo_functions[] = {
        PHP_ME(php_wxClassInfo, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxObject_entry;
void php_wxObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxObject_NAME "wxObject"
#define le_wxObject_name  "native wxObject"

class wxObject_php : public wxObject{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxObject;

static function_entry php_wxObject_functions[] = {
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxImage_entry;
void php_wxImage_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxImage_NAME "wxImage"
#define le_wxImage_name  "native wxImage"

class wxImage_php : public wxImage{
	public:
	wxImage_php():wxImage()
	{
	}
	wxImage_php(const wxString& arg0 , long int arg1 = wxBITMAP_TYPE_ANY , int arg2 = -1):wxImage(arg0 , arg1 , arg2)
	{
	}
	wxImage_php(const wxImage& arg0):wxImage(arg0)
	{
	}
	wxImage_php(int arg0 , int arg1 , bool arg2 = true):wxImage(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxImage;

static function_entry php_wxImage_functions[] = {
        PHP_ME(php_wxImage, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxImage, Scale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rescale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Resize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rotate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Rotate90, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImage, Mirror, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuItem_entry;
void php_wxMenuItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuItem_NAME "wxMenuItem"
#define le_wxMenuItem_name  "native wxMenuItem"

class wxMenuItem_php : public wxMenuItem{
	public:
	wxMenuItem_php(wxMenu* arg0 = 0u , int arg1 = wxID_SEPARATOR , const wxString& arg2 = wxEmptyString , const wxString& arg3 = wxEmptyString , wxItemKind arg4 = wxITEM_NORMAL , wxMenu* arg5 = 0u):wxMenuItem(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxMenuItem_php(wxMenu* arg0 , int arg1 , const wxString& arg2 , const wxString& arg3 , bool arg4 , wxMenu* arg5 = 0u):wxMenuItem(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuItem;

static function_entry php_wxMenuItem_functions[] = {
        PHP_ME(php_wxMenuItem, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, SetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, GetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, GetItemLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMenuItemBase, SetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelFromText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsCheckable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetItemLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetItemLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelText, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuItemBase_entry;
void php_wxMenuItemBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuItemBase_NAME "wxMenuItemBase"
#define le_wxMenuItemBase_name  "native wxMenuItemBase"

class wxMenuItemBase_php : public wxMenuItemBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuItemBase;

static function_entry php_wxMenuItemBase_functions[] = {
        PHP_ME(php_wxMenuItemBase, SetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelFromText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsCheckable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetItemLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, SetItemLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuItemBase, GetLabelText, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenu_entry;
void php_wxMenu_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenu_NAME "wxMenu"
#define le_wxMenu_name  "native wxMenu"

class wxMenu_php : public wxMenu{
	public:
	wxMenu_php(const wxString& arg0 , long int arg1 = 0):wxMenu(arg0 , arg1)
	{
	}
	wxMenu_php(long int arg0 = 0):wxMenu(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenu;

static function_entry php_wxMenu_functions[] = {
        PHP_ME(php_wxMenu, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMenuBase, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Break, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItemByPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, UpdateUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmap_entry;
void php_wxBitmap_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmap_NAME "wxBitmap"
#define le_wxBitmap_name  "native wxBitmap"

class wxBitmap_php : public wxBitmap{
	public:
	wxBitmap_php(const wxString& arg0 , wxBitmapType arg1 = wxBITMAP_TYPE_XPM):wxBitmap(arg0 , arg1)
	{
	}
	wxBitmap_php():wxBitmap()
	{
	}
	wxBitmap_php(int arg0 , int arg1 , int arg2 = -0x00000000000000001):wxBitmap(arg0 , arg1 , arg2)
	{
	}
	wxBitmap_php(const char* arg0 , int arg1 , int arg2 , int arg3 = 1):wxBitmap(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxBitmap_php(const wxBitmap& arg0):wxBitmap(arg0)
	{
	}
	wxBitmap_php(const wxImage& arg0 , int arg1 = -0x00000000000000001):wxBitmap(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmap;

static function_entry php_wxBitmap_functions[] = {
        PHP_ME(php_wxBitmap, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBitmap, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, CopyFromIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, ConvertToImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetPalette, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetSubBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, LoadFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SaveFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetPalette, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuBase_entry;
void php_wxMenuBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuBase_NAME "wxMenuBase"
#define le_wxMenuBase_name  "native wxMenuBase"

class wxMenuBase_php : public wxMenuBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuBase;

static function_entry php_wxMenuBase_functions[] = {
        PHP_ME(php_wxMenuBase, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Break, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, InsertRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependCheckItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, PrependRadioItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, FindItemByPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, SetTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, AppendSubMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, UpdateUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBase, GetMenuItems, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuBar_entry;
void php_wxMenuBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuBar_NAME "wxMenuBar"
#define le_wxMenuBar_name  "native wxMenuBar"

class wxMenuBar_php : public wxMenuBar{
	public:
	wxMenuBar_php(long int arg0):wxMenuBar(arg0)
	{
	}
	wxMenuBar_php():wxMenuBar()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuBar;

static function_entry php_wxMenuBar_functions[] = {
        PHP_ME(php_wxMenuBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMenuBar, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, FindMenuItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, EnableTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, SetLabelTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, GetLabelTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBar, GetMenuLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, FindMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenuCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenuLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetMenuLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBarBase_entry;
void php_wxToolBarBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBarBase_NAME "wxToolBarBase"
#define le_wxToolBarBase_name  "native wxToolBarBase"

class wxToolBarBase_php : public wxToolBarBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBarBase;

static function_entry php_wxToolBarBase_functions[] = {
        PHP_ME(php_wxToolBarBase, AddCheckTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddRadioTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ClearTools, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, DeleteToolByPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, AddControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, EnableTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindById, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, FindControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolClientData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, GetToolState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, InsertTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, RemoveTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, ToggleTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToolBarBase, SetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToolBarToolBase_entry;
void php_wxToolBarToolBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToolBarToolBase_NAME "wxToolBarToolBase"
#define le_wxToolBarToolBase_name  "native wxToolBarToolBase"

class wxToolBarToolBase_php : public wxToolBarToolBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToolBarToolBase;

static function_entry php_wxToolBarToolBase_functions[] = {
        PHP_ME(php_wxToolBarToolBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxControl_entry;
void php_wxControl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxControl_NAME "wxControl"
#define le_wxControl_name  "native wxControl"

class wxControl_php : public wxControl{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxControl;

static function_entry php_wxControl_functions[] = {
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCommandEvent_entry;
void php_wxCommandEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCommandEvent_NAME "wxCommandEvent"
#define le_wxCommandEvent_name  "native wxCommandEvent"

class wxCommandEvent_php : public wxCommandEvent{
	public:
	wxCommandEvent_php(int arg0 = wxEVT_NULL , int arg1 = 0):wxCommandEvent(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCommandEvent;

static function_entry php_wxCommandEvent_functions[] = {
        PHP_ME(php_wxCommandEvent, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPanel_entry;
void php_wxPanel_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPanel_NAME "wxPanel"
#define le_wxPanel_name  "native wxPanel"

class wxPanel_php : public wxPanel{
	public:
	wxPanel_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 2621440 , const wxString& arg5 = wxPanelNameStr):wxPanel(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxPanel_php():wxPanel()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPanel;

static function_entry php_wxPanel_functions[] = {
        PHP_ME(php_wxPanel, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPanel, InitDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocusIgnoringChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTopLevelWindowBase_entry;
void php_wxTopLevelWindowBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTopLevelWindowBase_NAME "wxTopLevelWindowBase"
#define le_wxTopLevelWindowBase_name  "native wxTopLevelWindowBase"

class wxTopLevelWindowBase_php : public wxTopLevelWindowBase{
	public:
		virtual void Maximize(bool arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTopLevelWindowBase;

static function_entry php_wxTopLevelWindowBase_functions[] = {
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSplitterWindow_entry;
void php_wxSplitterWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSplitterWindow_NAME "wxSplitterWindow"
#define le_wxSplitterWindow_name  "native wxSplitterWindow"

class wxSplitterWindow_php : public wxSplitterWindow{
	public:
	wxSplitterWindow_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 768 , const wxString& arg5 = wxT("\000\000\000s\000\000\000p\000\000\000l\000\000\000i\000\000\000t\000\000\000t\000\000\000e\000\000\000r\000\000\000")):wxSplitterWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSplitterWindow;

static function_entry php_wxSplitterWindow_functions[] = {
        PHP_ME(php_wxSplitterWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSplitterWindow, SplitVertically, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SplitHorizontally, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetMinimumPaneSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetBorderSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetBorderSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSashGravity, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSashGravity, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetMinimumPaneSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetSplitMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetWindow1, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, GetWindow2, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, IsSplit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, ReplaceWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, Unsplit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, UpdateSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSplitterWindow, SetSplitMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeCtrl_entry;
void php_wxTreeCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeCtrl_NAME "wxTreeCtrl"
#define le_wxTreeCtrl_name  "native wxTreeCtrl"

class wxTreeCtrl_php : public wxTreeCtrl{
	public:
	wxTreeCtrl_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 5 , const wxValidator& arg5 = wxDefaultValidator , const wxString& arg6 = wxTreeCtrlNameStr):wxTreeCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeCtrl;

static function_entry php_wxTreeCtrl_functions[] = {
        PHP_ME(php_wxTreeCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTreeCtrl, AddRoot, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, AppendItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, DeleteChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, DeleteAllItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Expand, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Collapse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, CollapseAndReset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Toggle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, Unselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, UnselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SelectItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, EnsureVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, ScrollTo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemDropHighlight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetStateImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsExpanded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, SetItemHasChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, IsVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, ItemHasChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetChildrenCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetRootItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrl, GetItemParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrlBase, AssignImageList, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxValidator_entry;
void php_wxValidator_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxValidator_NAME "wxValidator"
#define le_wxValidator_name  "native wxValidator"

class wxValidator_php : public wxValidator{
	public:
	wxValidator_php():wxValidator()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxValidator;

static function_entry php_wxValidator_functions[] = {
        PHP_ME(php_wxValidator, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckListBox_entry;
void php_wxCheckListBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckListBox_NAME "wxCheckListBox"
#define le_wxCheckListBox_name  "native wxCheckListBox"

class wxCheckListBox_php : public wxCheckListBox{
	public:
	wxCheckListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0u , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxListBoxNameStr):wxCheckListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxCheckListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxListBoxNameStr):wxCheckListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckListBox;

static function_entry php_wxCheckListBox_functions[] = {
        PHP_ME(php_wxCheckListBox, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckListBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCheckListBox, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeItemData_entry;
void php_wxTreeItemData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeItemData_NAME "wxTreeItemData"
#define le_wxTreeItemData_name  "native wxTreeItemData"

class wxTreeItemData_php : public wxTreeItemData{
	public:
	wxTreeItemData_php():wxTreeItemData()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeItemData;

static function_entry php_wxTreeItemData_functions[] = {
        PHP_ME(php_wxTreeItemData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeItemId_entry;
void php_wxTreeItemId_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeItemId_NAME "wxTreeItemId"
#define le_wxTreeItemId_name  "native wxTreeItemId"

class wxTreeItemId_php : public wxTreeItemId{
	public:
	wxTreeItemId_php():wxTreeItemId()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeItemId;

static function_entry php_wxTreeItemId_functions[] = {
        PHP_ME(php_wxTreeItemId, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTreeItemId, IsOk, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFrameBase_entry;
void php_wxFrameBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFrameBase_NAME "wxFrameBase"
#define le_wxFrameBase_name  "native wxFrameBase"

class wxFrameBase_php : public wxFrameBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFrameBase;

static function_entry php_wxFrameBase_functions[] = {
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SendSizeEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusWidths, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeEvent_entry;
void php_wxTreeEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeEvent_NAME "wxTreeEvent"
#define le_wxTreeEvent_name  "native wxTreeEvent"

class wxTreeEvent_php : public wxTreeEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeEvent;

static function_entry php_wxTreeEvent_functions[] = {
        PHP_ME(php_wxTreeEvent, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxArrayString_entry;
void php_wxArrayString_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxArrayString_NAME "wxArrayString"
#define le_wxArrayString_name  "native wxArrayString"

class wxArrayString_php : public wxArrayString{
	public:
	wxArrayString_php():wxArrayString()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxArrayString;

static function_entry php_wxArrayString_functions[] = {
        PHP_ME(php_wxArrayString, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxArrayString, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxArrayString, Empty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxArrayString, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckListBoxBase_entry;
void php_wxCheckListBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckListBoxBase_NAME "wxCheckListBoxBase"
#define le_wxCheckListBoxBase_name  "native wxCheckListBoxBase"

class wxCheckListBoxBase_php : public wxCheckListBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckListBoxBase;

static function_entry php_wxCheckListBoxBase_functions[] = {
        PHP_ME(php_wxCheckListBoxBase, Check, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListBoxBase_entry;
void php_wxListBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListBoxBase_NAME "wxListBoxBase"
#define le_wxListBoxBase_name  "native wxListBoxBase"

class wxListBoxBase_php : public wxListBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListBoxBase;

static function_entry php_wxListBoxBase_functions[] = {
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIcon_entry;
void php_wxIcon_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIcon_NAME "wxIcon"
#define le_wxIcon_name  "native wxIcon"

class wxIcon_php : public wxIcon{
	public:
	wxIcon_php():wxIcon()
	{
	}
	wxIcon_php(const wxString& arg0 , wxBitmapType arg1 = wxBITMAP_TYPE_XPM , int arg2 = -0x00000000000000001):wxIcon(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIcon;

static function_entry php_wxIcon_functions[] = {
        PHP_ME(php_wxIcon, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxIcon, CopyFromBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, CopyFromIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, ConvertToImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetPalette, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, GetSubBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, LoadFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SaveFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetDepth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetPalette, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmap, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTextCtrl_entry;
void php_wxTextCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTextCtrl_NAME "wxTextCtrl"
#define le_wxTextCtrl_name  "native wxTextCtrl"

class wxTextCtrl_php : public wxTextCtrl{
	public:
	wxTextCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxTextCtrlNameStr):wxTextCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTextCtrl;

static function_entry php_wxTextCtrl_functions[] = {
        PHP_ME(php_wxTextCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTextCtrl, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetMaxLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, AppendText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, WriteText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, XYToPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, Undo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrl, ShowPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanCopy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanCut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanPaste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanRedo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Cut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, DiscardEdits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, EmulateKeyPress, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetDefaultStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLastPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLineLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLineText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetNumberOfLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetStringSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsEmpty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsModified, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsMultiLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsSingleLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, LoadFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, MarkDirty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Paste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, PositionToXY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, SaveFile, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxNotebook_entry;
void php_wxNotebook_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxNotebook_NAME "wxNotebook"
#define le_wxNotebook_name  "native wxNotebook"

class wxNotebook_php : public wxNotebook{
	public:
	wxNotebook_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxNotebookNameStr):wxNotebook(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxNotebook;

static function_entry php_wxNotebook_functions[] = {
        PHP_ME(php_wxNotebook, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxNotebook, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPageSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetPadding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetTabSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, DeleteAllPages, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebook, InsertPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotebookBase, GetRowCount, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBookCtrlBase_entry;
void php_wxBookCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBookCtrlBase_NAME "wxBookCtrlBase"
#define le_wxBookCtrlBase_name  "native wxBookCtrlBase"

class wxBookCtrlBase_php : public wxBookCtrlBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBookCtrlBase;

static function_entry php_wxBookCtrlBase_functions[] = {
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFlexGridSizer_entry;
void php_wxFlexGridSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFlexGridSizer_NAME "wxFlexGridSizer"
#define le_wxFlexGridSizer_name  "native wxFlexGridSizer"

class wxFlexGridSizer_php : public wxFlexGridSizer{
	public:
	wxFlexGridSizer_php(int arg0 , int arg1 , int arg2 , int arg3):wxFlexGridSizer(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxFlexGridSizer_php(int arg0 , int arg1 = 0 , int arg2 = 0):wxFlexGridSizer(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFlexGridSizer;

static function_entry php_wxFlexGridSizer_functions[] = {
        PHP_ME(php_wxFlexGridSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFlexGridSizer, AddGrowableRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, RemoveGrowableRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, AddGrowableCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, RemoveGrowableCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, SetFlexibleDirection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, GetFlexibleDirection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, GetNonFlexibleGrowMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFlexGridSizer, SetNonFlexibleGrowMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetHGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetVGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetHGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetVGap, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticText_entry;
void php_wxStaticText_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticText_NAME "wxStaticText"
#define le_wxStaticText_name  "native wxStaticText"

class wxStaticText_php : public wxStaticText{
	public:
	wxStaticText_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticTextNameStr):wxStaticText(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticText;

static function_entry php_wxStaticText_functions[] = {
        PHP_ME(php_wxStaticText, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticText, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, Wrap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticText, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxButton_entry;
void php_wxButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxButton_NAME "wxButton"
#define le_wxButton_name  "native wxButton"

class wxButton_php : public wxButton{
	public:
	wxButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxButtonNameStr):wxButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxButton;

static function_entry php_wxButton_functions[] = {
        PHP_ME(php_wxButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBox_entry;
void php_wxStaticBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBox_NAME "wxStaticBox"
#define le_wxStaticBox_name  "native wxStaticBox"

class wxStaticBox_php : public wxStaticBox{
	public:
	wxStaticBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticBoxNameStr):wxStaticBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBox;

static function_entry php_wxStaticBox_functions[] = {
        PHP_ME(php_wxStaticBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticBox, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBoxSizer_entry;
void php_wxStaticBoxSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBoxSizer_NAME "wxStaticBoxSizer"
#define le_wxStaticBoxSizer_name  "native wxStaticBoxSizer"

class wxStaticBoxSizer_php : public wxStaticBoxSizer{
	public:
	wxStaticBoxSizer_php(wxStaticBox* arg0 , int arg1):wxStaticBoxSizer(arg0 , arg1)
	{
	}
	wxStaticBoxSizer_php(int arg0 , wxWindow* arg1 , const wxString& arg2 = wxEmptyString):wxStaticBoxSizer(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBoxSizer;

static function_entry php_wxStaticBoxSizer_functions[] = {
        PHP_ME(php_wxStaticBoxSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBoxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, SetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListBox_entry;
void php_wxListBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListBox_NAME "wxListBox"
#define le_wxListBox_name  "native wxListBox"

class wxListBox_php : public wxListBox{
	public:
	wxListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0u , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxListBoxNameStr):wxListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxListBox_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxListBoxNameStr):wxListBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListBox;

static function_entry php_wxListBox_functions[] = {
        PHP_ME(php_wxListBox, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, IsSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListBoxBase, Deselect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, InsertItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, DeselectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListBoxBase, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFileDialog_entry;
void php_wxFileDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFileDialog_NAME "wxFileDialog"
#define le_wxFileDialog_name  "native wxFileDialog"

class wxFileDialog_php : public wxFileDialog{
	public:
	wxFileDialog_php(wxWindow* arg0 , const wxString& arg1 = wxFileSelectorPromptStr , const wxString& arg2 = wxEmptyString , const wxString& arg3 = wxEmptyString , const wxString& arg4 = wxFileSelectorDefaultWildcardStr , long int arg5 = 0 , const wxPoint& arg6 = wxDefaultPosition):wxFileDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFileDialog;

static function_entry php_wxFileDialog_functions[] = {
        PHP_ME(php_wxFileDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFileDialog, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetDirectory, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetMessage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetDirectory, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetWildcard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, SetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetPaths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDialog, GetFilenames, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, SetModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateSeparatedButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateStdDialogButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDialog_entry;
void php_wxDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDialog_NAME "wxDialog"
#define le_wxDialog_name  "native wxDialog"

class wxDialog_php : public wxDialog{
	public:
	wxDialog_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 536877056 , const wxString& arg6 = wxDialogNameStr):wxDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	wxDialog_php():wxDialog()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDialog;

static function_entry php_wxDialog_functions[] = {
        PHP_ME(php_wxDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, SetModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateSeparatedButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateStdDialogButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMessageDialog_entry;
void php_wxMessageDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMessageDialog_NAME "wxMessageDialog"
#define le_wxMessageDialog_name  "native wxMessageDialog"

class wxMessageDialog_php : public wxMessageDialog{
	public:
	wxMessageDialog_php(wxWindow* arg0 , const wxString& arg1 , const wxString& arg2 = wxMessageBoxCaptionStr , long int arg3 = 5 , const wxPoint& arg4 = wxDefaultPosition):wxMessageDialog(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMessageDialog;

static function_entry php_wxMessageDialog_functions[] = {
        PHP_ME(php_wxMessageDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMessageDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMessageDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, SetModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateSeparatedButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateStdDialogButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStatusBarBase_entry;
void php_wxStatusBarBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStatusBarBase_NAME "wxStatusBarBase"
#define le_wxStatusBarBase_name  "native wxStatusBarBase"

class wxStatusBarBase_php : public wxStatusBarBase{
	public:
		virtual void SetMinHeight(int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStatusBarBase;

static function_entry php_wxStatusBarBase_functions[] = {
        PHP_ME(php_wxStatusBarBase, PushStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, GetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, PopStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, GetFieldsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetFieldsCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetMinHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusWidths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStatusBarBase, SetStatusStyles, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListCtrl_entry;
void php_wxListCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListCtrl_NAME "wxListCtrl"
#define le_wxListCtrl_name  "native wxListCtrl"

class wxListCtrl_php : public wxListCtrl{
	public:
	wxListCtrl_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 4 , const wxValidator& arg5 = wxDefaultValidator , const wxString& arg6 = wxListCtrlNameStr):wxListCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
		virtual wxString OnGetItemText(long int arg0 , long int arg1) const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListCtrl;

static function_entry php_wxListCtrl_functions[] = {
        PHP_ME(php_wxListCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListCtrl, DeleteAllItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, OnGetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetColumnWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetColumnWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, InsertColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetColumnCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteAllColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, DeleteColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, InsertItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetSelectedItemCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, Arrange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, AssignImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, ClearAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, EditLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, EnsureVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetCountPerPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetEditControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetItemState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetNextItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetTopItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, GetViewRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemColumnImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetItemState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetSingleStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListCtrl, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticBitmap_entry;
void php_wxStaticBitmap_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticBitmap_NAME "wxStaticBitmap"
#define le_wxStaticBitmap_name  "native wxStaticBitmap"

class wxStaticBitmap_php : public wxStaticBitmap{
	public:
	wxStaticBitmap_php(wxWindow* arg0 , int arg1 , const wxBitmap& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxString& arg6 = wxStaticBitmapNameStr):wxStaticBitmap(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticBitmap;

static function_entry php_wxStaticBitmap_functions[] = {
        PHP_ME(php_wxStaticBitmap, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticBitmap, SetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticBitmap, GetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticBitmap, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticBitmap, GetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGauge_entry;
void php_wxGauge_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGauge_NAME "wxGauge"
#define le_wxGauge_name  "native wxGauge"

class wxGauge_php : public wxGauge{
	public:
	wxGauge_php(wxWindow* arg0 , int arg1 , int arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = wxHORIZONTAL , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxGaugeNameStr):wxGauge(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGauge;

static function_entry php_wxGauge_functions[] = {
        PHP_ME(php_wxGauge, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGauge, SetShadowWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetBezelFace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetShadowWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetBezelFace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, IsVertical, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGauge, Pulse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListEvent_entry;
void php_wxListEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListEvent_NAME "wxListEvent"
#define le_wxListEvent_name  "native wxListEvent"

class wxListEvent_php : public wxListEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListEvent;

static function_entry php_wxListEvent_functions[] = {
        PHP_ME(php_wxListEvent, GetIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListEvent, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxComboBox_entry;
void php_wxComboBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxComboBox_NAME "wxComboBox"
#define le_wxComboBox_name  "native wxComboBox"

class wxComboBox_php : public wxComboBox{
	public:
	wxComboBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , int arg5 = 0 , const wxString* arg6 = 0 , long int arg7 = 0 , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxComboBoxNameStr):wxComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	wxComboBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 , const wxSize& arg4 , const wxArrayString& arg5 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxComboBoxNameStr):wxComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxComboBox;

static function_entry php_wxComboBox_functions[] = {
        PHP_ME(php_wxComboBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxComboBox, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, CanCopy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, CanCut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, CanPaste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, CanRedo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Cut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetCurrentSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetLastPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Paste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, SetInsertionPointEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Undo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxComboBox, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrinter_entry;
void php_wxPrinter_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrinter_NAME "wxPrinter"
#define le_wxPrinter_name  "native wxPrinter"

class wxPrinter_php : public wxPrinter{
	public:
	wxPrinter_php(wxPrintDialogData* arg0 = 0u):wxPrinter(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrinter;

static function_entry php_wxPrinter_functions[] = {
        PHP_ME(php_wxPrinter, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPrinter, Print, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrinter, PrintDialog, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrintout_entry;
void php_wxPrintout_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrintout_NAME "wxPrintout"
#define le_wxPrintout_name  "native wxPrintout"

class wxPrintout_php : public wxPrintout{
	public:
	wxPrintout_php(const wxString& arg0 = wxT("Printout")):wxPrintout(arg0)
	{
	}
		virtual bool OnPrintPage(int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrintout;

static function_entry php_wxPrintout_functions[] = {
        PHP_ME(php_wxPrintout, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPrintout, GetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, SetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, OnPrintPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintout, IsPreview, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDC_entry;
void php_wxDC_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDC_NAME "wxDC"
#define le_wxDC_name  "native wxDC"

class wxDC_php : public wxDC{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDC;

static function_entry php_wxDC_functions[] = {
        PHP_ME(php_wxDC, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, StartDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, EndDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, StartPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, EndPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, SetPen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, SetBrush, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDC, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCircle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawEllipse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, FloodFill, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GradientFillConcentric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawArc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCheckMark, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawRectangle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawSpline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, BeginDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDCBase_entry;
void php_wxDCBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDCBase_NAME "wxDCBase"
#define le_wxDCBase_name  "native wxDCBase"

class wxDCBase_php : public wxDCBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDCBase;

static function_entry php_wxDCBase_functions[] = {
        PHP_ME(php_wxDCBase, DrawText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCircle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawEllipse, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, FloodFill, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GradientFillConcentric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawArc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawCheckMark, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawRectangle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, DrawSpline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, StartDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDoc, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, StartPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, BeginDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, EndDrawing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDCBase, GetSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrintDialogData_entry;
void php_wxPrintDialogData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrintDialogData_NAME "wxPrintDialogData"
#define le_wxPrintDialogData_name  "native wxPrintDialogData"

class wxPrintDialogData_php : public wxPrintDialogData{
	public:
	wxPrintDialogData_php():wxPrintDialogData()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrintDialogData;

static function_entry php_wxPrintDialogData_functions[] = {
        PHP_ME(php_wxPrintDialogData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRect_entry;
void php_wxRect_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRect_NAME "wxRect"
#define le_wxRect_name  "native wxRect"

class wxRect_php : public wxRect{
	public:
	wxRect_php(int arg0 , int arg1 , int arg2 , int arg3):wxRect(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRect;

static function_entry php_wxRect_functions[] = {
        PHP_ME(php_wxRect, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPen_entry;
void php_wxPen_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPen_NAME "wxPen"
#define le_wxPen_name  "native wxPen"

class wxPen_php : public wxPen{
	public:
	wxPen_php(const wxColour& arg0 , int arg1 = 1 , int arg2 = wxSOLID):wxPen(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPen;

static function_entry php_wxPen_functions[] = {
        PHP_ME(php_wxPen, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPen, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPen, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPen, SetColour, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBrush_entry;
void php_wxBrush_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBrush_NAME "wxBrush"
#define le_wxBrush_name  "native wxBrush"

class wxBrush_php : public wxBrush{
	public:
	wxBrush_php():wxBrush()
	{
	}
	wxBrush_php(const wxColour& arg0 , int arg1 = wxSOLID):wxBrush(arg0 , arg1)
	{
	}
	wxBrush_php(const wxBitmap& arg0):wxBrush(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBrush;

static function_entry php_wxBrush_functions[] = {
        PHP_ME(php_wxBrush, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBrush, SetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBrush, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBrush, SetStipple, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSplashScreen_entry;
void php_wxSplashScreen_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSplashScreen_NAME "wxSplashScreen"
#define le_wxSplashScreen_name  "native wxSplashScreen"

class wxSplashScreen_php : public wxSplashScreen{
	public:
	wxSplashScreen_php(const wxBitmap& arg0 , long int arg1 , int arg2 , wxWindow* arg3 , int arg4 , const wxPoint& arg5 = wxDefaultPosition , const wxSize& arg6 = wxDefaultSize , long int arg7 = 33587202):wxSplashScreen(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSplashScreen;

static function_entry php_wxSplashScreen_functions[] = {
        PHP_ME(php_wxSplashScreen, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSplashScreen, GetTimeout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, CreateToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, GetClientAreaOrigin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrame, SetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, GetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SendSizeEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusBarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFrameBase, SetStatusWidths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarCtrl_entry;
void php_wxCalendarCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarCtrl_NAME "wxCalendarCtrl"
#define le_wxCalendarCtrl_name  "native wxCalendarCtrl"

class wxCalendarCtrl_php : public wxCalendarCtrl{
	public:
	wxCalendarCtrl_php(wxWindow* arg0 , int arg1 , const wxDateTime& arg2 = wxDefaultDateTime , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 262146 , const wxString& arg6 = wxT("CalendarCtrl")):wxCalendarCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarCtrl;

static function_entry php_wxCalendarCtrl_functions[] = {
        PHP_ME(php_wxCalendarCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCalendarCtrl, SetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetLowerDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetLowerDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetUpperDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetUpperDateLimit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetDateRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableYearChange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableMonthChange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, EnableHolidayDisplay, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHeaderColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHighlightColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHolidayColours, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, GetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, SetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarCtrl, ResetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarEvent_entry;
void php_wxCalendarEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarEvent_NAME "wxCalendarEvent"
#define le_wxCalendarEvent_name  "native wxCalendarEvent"

class wxCalendarEvent_php : public wxCalendarEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarEvent;

static function_entry php_wxCalendarEvent_functions[] = {
        PHP_ME(php_wxCalendarEvent, GetWeekDay, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, SetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDateEvent_entry;
void php_wxDateEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDateEvent_NAME "wxDateEvent"
#define le_wxDateEvent_name  "native wxDateEvent"

class wxDateEvent_php : public wxDateEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDateEvent;

static function_entry php_wxDateEvent_functions[] = {
        PHP_ME(php_wxDateEvent, GetDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateEvent, SetDate, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDateTime_entry;
void php_wxDateTime_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDateTime_NAME "wxDateTime"
#define le_wxDateTime_name  "native wxDateTime"

class wxDateTime_php : public wxDateTime{
	public:
	wxDateTime_php():wxDateTime()
	{
	}
	wxDateTime_php(long int arg0):wxDateTime(arg0)
	{
	}
	wxDateTime_php(double arg0):wxDateTime(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDateTime;

static function_entry php_wxDateTime_functions[] = {
        PHP_ME(php_wxDateTime, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDateTime, GetCountry, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ConvertYearToBC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetCentury, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetTmNow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetTimeNow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, FormatISOTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, FormatISODate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, FormatTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, FormatDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ParseTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ParseDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ParseDateTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsSameTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsSameDate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsBetween, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsStrictlyBetween, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsLaterThan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsEarlierThan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, IsEqualTo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetAsDOS, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, SetFromDOS, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, GetTicks, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, MakeFromUTC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, FromUTC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, MakeGMT, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ToGMT, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, MakeUTC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, ToUTC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, SetYear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, Now, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, UNow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDateTime, Today, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCalendarDateAttr_entry;
void php_wxCalendarDateAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCalendarDateAttr_NAME "wxCalendarDateAttr"
#define le_wxCalendarDateAttr_name  "native wxCalendarDateAttr"

class wxCalendarDateAttr_php : public wxCalendarDateAttr{
	public:
	wxCalendarDateAttr_php():wxCalendarDateAttr()
	{
	}
	wxCalendarDateAttr_php(const wxColour& arg0 , const wxColour& arg1 = wxNullColour , const wxColour& arg2 = wxNullColour , const wxFont& arg3 = wxNullFont , wxCalendarDateBorder arg4 = wxCAL_BORDER_NONE):wxCalendarDateAttr(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	wxCalendarDateAttr_php(wxCalendarDateBorder arg0 , const wxColour& arg1 = wxNullColour):wxCalendarDateAttr(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCalendarDateAttr;

static function_entry php_wxCalendarDateAttr_functions[] = {
        PHP_ME(php_wxCalendarDateAttr, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCalendarDateAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, SetHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, IsHoliday, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBorderColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCalendarDateAttr, GetBorder, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTimer_entry;
void php_wxTimer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTimer_NAME "wxTimer"
#define le_wxTimer_name  "native wxTimer"

class wxTimer_php : public wxTimer{
	public:
	wxTimer_php():wxTimer()
	{
	}
	wxTimer_php(wxEvtHandler* arg0 , int arg1 = wxID_ANY):wxTimer(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTimer;

static function_entry php_wxTimer_functions[] = {
        PHP_ME(php_wxTimer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTimer, Start, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimer, Stop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimer, IsRunning, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, GetInterval, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, IsOneShot, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, Notify, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, SetOwner, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxEvtHandler_entry;
void php_wxEvtHandler_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxEvtHandler_NAME "wxEvtHandler"
#define le_wxEvtHandler_name  "native wxEvtHandler"

class wxEvtHandler_php : public wxEvtHandler{
	public:
	wxEvtHandler_php():wxEvtHandler()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxEvtHandler;

static function_entry php_wxEvtHandler_functions[] = {
        PHP_ME(php_wxEvtHandler, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTimerEvent_entry;
void php_wxTimerEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTimerEvent_NAME "wxTimerEvent"
#define le_wxTimerEvent_name  "native wxTimerEvent"

class wxTimerEvent_php : public wxTimerEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTimerEvent;

static function_entry php_wxTimerEvent_functions[] = {
        PHP_ME(php_wxTimerEvent, GetInterval, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIPV4address_entry;
void php_wxIPV4address_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIPV4address_NAME "wxIPV4address"
#define le_wxIPV4address_name  "native wxIPV4address"

class wxIPV4address_php : public wxIPV4address{
	public:
	wxIPV4address_php():wxIPV4address()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIPV4address;

static function_entry php_wxIPV4address_functions[] = {
        PHP_ME(php_wxIPV4address, Hostname, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIPV4address, Service, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIPV4address, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSockAddress, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSockAddress_entry;
void php_wxSockAddress_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSockAddress_NAME "wxSockAddress"
#define le_wxSockAddress_name  "native wxSockAddress"

class wxSockAddress_php : public wxSockAddress{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSockAddress;

static function_entry php_wxSockAddress_functions[] = {
        PHP_ME(php_wxSockAddress, Clear, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSocketClient_entry;
void php_wxSocketClient_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSocketClient_NAME "wxSocketClient"
#define le_wxSocketClient_name  "native wxSocketClient"

class wxSocketClient_php : public wxSocketClient{
	public:
	wxSocketClient_php(int arg0 = wxSOCKET_NONE):wxSocketClient(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSocketClient;

static function_entry php_wxSocketClient_functions[] = {
        PHP_ME(php_wxSocketClient, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketClient, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSocketBase, SetEventHandler, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Close, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Discard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, IsConnected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Write, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSocketBase_entry;
void php_wxSocketBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSocketBase_NAME "wxSocketBase"
#define le_wxSocketBase_name  "native wxSocketBase"

class wxSocketBase_php : public wxSocketBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSocketBase;

static function_entry php_wxSocketBase_functions[] = {
        PHP_ME(php_wxSocketBase, SetEventHandler, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Close, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Discard, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, IsConnected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSocketBase, Write, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckBox_entry;
void php_wxCheckBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckBox_NAME "wxCheckBox"
#define le_wxCheckBox_name  "native wxCheckBox"

class wxCheckBox_php : public wxCheckBox{
	public:
	wxCheckBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxCheckBoxNameStr):wxCheckBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckBox;

static function_entry php_wxCheckBox_functions[] = {
        PHP_ME(php_wxCheckBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCheckBox, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBox, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDirDialog_entry;
void php_wxDirDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDirDialog_NAME "wxDirDialog"
#define le_wxDirDialog_name  "native wxDirDialog"

class wxDirDialog_php : public wxDirDialog{
	public:
	wxDirDialog_php(wxWindow* arg0 , const wxString& arg1 = wxDirSelectorPromptStr , const wxString& arg2 = wxEmptyString , long int arg3 = 536877120 , const wxPoint& arg4 = wxDefaultPosition , const wxSize& arg5 = wxDefaultSize , const wxString& arg6 = wxDirDialogNameStr):wxDirDialog(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDirDialog;

static function_entry php_wxDirDialog_functions[] = {
        PHP_ME(php_wxDirDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDirDialog, SetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirDialog, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, EndModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, SetModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialog, IsModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateSeparatedButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateStdDialogButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTopLevelWindowBase, Maximize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmapButton_entry;
void php_wxBitmapButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmapButton_NAME "wxBitmapButton"
#define le_wxBitmapButton_name  "native wxBitmapButton"

class wxBitmapButton_php : public wxBitmapButton{
	public:
	wxBitmapButton_php(wxWindow* arg0 , int arg1 , const wxBitmap& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 4 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxButtonNameStr):wxBitmapButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmapButton;

static function_entry php_wxBitmapButton_functions[] = {
        PHP_ME(php_wxBitmapButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxButton, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapDisabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapHover, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapDisabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapHover, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapSelected, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxToggleButton_entry;
void php_wxToggleButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxToggleButton_NAME "wxToggleButton"
#define le_wxToggleButton_name  "native wxToggleButton"

class wxToggleButton_php : public wxToggleButton{
	public:
	wxToggleButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxCheckBoxNameStr):wxToggleButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxToggleButton;

static function_entry php_wxToggleButton_functions[] = {
        PHP_ME(php_wxToggleButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxToggleButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToggleButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxToggleButton, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxChoice_entry;
void php_wxChoice_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxChoice_NAME "wxChoice"
#define le_wxChoice_name  "native wxChoice"

class wxChoice_php : public wxChoice{
	public:
	wxChoice_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , int arg4 = 0 , const wxString* arg5 = 0 , long int arg6 = 0 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxChoiceNameStr):wxChoice(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	wxChoice_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 , const wxSize& arg3 , const wxArrayString& arg4 , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxChoiceNameStr):wxChoice(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxChoice;

static function_entry php_wxChoice_functions[] = {
        PHP_ME(php_wxChoice, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxChoice, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetCurrentSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, FindString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, GetColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, SetColumns, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStyledTextCtrl_entry;
void php_wxStyledTextCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStyledTextCtrl_NAME "wxStyledTextCtrl"
#define le_wxStyledTextCtrl_name  "native wxStyledTextCtrl"

class wxStyledTextCtrl_php : public wxStyledTextCtrl{
	public:
	wxStyledTextCtrl_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxSTCNameStr):wxStyledTextCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStyledTextCtrl;

static function_entry php_wxStyledTextCtrl_functions[] = {
        PHP_ME(php_wxStyledTextCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStyledTextCtrl, AddText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ClearAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCurrentPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCharAt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetAnchor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetStyleAt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetUndoCollection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSavePoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CanRedo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetStyledText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetViewWhiteSpace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetViewWhiteSpace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetUndoCollection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GotoLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GotoPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetEndStyled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetAnchor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ConvertEOLs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetEOLMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetEOLMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StartStyling, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetStyling, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetTabWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetTabWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCodePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerDefine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerSetForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerSetBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerAdd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerDelete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerDeleteAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerGet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerNext, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerPrevious, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerDefineBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerAddSet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, MarkerSetAlpha, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginSensitive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginSensitive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleClearAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetItalic, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetFaceName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetEOLFilled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleResetDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetUnderline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetCase, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetHotSpot, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSelAlpha, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelAlpha, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCaretForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CmdKeyAssign, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CmdKeyClear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CmdKeyClearAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCaretPeriod, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCaretPeriod, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, IndicatorSetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, IndicatorGetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, IndicatorSetForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, IndicatorGetForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWhitespaceForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWhitespaceBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompShow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompCancel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompActive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompPosStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompComplete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompStops, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSelect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetCancelAtStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetCancelAtStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetFillUps, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetChooseSingle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetChooseSingle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetIgnoreCase, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetIgnoreCase, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetAutoHide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetAutoHide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetTypeSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetTypeSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetMaxWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetMaxWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompSetMaxHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetMaxHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetUseTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetUseTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetLineIndentation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineIndentation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineIndentPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetUseHorizontalScrollBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetUseHorizontalScrollBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetIndentationGuides, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetIndentationGuides, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetHighlightGuide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineEndPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetHighlightGuide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCodePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCurrentPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelectionStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSelectionStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelectionEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSelectionEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetPrintColourMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetPrintColourMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, FindText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetPrintMagnification, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetPrintMagnification, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetFirstVisibleLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMarginRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMarginRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetModify, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSelectedText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetTextRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, HideSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineFromPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PositionFromLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineScroll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, EnsureCaretVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ReplaceSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CanPaste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, EmptyUndoBuffer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Undo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Cut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Paste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetTextLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetOvertype, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetOvertype, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCaretWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCaretWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ReplaceTarget, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ReplaceTargetRE, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SearchInTarget, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSearchFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSearchFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipCancel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipActive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipPosAtStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipSetHighlight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipSetBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipSetForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipSetForegroundHighlight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CallTipUseStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, VisibleFromDocLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DocLineFromVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WrapCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetFoldLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetFoldLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLastChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetFoldParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ShowLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, HideLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetFoldExpanded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetFoldExpanded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ToggleFold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, EnsureVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetFoldFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, EnsureVisibleEnforcePolicy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetTabIndents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetTabIndents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetBackSpaceUnIndents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetBackSpaceUnIndents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMouseDwellTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetMouseDwellTime, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordStartPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordEndPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWrapMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetWrapMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWrapVisualFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetWrapVisualFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWrapVisualFlagsLocation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetWrapVisualFlagsLocation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWrapStartIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetWrapStartIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetScrollWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetLayoutCache, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLayoutCache, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetScrollWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, TextWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetEndAtLastLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetEndAtLastLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, TextHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetUseVerticalScrollBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetUseVerticalScrollBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AppendText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetTwoPhaseDraw, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetTwoPhaseDraw, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, TargetFromSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetFoldMarginColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetFoldMarginHiColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineDownExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CharLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineUpExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CharLeftExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CharRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CharRightExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordLeftExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, WordRightExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Home, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, HomeExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineEndExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DocumentStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DocumentStartExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DocumentEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DocumentEndExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PageUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PageUpExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PageDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PageDownExtend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, EditToggleOvertype, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Cancel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Tab, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, DeleteBack, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, BackTab, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, NewLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, FormFeed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ZoomIn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ZoomOut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineCopy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LineLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, LinesOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, UsePopUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetZoom, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetZoom, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CopyRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, CopyText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetSelectionMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetSelectionMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineSelStartPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLineSelEndPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetWhitespaceChars, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetCharsDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, AutoCompGetCurrent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StartRecord, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StopRecord, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetLexer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetLexer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, Colourise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetProperty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetKeyWords, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetLexerLanguage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetProperty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetPropertyExpanded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetPropertyInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetCurrentLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetSpec, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, StyleSetCharacterSet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, PointFromPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ScrollToLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, ScrollToColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetStyleBitsNeeded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, SetStyleBits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStyledTextCtrl, GetStyleBits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxImageList_entry;
void php_wxImageList_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxImageList_NAME "wxImageList"
#define le_wxImageList_name  "native wxImageList"

class wxImageList_php : public wxImageList{
	public:
	wxImageList_php():wxImageList()
	{
	}
	wxImageList_php(int arg0 , int arg1 , bool arg2 = true , int arg3 = 1):wxImageList(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxImageList;

static function_entry php_wxImageList_functions[] = {
        PHP_ME(php_wxImageList, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxImageList, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, RemoveAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxImageList, GetImageCount, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxXmlResource_entry;
void php_wxXmlResource_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxXmlResource_NAME "wxXmlResource"
#define le_wxXmlResource_name  "native wxXmlResource"

class wxXmlResource_php : public wxXmlResource{
	public:
	wxXmlResource_php(int arg0 = wxXRC_USE_LOCALE , const wxString& arg1 = wxEmptyString):wxXmlResource(arg0 , arg1)
	{
	}
	wxXmlResource_php(const wxString& arg0 , int arg1 = wxXRC_USE_LOCALE , const wxString& arg2 = wxEmptyString):wxXmlResource(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxXmlResource;

static function_entry php_wxXmlResource_functions[] = {
        PHP_ME(php_wxXmlResource, LoadToolBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadPanel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadFrame, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxXmlResource, Load, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, Unload, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, InitAllHandlers, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, ClearHandlers, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, LoadMenuBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, GetXRCID, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, GetDomain, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxXmlResource, SetDomain, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxLocale_entry;
void php_wxLocale_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxLocale_NAME "wxLocale"
#define le_wxLocale_name  "native wxLocale"

class wxLocale_php : public wxLocale{
	public:
	wxLocale_php():wxLocale()
	{
	}
	wxLocale_php(int arg0 , int arg1 = 3):wxLocale(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxLocale;

static function_entry php_wxLocale_functions[] = {
        PHP_ME(php_wxLocale, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxLocale, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, IsAvailable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, IsLoaded, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, AddCatalogLookupPathPrefix, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, AddCatalog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetLocale, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetLanguage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetCanonicalName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemLanguage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemEncoding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxLocale, GetSystemEncodingName, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTreeCtrlBase_entry;
void php_wxTreeCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTreeCtrlBase_NAME "wxTreeCtrlBase"
#define le_wxTreeCtrlBase_name  "native wxTreeCtrlBase"

class wxTreeCtrlBase_php : public wxTreeCtrlBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTreeCtrlBase;

static function_entry php_wxTreeCtrlBase_functions[] = {
        PHP_ME(php_wxTreeCtrlBase, AssignImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTreeCtrlBase, AppendItem, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRadioBox_entry;
void php_wxRadioBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRadioBox_NAME "wxRadioBox"
#define le_wxRadioBox_name  "native wxRadioBox"

class wxRadioBox_php : public wxRadioBox{
	public:
	wxRadioBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , int arg5 = 0 , const wxString* arg6 = 0u , int arg7 = 1 , long int arg8 = wxHORIZONTAL , const wxValidator& arg9 = wxDefaultValidator , const wxString& arg10 = wxRadioBoxNameStr):wxRadioBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9 , arg10)
	{
	}
	wxRadioBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 , const wxSize& arg4 , const wxArrayString& arg5 , int arg6 = 1 , long int arg7 = wxHORIZONTAL , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxRadioBoxNameStr):wxRadioBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRadioBox;

static function_entry php_wxRadioBox_functions[] = {
        PHP_ME(php_wxRadioBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRadioBox, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, GetItemFromPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, IsItemEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, IsItemShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBox, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetColumnCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetItemHelpText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetItemToolTip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetRowCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, SetItemToolTip, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRadioButton_entry;
void php_wxRadioButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRadioButton_NAME "wxRadioButton"
#define le_wxRadioButton_name  "native wxRadioButton"

class wxRadioButton_php : public wxRadioButton{
	public:
	wxRadioButton_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxRadioButtonNameStr):wxRadioButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRadioButton;

static function_entry php_wxRadioButton_functions[] = {
        PHP_ME(php_wxRadioButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRadioButton, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioButton, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListItem_entry;
void php_wxListItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListItem_NAME "wxListItem"
#define le_wxListItem_name  "native wxListItem"

class wxListItem_php : public wxListItem{
	public:
	wxListItem_php():wxListItem()
	{
	}
	wxListItem_php(const wxListItem& arg0):wxListItem(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListItem;

static function_entry php_wxListItem_functions[] = {
        PHP_ME(php_wxListItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListItem, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, ClearAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetMask, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, SetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListItem, GetWidth, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlHelpController_entry;
void php_wxHtmlHelpController_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlHelpController_NAME "wxHtmlHelpController"
#define le_wxHtmlHelpController_name  "native wxHtmlHelpController"

class wxHtmlHelpController_php : public wxHtmlHelpController{
	public:
	wxHtmlHelpController_php(int arg0 = 95 , wxWindow* arg1 = 0l):wxHtmlHelpController(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlHelpController;

static function_entry php_wxHtmlHelpController_functions[] = {
        PHP_ME(php_wxHtmlHelpController, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlHelpController, AddBook, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, Display, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, DisplayContents, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, DisplayIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, SetTempDir, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlHelpController, SetTitleFormat, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTaskBarIcon_entry;
void php_wxTaskBarIcon_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTaskBarIcon_NAME "wxTaskBarIcon"
#define le_wxTaskBarIcon_name  "native wxTaskBarIcon"

class wxTaskBarIcon_php : public wxTaskBarIcon{
	public:
	wxTaskBarIcon_php():wxTaskBarIcon()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTaskBarIcon;

static function_entry php_wxTaskBarIcon_functions[] = {
        PHP_ME(php_wxTaskBarIcon, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTaskBarIcon, SetIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, IsIconInstalled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, RemoveIcon, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTaskBarIcon, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiManager_entry;
void php_wxAuiManager_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiManager_NAME "wxAuiManager"
#define le_wxAuiManager_name  "native wxAuiManager"

class wxAuiManager_php : public wxAuiManager{
	public:
	wxAuiManager_php(wxWindow* arg0 = 0l , unsigned int arg1 = wxAUI_MGR_DEFAULT):wxAuiManager(arg0 , arg1)
	{
	}
		virtual bool ProcessDockResult(wxAuiPaneInfo& arg0 , const wxAuiPaneInfo& arg1);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiManager;

static function_entry php_wxAuiManager_functions[] = {
        PHP_ME(php_wxAuiManager, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiManager, AddPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, DetachPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetAllPanes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetDockSizeConstraint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetManagedWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetManager, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, GetPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, HideHint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, ProcessDockResult, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SavePaneInfo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SavePerspective, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SetDockSizeConstraint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, SetManagedWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, ShowHint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, UnInit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, InsertPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManager, LoadPerspective, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiDockArt_entry;
void php_wxAuiDockArt_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiDockArt_NAME "wxAuiDockArt"
#define le_wxAuiDockArt_name  "native wxAuiDockArt"

class wxAuiDockArt_php : public wxAuiDockArt{
	public:
	wxAuiDockArt_php(const wxAuiDockArt& arg0):wxAuiDockArt(arg0)
	{
	}
	wxAuiDockArt_php():wxAuiDockArt()
	{
	}
		virtual void SetFont(int arg0 , const wxFont& arg1);
		virtual void SetColour(int arg0 , const wxColour& arg1);
		virtual void DrawBackground(wxDC& arg0 , wxWindow* arg1 , int arg2 , const wxRect& arg3);
		virtual void DrawBorder(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2 , wxAuiPaneInfo& arg3);
		virtual void DrawGripper(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2 , wxAuiPaneInfo& arg3);
		virtual void DrawPaneButton(wxDC& arg0 , wxWindow* arg1 , int arg2 , int arg3 , const wxRect& arg4 , wxAuiPaneInfo& arg5);
		virtual void DrawSash(wxDC& arg0 , wxWindow* arg1 , int arg2 , const wxRect& arg3);
		virtual int GetMetric(int arg0);
		virtual void SetMetric(int arg0 , int arg1);
		virtual void DrawCaption(wxDC& arg0 , wxWindow* arg1 , const wxString& arg2 , const wxRect& arg3 , wxAuiPaneInfo& arg4);
		virtual wxColour GetColour(int arg0);
		virtual wxFont GetFont(int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiDockArt;

static function_entry php_wxAuiDockArt_functions[] = {
        PHP_ME(php_wxAuiDockArt, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiDockArt, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetColor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetColor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawGripper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawPaneButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawSash, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetMetric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetMetric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawCaption, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetFont, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiPaneInfo_entry;
void php_wxAuiPaneInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiPaneInfo_NAME "wxAuiPaneInfo"
#define le_wxAuiPaneInfo_name  "native wxAuiPaneInfo"

class wxAuiPaneInfo_php : public wxAuiPaneInfo{
	public:
	wxAuiPaneInfo_php():wxAuiPaneInfo()
	{
	}
	wxAuiPaneInfo_php(const wxAuiPaneInfo& arg0):wxAuiPaneInfo(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiPaneInfo;

static function_entry php_wxAuiPaneInfo_functions[] = {
        PHP_ME(php_wxAuiPaneInfo, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiPaneInfo, BestSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Bottom, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, BottomDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Caption, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, CaptionVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, CentrePane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, CloseButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, DefaultPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, DestroyOnClose, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Direction, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Dock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, DockFixed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Dockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Fixed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Float, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Floatable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, FloatingPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, FloatingSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Gripper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, GripperTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasCaption, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasCloseButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasGripper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasGripperTop, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasMaximizeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasMinimizeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, HasPinButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsBottomDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsDocked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsFixed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsFloatable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsFloating, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsLeftDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsMovable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsResizable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsRightDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsToolbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsTopDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Layer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Left, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, LeftDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, MaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Maximize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, MaximizeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, MinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, MinimizeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Movable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Name, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, PaneBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, PinButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Position, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Resizable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Right, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, RightDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Row, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, SetFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, ToolbarPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Top, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, TopDockable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Window, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Center, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, CenterPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, IsMaximized, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiPaneInfo, Restore, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiNotebook_entry;
void php_wxAuiNotebook_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiNotebook_NAME "wxAuiNotebook"
#define le_wxAuiNotebook_name  "native wxAuiNotebook"

class wxAuiNotebook_php : public wxAuiNotebook{
	public:
	wxAuiNotebook_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxAUI_NB_DEFAULT_STYLE):wxAuiNotebook(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	wxAuiNotebook_php():wxAuiNotebook()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiNotebook;

static function_entry php_wxAuiNotebook_functions[] = {
        PHP_ME(php_wxAuiNotebook, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, AdvanceSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetHeightForPageHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetPageBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetPageIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, GetTabCtrlHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, InsertPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetMeasuringFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetNormalFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetPageBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetSelectedFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetTabCtrlHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, SetUniformBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, ShowWindowMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebook, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiDefaultDockArt_entry;
void php_wxAuiDefaultDockArt_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiDefaultDockArt_NAME "wxAuiDefaultDockArt"
#define le_wxAuiDefaultDockArt_name  "native wxAuiDefaultDockArt"

class wxAuiDefaultDockArt_php : public wxAuiDefaultDockArt{
	public:
	wxAuiDefaultDockArt_php(const wxAuiDefaultDockArt& arg0):wxAuiDefaultDockArt(arg0)
	{
	}
	wxAuiDefaultDockArt_php():wxAuiDefaultDockArt()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiDefaultDockArt;

static function_entry php_wxAuiDefaultDockArt_functions[] = {
        PHP_ME(php_wxAuiDefaultDockArt, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiDockArt, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetColor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetColor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawGripper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawPaneButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawSash, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetMetric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, SetMetric, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, DrawCaption, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiDockArt, GetFont, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiMDIParentFrame_entry;
void php_wxAuiMDIParentFrame_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiMDIParentFrame_NAME "wxAuiMDIParentFrame"
#define le_wxAuiMDIParentFrame_name  "native wxAuiMDIParentFrame"

class wxAuiMDIParentFrame_php : public wxAuiMDIParentFrame{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiMDIParentFrame;

static function_entry php_wxAuiMDIParentFrame_functions[] = {
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiTabArt_entry;
void php_wxAuiTabArt_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiTabArt_NAME "wxAuiTabArt"
#define le_wxAuiTabArt_name  "native wxAuiTabArt"

class wxAuiTabArt_php : public wxAuiTabArt{
	public:
	wxAuiTabArt_php(const wxAuiTabArt& arg0):wxAuiTabArt(arg0)
	{
	}
	wxAuiTabArt_php():wxAuiTabArt()
	{
	}
		virtual void DrawBackground(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2);
		virtual void DrawButton(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2 , int arg3 , int arg4 , int arg5 , wxRect* arg6);
		virtual void DrawTab(wxDC& arg0 , wxWindow* arg1 , const wxAuiNotebookPage& arg2 , const wxRect& arg3 , int arg4 , wxRect* arg5 , wxRect* arg6 , int* arg7);
		virtual int GetBestTabCtrlSize(wxWindow* arg0 , const wxAuiNotebookPageArray& arg1 , const wxSize& arg2);
		virtual int GetIndentSize();
		virtual wxSize GetTabSize(wxDC& arg0 , wxWindow* arg1 , const wxString& arg2 , const wxBitmap& arg3 , bool arg4 , int arg5 , int* arg6);
		virtual void SetFlags(unsigned int arg0);
		virtual void SetMeasuringFont(const wxFont& arg0);
		virtual void SetNormalFont(const wxFont& arg0);
		virtual void SetSelectedFont(const wxFont& arg0);
		virtual void SetSizingInfo(const wxSize& arg0 , long unsigned int arg1);
		virtual int ShowDropDown(wxWindow* arg0 , const wxAuiNotebookPageArray& arg1 , int arg2);
		virtual wxAuiTabArt* Clone();
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiTabArt;

static function_entry php_wxAuiTabArt_functions[] = {
        PHP_ME(php_wxAuiTabArt, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiTabArt, DrawBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, DrawButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, DrawTab, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, GetBestTabCtrlSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, GetIndentSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, GetTabSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, SetMeasuringFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, SetNormalFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, SetSelectedFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, SetSizingInfo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, ShowDropDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiTabArt, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGDIObject_entry;
void php_wxGDIObject_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGDIObject_NAME "wxGDIObject"
#define le_wxGDIObject_name  "native wxGDIObject"

class wxGDIObject_php : public wxGDIObject{
	public:
	wxGDIObject_php(const wxGDIObject& arg0):wxGDIObject(arg0)
	{
	}
	wxGDIObject_php():wxGDIObject()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGDIObject;

static function_entry php_wxGDIObject_functions[] = {
        PHP_ME(php_wxGDIObject, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxChoicebook_entry;
void php_wxChoicebook_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxChoicebook_NAME "wxChoicebook"
#define le_wxChoicebook_name  "native wxChoicebook"

class wxChoicebook_php : public wxChoicebook{
	public:
	wxChoicebook_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxEmptyString):wxChoicebook(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
		virtual void UpdateSelectedPage(long unsigned int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxChoicebook;

static function_entry php_wxChoicebook_functions[] = {
        PHP_ME(php_wxChoicebook, ChangeSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, DeleteAllPages, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, GetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, InsertPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, SetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, SetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoicebook, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxChoicebook, UpdateSelectedPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGrid_entry;
void php_wxGrid_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGrid_NAME "wxGrid"
#define le_wxGrid_name  "native wxGrid"

class wxGrid_php : public wxGrid{
	public:
	wxGrid_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 262144 , const wxString& arg5 = wxGridNameStr):wxGrid(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxGrid_php(wxWindow* arg0 , int arg1 , int arg2 , int arg3 = wxDefaultCoord , int arg4 = wxDefaultCoord , long int arg5 = 262144 , const wxString& arg6 = wxPanelNameStr):wxGrid(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
		virtual int SetOrCalcRowSizes(bool arg0 , bool arg1);
		virtual int SetOrCalcColumnSizes(bool arg0 , bool arg1);
		virtual bool SetModelValues();
		virtual void SetCurrentCell(int arg0 , int arg1);
		virtual void AutoSizeColOrRow(int arg0 , bool arg1 , bool arg2);
		virtual void CacheAttr(int arg0 , int arg1 , wxGridCellAttr* arg2) const;
		virtual bool CanHaveAttributes();
		virtual void InitColWidths();
		virtual void InitRowHeights();
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGrid;

static function_entry php_wxGrid_functions[] = {
        PHP_ME(php_wxGrid, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGrid, YToRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, YToEdgeOfRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, XToEdgeOfCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, XToCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, UpdateDimensions, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, StringToLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, ShowCellEditControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetSelectionForeground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetSelectionBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetScrollY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetScrollX, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetScrollLineY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetScrollLineX, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowMinimalHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowMinimalAcceptableHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowLabelValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowLabelAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetOrCalcRowSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetOrCalcColumnSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetModelValues, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetGridLineColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetGridCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetEditInPlace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDividerPen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultRowSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultColSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultCellTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultCellOverflow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultCellBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultCellAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetCurrentCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColumnWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColMinimalWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColMinimalAcceptableWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColLabelValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColLabelTextOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColLabelAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColFormatNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AppendCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AppendRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeColLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeColOrRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeColumn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeRowLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, AutoSizeRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, ClearGrid, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, ClearSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DeleteCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DeleteRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DeselectCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DeselectCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DeselectRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableCellEditControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableDragCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableDragColMove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableDragColSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableDragGridSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, DisableDragRowSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableCellEditControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableDragCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableDragColMove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableDragColSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableDragGridSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableDragRowSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableEditing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EnableGridLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, EndBatch, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, ForceRefresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetBatchCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellHighlightColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetColAt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetColFormatFloat, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetCellValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CreateGrid, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, BeginBatch, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, BlockToDeviceRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CacheAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanHaveAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanEnableCellControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanDragGridSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanDragColMove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanDragColSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, CanDragRowSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetCellFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetLabelFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetLabelTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, HideCellEditControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, InitColWidths, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetViewWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, GetTable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, InitRowHeights, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, InsertCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, InsertRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsCellEditControlEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsCurrentCellReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsInSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, IsVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MakeCellVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorDownBlock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorLeftBlock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorRightBlock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MoveCursorUpBlock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MovePageDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, MovePageUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetRowAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetLabelFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultRenderer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetDefaultCellFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SelectBlock, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SelectCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SelectRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetCellAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetCellBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGrid, SetCellEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHyperlinkCtrl_entry;
void php_wxHyperlinkCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHyperlinkCtrl_NAME "wxHyperlinkCtrl"
#define le_wxHyperlinkCtrl_name  "native wxHyperlinkCtrl"

class wxHyperlinkCtrl_php : public wxHyperlinkCtrl{
	public:
	wxHyperlinkCtrl_php():wxHyperlinkCtrl()
	{
	}
	wxHyperlinkCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxString& arg3 , const wxPoint& arg4 = wxDefaultPosition , const wxSize& arg5 = wxDefaultSize , long int arg6 = 2097161 , const wxString& arg7 = wxHyperlinkCtrlNameStr):wxHyperlinkCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHyperlinkCtrl;

static function_entry php_wxHyperlinkCtrl_functions[] = {
        PHP_ME(php_wxHyperlinkCtrl, GetHoverColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, SetHoverColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, GetNormalColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, SetNormalColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, GetVisitedColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, SetVisited, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, GetVisited, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, SetVisitedColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, GetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, SetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHyperlinkEvent_entry;
void php_wxHyperlinkEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHyperlinkEvent_NAME "wxHyperlinkEvent"
#define le_wxHyperlinkEvent_name  "native wxHyperlinkEvent"

class wxHyperlinkEvent_php : public wxHyperlinkEvent{
	public:
	wxHyperlinkEvent_php(const wxHyperlinkEvent& arg0):wxHyperlinkEvent(arg0)
	{
	}
	wxHyperlinkEvent_php():wxHyperlinkEvent()
	{
	}
	wxHyperlinkEvent_php(wxObject* arg0 , int arg1 , const wxString& arg2):wxHyperlinkEvent(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHyperlinkEvent;

static function_entry php_wxHyperlinkEvent_functions[] = {
        PHP_ME(php_wxHyperlinkEvent, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHyperlinkEvent, GetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHyperlinkEvent, SetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxObject, IsKindOf, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMenuBarBase_entry;
void php_wxMenuBarBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMenuBarBase_NAME "wxMenuBarBase"
#define le_wxMenuBarBase_name  "native wxMenuBarBase"

class wxMenuBarBase_php : public wxMenuBarBase{
	public:
		virtual void SetLabelTop(long unsigned int arg0 , const wxString& arg1);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMenuBarBase;

static function_entry php_wxMenuBarBase_functions[] = {
        PHP_ME(php_wxMenuBarBase, Check, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, FindMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenuCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, GetMenuLabelText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetHelpString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetMenuLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxMenuBarBase, SetLabelTop, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiToolBarItem_entry;
void php_wxAuiToolBarItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiToolBarItem_NAME "wxAuiToolBarItem"
#define le_wxAuiToolBarItem_name  "native wxAuiToolBarItem"

class wxAuiToolBarItem_php : public wxAuiToolBarItem{
	public:
	wxAuiToolBarItem_php():wxAuiToolBarItem()
	{
	}
	wxAuiToolBarItem_php(const wxAuiToolBarItem& arg0):wxAuiToolBarItem(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiToolBarItem;

static function_entry php_wxAuiToolBarItem_functions[] = {
        PHP_ME(php_wxAuiToolBarItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiToolBarItem, SetWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetKind, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetState, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetSizerItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetSizerItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetDisabledBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetDisabledBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetHoverBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetHoverBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetSpacerPixels, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetSpacerPixels, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetProportion, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetProportion, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetActive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, IsActive, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetHasDropDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, HasDropDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetSticky, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, IsSticky, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, SetUserData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, GetUserData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarItem, Assign, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiToolBarArt_entry;
void php_wxAuiToolBarArt_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiToolBarArt_NAME "wxAuiToolBarArt"
#define le_wxAuiToolBarArt_name  "native wxAuiToolBarArt"

class wxAuiToolBarArt_php : public wxAuiToolBarArt{
	public:
	wxAuiToolBarArt_php():wxAuiToolBarArt()
	{
	}
	wxAuiToolBarArt_php(const wxAuiToolBarArt& arg0):wxAuiToolBarArt(arg0)
	{
	}
		virtual void SetFlags(unsigned int arg0);
		virtual void SetFont(const wxFont& arg0);
		virtual void SetTextOrientation(int arg0);
		virtual wxAuiToolBarArt* Clone();
		virtual void DrawBackground(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2);
		virtual void DrawButton(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2 , const wxRect& arg3);
		virtual void DrawControlLabel(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2 , const wxRect& arg3);
		virtual void DrawDropDownButton(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2 , const wxRect& arg3);
		virtual void DrawGripper(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2);
		virtual void DrawLabel(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2 , const wxRect& arg3);
		virtual void DrawOverflowButton(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2 , int arg3);
		virtual void DrawSeparator(wxDC& arg0 , wxWindow* arg1 , const wxRect& arg2);
		virtual int GetElementSize(int arg0);
		virtual wxSize GetLabelSize(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2);
		virtual wxSize GetToolSize(wxDC& arg0 , wxWindow* arg1 , const wxAuiToolBarItem& arg2);
		virtual void SetElementSize(int arg0 , int arg1);
		virtual int ShowDropDown(wxWindow* arg0 , const wxAuiToolBarItemArray& arg1);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiToolBarArt;

static function_entry php_wxAuiToolBarArt_functions[] = {
        PHP_ME(php_wxAuiToolBarArt, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiToolBarArt, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, SetTextOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawControlLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawDropDownButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawGripper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawOverflowButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, DrawSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, GetElementSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, GetLabelSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, GetToolSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, SetElementSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarArt, ShowDropDown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiToolBar_entry;
void php_wxAuiToolBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiToolBar_NAME "wxAuiToolBar"
#define le_wxAuiToolBar_name  "native wxAuiToolBar"

class wxAuiToolBar_php : public wxAuiToolBar{
	public:
	wxAuiToolBar_php(wxWindow* arg0 , int arg1 = -0x00000000000000001 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxAUI_TB_DEFAULT_STYLE):wxAuiToolBar(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiToolBar;

static function_entry php_wxAuiToolBar_functions[] = {
        PHP_ME(php_wxAuiToolBar, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetGripperVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetOverflowVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolDropDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolBorderPadding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolTextOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolProportion, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolSticky, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetCustomOverflowItems, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, SetToolLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, ToggleTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxAuiToolBar, GetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetArtProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolFits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolFitsByIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolBarFits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetOverflowVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetGripperVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolToggled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolDropDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolBorderPadding, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolTextOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolPacking, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolProportion, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolSeparation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolLongHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolShortHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolSticky, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, GetToolBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, AddTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, AddControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, AddSeparator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, FindControl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, FindToolByIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, FindTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, FindToolByPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, ClearTools, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, DeleteTool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, DeleteByIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBar, EnableTool, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDialogBase_entry;
void php_wxDialogBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDialogBase_NAME "wxDialogBase"
#define le_wxDialogBase_name  "native wxDialogBase"

class wxDialogBase_php : public wxDialogBase{
	public:
		virtual bool IsModal() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDialogBase;

static function_entry php_wxDialogBase_functions[] = {
        PHP_ME(php_wxDialogBase, GetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateSeparatedButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, CreateStdDialogButtonSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, GetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetReturnCode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetEscapeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, SetAffirmativeId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDialogBase, IsModal, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStdDialogButtonSizer_entry;
void php_wxStdDialogButtonSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStdDialogButtonSizer_NAME "wxStdDialogButtonSizer"
#define le_wxStdDialogButtonSizer_name  "native wxStdDialogButtonSizer"

class wxStdDialogButtonSizer_php : public wxStdDialogButtonSizer{
	public:
	wxStdDialogButtonSizer_php():wxStdDialogButtonSizer()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStdDialogButtonSizer;

static function_entry php_wxStdDialogButtonSizer_functions[] = {
        PHP_ME(php_wxStdDialogButtonSizer, AddButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStdDialogButtonSizer, Realize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStdDialogButtonSizer, SetAffirmativeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStdDialogButtonSizer, SetCancelButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStdDialogButtonSizer, SetNegativeButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStdDialogButtonSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBoxSizer, SetOrientation, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlWindow_entry;
void php_wxHtmlWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlWindow_NAME "wxHtmlWindow"
#define le_wxHtmlWindow_name  "native wxHtmlWindow"

class wxHtmlWindow_php : public wxHtmlWindow{
	public:
	wxHtmlWindow_php():wxHtmlWindow()
	{
	}
	wxHtmlWindow_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 4 , const wxString& arg5 = wxT("h\000\000\000t\000\000\000m\000\000\000l\000\000\000W\000\000\000i\000\000\000n\000\000\000d\000\000\000o\000\000\000w\000\000\000\000\000\000")):wxHtmlWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlWindow;

static function_entry php_wxHtmlWindow_functions[] = {
        PHP_ME(php_wxHtmlWindow, AddFilter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, AppendToPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, GetInternalRepresentation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, GetOpenedAnchor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, GetOpenedPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, GetOpenedPageTitle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, GetRelatedFrame, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, HistoryBack, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, HistoryCanBack, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, HistoryCanForward, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, HistoryClear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, HistoryForward, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, LoadFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, LoadPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SelectionToText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SelectLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SelectWord, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SetBorders, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SetFonts, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SetRelatedFrame, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, SetRelatedStatusBar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, ToText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrolledWindow, PrepareDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, InitDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocusIgnoringChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, EnableScrolling, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetScrollPixelsPerUnit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetViewStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, DoPrepareDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, Scroll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollbars, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollRate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetTargetWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcScrolledPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcUnscrolledPosition, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlContainerCell_entry;
void php_wxHtmlContainerCell_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlContainerCell_NAME "wxHtmlContainerCell"
#define le_wxHtmlContainerCell_name  "native wxHtmlContainerCell"

class wxHtmlContainerCell_php : public wxHtmlContainerCell{
	public:
	wxHtmlContainerCell_php(wxHtmlContainerCell* arg0):wxHtmlContainerCell(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlContainerCell;

static function_entry php_wxHtmlContainerCell_functions[] = {
        PHP_ME(php_wxHtmlContainerCell, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlContainerCell, GetAlignHor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, GetAlignVer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, GetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, GetIndentUnits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, InsertCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetAlign, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetAlignHor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetAlignVer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetBorder, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetMinHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlContainerCell, SetWidthFloat, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, AdjustPagebreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetDescent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetFirstChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetLink, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetMouseCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetNext, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetPosX, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetPosY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, ProcessMouseClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetLink, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetNext, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetPos, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlCell_entry;
void php_wxHtmlCell_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlCell_NAME "wxHtmlCell"
#define le_wxHtmlCell_name  "native wxHtmlCell"

class wxHtmlCell_php : public wxHtmlCell{
	public:
	wxHtmlCell_php():wxHtmlCell()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlCell;

static function_entry php_wxHtmlCell_functions[] = {
        PHP_ME(php_wxHtmlCell, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlCell, AdjustPagebreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetDescent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetFirstChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetLink, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetMouseCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetNext, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetPosX, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetPosY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, GetWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, ProcessMouseClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetLink, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetNext, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetParent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlCell, SetPos, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlRenderingInfo_entry;
void php_wxHtmlRenderingInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlRenderingInfo_NAME "wxHtmlRenderingInfo"
#define le_wxHtmlRenderingInfo_name  "native wxHtmlRenderingInfo"

class wxHtmlRenderingInfo_php : public wxHtmlRenderingInfo{
	public:
	wxHtmlRenderingInfo_php():wxHtmlRenderingInfo()
	{
	}
	wxHtmlRenderingInfo_php(const wxHtmlRenderingInfo& arg0):wxHtmlRenderingInfo(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlRenderingInfo;

static function_entry php_wxHtmlRenderingInfo_functions[] = {
        PHP_ME(php_wxHtmlRenderingInfo, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlRenderingInfo, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlRenderingInfo, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlRenderingInfo, GetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlRenderingInfo, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlRenderingInfo, GetState, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlSelection_entry;
void php_wxHtmlSelection_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlSelection_NAME "wxHtmlSelection"
#define le_wxHtmlSelection_name  "native wxHtmlSelection"

class wxHtmlSelection_php : public wxHtmlSelection{
	public:
	wxHtmlSelection_php():wxHtmlSelection()
	{
	}
	wxHtmlSelection_php(const wxHtmlSelection& arg0):wxHtmlSelection(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlSelection;

static function_entry php_wxHtmlSelection_functions[] = {
        PHP_ME(php_wxHtmlSelection, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlSelection, SetToPrivPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, SetFromPrivPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, IsEmpty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, GetToPrivPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, GetToPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, GetFromPrivPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, GetFromPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlSelection, ClearPrivPos, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlLinkInfo_entry;
void php_wxHtmlLinkInfo_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlLinkInfo_NAME "wxHtmlLinkInfo"
#define le_wxHtmlLinkInfo_name  "native wxHtmlLinkInfo"

class wxHtmlLinkInfo_php : public wxHtmlLinkInfo{
	public:
	wxHtmlLinkInfo_php(const wxString& arg0 , const wxString& arg1 = wxEmptyString):wxHtmlLinkInfo(arg0 , arg1)
	{
	}
	wxHtmlLinkInfo_php(const wxHtmlLinkInfo& arg0):wxHtmlLinkInfo(arg0)
	{
	}
	wxHtmlLinkInfo_php():wxHtmlLinkInfo()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlLinkInfo;

static function_entry php_wxHtmlLinkInfo_functions[] = {
        PHP_ME(php_wxHtmlLinkInfo, GetHref, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlLinkInfo, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlLinkInfo, GetTarget, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRichTextCtrl_entry;
void php_wxRichTextCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRichTextCtrl_NAME "wxRichTextCtrl"
#define le_wxRichTextCtrl_name  "native wxRichTextCtrl"

class wxRichTextCtrl_php : public wxRichTextCtrl{
	public:
	wxRichTextCtrl_php():wxRichTextCtrl()
	{
	}
	wxRichTextCtrl_php(wxWindow* arg0 , int arg1 = -0x00000000000000001 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 32 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxTextCtrlNameStr):wxRichTextCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
		virtual wxSize DoGetBestSize() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRichTextCtrl;

static function_entry php_wxRichTextCtrl_functions[] = {
        PHP_ME(php_wxRichTextCtrl, AddImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, AddParagraph, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, AppendText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ApplyAlignmentToSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ApplyBoldToSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ApplyItalicToSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ApplyUnderlineToSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BatchingUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginBatchUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginCharacterStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginFontSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginItalic, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginListStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginNumberedBullet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginParagraphSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginParagraphStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginSuppressUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginSymbolBullet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginUnderline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanCopy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanCut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanDeleteSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanPaste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanRedo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Cut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, DeleteSelectedContent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, DeleteSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, DiscardEdits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, DoGetBestSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndAllStyles, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndBatchUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndCharacterStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndFontSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndItalic, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndListStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndNumberedBullet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndParagraphSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndSuppressUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndSymbolBullet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ExtendSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndUnderline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, FindNextWordPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Freeze, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetLastPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetLineLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetLineText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetNumberOfLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetPhysicalPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetSelectionRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetStringSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRichTextCtrl, XYToPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, WriteText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, WriteImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, WordRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, WordLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Undo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Thaw, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SuppressingUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ShowPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetupScrollbars, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetSelectionRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetMaxLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetHandlerFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetInsertionPointEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, BeginStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ClearListStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Command, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, EndParagraphStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetBasicStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetBuffer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetCaretPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetCommandProcessor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetCaretPositionForIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetDefaultStyleEx, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetDelayedLayoutThreshold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetFilename, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetFirstVisiblePoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetFirstVisiblePosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetLogicalPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetStyleForRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetStyleSheet, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetUncombinedStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, GetVisibleLineForCaretPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, HasCharacterAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, HasParagraphAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, HasSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, HitTest, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsDefaultStyleShowing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsModified, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsMultiLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsPositionVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsSelectionAligned, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsSelectionBold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsSelectionItalics, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsSelectionUnderlined, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, IsSingleLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, KeyboardNavigate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, LayoutContent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, LineBreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MarkDirty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveCaret, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveCaretBack, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveCaretForward, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveHome, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveToLineEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveToLineStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveToParagraphEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveToParagraphStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, MoveUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Newline, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PageDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PageUp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Paste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PositionCaret, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PositionToXY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, PromoteList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SelectAll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, ScrollIntoView, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SelectNone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetAndShowDefaultStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetBasicStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetCaretPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetDefaultStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetDefaultStyleToCursorStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetDelayedLayoutThreshold, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetListStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextCtrl, SetStyleEx, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTextAttr_entry;
void php_wxTextAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTextAttr_NAME "wxTextAttr"
#define le_wxTextAttr_name  "native wxTextAttr"

class wxTextAttr_php : public wxTextAttr{
	public:
	wxTextAttr_php():wxTextAttr()
	{
	}
	wxTextAttr_php(const wxColour& arg0 , const wxColour& arg1 = wxNullColour , const wxFont& arg2 = wxNullFont , wxTextAttrAlignment arg3 = wxTEXT_ALIGNMENT_DEFAULT):wxTextAttr(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxTextAttr_php(const wxTextAttr& arg0):wxTextAttr(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTextAttr;

static function_entry php_wxTextAttr_functions[] = {
        PHP_ME(php_wxTextAttr, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTextAttr, GetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetLeftSubIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, IsDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, Merge, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTextAttrEx_entry;
void php_wxTextAttrEx_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTextAttrEx_NAME "wxTextAttrEx"
#define le_wxTextAttrEx_name  "native wxTextAttrEx"

class wxTextAttrEx_php : public wxTextAttrEx{
	public:
	wxTextAttrEx_php(const wxTextAttr& arg0):wxTextAttrEx(arg0)
	{
	}
	wxTextAttrEx_php(const wxTextAttrEx& arg0):wxTextAttrEx(arg0)
	{
	}
	wxTextAttrEx_php():wxTextAttrEx()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTextAttrEx;

static function_entry php_wxTextAttrEx_functions[] = {
        PHP_ME(php_wxTextAttrEx, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxTextAttrEx, GetBulletFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetListStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetTextEffectFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, GetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasPageBreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, HasURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, IsCharacterStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, IsDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, IsParagraphStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetBulletFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetListStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetPageBreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetTextEffectFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttrEx, SetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetLeftSubIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, GetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, Merge, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRichTextRange_entry;
void php_wxRichTextRange_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRichTextRange_NAME "wxRichTextRange"
#define le_wxRichTextRange_name  "native wxRichTextRange"

class wxRichTextRange_php : public wxRichTextRange{
	public:
	wxRichTextRange_php():wxRichTextRange()
	{
	}
	wxRichTextRange_php(long int arg0 , long int arg1):wxRichTextRange(arg0 , arg1)
	{
	}
	wxRichTextRange_php(const wxRichTextRange& arg0):wxRichTextRange(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRichTextRange;

static function_entry php_wxRichTextRange_functions[] = {
        PHP_ME(php_wxRichTextRange, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRichTextRange, ToInternal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, Swap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, SetStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, SetEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, LimitTo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, IsWithin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, IsOutside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, GetStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, GetLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, GetEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, FromInternal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextRange, Contains, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRichTextAttr_entry;
void php_wxRichTextAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRichTextAttr_NAME "wxRichTextAttr"
#define le_wxRichTextAttr_name  "native wxRichTextAttr"

class wxRichTextAttr_php : public wxRichTextAttr{
	public:
	wxRichTextAttr_php(const wxTextAttrEx& arg0):wxRichTextAttr(arg0)
	{
	}
	wxRichTextAttr_php(const wxRichTextAttr& arg0):wxRichTextAttr(arg0)
	{
	}
	wxRichTextAttr_php():wxRichTextAttr()
	{
	}
	wxRichTextAttr_php(const wxColour& arg0 , const wxColour& arg1 = wxNullColour , wxTextAttrAlignment arg2 = wxTEXT_ALIGNMENT_DEFAULT):wxRichTextAttr(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRichTextAttr;

static function_entry php_wxRichTextAttr_functions[] = {
        PHP_ME(php_wxRichTextAttr, Apply, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBulletFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontFaceName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontUnderlined, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetFontWeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetLeftSubIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, Combine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, CreateFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetListStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetTextEffectFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, GetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFontFaceName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFontItalic, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFontSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFontUnderlined, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasFontWeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasListStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasPageBreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, HasURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, IsCharacterStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, IsDefault, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, IsParagraphStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBulletFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBulletName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBulletNumber, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBulletStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetBulletText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetCharacterStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFontFaceName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFontSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFontStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFontUnderlined, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetFontWeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetLeftIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetLineSpacing, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetListStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetOutlineLevel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetPageBreak, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetParagraphSpacingAfter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetParagraphSpacingBefore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetParagraphStyleName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetRightIndent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetTabs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetTextEffectFlags, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetTextEffects, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, SetURL, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextAttr, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCommandProcessor_entry;
void php_wxCommandProcessor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCommandProcessor_NAME "wxCommandProcessor"
#define le_wxCommandProcessor_name  "native wxCommandProcessor"

class wxCommandProcessor_php : public wxCommandProcessor{
	public:
	wxCommandProcessor_php(int arg0 = -0x00000000000000001):wxCommandProcessor(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCommandProcessor;

static function_entry php_wxCommandProcessor_functions[] = {
        PHP_ME(php_wxCommandProcessor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxCommandProcessor, wxCreateObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, ClearCommands, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetMaxCommands, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetEditMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetRedoAccelerator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetRedoMenuLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetUndoAccelerator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, GetUndoMenuLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, Initialize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, IsDirty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, MarkAsSaved, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, SetEditMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, SetMenuStrings, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, SetRedoAccelerator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, SetUndoAccelerator, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandProcessor, Submit, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRichTextLine_entry;
void php_wxRichTextLine_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRichTextLine_NAME "wxRichTextLine"
#define le_wxRichTextLine_name  "native wxRichTextLine"

class wxRichTextLine_php : public wxRichTextLine{
	public:
	wxRichTextLine_php(const wxRichTextLine& arg0):wxRichTextLine(arg0)
	{
	}
	wxRichTextLine_php(wxRichTextParagraph* arg0):wxRichTextLine(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRichTextLine;

static function_entry php_wxRichTextLine_functions[] = {
        PHP_ME(php_wxRichTextLine, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRichTextLine, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, SetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, SetDescent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetDescent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetAbsoluteRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, GetAbsolutePosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRichTextLine, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellCoords_entry;
void php_wxGridCellCoords_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellCoords_NAME "wxGridCellCoords"
#define le_wxGridCellCoords_name  "native wxGridCellCoords"

class wxGridCellCoords_php : public wxGridCellCoords{
	public:
	wxGridCellCoords_php(const wxGridCellCoords& arg0):wxGridCellCoords(arg0)
	{
	}
	wxGridCellCoords_php():wxGridCellCoords()
	{
	}
	wxGridCellCoords_php(int arg0 , int arg1):wxGridCellCoords(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellCoords;

static function_entry php_wxGridCellCoords_functions[] = {
        PHP_ME(php_wxGridCellCoords, GetCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellCoords, GetRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellCoords, Set, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellCoords, SetCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellCoords, SetRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellCoords, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellAttr_entry;
void php_wxGridCellAttr_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellAttr_NAME "wxGridCellAttr"
#define le_wxGridCellAttr_name  "native wxGridCellAttr"

class wxGridCellAttr_php : public wxGridCellAttr{
	public:
	wxGridCellAttr_php(wxGridCellAttr* arg0 = 0l):wxGridCellAttr(arg0)
	{
	}
	wxGridCellAttr_php(const wxColour& arg0 , const wxColour& arg1 , const wxFont& arg2 , int arg3 , int arg4):wxGridCellAttr(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellAttr;

static function_entry php_wxGridCellAttr_functions[] = {
        PHP_ME(php_wxGridCellAttr, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellAttr, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetDefAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, IsReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, IncRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasTextColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasRenderer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, GetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, GetRenderer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, GetEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, GetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, GetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, HasEditor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetAlignment, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetReadOnly, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetRenderer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttr, SetTextColour, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellRenderer_entry;
void php_wxGridCellRenderer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellRenderer_NAME "wxGridCellRenderer"
#define le_wxGridCellRenderer_name  "native wxGridCellRenderer"

class wxGridCellRenderer_php : public wxGridCellRenderer{
	public:
	wxGridCellRenderer_php(const wxGridCellRenderer& arg0):wxGridCellRenderer(arg0)
	{
	}
	wxGridCellRenderer_php():wxGridCellRenderer()
	{
	}
		virtual void Draw(wxGrid& arg0 , wxGridCellAttr& arg1 , wxDC& arg2 , const wxRect& arg3 , int arg4 , int arg5 , bool arg6);
		virtual wxSize GetBestSize(wxGrid& arg0 , wxGridCellAttr& arg1 , wxDC& arg2 , int arg3 , int arg4);
		virtual wxGridCellRenderer* Clone() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellRenderer;

static function_entry php_wxGridCellRenderer_functions[] = {
        PHP_ME(php_wxGridCellRenderer, Draw, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellRenderer, GetBestSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellRenderer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellRenderer, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, SetParameters, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellWorker_entry;
void php_wxGridCellWorker_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellWorker_NAME "wxGridCellWorker"
#define le_wxGridCellWorker_name  "native wxGridCellWorker"

class wxGridCellWorker_php : public wxGridCellWorker{
	public:
	wxGridCellWorker_php(const wxGridCellWorker& arg0):wxGridCellWorker(arg0)
	{
	}
	wxGridCellWorker_php():wxGridCellWorker()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellWorker;

static function_entry php_wxGridCellWorker_functions[] = {
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, SetParameters, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRegion_entry;
void php_wxRegion_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRegion_NAME "wxRegion"
#define le_wxRegion_name  "native wxRegion"

class wxRegion_php : public wxRegion{
	public:
	wxRegion_php():wxRegion()
	{
	}
	wxRegion_php(int arg0 , int arg1 , int arg2 , int arg3):wxRegion(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxRegion_php(const wxPoint& arg0 , const wxPoint& arg1):wxRegion(arg0 , arg1)
	{
	}
	wxRegion_php(const wxRect& arg0):wxRegion(arg0)
	{
	}
	wxRegion_php(const wxBitmap& arg0):wxRegion(arg0)
	{
	}
	wxRegion_php(const wxBitmap& arg0 , const wxColour& arg1 , int arg2 = 0):wxRegion(arg0 , arg1 , arg2)
	{
	}
	wxRegion_php(long unsigned int arg0 , const wxPoint* arg1 , int arg2 = wxODDEVEN_RULE):wxRegion(arg0 , arg1 , arg2)
	{
	}
	wxRegion_php(const wxRegion& arg0):wxRegion(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRegion;

static function_entry php_wxRegion_functions[] = {
        PHP_ME(php_wxRegion, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxRegion, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegion, IsEmpty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Contains, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, ConvertToBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Intersect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, IsEqual, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Subtract, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Offset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Union, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Xor, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRegionBase_entry;
void php_wxRegionBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRegionBase_NAME "wxRegionBase"
#define le_wxRegionBase_name  "native wxRegionBase"

class wxRegionBase_php : public wxRegionBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRegionBase;

static function_entry php_wxRegionBase_functions[] = {
        PHP_ME(php_wxRegionBase, Contains, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, ConvertToBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Intersect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, IsEqual, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Subtract, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Offset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Union, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRegionBase, Xor, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellEditor_entry;
void php_wxGridCellEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellEditor_NAME "wxGridCellEditor"
#define le_wxGridCellEditor_name  "native wxGridCellEditor"

class wxGridCellEditor_php : public wxGridCellEditor{
	public:
	wxGridCellEditor_php():wxGridCellEditor()
	{
	}
		virtual void Create(wxWindow* arg0 , int arg1 , wxEvtHandler* arg2);
		virtual void BeginEdit(int arg0 , int arg1 , wxGrid* arg2);
		virtual bool EndEdit(int arg0 , int arg1 , wxGrid* arg2);
		virtual void Reset();
		virtual wxGridCellEditor* Clone() const;
		virtual wxString GetValue() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellEditor;

static function_entry php_wxGridCellEditor_functions[] = {
        PHP_ME(php_wxGridCellEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, SetParameters, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridTableBase_entry;
void php_wxGridTableBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridTableBase_NAME "wxGridTableBase"
#define le_wxGridTableBase_name  "native wxGridTableBase"

class wxGridTableBase_php : public wxGridTableBase{
	public:
	wxGridTableBase_php():wxGridTableBase()
	{
	}
		virtual int GetNumberRows();
		virtual int GetNumberCols();
		virtual bool IsEmptyCell(int arg0 , int arg1);
		virtual wxString GetValue(int arg0 , int arg1);
		virtual void SetValue(int arg0 , int arg1 , const wxString& arg2);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridTableBase;

static function_entry php_wxGridTableBase_functions[] = {
        PHP_ME(php_wxGridTableBase, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridTableBase, GetNumberRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetNumberCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, IsEmptyCell, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetTypeName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, CanGetValueAs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, CanSetValueAs, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetValueAsLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetValueAsDouble, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetValueAsBool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetValueAsBool, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetValueAsDouble, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetValueAsLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetValueAsCustom, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetView, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetView, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, InsertRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, AppendRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, DeleteRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, InsertCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, AppendCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, DeleteCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetRowLabelValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetColLabelValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetAttrProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetAttrProvider, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, CanHaveAttributes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, GetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetRowAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridTableBase, SetColAttr, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellAttrProvider_entry;
void php_wxGridCellAttrProvider_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellAttrProvider_NAME "wxGridCellAttrProvider"
#define le_wxGridCellAttrProvider_name  "native wxGridCellAttrProvider"

class wxGridCellAttrProvider_php : public wxGridCellAttrProvider{
	public:
	wxGridCellAttrProvider_php():wxGridCellAttrProvider()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellAttrProvider;

static function_entry php_wxGridCellAttrProvider_functions[] = {
        PHP_ME(php_wxGridCellAttrProvider, SetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, SetColAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, SetRowAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, GetAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, UpdateAttrCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, UpdateAttrRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellAttrProvider, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSearchCtrl_entry;
void php_wxSearchCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSearchCtrl_NAME "wxSearchCtrl"
#define le_wxSearchCtrl_name  "native wxSearchCtrl"

class wxSearchCtrl_php : public wxSearchCtrl{
	public:
	wxSearchCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 0 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxSearchCtrlNameStr):wxSearchCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSearchCtrl;

static function_entry php_wxSearchCtrl_functions[] = {
        PHP_ME(php_wxSearchCtrl, SetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, GetMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, ShowSearchButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, IsSearchButtonVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, ShowCancelButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, IsCancelButtonVisible, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSearchCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxColourPickerCtrl_entry;
void php_wxColourPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxColourPickerCtrl_NAME "wxColourPickerCtrl"
#define le_wxColourPickerCtrl_name  "native wxColourPickerCtrl"

class wxColourPickerCtrl_php : public wxColourPickerCtrl{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxColourPickerCtrl;

static function_entry php_wxColourPickerCtrl_functions[] = {
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFontPickerCtrl_entry;
void php_wxFontPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFontPickerCtrl_NAME "wxFontPickerCtrl"
#define le_wxFontPickerCtrl_name  "native wxFontPickerCtrl"

class wxFontPickerCtrl_php : public wxFontPickerCtrl{
	public:
	wxFontPickerCtrl_php(wxWindow* arg0 , int arg1 , const wxFont& arg2 = wxNullFont , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 24 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxFontPickerCtrlNameStr):wxFontPickerCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFontPickerCtrl;

static function_entry php_wxFontPickerCtrl_functions[] = {
        PHP_ME(php_wxFontPickerCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxFontPickerCtrl, GetSelectedFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFontPickerCtrl, GetMaxPointSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFontPickerCtrl, SetMaxPointSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFontPickerCtrl, SetSelectedFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFilePickerCtrl_entry;
void php_wxFilePickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFilePickerCtrl_NAME "wxFilePickerCtrl"
#define le_wxFilePickerCtrl_name  "native wxFilePickerCtrl"

class wxFilePickerCtrl_php : public wxFilePickerCtrl{
	public:
	wxFilePickerCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxString& arg3 = wxFileSelectorPromptStr , const wxString& arg4 = wxFileSelectorDefaultWildcardStr , const wxPoint& arg5 = wxDefaultPosition , const wxSize& arg6 = wxDefaultSize , long int arg7 = 9216 , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxFilePickerCtrlNameStr):wxFilePickerCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFilePickerCtrl;

static function_entry php_wxFilePickerCtrl_functions[] = {
        PHP_ME(php_wxFilePickerCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDirPickerCtrlBase, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDirPickerCtrlBase, SetPath, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxFileDirPickerCtrlBase_entry;
void php_wxFileDirPickerCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxFileDirPickerCtrlBase_NAME "wxFileDirPickerCtrlBase"
#define le_wxFileDirPickerCtrlBase_name  "native wxFileDirPickerCtrlBase"

class wxFileDirPickerCtrlBase_php : public wxFileDirPickerCtrlBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxFileDirPickerCtrlBase;

static function_entry php_wxFileDirPickerCtrlBase_functions[] = {
        PHP_ME(php_wxFileDirPickerCtrlBase, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDirPickerCtrlBase, SetPath, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDirPickerCtrl_entry;
void php_wxDirPickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDirPickerCtrl_NAME "wxDirPickerCtrl"
#define le_wxDirPickerCtrl_name  "native wxDirPickerCtrl"

class wxDirPickerCtrl_php : public wxDirPickerCtrl{
	public:
	wxDirPickerCtrl_php(wxWindow* arg0 , int arg1 , const wxString& arg2 = wxEmptyString , const wxString& arg3 = wxDirSelectorPromptStr , const wxPoint& arg4 = wxDefaultPosition , const wxSize& arg5 = wxDefaultSize , long int arg6 = 8 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxDirPickerCtrlNameStr):wxDirPickerCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDirPickerCtrl;

static function_entry php_wxDirPickerCtrl_functions[] = {
        PHP_ME(php_wxDirPickerCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDirPickerCtrlBase, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxFileDirPickerCtrlBase, SetPath, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDatePickerCtrlBase_entry;
void php_wxDatePickerCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDatePickerCtrlBase_NAME "wxDatePickerCtrlBase"
#define le_wxDatePickerCtrlBase_name  "native wxDatePickerCtrlBase"

class wxDatePickerCtrlBase_php : public wxDatePickerCtrlBase{
	public:
		virtual void SetRange(const wxDateTime& arg0 , const wxDateTime& arg1);
		virtual wxDateTime GetValue() const;
		virtual void SetValue(const wxDateTime& arg0);
		virtual bool GetRange(wxDateTime* arg0 , wxDateTime* arg1) const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDatePickerCtrlBase;

static function_entry php_wxDatePickerCtrlBase_functions[] = {
        PHP_ME(php_wxDatePickerCtrlBase, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, GetRange, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDatePickerCtrlGeneric_entry;
void php_wxDatePickerCtrlGeneric_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDatePickerCtrlGeneric_NAME "wxDatePickerCtrlGeneric"
#define le_wxDatePickerCtrlGeneric_name  "native wxDatePickerCtrlGeneric"

class wxDatePickerCtrlGeneric_php : public wxDatePickerCtrlGeneric{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDatePickerCtrlGeneric;

static function_entry php_wxDatePickerCtrlGeneric_functions[] = {
        PHP_ME(php_wxDatePickerCtrlGeneric, SetFormat, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDatePickerCtrl_entry;
void php_wxDatePickerCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDatePickerCtrl_NAME "wxDatePickerCtrl"
#define le_wxDatePickerCtrl_name  "native wxDatePickerCtrl"

class wxDatePickerCtrl_php : public wxDatePickerCtrl{
	public:
	wxDatePickerCtrl_php(wxWindow* arg0 , int arg1 , const wxDateTime& arg2 = wxDefaultDateTime , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 4 , const wxValidator& arg6 = wxDefaultValidator , const wxString& arg7 = wxT("d\000\000\000a\000\000\000t\000\000\000e\000\000\000c\000\000\000t\000\000\000r\000\000\000l\000\000\000\000\000\000")):wxDatePickerCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDatePickerCtrl;

static function_entry php_wxDatePickerCtrl_functions[] = {
        PHP_ME(php_wxDatePickerCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDatePickerCtrlGeneric, SetFormat, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDatePickerCtrlBase, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxScrollBar_entry;
void php_wxScrollBar_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxScrollBar_NAME "wxScrollBar"
#define le_wxScrollBar_name  "native wxScrollBar"

class wxScrollBar_php : public wxScrollBar{
	public:
	wxScrollBar_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxHORIZONTAL , const wxValidator& arg5 = wxDefaultValidator , const wxString& arg6 = wxScrollBarNameStr):wxScrollBar(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxScrollBar;

static function_entry php_wxScrollBar_functions[] = {
        PHP_ME(php_wxScrollBar, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, GetPageSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, GetThumbPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, GetThumbSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, SetThumbPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollBar, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSpinCtrl_entry;
void php_wxSpinCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSpinCtrl_NAME "wxSpinCtrl"
#define le_wxSpinCtrl_name  "native wxSpinCtrl"

class wxSpinCtrl_php : public wxSpinCtrl{
	public:
	wxSpinCtrl_php(wxWindow* arg0 , int arg1 = -0x00000000000000001 , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 4096 , int arg6 = 0 , int arg7 = 100 , int arg8 = 0 , const wxString& arg9 = wxT("w\000\000\000x\000\000\000S\000\000\000p\000\000\000i\000\000\000n\000\000\000C\000\000\000t\000\000\000r\000\000\000l\000\000\000\000\000\000")):wxSpinCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSpinCtrl;

static function_entry php_wxSpinCtrl_functions[] = {
        PHP_ME(php_wxSpinCtrl, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, GetMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, GetMax, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSpinButton_entry;
void php_wxSpinButton_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSpinButton_NAME "wxSpinButton"
#define le_wxSpinButton_name  "native wxSpinButton"

class wxSpinButton_php : public wxSpinButton{
	public:
	wxSpinButton_php(wxWindow* arg0 , int arg1 = -0x00000000000000001 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxVERTICAL , const wxString& arg5 = wxT("w\000\000\000x\000\000\000S\000\000\000p\000\000\000i\000\000\000n\000\000\000B\000\000\000u\000\000\000t\000\000\000t\000\000\000o\000\000\000n\000\000\000\000\000\000")):wxSpinButton(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSpinButton;

static function_entry php_wxSpinButton_functions[] = {
        PHP_ME(php_wxSpinButton, GetMax, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, GetMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSpinButton, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGenericDirCtrl_entry;
void php_wxGenericDirCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGenericDirCtrl_NAME "wxGenericDirCtrl"
#define le_wxGenericDirCtrl_name  "native wxGenericDirCtrl"

class wxGenericDirCtrl_php : public wxGenericDirCtrl{
	public:
	wxGenericDirCtrl_php(wxWindow* arg0 , const int arg1 = wxID_ANY , const wxString& arg2 = wxDirDialogDefaultFolderStr , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , long int arg5 = 134217856 , const wxString& arg6 = wxEmptyString , int arg7 = 0 , const wxString& arg8 = wxTreeCtrlNameStr):wxGenericDirCtrl(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGenericDirCtrl;

static function_entry php_wxGenericDirCtrl_functions[] = {
        PHP_ME(php_wxGenericDirCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGenericDirCtrl, Init, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, CollapseTree, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, ExpandPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, CollapsePath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetDefaultPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetFilePath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetFilter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetFilterListCtrl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetRootId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, GetTreeCtrl, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, ReCreateTree, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, SetDefaultPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, SetFilter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, SetFilterIndex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, SetPath, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGenericDirCtrl, ShowHidden, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxDirFilterListCtrl_entry;
void php_wxDirFilterListCtrl_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxDirFilterListCtrl_NAME "wxDirFilterListCtrl"
#define le_wxDirFilterListCtrl_name  "native wxDirFilterListCtrl"

class wxDirFilterListCtrl_php : public wxDirFilterListCtrl{
	public:
	wxDirFilterListCtrl_php(wxGenericDirCtrl* arg0 , const int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0):wxDirFilterListCtrl(arg0 , arg1 , arg2 , arg3 , arg4)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxDirFilterListCtrl;

static function_entry php_wxDirFilterListCtrl_functions[] = {
        PHP_ME(php_wxDirFilterListCtrl, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxDirFilterListCtrl, FillFilterList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirFilterListCtrl, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxDirFilterListCtrl, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetCurrentSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, FindString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoice, Delete, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, GetColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, SetColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxChoiceBase_entry;
void php_wxChoiceBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxChoiceBase_NAME "wxChoiceBase"
#define le_wxChoiceBase_name  "native wxChoiceBase"

class wxChoiceBase_php : public wxChoiceBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxChoiceBase;

static function_entry php_wxChoiceBase_functions[] = {
        PHP_ME(php_wxChoiceBase, GetColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, SetColumns, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxChoiceBase, GetCurrentSelection, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmapButtonBase_entry;
void php_wxBitmapButtonBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmapButtonBase_NAME "wxBitmapButtonBase"
#define le_wxBitmapButtonBase_name  "native wxBitmapButtonBase"

class wxBitmapButtonBase_php : public wxBitmapButtonBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmapButtonBase;

static function_entry php_wxBitmapButtonBase_functions[] = {
        PHP_ME(php_wxBitmapButtonBase, GetBitmapDisabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapHover, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, GetBitmapSelected, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapDisabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapHover, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapButtonBase, SetBitmapSelected, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTextCtrlBase_entry;
void php_wxTextCtrlBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTextCtrlBase_NAME "wxTextCtrlBase"
#define le_wxTextCtrlBase_name  "native wxTextCtrlBase"

class wxTextCtrlBase_php : public wxTextCtrlBase{
	public:
		virtual bool CanRedo() const;
		virtual bool CanUndo() const;
		virtual void Clear();
		virtual void Copy();
		virtual void Cut();
		virtual void DiscardEdits();
		virtual long int GetInsertionPoint() const;
		virtual long int GetLastPosition() const;
		virtual int GetLineLength(long int arg0) const;
		virtual wxString GetLineText(long int arg0) const;
		virtual int GetNumberOfLines() const;
		virtual void GetSelection(long int* arg0 , long int* arg1) const;
		virtual bool IsEditable() const;
		virtual bool IsModified() const;
		virtual void MarkDirty();
		virtual void Paste();
		virtual bool PositionToXY(long int arg0 , long int* arg1 , long int* arg2) const;
		virtual void Redo();
		virtual void Remove(long int arg0 , long int arg1);
		virtual void Replace(long int arg0 , long int arg1 , const wxString& arg2);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTextCtrlBase;

static function_entry php_wxTextCtrlBase_functions[] = {
        PHP_ME(php_wxTextCtrlBase, CanCopy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanCut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanPaste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanRedo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, CanUndo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Copy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Cut, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, DiscardEdits, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, EmulateKeyPress, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetDefaultStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetInsertionPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLastPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLineLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetLineText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetNumberOfLines, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetStringSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, GetStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsEditable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsEmpty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsModified, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsMultiLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, IsSingleLine, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, LoadFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, MarkDirty, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Paste, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, PositionToXY, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Redo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, Replace, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTextCtrlBase, SaveFile, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxBitmapComboBox_entry;
void php_wxBitmapComboBox_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxBitmapComboBox_NAME "wxBitmapComboBox"
#define le_wxBitmapComboBox_name  "native wxBitmapComboBox"

class wxBitmapComboBox_php : public wxBitmapComboBox{
	public:
	wxBitmapComboBox_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxString& arg2 = wxEmptyString , const wxPoint& arg3 = wxDefaultPosition , const wxSize& arg4 = wxDefaultSize , int arg5 = 0 , const wxString* arg6 = 0l , long int arg7 = 0 , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxBitmapComboBoxNameStr):wxBitmapComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	wxBitmapComboBox_php(wxWindow* arg0 , int arg1 , const wxString& arg2 , const wxPoint& arg3 , const wxSize& arg4 , const wxArrayString& arg5 , long int arg6 , const wxValidator& arg7 = wxDefaultValidator , const wxString& arg8 = wxBitmapComboBoxNameStr):wxBitmapComboBox(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxBitmapComboBox;

static function_entry php_wxBitmapComboBox_functions[] = {
        PHP_ME(php_wxBitmapComboBox, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxBitmapComboBox, Append, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapComboBox, GetBitmapSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapComboBox, GetItemBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapComboBox, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBitmapComboBox, SetItemBitmap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxCheckBoxBase_entry;
void php_wxCheckBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxCheckBoxBase_NAME "wxCheckBoxBase"
#define le_wxCheckBoxBase_name  "native wxCheckBoxBase"

class wxCheckBoxBase_php : public wxCheckBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxCheckBoxBase;

static function_entry php_wxCheckBoxBase_functions[] = {
        PHP_ME(php_wxCheckBoxBase, Set3StateValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBoxBase, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBoxBase, Is3State, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBoxBase, Is3rdStateAllowedForUser, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCheckBoxBase, Get3StateValue, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxRadioBoxBase_entry;
void php_wxRadioBoxBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxRadioBoxBase_NAME "wxRadioBoxBase"
#define le_wxRadioBoxBase_name  "native wxRadioBoxBase"

class wxRadioBoxBase_php : public wxRadioBoxBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxRadioBoxBase;

static function_entry php_wxRadioBoxBase_functions[] = {
        PHP_ME(php_wxRadioBoxBase, GetColumnCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetItemHelpText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetItemToolTip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, GetRowCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxRadioBoxBase, SetItemToolTip, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticLineBase_entry;
void php_wxStaticLineBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticLineBase_NAME "wxStaticLineBase"
#define le_wxStaticLineBase_name  "native wxStaticLineBase"

class wxStaticLineBase_php : public wxStaticLineBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticLineBase;

static function_entry php_wxStaticLineBase_functions[] = {
        PHP_ME(php_wxStaticLineBase, IsVertical, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticLineBase, GetDefaultSize, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxStaticLine_entry;
void php_wxStaticLine_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxStaticLine_NAME "wxStaticLine"
#define le_wxStaticLine_name  "native wxStaticLine"

class wxStaticLine_php : public wxStaticLine{
	public:
	wxStaticLine_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = wxHORIZONTAL , const wxString& arg5 = wxStaticLineNameStr):wxStaticLine(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxStaticLine;

static function_entry php_wxStaticLine_functions[] = {
        PHP_ME(php_wxStaticLine, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxStaticLineBase, IsVertical, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxStaticLineBase, GetDefaultSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSlider_entry;
void php_wxSlider_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSlider_NAME "wxSlider"
#define le_wxSlider_name  "native wxSlider"

class wxSlider_php : public wxSlider{
	public:
	wxSlider_php(wxWindow* arg0 , int arg1 , int arg2 , int arg3 , int arg4 , const wxPoint& arg5 = wxDefaultPosition , const wxSize& arg6 = wxDefaultSize , long int arg7 = wxHORIZONTAL , const wxValidator& arg8 = wxDefaultValidator , const wxString& arg9 = wxSliderNameStr):wxSlider(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6 , arg7 , arg8 , arg9)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSlider;

static function_entry php_wxSlider_functions[] = {
        PHP_ME(php_wxSlider, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSlider, SetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, SetThumbLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, SetRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, SetPageSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, SetLineSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetThumbLength, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetPageSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetMax, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSlider, GetLineSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, SetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxControl, GetLabel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, SetTick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, ClearSel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, ClearTicks, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetTickFreq, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetSelEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetSelStart, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxSliderBase_entry;
void php_wxSliderBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxSliderBase_NAME "wxSliderBase"
#define le_wxSliderBase_name  "native wxSliderBase"

class wxSliderBase_php : public wxSliderBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxSliderBase;

static function_entry php_wxSliderBase_functions[] = {
        PHP_ME(php_wxSliderBase, SetTick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, ClearSel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, ClearTicks, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetTickFreq, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetSelEnd, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSliderBase, GetSelStart, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxScrolledWindow_entry;
void php_wxScrolledWindow_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxScrolledWindow_NAME "wxScrolledWindow"
#define le_wxScrolledWindow_name  "native wxScrolledWindow"

class wxScrolledWindow_php : public wxScrolledWindow{
	public:
	wxScrolledWindow_php(wxWindow* arg0 , int arg1 = wxID_ANY , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 3221225472u , const wxString& arg5 = wxPanelNameStr):wxScrolledWindow(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxScrolledWindow;

static function_entry php_wxScrolledWindow_functions[] = {
        PHP_ME(php_wxScrolledWindow, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxScrolledWindow, PrepareDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, InitDialog, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPanel, SetFocusIgnoringChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, EnableScrolling, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetScrollPixelsPerUnit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetViewStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, DoPrepareDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, Scroll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollbars, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollRate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetTargetWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcScrolledPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcUnscrolledPosition, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxScrollHelper_entry;
void php_wxScrollHelper_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxScrollHelper_NAME "wxScrollHelper"
#define le_wxScrollHelper_name  "native wxScrollHelper"

class wxScrollHelper_php : public wxScrollHelper{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxScrollHelper;

static function_entry php_wxScrollHelper_functions[] = {
        PHP_ME(php_wxScrollHelper, EnableScrolling, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetScrollPixelsPerUnit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, GetViewStart, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, DoPrepareDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, Scroll, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollbars, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetScrollRate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, SetTargetWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcScrolledPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxScrollHelper, CalcUnscrolledPosition, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxNotebookBase_entry;
void php_wxNotebookBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxNotebookBase_NAME "wxNotebookBase"
#define le_wxNotebookBase_name  "native wxNotebookBase"

class wxNotebookBase_php : public wxNotebookBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxNotebookBase;

static function_entry php_wxNotebookBase_functions[] = {
        PHP_ME(php_wxNotebookBase, GetRowCount, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxListbook_entry;
void php_wxListbook_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxListbook_NAME "wxListbook"
#define le_wxListbook_name  "native wxListbook"

class wxListbook_php : public wxListbook{
	public:
	wxListbook_php(wxWindow* arg0 , int arg1 , const wxPoint& arg2 = wxDefaultPosition , const wxSize& arg3 = wxDefaultSize , long int arg4 = 0 , const wxString& arg5 = wxEmptyString):wxListbook(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
		virtual void UpdateSelectedPage(long unsigned int arg0);
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxListbook;

static function_entry php_wxListbook_functions[] = {
        PHP_ME(php_wxListbook, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxListbook, GetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, GetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, InsertPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, SetImageList, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, SetPageImage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, SetPageText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, UpdateSelectedPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, ChangeSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxListbook, DeleteAllPages, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Raise, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Lower, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Enable, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsRetained, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFocus, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Reparent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, WarpPointer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Update, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, ClearBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetBackgroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetForegroundColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetCursor, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetFont, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharHeight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetCharWidth, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollbar, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetScrollPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollThumb, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetScrollRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, AddChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, RemoveChild, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, GetHandle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, Refresh, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, IsFrozen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindow, SetWindowStyleFlag, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvtHandler, Connect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetSizer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetWindowStyle, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, PopupMenu, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsEnabled, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, IsShownOnScreen, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, UpdateWindowUI, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, FindWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetMaxSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, Centre, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxWindowBase, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, AddPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, RemovePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, DeletePage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPageCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetPage, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxBookCtrlBase, GetCurrentPage, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridSizer_entry;
void php_wxGridSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridSizer_NAME "wxGridSizer"
#define le_wxGridSizer_name  "native wxGridSizer"

class wxGridSizer_php : public wxGridSizer{
	public:
	wxGridSizer_php(const wxGridSizer& arg0):wxGridSizer(arg0)
	{
	}
	wxGridSizer_php(int arg0 , int arg1 , int arg2 , int arg3):wxGridSizer(arg0 , arg1 , arg2 , arg3)
	{
	}
	wxGridSizer_php(int arg0 , int arg1 = 0 , int arg2 = 0):wxGridSizer(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridSizer;

static function_entry php_wxGridSizer_functions[] = {
        PHP_ME(php_wxGridSizer, GetCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetHGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, GetVGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetCols, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetHGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetRows, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, SetVGap, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxSizer, Add, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, AddStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Insert, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, InsertStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Prepend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, PrependStretchSpacer, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Remove, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Detach, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Clear, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetItemMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetMinSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Layout, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Fit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, FitInside, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetVirtualSizeHints, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetChildren, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, SetDimension, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, GetItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, Hide, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxSizer, IsShown, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridBagSizer_entry;
void php_wxGridBagSizer_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridBagSizer_NAME "wxGridBagSizer"
#define le_wxGridBagSizer_name  "native wxGridBagSizer"

class wxGridBagSizer_php : public wxGridBagSizer{
	public:
	wxGridBagSizer_php(int arg0 = 0 , int arg1 = 0):wxGridBagSizer(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridBagSizer;

static function_entry php_wxGridBagSizer_functions[] = {
        PHP_ME(php_wxGridBagSizer, CalcMin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, CheckForIntersection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridBagSizer, FindItem, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, FindItemAtPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, FindItemAtPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, FindItemWithData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, GetCellSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, GetEmptyCellSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, GetItemPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, GetItemSpan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, SetItemPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, SetItemSpan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, RecalcSizes, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, SetEmptyCellSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridBagSizer, Add, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGBSizerItem_entry;
void php_wxGBSizerItem_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGBSizerItem_NAME "wxGBSizerItem"
#define le_wxGBSizerItem_name  "native wxGBSizerItem"

class wxGBSizerItem_php : public wxGBSizerItem{
	public:
	wxGBSizerItem_php(int arg0 , int arg1 , const wxGBPosition& arg2 , const wxGBSpan& arg3 , int arg4 , int arg5 , wxObject* arg6):wxGBSizerItem(arg0 , arg1 , arg2 , arg3 , arg4 , arg5 , arg6)
	{
	}
	wxGBSizerItem_php(wxWindow* arg0 , const wxGBPosition& arg1 , const wxGBSpan& arg2 , int arg3 , int arg4 , wxObject* arg5):wxGBSizerItem(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxGBSizerItem_php(wxSizer* arg0 , const wxGBPosition& arg1 , const wxGBSpan& arg2 , int arg3 , int arg4 , wxObject* arg5):wxGBSizerItem(arg0 , arg1 , arg2 , arg3 , arg4 , arg5)
	{
	}
	wxGBSizerItem_php():wxGBSizerItem()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGBSizerItem;

static function_entry php_wxGBSizerItem_functions[] = {
        PHP_ME(php_wxGBSizerItem, GetEndPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGBSizerItem, GetSpan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGBSizerItem, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGBSizerItem, SetSpan, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGBSizerItem, SetPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGBSizerItem, GetPos, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGBSizerItem, Intersects, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxMask_entry;
void php_wxMask_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxMask_NAME "wxMask"
#define le_wxMask_name  "native wxMask"

class wxMask_php : public wxMask{
	public:
	wxMask_php():wxMask()
	{
	}
	wxMask_php(const wxBitmap& arg0 , const wxColour& arg1):wxMask(arg0 , arg1)
	{
	}
	wxMask_php(const wxBitmap& arg0 , int arg1):wxMask(arg0 , arg1)
	{
	}
	wxMask_php(const wxBitmap& arg0):wxMask(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxMask;

static function_entry php_wxMask_functions[] = {
        PHP_ME(php_wxMask, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxMask, Create, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPalette_entry;
void php_wxPalette_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPalette_NAME "wxPalette"
#define le_wxPalette_name  "native wxPalette"

class wxPalette_php : public wxPalette{
	public:
	wxPalette_php(const wxPalette& arg0):wxPalette(arg0)
	{
	}
	wxPalette_php():wxPalette()
	{
	}
	wxPalette_php(int arg0 , const unsigned char* arg1 , const unsigned char* arg2 , const unsigned char* arg3):wxPalette(arg0 , arg1 , arg2 , arg3)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPalette;

static function_entry php_wxPalette_functions[] = {
        PHP_ME(php_wxPalette, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPalette, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPalette, GetRGB, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPalette, GetPixel, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPalette, GetColoursCount, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPalette, Create, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellFloatEditor_entry;
void php_wxGridCellFloatEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellFloatEditor_NAME "wxGridCellFloatEditor"
#define le_wxGridCellFloatEditor_name  "native wxGridCellFloatEditor"

class wxGridCellFloatEditor_php : public wxGridCellFloatEditor{
	public:
	wxGridCellFloatEditor_php(int arg0 = -0x00000000000000001 , int arg1 = -0x00000000000000001):wxGridCellFloatEditor(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellFloatEditor;

static function_entry php_wxGridCellFloatEditor_functions[] = {
        PHP_ME(php_wxGridCellFloatEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellFloatEditor, SetParameters, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellBoolEditor_entry;
void php_wxGridCellBoolEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellBoolEditor_NAME "wxGridCellBoolEditor"
#define le_wxGridCellBoolEditor_name  "native wxGridCellBoolEditor"

class wxGridCellBoolEditor_php : public wxGridCellBoolEditor{
	public:
	wxGridCellBoolEditor_php():wxGridCellBoolEditor()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellBoolEditor;

static function_entry php_wxGridCellBoolEditor_functions[] = {
        PHP_ME(php_wxGridCellBoolEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellBoolEditor, IsTrueValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellBoolEditor, UseStringValues, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, SetParameters, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellChoiceEditor_entry;
void php_wxGridCellChoiceEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellChoiceEditor_NAME "wxGridCellChoiceEditor"
#define le_wxGridCellChoiceEditor_name  "native wxGridCellChoiceEditor"

class wxGridCellChoiceEditor_php : public wxGridCellChoiceEditor{
	public:
	wxGridCellChoiceEditor_php(const wxArrayString& arg0 , bool arg1 = false):wxGridCellChoiceEditor(arg0 , arg1)
	{
	}
	wxGridCellChoiceEditor_php(long unsigned int arg0 = 0 , const wxString* arg1 = 0l , bool arg2 = false):wxGridCellChoiceEditor(arg0 , arg1 , arg2)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellChoiceEditor;

static function_entry php_wxGridCellChoiceEditor_functions[] = {
        PHP_ME(php_wxGridCellChoiceEditor, SetParameters, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellChoiceEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellNumberEditor_entry;
void php_wxGridCellNumberEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellNumberEditor_NAME "wxGridCellNumberEditor"
#define le_wxGridCellNumberEditor_name  "native wxGridCellNumberEditor"

class wxGridCellNumberEditor_php : public wxGridCellNumberEditor{
	public:
	wxGridCellNumberEditor_php(int arg0 = -0x00000000000000001 , int arg1 = -0x00000000000000001):wxGridCellNumberEditor(arg0 , arg1)
	{
	}
		virtual bool HasRange() const;
		virtual wxString GetString() const;
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellNumberEditor;

static function_entry php_wxGridCellNumberEditor_functions[] = {
        PHP_ME(php_wxGridCellNumberEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellNumberEditor, HasRange, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellNumberEditor, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellNumberEditor, SetParameters, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridCellTextEditor_entry;
void php_wxGridCellTextEditor_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridCellTextEditor_NAME "wxGridCellTextEditor"
#define le_wxGridCellTextEditor_name  "native wxGridCellTextEditor"

class wxGridCellTextEditor_php : public wxGridCellTextEditor{
	public:
	wxGridCellTextEditor_php():wxGridCellTextEditor()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridCellTextEditor;

static function_entry php_wxGridCellTextEditor_functions[] = {
        PHP_ME(php_wxGridCellTextEditor, SetParameters, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellTextEditor, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxGridCellEditor, IsCreated, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Create, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, SetSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Show, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, PaintBackground, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, BeginEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, EndEdit, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Reset, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingKey, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, StartingClick, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, HandleReturn, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Destroy, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetValue, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellEditor, GetCellAttr, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, DecRef, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridCellWorker, IncRef, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxHtmlEasyPrinting_entry;
void php_wxHtmlEasyPrinting_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxHtmlEasyPrinting_NAME "wxHtmlEasyPrinting"
#define le_wxHtmlEasyPrinting_name  "native wxHtmlEasyPrinting"

class wxHtmlEasyPrinting_php : public wxHtmlEasyPrinting{
	public:
	wxHtmlEasyPrinting_php(const wxString& arg0 = wxT("P\000\000\000r\000\000\000i\000\000\000n\000\000\000t\000\000\000i\000\000\000n\000\000\000g\000\000\000\000\000\000") , wxWindow* arg1 = 0l):wxHtmlEasyPrinting(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxHtmlEasyPrinting;

static function_entry php_wxHtmlEasyPrinting_functions[] = {
        PHP_ME(php_wxHtmlEasyPrinting, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxHtmlEasyPrinting, GetParentWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, GetPrintData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, GetPageSetupData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, PreviewFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, PreviewText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, PrintFile, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, PrintText, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, PageSetup, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, SetFonts, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, SetHeader, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, SetFooter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, SetParentWindow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxHtmlEasyPrinting, SetName, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPrintData_entry;
void php_wxPrintData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPrintData_NAME "wxPrintData"
#define le_wxPrintData_name  "native wxPrintData"

class wxPrintData_php : public wxPrintData{
	public:
	wxPrintData_php():wxPrintData()
	{
	}
	wxPrintData_php(const wxPrintData& arg0):wxPrintData(arg0)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPrintData;

static function_entry php_wxPrintData_functions[] = {
        PHP_ME(php_wxPrintData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPrintData, GetCollate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetBin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetDuplex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetNoCopies, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetPaperId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetPrinterName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, GetQuality, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetBin, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetCollate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetColour, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetDuplex, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetNoCopies, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetPaperId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetPrinterName, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPrintData, SetQuality, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPageSetupDialog_entry;
void php_wxPageSetupDialog_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPageSetupDialog_NAME "wxPageSetupDialog"
#define le_wxPageSetupDialog_name  "native wxPageSetupDialog"

class wxPageSetupDialog_php : public wxPageSetupDialog{
	public:
	wxPageSetupDialog_php(wxWindow* arg0 , wxPageSetupDialogData* arg1 = 0l):wxPageSetupDialog(arg0 , arg1)
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPageSetupDialog;

static function_entry php_wxPageSetupDialog_functions[] = {
        PHP_ME(php_wxPageSetupDialog, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPageSetupDialog, ShowModal, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialog, GetPageSetupData, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxPageSetupDialogData_entry;
void php_wxPageSetupDialogData_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxPageSetupDialogData_NAME "wxPageSetupDialogData"
#define le_wxPageSetupDialogData_name  "native wxPageSetupDialogData"

class wxPageSetupDialogData_php : public wxPageSetupDialogData{
	public:
	wxPageSetupDialogData_php(const wxPrintData& arg0):wxPageSetupDialogData(arg0)
	{
	}
	wxPageSetupDialogData_php(const wxPageSetupDialogData& arg0):wxPageSetupDialogData(arg0)
	{
	}
	wxPageSetupDialogData_php():wxPageSetupDialogData()
	{
	}
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxPageSetupDialogData;

static function_entry php_wxPageSetupDialogData_functions[] = {
        PHP_ME(php_wxPageSetupDialogData, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
        PHP_ME(php_wxPageSetupDialogData, EnableHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, EnableMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, EnableOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, EnablePaper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, EnablePrinter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetDefaultMinMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetEnableMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetEnableOrientation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetEnablePaper, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetEnablePrinter, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetEnableHelp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetDefaultInfo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetMarginTopLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetMinMarginBottomRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetMinMarginTopLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetMarginBottomRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetPaperId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetPaperSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, GetPrintData, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, IsOk, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetDefaultInfo, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetDefaultMinMargins, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetMarginBottomRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetMarginTopLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetMinMarginBottomRight, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetMinMarginTopLeft, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetPaperId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetPaperSize, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxPageSetupDialogData, SetPrintData, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxTimerBase_entry;
void php_wxTimerBase_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxTimerBase_NAME "wxTimerBase"
#define le_wxTimerBase_name  "native wxTimerBase"

class wxTimerBase_php : public wxTimerBase{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxTimerBase;

static function_entry php_wxTimerBase_functions[] = {
        PHP_ME(php_wxTimerBase, GetInterval, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, IsOneShot, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, Notify, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxTimerBase, SetOwner, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiNotebookEvent_entry;
void php_wxAuiNotebookEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiNotebookEvent_NAME "wxAuiNotebookEvent"
#define le_wxAuiNotebookEvent_name  "native wxAuiNotebookEvent"

class wxAuiNotebookEvent_php : public wxAuiNotebookEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiNotebookEvent;

static function_entry php_wxAuiNotebookEvent_functions[] = {
        PHP_ME(php_wxAuiNotebookEvent, SetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebookEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebookEvent, SetOldSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebookEvent, GetOldSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebookEvent, SetDragSource, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiNotebookEvent, GetDragSource, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Allow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, IsAllowed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Veto, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiManagerEvent_entry;
void php_wxAuiManagerEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiManagerEvent_NAME "wxAuiManagerEvent"
#define le_wxAuiManagerEvent_name  "native wxAuiManagerEvent"

class wxAuiManagerEvent_php : public wxAuiManagerEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiManagerEvent;

static function_entry php_wxAuiManagerEvent_functions[] = {
        PHP_ME(php_wxAuiManagerEvent, SetManager, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, SetPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, SetButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, SetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, Veto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, GetVeto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, SetCanVeto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, GetManager, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, GetPane, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, GetButton, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, GetDC, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiManagerEvent, CanVeto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxAuiToolBarEvent_entry;
void php_wxAuiToolBarEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxAuiToolBarEvent_NAME "wxAuiToolBarEvent"
#define le_wxAuiToolBarEvent_name  "native wxAuiToolBarEvent"

class wxAuiToolBarEvent_php : public wxAuiToolBarEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxAuiToolBarEvent;

static function_entry php_wxAuiToolBarEvent_functions[] = {
        PHP_ME(php_wxAuiToolBarEvent, GetClickPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, GetItemRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, GetToolId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, IsDropDownClicked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, SetClickPoint, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, SetItemRect, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, SetDropDownClicked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxAuiToolBarEvent, SetToolId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Allow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, IsAllowed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Veto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxNotifyEvent_entry;
void php_wxNotifyEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxNotifyEvent_NAME "wxNotifyEvent"
#define le_wxNotifyEvent_name  "native wxNotifyEvent"

class wxNotifyEvent_php : public wxNotifyEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxNotifyEvent;

static function_entry php_wxNotifyEvent_functions[] = {
        PHP_ME(php_wxNotifyEvent, Allow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, IsAllowed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Veto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxGridEvent_entry;
void php_wxGridEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxGridEvent_NAME "wxGridEvent"
#define le_wxGridEvent_name  "native wxGridEvent"

class wxGridEvent_php : public wxGridEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxGridEvent;

static function_entry php_wxGridEvent_functions[] = {
        PHP_ME(php_wxGridEvent, AltDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, ControlDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, GetCol, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, GetPosition, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, GetRow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, MetaDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, Selecting, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxGridEvent, ShiftDown, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Allow, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, IsAllowed, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxNotifyEvent, Veto, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetString, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsChecked, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, IsSelection, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetExtraLong, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, SetInt, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxCommandEvent, GetInt, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
extern zend_class_entry *php_wxIdleEvent_entry;
void php_wxIdleEvent_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_wxIdleEvent_NAME "wxIdleEvent"
#define le_wxIdleEvent_name  "native wxIdleEvent"

class wxIdleEvent_php : public wxIdleEvent{
	public:
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};


extern int le_wxIdleEvent;

static function_entry php_wxIdleEvent_functions[] = {
        PHP_ME(php_wxIdleEvent, CanSend, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIdleEvent, GetMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIdleEvent, RequestMore, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIdleEvent, MoreRequested, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxIdleEvent, SetMode, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventType, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetEventObject, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetTimestamp, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, SetId, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Skip, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, GetSkipped, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, IsCommandEvent, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ShouldPropagate, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, StopPropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, ResumePropagation, NULL,ZEND_ACC_PUBLIC)
        PHP_ME(php_wxEvent, Clone, NULL,ZEND_ACC_PUBLIC)
	{ NULL, NULL, NULL }
};
