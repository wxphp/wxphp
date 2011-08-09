
#include "php_wxwidgets.h"
#include "app.h"

// entries --->
#include "frame.h"

zend_class_entry *php_wxBoxSizer_entry;
int le_wxBoxSizer;
zend_class_entry *php_wxSizer_entry;
int le_wxSizer;
zend_class_entry *php_wxEvtHandler_entry;
int le_wxEvtHandler;
zend_class_entry *php_wxWindow_entry;
int le_wxWindow;
zend_class_entry *php_wxSplitterWindow_entry;
int le_wxSplitterWindow;
zend_class_entry *php_wxMenuItem_entry;
int le_wxMenuItem;
zend_class_entry *php_wxMenu_entry;
int le_wxMenu;
zend_class_entry *php_wxMenuBar_entry;
int le_wxMenuBar;
zend_class_entry *php_wxToolBar_entry;
int le_wxToolBar;
zend_class_entry *php_wxEvent_entry;
int le_wxEvent;
zend_class_entry *php_wxCommandEvent_entry;
int le_wxCommandEvent;
zend_class_entry *php_wxPanel_entry;
int le_wxPanel;
zend_class_entry *php_wxFrame_entry;
int le_wxFrame;
zend_class_entry *php_wxImage_entry;
int le_wxImage;
zend_class_entry *php_wxBitmap_entry;
int le_wxBitmap;
zend_class_entry *php_wxStaticBitmap_entry;
int le_wxStaticBitmap;
zend_class_entry *php_wxGauge_entry;
int le_wxGauge;
zend_class_entry *php_wxButton_entry;
int le_wxButton;
zend_class_entry *php_wxBitmapButton_entry;
int le_wxBitmapButton;
zend_class_entry *php_wxToggleButton_entry;
int le_wxToggleButton;
zend_class_entry *php_wxCalendarCtrl_entry;
int le_wxCalendarCtrl;
zend_class_entry *php_wxCheckBox_entry;
int le_wxCheckBox;
zend_class_entry *php_wxChoice_entry;
int le_wxChoice;
zend_class_entry *php_wxListBox_entry;
int le_wxListBox;
zend_class_entry *php_wxCheckListBox_entry;
int le_wxCheckListBox;
zend_class_entry *php_wxTreeEvent_entry;
int le_wxTreeEvent;
zend_class_entry *php_wxTreeItemId_entry;
int le_wxTreeItemId;
zend_class_entry *php_wxTreeCtrl_entry;
int le_wxTreeCtrl;
zend_class_entry *php_wxListCtrl_entry;
int le_wxListCtrl;
zend_class_entry *php_wxDataViewCtrl_entry;
int le_wxDataViewCtrl;
zend_class_entry *php_wxArrayString_entry;
int le_wxArrayString;
zend_class_entry *php_wxIcon_entry;
int le_wxIcon;
zend_class_entry *php_wxTaskBarIcon_entry;
int le_wxTaskBarIcon;
zend_class_entry *php_wxValidator_entry;
int le_wxValidator;
zend_class_entry *php_wxPoint_entry;
int le_wxPoint;
zend_class_entry *php_wxSize_entry;
int le_wxSize;
zend_class_entry *php_wxTextCtrl_entry;
int le_wxTextCtrl;
zend_class_entry *php_wxComboBox_entry;
int le_wxComboBox;

// <--- entries

zend_class_entry *php_wxApp_entry;
int le_wxApp;


PHP_FUNCTION(php_wxInitialize)
{
	wxInitAllImageHandlers();
	RETVAL_BOOL(wxInitialize());
}

PHP_FUNCTION(php_wxInitAllImageHandlers)
{
        wxInitAllImageHandlers();
	RETVAL_TRUE;
}

PHP_FUNCTION(php_wxExecute)
{
        char* _argStr0;
	int _argStr0_len;
        if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "s", &_argStr0 , &_argStr0_len ) == SUCCESS)
        {
		long ret0;
	        ret0 = wxExecute(wxString(_argStr0, wxConvUTF8));
		RETURN_LONG((long)ret0)
	}
}

PHP_FUNCTION(php_wxEntry)
{
	int argc = 1;
	char *argv[2] = { "embed4", NULL };
	RETVAL_LONG(wxEntry(argc,argv));
}


// cast --->
PHP_FUNCTION(php_wxDynamicCast){
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;

	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, "z!s!",  &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS){

		if(_argObj0)
		{
			if(_argObj0->type==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
				//if (!_ptrObj0 || rsrc_type != le_wxTextCtrl)
				//      valid = 0;
			}
		}
		
		if(valid){
			if(0){
			}
			else if(!strcmp(_argStr0, "wxBoxSizer")){
				object_init_ex(return_value, php_wxBoxSizer_entry);
				wxBoxSizer* ret = wxDynamicCast(_ptrObj0, wxBoxSizer_php);
				long id_to_find = zend_list_insert(ret, le_wxBoxSizer);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxSizer")){
				object_init_ex(return_value, php_wxSizer_entry);
				wxSizer* ret = wxDynamicCast(_ptrObj0, wxSizer_php);
				long id_to_find = zend_list_insert(ret, le_wxSizer);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxEvtHandler")){
				object_init_ex(return_value, php_wxEvtHandler_entry);
				wxEvtHandler* ret = wxDynamicCast(_ptrObj0, wxEvtHandler_php);
				long id_to_find = zend_list_insert(ret, le_wxEvtHandler);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxWindow")){
				object_init_ex(return_value, php_wxWindow_entry);
				wxWindow* ret = wxDynamicCast(_ptrObj0, wxWindow_php);
				long id_to_find = zend_list_insert(ret, le_wxWindow);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxSplitterWindow")){
				object_init_ex(return_value, php_wxSplitterWindow_entry);
				wxSplitterWindow* ret = wxDynamicCast(_ptrObj0, wxSplitterWindow_php);
				long id_to_find = zend_list_insert(ret, le_wxSplitterWindow);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxMenuItem")){
				object_init_ex(return_value, php_wxMenuItem_entry);
				wxMenuItem* ret = wxDynamicCast(_ptrObj0, wxMenuItem_php);
				long id_to_find = zend_list_insert(ret, le_wxMenuItem);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxMenu")){
				object_init_ex(return_value, php_wxMenu_entry);
				wxMenu* ret = wxDynamicCast(_ptrObj0, wxMenu_php);
				long id_to_find = zend_list_insert(ret, le_wxMenu);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxMenuBar")){
				object_init_ex(return_value, php_wxMenuBar_entry);
				wxMenuBar* ret = wxDynamicCast(_ptrObj0, wxMenuBar_php);
				long id_to_find = zend_list_insert(ret, le_wxMenuBar);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxToolBar")){
				object_init_ex(return_value, php_wxToolBar_entry);
				wxToolBar* ret = wxDynamicCast(_ptrObj0, wxToolBar_php);
				long id_to_find = zend_list_insert(ret, le_wxToolBar);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxEvent")){
				object_init_ex(return_value, php_wxEvent_entry);
				wxEvent* ret = wxDynamicCast(_ptrObj0, wxEvent_php);
				long id_to_find = zend_list_insert(ret, le_wxEvent);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxCommandEvent")){
				object_init_ex(return_value, php_wxCommandEvent_entry);
				wxCommandEvent* ret = wxDynamicCast(_ptrObj0, wxCommandEvent_php);
				long id_to_find = zend_list_insert(ret, le_wxCommandEvent);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxPanel")){
				object_init_ex(return_value, php_wxPanel_entry);
				wxPanel* ret = wxDynamicCast(_ptrObj0, wxPanel_php);
				long id_to_find = zend_list_insert(ret, le_wxPanel);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxFrame")){
				object_init_ex(return_value, php_wxFrame_entry);
				wxFrame* ret = wxDynamicCast(_ptrObj0, wxFrame_php);
				long id_to_find = zend_list_insert(ret, le_wxFrame);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxImage")){
				object_init_ex(return_value, php_wxImage_entry);
				wxImage* ret = wxDynamicCast(_ptrObj0, wxImage_php);
				long id_to_find = zend_list_insert(ret, le_wxImage);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxBitmap")){
				object_init_ex(return_value, php_wxBitmap_entry);
				wxBitmap* ret = wxDynamicCast(_ptrObj0, wxBitmap_php);
				long id_to_find = zend_list_insert(ret, le_wxBitmap);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxStaticBitmap")){
				object_init_ex(return_value, php_wxStaticBitmap_entry);
				wxStaticBitmap* ret = wxDynamicCast(_ptrObj0, wxStaticBitmap_php);
				long id_to_find = zend_list_insert(ret, le_wxStaticBitmap);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxGauge")){
				object_init_ex(return_value, php_wxGauge_entry);
				wxGauge* ret = wxDynamicCast(_ptrObj0, wxGauge_php);
				long id_to_find = zend_list_insert(ret, le_wxGauge);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxButton")){
				object_init_ex(return_value, php_wxButton_entry);
				wxButton* ret = wxDynamicCast(_ptrObj0, wxButton_php);
				long id_to_find = zend_list_insert(ret, le_wxButton);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxBitmapButton")){
				object_init_ex(return_value, php_wxBitmapButton_entry);
				wxBitmapButton* ret = wxDynamicCast(_ptrObj0, wxBitmapButton_php);
				long id_to_find = zend_list_insert(ret, le_wxBitmapButton);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxToggleButton")){
				object_init_ex(return_value, php_wxToggleButton_entry);
				wxToggleButton* ret = wxDynamicCast(_ptrObj0, wxToggleButton_php);
				long id_to_find = zend_list_insert(ret, le_wxToggleButton);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxCalendarCtrl")){
				object_init_ex(return_value, php_wxCalendarCtrl_entry);
				wxCalendarCtrl* ret = wxDynamicCast(_ptrObj0, wxCalendarCtrl_php);
				long id_to_find = zend_list_insert(ret, le_wxCalendarCtrl);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxCheckBox")){
				object_init_ex(return_value, php_wxCheckBox_entry);
				wxCheckBox* ret = wxDynamicCast(_ptrObj0, wxCheckBox_php);
				long id_to_find = zend_list_insert(ret, le_wxCheckBox);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxChoice")){
				object_init_ex(return_value, php_wxChoice_entry);
				wxChoice* ret = wxDynamicCast(_ptrObj0, wxChoice_php);
				long id_to_find = zend_list_insert(ret, le_wxChoice);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxListBox")){
				object_init_ex(return_value, php_wxListBox_entry);
				wxListBox* ret = wxDynamicCast(_ptrObj0, wxListBox_php);
				long id_to_find = zend_list_insert(ret, le_wxListBox);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxCheckListBox")){
				object_init_ex(return_value, php_wxCheckListBox_entry);
				wxCheckListBox* ret = wxDynamicCast(_ptrObj0, wxCheckListBox_php);
				long id_to_find = zend_list_insert(ret, le_wxCheckListBox);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxTreeEvent")){
				object_init_ex(return_value, php_wxTreeEvent_entry);
				wxTreeEvent* ret = wxDynamicCast(_ptrObj0, wxTreeEvent_php);
				long id_to_find = zend_list_insert(ret, le_wxTreeEvent);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxTreeCtrl")){
				object_init_ex(return_value, php_wxTreeCtrl_entry);
				wxTreeCtrl* ret = wxDynamicCast(_ptrObj0, wxTreeCtrl_php);
				long id_to_find = zend_list_insert(ret, le_wxTreeCtrl);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxListCtrl")){
				object_init_ex(return_value, php_wxListCtrl_entry);
				wxListCtrl* ret = wxDynamicCast(_ptrObj0, wxListCtrl_php);
				long id_to_find = zend_list_insert(ret, le_wxListCtrl);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxDataViewCtrl")){
				object_init_ex(return_value, php_wxDataViewCtrl_entry);
				wxDataViewCtrl* ret = wxDynamicCast(_ptrObj0, wxDataViewCtrl_php);
				long id_to_find = zend_list_insert(ret, le_wxDataViewCtrl);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxIcon")){
				object_init_ex(return_value, php_wxIcon_entry);
				wxIcon* ret = wxDynamicCast(_ptrObj0, wxIcon_php);
				long id_to_find = zend_list_insert(ret, le_wxIcon);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxTaskBarIcon")){
				object_init_ex(return_value, php_wxTaskBarIcon_entry);
				wxTaskBarIcon* ret = wxDynamicCast(_ptrObj0, wxTaskBarIcon_php);
				long id_to_find = zend_list_insert(ret, le_wxTaskBarIcon);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxValidator")){
				object_init_ex(return_value, php_wxValidator_entry);
				wxValidator* ret = wxDynamicCast(_ptrObj0, wxValidator_php);
				long id_to_find = zend_list_insert(ret, le_wxValidator);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxTextCtrl")){
				object_init_ex(return_value, php_wxTextCtrl_entry);
				wxTextCtrl* ret = wxDynamicCast(_ptrObj0, wxTextCtrl_php);
				long id_to_find = zend_list_insert(ret, le_wxTextCtrl);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
			else if(!strcmp(_argStr0, "wxComboBox")){
				object_init_ex(return_value, php_wxComboBox_entry);
				wxComboBox* ret = wxDynamicCast(_ptrObj0, wxComboBox_php);
				long id_to_find = zend_list_insert(ret, le_wxComboBox);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
		}
	}
}

// <--- cast

static function_entry php_wxWidgets_functions[] = {
	PHP_FALIAS(wxInitAllImageHandlers, php_wxInitAllImageHandlers, NULL)
	PHP_FALIAS(wxExecute, php_wxExecute, NULL)
	PHP_FALIAS(wxInitialize, php_wxInitialize, NULL)
	PHP_FALIAS(wxEntry, php_wxEntry, NULL)
	PHP_FALIAS(wxDynamicCast, php_wxDynamicCast, NULL)
	{ NULL, NULL, NULL }
};


PHP_MINIT_FUNCTION(php_wxWidgets)
{
    zend_class_entry ce; /* Temporary Variable */
    zend_class_entry cf; /* Temporary Variable */

	INIT_CLASS_ENTRY(ce, PHP_wxApp_NAME , php_wxApp_functions);
	php_wxApp_entry = zend_register_internal_class(&ce TSRMLS_CC);
	le_wxApp = zend_register_list_destructors_ex(NULL,NULL, le_wxApp_name ,module_number);	
	
	
// classes --->
INIT_CLASS_ENTRY(cf, PHP_wxBoxSizer_NAME , php_wxBoxSizer_functions);
php_wxBoxSizer_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxBoxSizer = zend_register_list_destructors_ex(php_wxBoxSizer_destruction_handler, NULL, le_wxBoxSizer_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxWindow_NAME , php_wxWindow_functions);
php_wxWindow_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxWindow = zend_register_list_destructors_ex(php_wxWindow_destruction_handler, NULL, le_wxWindow_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxSplitterWindow_NAME , php_wxSplitterWindow_functions);
php_wxSplitterWindow_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxSplitterWindow = zend_register_list_destructors_ex(php_wxSplitterWindow_destruction_handler, NULL, le_wxSplitterWindow_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxMenuItem_NAME , php_wxMenuItem_functions);
php_wxMenuItem_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxMenuItem = zend_register_list_destructors_ex(php_wxMenuItem_destruction_handler, NULL, le_wxMenuItem_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxMenu_NAME , php_wxMenu_functions);
php_wxMenu_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxMenu = zend_register_list_destructors_ex(php_wxMenu_destruction_handler, NULL, le_wxMenu_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxMenuBar_NAME , php_wxMenuBar_functions);
php_wxMenuBar_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxMenuBar = zend_register_list_destructors_ex(php_wxMenuBar_destruction_handler, NULL, le_wxMenuBar_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxToolBar_NAME , php_wxToolBar_functions);
php_wxToolBar_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxToolBar = zend_register_list_destructors_ex(php_wxToolBar_destruction_handler, NULL, le_wxToolBar_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxEvent_NAME , php_wxEvent_functions);
php_wxEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxEvent = zend_register_list_destructors_ex(php_wxEvent_destruction_handler, NULL, le_wxEvent_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxCommandEvent_NAME , php_wxCommandEvent_functions);
php_wxCommandEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxCommandEvent = zend_register_list_destructors_ex(php_wxCommandEvent_destruction_handler, NULL, le_wxCommandEvent_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxPanel_NAME , php_wxPanel_functions);
php_wxPanel_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxPanel = zend_register_list_destructors_ex(php_wxPanel_destruction_handler, NULL, le_wxPanel_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxFrame_NAME , php_wxFrame_functions);
php_wxFrame_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxFrame = zend_register_list_destructors_ex(php_wxFrame_destruction_handler, NULL, le_wxFrame_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxImage_NAME , php_wxImage_functions);
php_wxImage_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxImage = zend_register_list_destructors_ex(php_wxImage_destruction_handler, NULL, le_wxImage_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxBitmap_NAME , php_wxBitmap_functions);
php_wxBitmap_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxBitmap = zend_register_list_destructors_ex(php_wxBitmap_destruction_handler, NULL, le_wxBitmap_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxStaticBitmap_NAME , php_wxStaticBitmap_functions);
php_wxStaticBitmap_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxStaticBitmap = zend_register_list_destructors_ex(php_wxStaticBitmap_destruction_handler, NULL, le_wxStaticBitmap_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxGauge_NAME , php_wxGauge_functions);
php_wxGauge_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxGauge = zend_register_list_destructors_ex(php_wxGauge_destruction_handler, NULL, le_wxGauge_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxButton_NAME , php_wxButton_functions);
php_wxButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxButton = zend_register_list_destructors_ex(php_wxButton_destruction_handler, NULL, le_wxButton_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxBitmapButton_NAME , php_wxBitmapButton_functions);
php_wxBitmapButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxBitmapButton = zend_register_list_destructors_ex(php_wxBitmapButton_destruction_handler, NULL, le_wxBitmapButton_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxToggleButton_NAME , php_wxToggleButton_functions);
php_wxToggleButton_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxToggleButton = zend_register_list_destructors_ex(php_wxToggleButton_destruction_handler, NULL, le_wxToggleButton_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxCalendarCtrl_NAME , php_wxCalendarCtrl_functions);
php_wxCalendarCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxCalendarCtrl = zend_register_list_destructors_ex(php_wxCalendarCtrl_destruction_handler, NULL, le_wxCalendarCtrl_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxCheckBox_NAME , php_wxCheckBox_functions);
php_wxCheckBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxCheckBox = zend_register_list_destructors_ex(php_wxCheckBox_destruction_handler, NULL, le_wxCheckBox_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxChoice_NAME , php_wxChoice_functions);
php_wxChoice_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxChoice = zend_register_list_destructors_ex(php_wxChoice_destruction_handler, NULL, le_wxChoice_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxListBox_NAME , php_wxListBox_functions);
php_wxListBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxListBox = zend_register_list_destructors_ex(php_wxListBox_destruction_handler, NULL, le_wxListBox_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxCheckListBox_NAME , php_wxCheckListBox_functions);
php_wxCheckListBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxCheckListBox = zend_register_list_destructors_ex(php_wxCheckListBox_destruction_handler, NULL, le_wxCheckListBox_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxTreeEvent_NAME , php_wxTreeEvent_functions);
php_wxTreeEvent_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxTreeEvent = zend_register_list_destructors_ex(php_wxTreeEvent_destruction_handler, NULL, le_wxTreeEvent_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxTreeItemId_NAME , php_wxTreeItemId_functions);
php_wxTreeItemId_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxTreeItemId = zend_register_list_destructors_ex(php_wxTreeItemId_destruction_handler, NULL, le_wxTreeItemId_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxTreeCtrl_NAME , php_wxTreeCtrl_functions);
php_wxTreeCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxTreeCtrl = zend_register_list_destructors_ex(php_wxTreeCtrl_destruction_handler, NULL, le_wxTreeCtrl_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxListCtrl_NAME , php_wxListCtrl_functions);
php_wxListCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxListCtrl = zend_register_list_destructors_ex(php_wxListCtrl_destruction_handler, NULL, le_wxListCtrl_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxDataViewCtrl_NAME , php_wxDataViewCtrl_functions);
php_wxDataViewCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxDataViewCtrl = zend_register_list_destructors_ex(php_wxDataViewCtrl_destruction_handler, NULL, le_wxDataViewCtrl_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxArrayString_NAME , php_wxArrayString_functions);
php_wxArrayString_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxArrayString = zend_register_list_destructors_ex(php_wxArrayString_destruction_handler, NULL, le_wxArrayString_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxIcon_NAME , php_wxIcon_functions);
php_wxIcon_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxIcon = zend_register_list_destructors_ex(php_wxIcon_destruction_handler, NULL, le_wxIcon_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxTaskBarIcon_NAME , php_wxTaskBarIcon_functions);
php_wxTaskBarIcon_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxTaskBarIcon = zend_register_list_destructors_ex(php_wxTaskBarIcon_destruction_handler, NULL, le_wxTaskBarIcon_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxValidator_NAME , php_wxValidator_functions);
php_wxValidator_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxValidator = zend_register_list_destructors_ex(php_wxValidator_destruction_handler, NULL, le_wxValidator_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxPoint_NAME , php_wxPoint_functions);
php_wxPoint_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxPoint = zend_register_list_destructors_ex(php_wxPoint_destruction_handler, NULL, le_wxPoint_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxSize_NAME , php_wxSize_functions);
php_wxSize_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxSize = zend_register_list_destructors_ex(php_wxSize_destruction_handler, NULL, le_wxSize_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxTextCtrl_NAME , php_wxTextCtrl_functions);
php_wxTextCtrl_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxTextCtrl = zend_register_list_destructors_ex(php_wxTextCtrl_destruction_handler, NULL, le_wxTextCtrl_name, module_number);

INIT_CLASS_ENTRY(cf, PHP_wxComboBox_NAME , php_wxComboBox_functions);
php_wxComboBox_entry = zend_register_internal_class(&cf TSRMLS_CC);
le_wxComboBox = zend_register_list_destructors_ex(php_wxComboBox_destruction_handler, NULL, le_wxComboBox_name, module_number);


REGISTER_LONG_CONSTANT("wxSP_3D", wxSP_3D, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_3DSASH", wxSP_3DSASH, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_3DBORDER", wxSP_3DBORDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_BORDER", wxSP_BORDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_NOBORDER", wxSP_NOBORDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_NO_XP_THEME", wxSP_NO_XP_THEME, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_PERMIT_UNSPLIT", wxSP_PERMIT_UNSPLIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSP_LIVE_UPDATE", wxSP_LIVE_UPDATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHORIZONTAL", wxHORIZONTAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxVERTICAL", wxVERTICAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTOP", wxTOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBOTTOM", wxBOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLEFT", wxLEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxRIGHT", wxRIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALL", wxALL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEXPAND", wxEXPAND, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSHAPED", wxSHAPED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFIXED_MINSIZE", wxFIXED_MINSIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTER", wxALIGN_CENTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTRE", wxALIGN_CENTRE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_LEFT", wxALIGN_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_RIGHT", wxALIGN_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_TOP", wxALIGN_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_BOTTOM", wxALIGN_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTER_VERTICAL", wxALIGN_CENTER_VERTICAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTRE_VERTICAL", wxALIGN_CENTRE_VERTICAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTER_HORIZONTAL", wxALIGN_CENTER_HORIZONTAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALIGN_CENTRE_HORIZONTAL", wxALIGN_CENTRE_HORIZONTAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxGA_HORIZONTAL", wxGA_HORIZONTAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxGA_VERTICAL", wxGA_VERTICAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBU_LEFT", wxBU_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBU_TOP", wxBU_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBU_RIGHT", wxBU_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBU_BOTTOM", wxBU_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBU_EXACTFIT", wxBU_EXACTFIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNO_BORDER", wxNO_BORDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_BMP", wxBITMAP_TYPE_BMP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_BMP_RESOURCE", wxBITMAP_TYPE_BMP_RESOURCE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_PICT_RESOURCE", wxBITMAP_TYPE_PICT_RESOURCE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_GIF", wxBITMAP_TYPE_GIF, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XBM", wxBITMAP_TYPE_XBM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBITMAP_TYPE_XPM", wxBITMAP_TYPE_XPM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_SUNDAY_FIRST", wxCAL_SUNDAY_FIRST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_MONDAY_FIRST", wxCAL_MONDAY_FIRST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_SHOW_HOLIDAYS", wxCAL_SHOW_HOLIDAYS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_NO_YEAR_CHANGE", wxCAL_NO_YEAR_CHANGE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_NO_MONTH_CHANGE", wxCAL_NO_MONTH_CHANGE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_SHOW_SURROUNDING_WEEKS", wxCAL_SHOW_SURROUNDING_WEEKS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCAL_SEQUENTIAL_MONTH_SELECTION", wxCAL_SEQUENTIAL_MONTH_SELECTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCHK_2STATE", wxCHK_2STATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCHK_3STATE", wxCHK_3STATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCHK_ALLOW_3RD_STATE_FOR_USER", wxCHK_ALLOW_3RD_STATE_FOR_USER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_FLAT", wxTB_FLAT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_DOCKABLE", wxTB_DOCKABLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_HORIZONTAL", wxTB_HORIZONTAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_VERTICAL", wxTB_VERTICAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_TEXT", wxTB_TEXT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_NOICONS", wxTB_NOICONS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_NODIVIDER", wxTB_NODIVIDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_NOALIGN", wxTB_NOALIGN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_HORZ_LAYOUT", wxTB_HORZ_LAYOUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_HORZ_TEXT", wxTB_HORZ_TEXT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_NO_TOOLTIPS", wxTB_NO_TOOLTIPS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_BOTTOM", wxTB_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTB_RIGHT", wxTB_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_LIST", wxLC_LIST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_REPORT", wxLC_REPORT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_VIRTUAL", wxLC_VIRTUAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_ICON", wxLC_ICON, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_SMALL_ICON", wxLC_SMALL_ICON, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_ALIGN_TOP", wxLC_ALIGN_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_ALIGN_LEFT", wxLC_ALIGN_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_AUTOARRANGE", wxLC_AUTOARRANGE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_EDIT_LABELS", wxLC_EDIT_LABELS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_NO_HEADER", wxLC_NO_HEADER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_SINGLE_SEL", wxLC_SINGLE_SEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_SORT_ASCENDING", wxLC_SORT_ASCENDING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_SORT_DESCENDING", wxLC_SORT_DESCENDING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_HRULES", wxLC_HRULES, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLC_VRULES", wxLC_VRULES, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_DRAG", wxEVT_COMMAND_TREE_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_RDRAG", wxEVT_COMMAND_TREE_BEGIN_RDRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT", wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_END_LABEL_EDIT", wxEVT_COMMAND_TREE_END_LABEL_EDIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_DELETE_ITEM", wxEVT_COMMAND_TREE_DELETE_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_GET_INFO", wxEVT_COMMAND_TREE_GET_INFO, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SET_INFO", wxEVT_COMMAND_TREE_SET_INFO, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_EXPANDED", wxEVT_COMMAND_TREE_ITEM_EXPANDED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_EXPANDING", wxEVT_COMMAND_TREE_ITEM_EXPANDING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_COLLAPSED", wxEVT_COMMAND_TREE_ITEM_COLLAPSED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_COLLAPSING", wxEVT_COMMAND_TREE_ITEM_COLLAPSING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SEL_CHANGED", wxEVT_COMMAND_TREE_SEL_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_SEL_CHANGING", wxEVT_COMMAND_TREE_SEL_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_KEY_DOWN", wxEVT_COMMAND_TREE_KEY_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_ACTIVATED", wxEVT_COMMAND_TREE_ITEM_ACTIVATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK", wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK", wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_END_DRAG", wxEVT_COMMAND_TREE_END_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK", wxEVT_COMMAND_TREE_STATE_IMAGE_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP", wxEVT_COMMAND_TREE_ITEM_GETTOOLTIP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREE_ITEM_MENU", wxEVT_COMMAND_TREE_ITEM_MENU, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SIZE", wxEVT_SIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_MENU_SELECTED", wxEVT_COMMAND_MENU_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_COMBOBOX_SELECTED", wxEVT_COMMAND_COMBOBOX_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_UPDATED", wxEVT_COMMAND_TEXT_UPDATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_ENTER", wxEVT_COMMAND_TEXT_ENTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHECKLISTBOX_TOGGLED", wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHOICE_SELECTED", wxEVT_COMMAND_CHOICE_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHECKBOX_CLICKED", wxEVT_COMMAND_CHECKBOX_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_SEL_CHANGED", wxEVT_CALENDAR_SEL_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_DAY_CHANGED", wxEVT_CALENDAR_DAY_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_MONTH_CHANGED", wxEVT_CALENDAR_MONTH_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_YEAR_CHANGED", wxEVT_CALENDAR_YEAR_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_DOUBLECLICKED", wxEVT_CALENDAR_DOUBLECLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALENDAR_WEEKDAY_CLICKED", wxEVT_CALENDAR_WEEKDAY_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOGGLEBUTTON_CLICKED", wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_BUTTON_CLICKED", wxEVT_COMMAND_BUTTON_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOX_DOUBLECLICKED", wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_DRAG", wxEVT_COMMAND_LIST_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_RDRAG", wxEVT_COMMAND_LIST_BEGIN_RDRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT", wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_END_LABEL_EDIT", wxEVT_COMMAND_LIST_END_LABEL_EDIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_DELETE_ITEM", wxEVT_COMMAND_LIST_DELETE_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS", wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_GET_INFO", wxEVT_COMMAND_LIST_GET_INFO, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_SET_INFO", wxEVT_COMMAND_LIST_SET_INFO, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_SELECTED", wxEVT_COMMAND_LIST_ITEM_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_DESELECTED", wxEVT_COMMAND_LIST_ITEM_DESELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_KEY_DOWN", wxEVT_COMMAND_LIST_KEY_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_INSERT_ITEM", wxEVT_COMMAND_LIST_INSERT_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_CLICK", wxEVT_COMMAND_LIST_COL_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK", wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK", wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_ACTIVATED", wxEVT_COMMAND_LIST_ITEM_ACTIVATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_CACHE_HINT", wxEVT_COMMAND_LIST_CACHE_HINT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_RIGHT_CLICK", wxEVT_COMMAND_LIST_COL_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_BEGIN_DRAG", wxEVT_COMMAND_LIST_COL_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_DRAGGING", wxEVT_COMMAND_LIST_COL_DRAGGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_COL_END_DRAG", wxEVT_COMMAND_LIST_COL_END_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LIST_ITEM_FOCUSED", wxEVT_COMMAND_LIST_ITEM_FOCUSED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CLOSE_WINDOW", wxEVT_CLOSE_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_TOP", wxNB_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_LEFT", wxNB_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_RIGHT", wxNB_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_BOTTOM", wxNB_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_FIXEDWIDTH", wxNB_FIXEDWIDTH, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_MULTILINE", wxNB_MULTILINE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_NOPAGETHEME", wxNB_NOPAGETHEME, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNB_FLAT", wxNB_FLAT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxID_OK", wxID_OK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxID_CANCEL", wxID_CANCEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_MULTILINE", wxTE_MULTILINE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_PASSWORD", wxTE_PASSWORD, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_READONLY", wxTE_READONLY, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_PROCESS_ENTER", wxTE_PROCESS_ENTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_PROCESS_TAB", wxTE_PROCESS_TAB, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_RICH", wxTE_RICH, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_RICH2", wxTE_RICH2, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_AUTO_URL", wxTE_AUTO_URL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_NOHIDESEL", wxTE_NOHIDESEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHSCROLL", wxHSCROLL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_NO_VSCROLL", wxTE_NO_VSCROLL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_LEFT", wxTE_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_CENTRE", wxTE_CENTRE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_RIGHT", wxTE_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_DONTWRAP", wxTE_DONTWRAP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_CHARWRAP", wxTE_CHARWRAP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_WORDWRAP", wxTE_WORDWRAP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_BESTWRAP", wxTE_BESTWRAP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTE_CAPITALIZE", wxTE_CAPITALIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxOK", wxOK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCANCEL", wxCANCEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxYES_DEFAULT", wxYES_DEFAULT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNO_DEFAULT", wxNO_DEFAULT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxICON_EXCLAMATION", wxICON_EXCLAMATION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxICON_HAND", wxICON_HAND, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxICON_ERROR", wxICON_ERROR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxICON_QUESTION", wxICON_QUESTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxICON_INFORMATION", wxICON_INFORMATION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSTAY_ON_TOP", wxSTAY_ON_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_DEFAULT", wxBORDER_DEFAULT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_SIMPLE", wxBORDER_SIMPLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_SUNKEN", wxBORDER_SUNKEN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_RAISED", wxBORDER_RAISED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_STATIC", wxBORDER_STATIC, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_THEME", wxBORDER_THEME, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_NONE", wxBORDER_NONE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxBORDER_DOUBLE", wxBORDER_DOUBLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTRANSPARENT_WINDOW", wxTRANSPARENT_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTAB_TRAVERSAL", wxTAB_TRAVERSAL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxWANTS_CHARS", wxWANTS_CHARS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxNO_FULL_REPAINT_ON_RESIZE", wxNO_FULL_REPAINT_ON_RESIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxVSCROLL", wxVSCROLL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxALWAYS_SHOW_SB", wxALWAYS_SHOW_SB, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCLIP_CHILDREN", wxCLIP_CHILDREN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFULL_REPAINT_ON_RESIZE", wxFULL_REPAINT_ON_RESIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_SINGLE", wxLB_SINGLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_MULTIPLE", wxLB_MULTIPLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_EXTENDED", wxLB_EXTENDED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_HSCROLL", wxLB_HSCROLL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_ALWAYS_SB", wxLB_ALWAYS_SB, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_NEEDED_SB", wxLB_NEEDED_SB, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxLB_SORT", wxLB_SORT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_NOERROR", wxSOCKET_NOERROR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_INVOP", wxSOCKET_INVOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_IOERR", wxSOCKET_IOERR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_INVADDR", wxSOCKET_INVADDR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_INVSOCK", wxSOCKET_INVSOCK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_NOHOST", wxSOCKET_NOHOST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_INVPORT", wxSOCKET_INVPORT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_WOULDBLOCK", wxSOCKET_WOULDBLOCK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_TIMEDOUT", wxSOCKET_TIMEDOUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_MEMERR", wxSOCKET_MEMERR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_INPUT", wxSOCKET_INPUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_OUTPUT", wxSOCKET_OUTPUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_CONNECTION", wxSOCKET_CONNECTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxSOCKET_LOST", wxSOCKET_LOST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SOCKET", wxEVT_SOCKET, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_DEFAULT_STYLE", wxFD_DEFAULT_STYLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_OPEN", wxFD_OPEN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_SAVE", wxFD_SAVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_OVERWRITE_PROMPT", wxFD_OVERWRITE_PROMPT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_FILE_MUST_EXIST", wxFD_FILE_MUST_EXIST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_MULTIPLE", wxFD_MULTIPLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_CHANGE_DIR", wxFD_CHANGE_DIR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxFD_PREVIEW", wxFD_PREVIEW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCB_SIMPLE", wxCB_SIMPLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCB_DROPDOWN", wxCB_DROPDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCB_READONLY", wxCB_READONLY, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxCB_SORT", wxCB_SORT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_EDIT_LABELS", wxTR_EDIT_LABELS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_NO_BUTTONS", wxTR_NO_BUTTONS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_HAS_BUTTONS", wxTR_HAS_BUTTONS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_NO_LINES", wxTR_NO_LINES, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_FULL_ROW_HIGHLIGHT", wxTR_FULL_ROW_HIGHLIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_LINES_AT_ROOT", wxTR_LINES_AT_ROOT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_HIDE_ROOT", wxTR_HIDE_ROOT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_ROW_LINES", wxTR_ROW_LINES, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_HAS_VARIABLE_ROW_HEIGHT", wxTR_HAS_VARIABLE_ROW_HEIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_SINGLE", wxTR_SINGLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_MULTIPLE", wxTR_MULTIPLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxTR_DEFAULT_STYLE", wxTR_DEFAULT_STYLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHL_CONTEXTMENU", wxHL_CONTEXTMENU, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHL_ALIGN_LEFT", wxHL_ALIGN_LEFT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHL_ALIGN_RIGHT", wxHL_ALIGN_RIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHL_ALIGN_CENTRE", wxHL_ALIGN_CENTRE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxHL_DEFAULT_STYLE", wxHL_DEFAULT_STYLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxDEFAULT_DIALOG_STYLE", wxDEFAULT_DIALOG_STYLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_ACTIVATE", wxEVT_ACTIVATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_ACTIVATE_APP", wxEVT_ACTIVATE_APP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_FIND_MANAGER", wxEVT_AUI_FIND_MANAGER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_PANE_BUTTON", wxEVT_AUI_PANE_BUTTON, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_PANE_CLOSE", wxEVT_AUI_PANE_CLOSE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_PANE_MAXIMIZE", wxEVT_AUI_PANE_MAXIMIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_PANE_RESTORE", wxEVT_AUI_PANE_RESTORE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_AUI_RENDER", wxEVT_AUI_RENDER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CALCULATE_LAYOUT", wxEVT_CALCULATE_LAYOUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CHAR", wxEVT_CHAR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CHAR_HOOK", wxEVT_CHAR_HOOK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CHILD_FOCUS", wxEVT_CHILD_FOCUS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND", wxEVT_COMMAND_AUINOTEBOOK_ALLOW_DND, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_BEGIN_DRAG", wxEVT_COMMAND_AUINOTEBOOK_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK", wxEVT_COMMAND_AUINOTEBOOK_BG_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_BUTTON", wxEVT_COMMAND_AUINOTEBOOK_BUTTON, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_DRAG_DONE", wxEVT_COMMAND_AUINOTEBOOK_DRAG_DONE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_DRAG_MOTION", wxEVT_COMMAND_AUINOTEBOOK_DRAG_MOTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_END_DRAG", wxEVT_COMMAND_AUINOTEBOOK_END_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED", wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGING", wxEVT_COMMAND_AUINOTEBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE", wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED", wxEVT_COMMAND_AUINOTEBOOK_PAGE_CLOSED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_DOWN", wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP", wxEVT_COMMAND_AUINOTEBOOK_TAB_MIDDLE_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_DOWN", wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP", wxEVT_COMMAND_AUINOTEBOOK_TAB_RIGHT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUITOOLBAR_BEGIN_DRAG", wxEVT_COMMAND_AUITOOLBAR_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUITOOLBAR_MIDDLE_CLICK", wxEVT_COMMAND_AUITOOLBAR_MIDDLE_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUITOOLBAR_OVERFLOW_CLICK", wxEVT_COMMAND_AUITOOLBAR_OVERFLOW_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUITOOLBAR_RIGHT_CLICK", wxEVT_COMMAND_AUITOOLBAR_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN", wxEVT_COMMAND_AUITOOLBAR_TOOL_DROPDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGED", wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGING", wxEVT_COMMAND_BOOKCTRL_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED", wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING", wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_COLLPANE_CHANGED", wxEVT_COMMAND_COLLPANE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_COLOURPICKER_CHANGED", wxEVT_COMMAND_COLOURPICKER_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_DIRPICKER_CHANGED", wxEVT_COMMAND_DIRPICKER_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_ENTER", wxEVT_COMMAND_ENTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FILEPICKER_CHANGED", wxEVT_COMMAND_FILEPICKER_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FIND", wxEVT_COMMAND_FIND, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FIND_CLOSE", wxEVT_COMMAND_FIND_CLOSE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FIND_NEXT", wxEVT_COMMAND_FIND_NEXT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FIND_REPLACE", wxEVT_COMMAND_FIND_REPLACE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FIND_REPLACE_ALL", wxEVT_COMMAND_FIND_REPLACE_ALL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_FONTPICKER_CHANGED", wxEVT_COMMAND_FONTPICKER_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_CELL_CLICKED", wxEVT_COMMAND_HTML_CELL_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_CELL_HOVER", wxEVT_COMMAND_HTML_CELL_HOVER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HTML_LINK_CLICKED", wxEVT_COMMAND_HTML_LINK_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_HYPERLINK", wxEVT_COMMAND_HYPERLINK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_KILL_FOCUS", wxEVT_COMMAND_KILL_FOCUS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LEFT_CLICK", wxEVT_COMMAND_LEFT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LEFT_DCLICK", wxEVT_COMMAND_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOOK_PAGE_CHANGED", wxEVT_COMMAND_LISTBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOOK_PAGE_CHANGING", wxEVT_COMMAND_LISTBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_LISTBOX_SELECTED", wxEVT_COMMAND_LISTBOX_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED", wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING", wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RADIOBOX_SELECTED", wxEVT_COMMAND_RADIOBOX_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RADIOBUTTON_SELECTED", wxEVT_COMMAND_RADIOBUTTON_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_BUFFER_RESET", wxEVT_COMMAND_RICHTEXT_BUFFER_RESET, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_CHARACTER", wxEVT_COMMAND_RICHTEXT_CHARACTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_CONTENT_DELETED", wxEVT_COMMAND_RICHTEXT_CONTENT_DELETED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_CONTENT_INSERTED", wxEVT_COMMAND_RICHTEXT_CONTENT_INSERTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_DELETE", wxEVT_COMMAND_RICHTEXT_DELETE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_LEFT_CLICK", wxEVT_COMMAND_RICHTEXT_LEFT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_LEFT_DCLICK", wxEVT_COMMAND_RICHTEXT_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_MIDDLE_CLICK", wxEVT_COMMAND_RICHTEXT_MIDDLE_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_RETURN", wxEVT_COMMAND_RICHTEXT_RETURN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_RIGHT_CLICK", wxEVT_COMMAND_RICHTEXT_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_SELECTION_CHANGED", wxEVT_COMMAND_RICHTEXT_SELECTION_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGED", wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGING", wxEVT_COMMAND_RICHTEXT_STYLESHEET_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACED", wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACING", wxEVT_COMMAND_RICHTEXT_STYLESHEET_REPLACING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RICHTEXT_STYLE_CHANGED", wxEVT_COMMAND_RICHTEXT_STYLE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RIGHT_CLICK", wxEVT_COMMAND_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_RIGHT_DCLICK", wxEVT_COMMAND_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN", wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN", wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SET_FOCUS", wxEVT_COMMAND_SET_FOCUS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SLIDER_UPDATED", wxEVT_COMMAND_SLIDER_UPDATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPINCTRL_UPDATED", wxEVT_COMMAND_SPINCTRL_UPDATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_DOUBLECLICKED", wxEVT_COMMAND_SPLITTER_DOUBLECLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED", wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING", wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_SPLITTER_UNSPLIT", wxEVT_COMMAND_SPLITTER_UNSPLIT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_COPY", wxEVT_COMMAND_TEXT_COPY, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_CUT", wxEVT_COMMAND_TEXT_CUT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_MAXLEN", wxEVT_COMMAND_TEXT_MAXLEN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_PASTE", wxEVT_COMMAND_TEXT_PASTE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TEXT_URL", wxEVT_COMMAND_TEXT_URL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGED", wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGING", wxEVT_COMMAND_TOOLBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOL_CLICKED", wxEVT_COMMAND_TOOL_CLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOL_ENTER", wxEVT_COMMAND_TOOL_ENTER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TOOL_RCLICKED", wxEVT_COMMAND_TOOL_RCLICKED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREEBOOK_NODE_COLLAPSED", wxEVT_COMMAND_TREEBOOK_NODE_COLLAPSED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREEBOOK_NODE_EXPANDED", wxEVT_COMMAND_TREEBOOK_NODE_EXPANDED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREEBOOK_PAGE_CHANGED", wxEVT_COMMAND_TREEBOOK_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_TREEBOOK_PAGE_CHANGING", wxEVT_COMMAND_TREEBOOK_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMMAND_VLBOX_SELECTED", wxEVT_COMMAND_VLBOX_SELECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_COMPARE_ITEM", wxEVT_COMPARE_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CONTEXT_MENU", wxEVT_CONTEXT_MENU, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_CREATE", wxEVT_CREATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DATE_CHANGED", wxEVT_DATE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DESTROY", wxEVT_DESTROY, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DETAILED_HELP", wxEVT_DETAILED_HELP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DIALUP_CONNECTED", wxEVT_DIALUP_CONNECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DIALUP_DISCONNECTED", wxEVT_DIALUP_DISCONNECTED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DISPLAY_CHANGED", wxEVT_DISPLAY_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DRAW_ITEM", wxEVT_DRAW_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_DROP_FILES", wxEVT_DROP_FILES, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_END_PROCESS", wxEVT_END_PROCESS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_END_SESSION", wxEVT_END_SESSION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_ENTER_WINDOW", wxEVT_ENTER_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_ERASE_BACKGROUND", wxEVT_ERASE_BACKGROUND, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_BEGIN_DRAG", wxEVT_GRID_CELL_BEGIN_DRAG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_CHANGE", wxEVT_GRID_CELL_CHANGE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_LEFT_CLICK", wxEVT_GRID_CELL_LEFT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_LEFT_DCLICK", wxEVT_GRID_CELL_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_RIGHT_CLICK", wxEVT_GRID_CELL_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_CELL_RIGHT_DCLICK", wxEVT_GRID_CELL_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_COL_MOVE", wxEVT_GRID_COL_MOVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_COL_SIZE", wxEVT_GRID_COL_SIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_EDITOR_CREATED", wxEVT_GRID_EDITOR_CREATED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_EDITOR_HIDDEN", wxEVT_GRID_EDITOR_HIDDEN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_EDITOR_SHOWN", wxEVT_GRID_EDITOR_SHOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_LABEL_LEFT_CLICK", wxEVT_GRID_LABEL_LEFT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_LABEL_LEFT_DCLICK", wxEVT_GRID_LABEL_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_LABEL_RIGHT_CLICK", wxEVT_GRID_LABEL_RIGHT_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_LABEL_RIGHT_DCLICK", wxEVT_GRID_LABEL_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_RANGE_SELECT", wxEVT_GRID_RANGE_SELECT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_ROW_SIZE", wxEVT_GRID_ROW_SIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_GRID_SELECT_CELL", wxEVT_GRID_SELECT_CELL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_HELP", wxEVT_HELP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_HIBERNATE", wxEVT_HIBERNATE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_ICONIZE", wxEVT_ICONIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_IDLE", wxEVT_IDLE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_INIT_DIALOG", wxEVT_INIT_DIALOG, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_JOY_BUTTON_DOWN", wxEVT_JOY_BUTTON_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_JOY_BUTTON_UP", wxEVT_JOY_BUTTON_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_JOY_MOVE", wxEVT_JOY_MOVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_JOY_ZMOVE", wxEVT_JOY_ZMOVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_KEY_DOWN", wxEVT_KEY_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_KEY_UP", wxEVT_KEY_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_KILL_FOCUS", wxEVT_KILL_FOCUS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_LEAVE_WINDOW", wxEVT_LEAVE_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_LEFT_DCLICK", wxEVT_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_LEFT_DOWN", wxEVT_LEFT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_LEFT_UP", wxEVT_LEFT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MAXIMIZE", wxEVT_MAXIMIZE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MEASURE_ITEM", wxEVT_MEASURE_ITEM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MENU_CLOSE", wxEVT_MENU_CLOSE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MENU_HIGHLIGHT", wxEVT_MENU_HIGHLIGHT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MENU_OPEN", wxEVT_MENU_OPEN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_DCLICK", wxEVT_MIDDLE_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_DOWN", wxEVT_MIDDLE_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MIDDLE_UP", wxEVT_MIDDLE_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOTION", wxEVT_MOTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOUSEWHEEL", wxEVT_MOUSEWHEEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOUSE_CAPTURE_CHANGED", wxEVT_MOUSE_CAPTURE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOUSE_CAPTURE_LOST", wxEVT_MOUSE_CAPTURE_LOST, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOVE", wxEVT_MOVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_MOVING", wxEVT_MOVING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NAVIGATION_KEY", wxEVT_NAVIGATION_KEY, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_ENTER_WINDOW", wxEVT_NC_ENTER_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_LEAVE_WINDOW", wxEVT_NC_LEAVE_WINDOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_DCLICK", wxEVT_NC_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_DOWN", wxEVT_NC_LEFT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_LEFT_UP", wxEVT_NC_LEFT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_DCLICK", wxEVT_NC_MIDDLE_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_DOWN", wxEVT_NC_MIDDLE_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_MIDDLE_UP", wxEVT_NC_MIDDLE_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_MOTION", wxEVT_NC_MOTION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_PAINT", wxEVT_NC_PAINT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_DCLICK", wxEVT_NC_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_DOWN", wxEVT_NC_RIGHT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_NC_RIGHT_UP", wxEVT_NC_RIGHT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_PAINT", wxEVT_PAINT, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_PAINT_ICON", wxEVT_PAINT_ICON, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_PALETTE_CHANGED", wxEVT_PALETTE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_QUERY_END_SESSION", wxEVT_QUERY_END_SESSION, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_QUERY_LAYOUT_INFO", wxEVT_QUERY_LAYOUT_INFO, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_QUERY_NEW_PALETTE", wxEVT_QUERY_NEW_PALETTE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_RIGHT_DCLICK", wxEVT_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_RIGHT_DOWN", wxEVT_RIGHT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_RIGHT_UP", wxEVT_RIGHT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SASH_DRAGGED", wxEVT_SASH_DRAGGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_BOTTOM", wxEVT_SCROLLWIN_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_LINEDOWN", wxEVT_SCROLLWIN_LINEDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_LINEUP", wxEVT_SCROLLWIN_LINEUP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_PAGEDOWN", wxEVT_SCROLLWIN_PAGEDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_PAGEUP", wxEVT_SCROLLWIN_PAGEUP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_THUMBRELEASE", wxEVT_SCROLLWIN_THUMBRELEASE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_THUMBTRACK", wxEVT_SCROLLWIN_THUMBTRACK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLLWIN_TOP", wxEVT_SCROLLWIN_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_BOTTOM", wxEVT_SCROLL_BOTTOM, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_CHANGED", wxEVT_SCROLL_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_LINEDOWN", wxEVT_SCROLL_LINEDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_LINEUP", wxEVT_SCROLL_LINEUP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_PAGEDOWN", wxEVT_SCROLL_PAGEDOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_PAGEUP", wxEVT_SCROLL_PAGEUP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_THUMBRELEASE", wxEVT_SCROLL_THUMBRELEASE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_THUMBTRACK", wxEVT_SCROLL_THUMBTRACK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SCROLL_TOP", wxEVT_SCROLL_TOP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SETTING_CHANGED", wxEVT_SETTING_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SET_CURSOR", wxEVT_SET_CURSOR, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SET_FOCUS", wxEVT_SET_FOCUS, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SHOW", wxEVT_SHOW, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SIZING", wxEVT_SIZING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_SYS_COLOUR_CHANGED", wxEVT_SYS_COLOUR_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_CLICK", wxEVT_TASKBAR_CLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_DCLICK", wxEVT_TASKBAR_LEFT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_DOWN", wxEVT_TASKBAR_LEFT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_LEFT_UP", wxEVT_TASKBAR_LEFT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_MOVE", wxEVT_TASKBAR_MOVE, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_DCLICK", wxEVT_TASKBAR_RIGHT_DCLICK, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_DOWN", wxEVT_TASKBAR_RIGHT_DOWN, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TASKBAR_RIGHT_UP", wxEVT_TASKBAR_RIGHT_UP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_TIMER", wxEVT_TIMER, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_UPDATE_UI", wxEVT_UPDATE_UI, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_CANCEL", wxEVT_WIZARD_CANCEL, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_FINISHED", wxEVT_WIZARD_FINISHED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_HELP", wxEVT_WIZARD_HELP, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_PAGE_CHANGED", wxEVT_WIZARD_PAGE_CHANGED, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_PAGE_CHANGING", wxEVT_WIZARD_PAGE_CHANGING, CONST_CS | CONST_PERSISTENT);
REGISTER_LONG_CONSTANT("wxEVT_WIZARD_PAGE_SHOWN", wxEVT_WIZARD_PAGE_SHOWN, CONST_CS | CONST_PERSISTENT);


// <--- classes	

		
	REGISTER_LONG_CONSTANT("wxDefaultPosition", 	(long)&wxDefaultPosition	 	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDefaultSize", 		(long)&wxDefaultSize	 		, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxDefaultValidator", 	(long)&wxDefaultValidator	 	, CONST_CS |CONST_PERSISTENT);
	REGISTER_LONG_CONSTANT("wxNullBitmap", 		(long)&wxNullBitmap	 	, CONST_CS |CONST_PERSISTENT);
	//REGISTER_LONG_CONSTANT("wxNORMAL_FONT", 		(long)wxNORMAL_FONT	 	, CONST_CS |CONST_PERSISTENT);
	REGISTER_STRING_CONSTANT("wxEmptyString", 		""	 	, CONST_CS |CONST_PERSISTENT);
	
    return SUCCESS;
}




zend_module_entry wxWidgets_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
     STANDARD_MODULE_HEADER,
#endif
    PHP_WXWIDGETS_EXTNAME,
    php_wxWidgets_functions, /* Functions */
    PHP_MINIT(php_wxWidgets), /* MINIT */
    NULL, /* MSHUTDOWN */
    NULL, /* RINIT */
    NULL, /* RSHUTDOWN */
    NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    PHP_WXWIDGETS_VERSION,
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_WXWIDGETS
extern "C" {
ZEND_GET_MODULE(wxWidgets)
}
#endif
