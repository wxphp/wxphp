/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_AUI_H_GUARD
#define WXPHP_AUI_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_aui_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxAuiToolBarEvent_entry;
void php_wxAuiToolBarEvent_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiToolBarEvent_php: public wxAuiToolBarEvent{
	public:
	
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiToolBarEvent{
    wxAuiToolBarEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiToolBarEvent;

void php_wxAuiToolBarEvent_free(void *object TSRMLS_DC);
zend_object* php_wxAuiToolBarEvent_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiToolBarEvent_functions[] = {
	PHP_ME(php_wxAuiToolBarEvent, GetClickPoint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarEvent, GetItemRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarEvent, GetToolId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarEvent, IsDropDownClicked, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiToolBarEvent * php_wxAuiToolBarEvent_fetch_object(zend_object *obj) {
      return (zo_wxAuiToolBarEvent *)((char *)obj - XtOffsetOf(zo_wxAuiToolBarEvent, zo));
}

#define Z_wxAuiToolBarEvent_P(zv) php_wxAuiToolBarEvent_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiToolBarItem_entry;
void php_wxAuiToolBarItem_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiToolBarItem_php: public wxAuiToolBarItem{
	public:
	
	wxAuiToolBarItem_php(const wxAuiToolBarItem& c):wxAuiToolBarItem(c){}
	wxAuiToolBarItem_php():wxAuiToolBarItem(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiToolBarItem{
    wxAuiToolBarItem_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiToolBarItem;

void php_wxAuiToolBarItem_free(void *object TSRMLS_DC);
zend_object* php_wxAuiToolBarItem_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiToolBarItem_functions[] = {
	PHP_ME(php_wxAuiToolBarItem, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiToolBarItem, SetWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetUserData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetSticky, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetState, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetSpacerPixels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetSizerItem, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetShortHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetProportion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetMinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetLongHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetHoverBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetHasDropDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetDisabledBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetAlignment, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, SetActive, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, IsSticky, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, IsActive, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, HasDropDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetUserData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetState, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetSpacerPixels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetSizerItem, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetShortHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetProportion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetMinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetLongHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetKind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetHoverBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetDisabledBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, GetAlignment, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBarItem, Assign, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiToolBarItem * php_wxAuiToolBarItem_fetch_object(zend_object *obj) {
      return (zo_wxAuiToolBarItem *)((char *)obj - XtOffsetOf(zo_wxAuiToolBarItem, zo));
}

#define Z_wxAuiToolBarItem_P(zv) php_wxAuiToolBarItem_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiToolBarArt_entry;
void php_wxAuiToolBarArt_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiToolBarArt_php: public wxAuiToolBarArt{
	public:
	
		
	wxAuiToolBarArt* Clone();
	void DrawBackground(wxDC& dc, wxWindow* wnd, const wxRect& rect);
	void DrawButton(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item, const wxRect& rect);
	void DrawControlLabel(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item, const wxRect& rect);
	void DrawDropDownButton(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item, const wxRect& rect);
	void DrawGripper(wxDC& dc, wxWindow* wnd, const wxRect& rect);
	void DrawLabel(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item, const wxRect& rect);
	void DrawOverflowButton(wxDC& dc, wxWindow* wnd, const wxRect& rect, int state);
	void DrawSeparator(wxDC& dc, wxWindow* wnd, const wxRect& rect);
	int GetElementSize(int element_id);
	unsigned int GetFlags();
	wxFont GetFont();
	wxSize GetLabelSize(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item);
	int GetTextOrientation();
	wxSize GetToolSize(wxDC& dc, wxWindow* wnd, const wxAuiToolBarItem& item);
	void SetElementSize(int element_id, int size);
	void SetFlags(unsigned int flags);
	void SetFont(const wxFont& font);
	void SetTextOrientation(int orientation);
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiToolBarArt{
    wxAuiToolBarArt_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiToolBarArt;

void php_wxAuiToolBarArt_free(void *object TSRMLS_DC);
zend_object* php_wxAuiToolBarArt_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiToolBarArt_functions[] = {
	PHP_FE_END
};
#endif


static inline zo_wxAuiToolBarArt * php_wxAuiToolBarArt_fetch_object(zend_object *obj) {
      return (zo_wxAuiToolBarArt *)((char *)obj - XtOffsetOf(zo_wxAuiToolBarArt, zo));
}

#define Z_wxAuiToolBarArt_P(zv) php_wxAuiToolBarArt_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiDefaultToolBarArt_entry;
void php_wxAuiDefaultToolBarArt_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiDefaultToolBarArt_php: public wxAuiDefaultToolBarArt{
	public:
	
	wxAuiDefaultToolBarArt_php():wxAuiDefaultToolBarArt(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiDefaultToolBarArt{
    wxAuiDefaultToolBarArt_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiDefaultToolBarArt;

void php_wxAuiDefaultToolBarArt_free(void *object TSRMLS_DC);
zend_object* php_wxAuiDefaultToolBarArt_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiDefaultToolBarArt_functions[] = {
	PHP_ME(php_wxAuiDefaultToolBarArt, CloneMethod, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawBackground, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawControlLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawDropDownButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawGripper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawOverflowButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, DrawSeparator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetElementSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetLabelSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetTextOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, GetToolSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, SetElementSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, SetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, SetTextOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiDefaultToolBarArt, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxAuiDefaultToolBarArt * php_wxAuiDefaultToolBarArt_fetch_object(zend_object *obj) {
      return (zo_wxAuiDefaultToolBarArt *)((char *)obj - XtOffsetOf(zo_wxAuiDefaultToolBarArt, zo));
}

#define Z_wxAuiDefaultToolBarArt_P(zv) php_wxAuiDefaultToolBarArt_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiToolBar_entry;
void php_wxAuiToolBar_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiToolBar_php: public wxAuiToolBar{
	public:
	
	wxAuiToolBar_php():wxAuiToolBar(){}
	wxAuiToolBar_php(wxWindow* parent, wxWindowID id=wxID_ANY, const wxPoint& position=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxAUI_TB_DEFAULT_STYLE):wxAuiToolBar(parent, id, position, size, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiToolBar{
    wxAuiToolBar_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiToolBar;

void php_wxAuiToolBar_free(void *object TSRMLS_DC);
zend_object* php_wxAuiToolBar_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiToolBar_functions[] = {
	PHP_ME(php_wxAuiToolBar, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiToolBar, AddControl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, AddLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, AddSeparator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, AddSpacer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, AddStretchSpacer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, Clear, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, ClearTools, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, DeleteByIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, DeleteTool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, EnableTool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, ToggleTool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolTextOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolSticky, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolShortHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolSeparation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolProportion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolPacking, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolLongHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolDropDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolBorderPadding, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolBitmapSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetToolBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetOverflowVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetMargins, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetGripperVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, Realize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, IsPaneValid, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetWindowStyleFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolToggled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolTextOrientation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolSticky, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolShortHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolSeparation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, FindControl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, FindTool, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, FindToolByIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, FindToolByPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetArtProvider, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetGripperVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetHintSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetOverflowVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolBarFits, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolBitmapSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolBorderPadding, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolDropDown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolEnabled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolFits, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolFitsByIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolLongHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolPacking, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolPos, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolProportion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, GetToolRect, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiToolBar, AddTool, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiToolBar * php_wxAuiToolBar_fetch_object(zend_object *obj) {
      return (zo_wxAuiToolBar *)((char *)obj - XtOffsetOf(zo_wxAuiToolBar, zo));
}

#define Z_wxAuiToolBar_P(zv) php_wxAuiToolBar_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiNotebook_entry;
void php_wxAuiNotebook_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiNotebook_php: public wxAuiNotebook{
	public:
	
	wxAuiNotebook_php(wxWindow* parent, wxWindowID id=wxID_ANY, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxAUI_NB_DEFAULT_STYLE):wxAuiNotebook(parent, id, pos, size, style){}
	wxAuiNotebook_php():wxAuiNotebook(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiNotebook{
    wxAuiNotebook_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiNotebook;

void php_wxAuiNotebook_free(void *object TSRMLS_DC);
zend_object* php_wxAuiNotebook_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiNotebook_functions[] = {
	PHP_ME(php_wxAuiNotebook, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiNotebook, Split, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, ShowWindowMenu, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetUniformBitmapSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetTabCtrlHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetSelectedFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetPageText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetPageImage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetPageBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetNormalFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetMeasuringFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetArtProvider, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, RemovePage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetTabCtrlHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetPageText, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetPageIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetPageCount, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetPageBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetHeightForPageHeight, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetCurrentPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, GetArtProvider, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, DeletePage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, DeleteAllPages, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, ChangeSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, AdvanceSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, AddPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiNotebook, SetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiNotebook * php_wxAuiNotebook_fetch_object(zend_object *obj) {
      return (zo_wxAuiNotebook *)((char *)obj - XtOffsetOf(zo_wxAuiNotebook, zo));
}

#define Z_wxAuiNotebook_P(zv) php_wxAuiNotebook_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiTabArt_entry;
void php_wxAuiTabArt_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiTabArt_php: public wxAuiTabArt{
	public:
	
		
	void SetSizingInfo(const wxSize& tab_ctrl_size, size_t tab_count);
	void SetSelectedFont(const wxFont& font);
	void SetNormalFont(const wxFont& font);
	void SetMeasuringFont(const wxFont& font);
	void SetFlags(unsigned int flags);
	void SetColour(const wxColour& colour);
	void SetActiveColour(const wxColour& colour);
	wxSize GetTabSize(wxDC& dc, wxWindow* wnd, const wxString& caption, const wxBitmap& bitmap, bool active, int close_button_state, int* x_extent);
	int GetIndentSize();
	void DrawButton(wxDC& dc, wxWindow* wnd, const wxRect& in_rect, int bitmap_id, int button_state, int orientation, wxRect* out_rect);
	void DrawBackground(wxDC& dc, wxWindow* wnd, const wxRect& rect);
	wxAuiTabArt* Clone();
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiTabArt{
    wxAuiTabArt_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiTabArt;

void php_wxAuiTabArt_free(void *object TSRMLS_DC);
zend_object* php_wxAuiTabArt_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiTabArt_functions[] = {
	PHP_FE_END
};
#endif


static inline zo_wxAuiTabArt * php_wxAuiTabArt_fetch_object(zend_object *obj) {
      return (zo_wxAuiTabArt *)((char *)obj - XtOffsetOf(zo_wxAuiTabArt, zo));
}

#define Z_wxAuiTabArt_P(zv) php_wxAuiTabArt_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiDockArt_entry;
void php_wxAuiDockArt_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiDockArt_php: public wxAuiDockArt{
	public:
	
	wxAuiDockArt_php():wxAuiDockArt(){}
		
	void SetMetric(int id, int new_val);
	void SetFont(int id, const wxFont& font);
	int GetMetric(int id);
	void SetColour(int id, const wxColour& colour);
	wxFont GetFont(int id);
	wxColour GetColour(int id);
	void DrawSash(wxDC& dc, wxWindow* window, int orientation, const wxRect& rect);
	void DrawPaneButton(wxDC& dc, wxWindow* window, int button, int button_state, const wxRect& rect, wxAuiPaneInfo& pane);
	void DrawGripper(wxDC& dc, wxWindow* window, const wxRect& rect, wxAuiPaneInfo& pane);
	void DrawCaption(wxDC& dc, wxWindow* window, const wxString& text, const wxRect& rect, wxAuiPaneInfo& pane);
	void DrawBorder(wxDC& dc, wxWindow* window, const wxRect& rect, wxAuiPaneInfo& pane);
	void DrawBackground(wxDC& dc, wxWindow* window, int orientation, const wxRect& rect);
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiDockArt{
    wxAuiDockArt_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiDockArt;

void php_wxAuiDockArt_free(void *object TSRMLS_DC);
zend_object* php_wxAuiDockArt_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiDockArt_functions[] = {
	PHP_ME(php_wxAuiDockArt, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxAuiDockArt * php_wxAuiDockArt_fetch_object(zend_object *obj) {
      return (zo_wxAuiDockArt *)((char *)obj - XtOffsetOf(zo_wxAuiDockArt, zo));
}

#define Z_wxAuiDockArt_P(zv) php_wxAuiDockArt_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiManager_entry;
void php_wxAuiManager_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiManager_php: public wxAuiManager{
	public:
	
	wxAuiManager_php(wxWindow* managed_wnd=NULL, unsigned int flags=wxAUI_MGR_DEFAULT):wxAuiManager(managed_wnd, flags){}
		
	bool ProcessDockResult(wxAuiPaneInfo& target, const wxAuiPaneInfo& new_pos);
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiManager{
    wxAuiManager_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiManager;

void php_wxAuiManager_free(void *object TSRMLS_DC);
zend_object* php_wxAuiManager_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiManager_functions[] = {
	PHP_ME(php_wxAuiManager, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiManager, Update, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, UnInit, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, ShowHint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SetManagedWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SetDockSizeConstraint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SetArtProvider, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SavePerspective, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, SavePaneInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, LoadPerspective, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, LoadPaneInfo, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, InsertPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, HideHint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetManager, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetManagedWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetDockSizeConstraint, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, GetArtProvider, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, DetachPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManager, AddPane, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiManager * php_wxAuiManager_fetch_object(zend_object *obj) {
      return (zo_wxAuiManager *)((char *)obj - XtOffsetOf(zo_wxAuiManager, zo));
}

#define Z_wxAuiManager_P(zv) php_wxAuiManager_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiPaneInfo_entry;
void php_wxAuiPaneInfo_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiPaneInfo_php: public wxAuiPaneInfo{
	public:
	
	wxAuiPaneInfo_php(const wxAuiPaneInfo& c):wxAuiPaneInfo(c){}
	wxAuiPaneInfo_php():wxAuiPaneInfo(){}
		
	
    void InitProperties(){
		properties = new void*[2];

		properties[0] = &name;
		properties[1] = &caption;
		
	}

    void UninitProperties(){
		delete[] properties;
	}

    void** properties;
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiPaneInfo{
    wxAuiPaneInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiPaneInfo;

void php_wxAuiPaneInfo_free(void *object TSRMLS_DC);
zend_object* php_wxAuiPaneInfo_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiPaneInfo_functions[] = {
	PHP_ME(php_wxAuiPaneInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiPaneInfo, Window, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, TopDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Top, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, ToolbarPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Show, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, SetFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, SafeSet, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Row, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, RightDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Right, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Resizable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Position, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, PinButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, PaneBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Name, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Movable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, MinimizeButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, MinSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, MaximizeButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, MaxSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, LeftDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Left, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Layer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsTopDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsToolbar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsShown, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsRightDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsResizable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsMovable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsLeftDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsFloating, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsFloatable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsFixed, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsDocked, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, IsBottomDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Icon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Hide, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasPinButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasMinimizeButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasMaximizeButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasGripperTop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasGripper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasFlag, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasCloseButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasCaption, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, HasBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, GripperTop, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Gripper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, FloatingSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, FloatingPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Floatable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Float, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Fixed, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Dockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, DockFixed, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Dock, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Direction, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, DestroyOnClose, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, DefaultPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, CloseButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, CentrePane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Centre, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, CenterPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Center, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, CaptionVisible, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Caption, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, BottomDockable, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, Bottom, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, BestSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiPaneInfo, __get, wxphp_aui_get_args, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiPaneInfo * php_wxAuiPaneInfo_fetch_object(zend_object *obj) {
      return (zo_wxAuiPaneInfo *)((char *)obj - XtOffsetOf(zo_wxAuiPaneInfo, zo));
}

#define Z_wxAuiPaneInfo_P(zv) php_wxAuiPaneInfo_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxAuiManagerEvent_entry;
void php_wxAuiManagerEvent_destruction_handler(zend_resource * TSRMLS_DC);

class wxAuiManagerEvent_php: public wxAuiManagerEvent{
	public:
	
	wxAuiManagerEvent_php(wxEventType type=wxEVT_NULL):wxAuiManagerEvent(type){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAuiManagerEvent{
    wxAuiManagerEvent_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAuiManagerEvent;

void php_wxAuiManagerEvent_free(void *object TSRMLS_DC);
zend_object* php_wxAuiManagerEvent_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAuiManagerEvent_functions[] = {
	PHP_ME(php_wxAuiManagerEvent, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAuiManagerEvent, Veto, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, SetPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, SetManager, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, SetDC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, SetCanVeto, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, SetButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, GetVeto, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, GetPane, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, GetManager, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, GetDC, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, GetButton, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAuiManagerEvent, CanVeto, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAuiManagerEvent * php_wxAuiManagerEvent_fetch_object(zend_object *obj) {
      return (zo_wxAuiManagerEvent *)((char *)obj - XtOffsetOf(zo_wxAuiManagerEvent, zo));
}

#define Z_wxAuiManagerEvent_P(zv) php_wxAuiManagerEvent_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_AUI_H_GUARD
