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

#ifndef WXPHP_CMNDLG_H_GUARD
#define WXPHP_CMNDLG_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_cmndlg_get_args, 0, 0, 1)
	ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxAboutDialogInfo_entry;
void php_wxAboutDialogInfo_destruction_handler(zend_resource * TSRMLS_DC);

class wxAboutDialogInfo_php: public wxAboutDialogInfo{
	public:
	
	wxAboutDialogInfo_php():wxAboutDialogInfo(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxAboutDialogInfo{
    wxAboutDialogInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxAboutDialogInfo;

void php_wxAboutDialogInfo_free(void *object TSRMLS_DC);
zend_object* php_wxAboutDialogInfo_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxAboutDialogInfo_functions[] = {
	PHP_ME(php_wxAboutDialogInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxAboutDialogInfo, SetWebSite, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetVersion, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, AddDeveloper, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, AddDocWriter, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, AddTranslator, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, GetCopyright, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, GetDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, HasCopyright, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, HasDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetArtists, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetCopyright, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetDescription, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetDevelopers, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetDocWriters, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetLicence, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetLicense, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, SetTranslators, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, AddArtist, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxAboutDialogInfo, GetName, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxAboutDialogInfo * php_wxAboutDialogInfo_fetch_object(zend_object *obj) {
      return (zo_wxAboutDialogInfo *)((char *)obj - XtOffsetOf(zo_wxAboutDialogInfo, zo));
}

#define Z_wxAboutDialogInfo_P(zv) php_wxAboutDialogInfo_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxBusyInfo_entry;
void php_wxBusyInfo_destruction_handler(zend_resource * TSRMLS_DC);

class wxBusyInfo_php: public wxBusyInfo{
	public:
	
	wxBusyInfo_php(const wxString& msg, wxWindow* parent=NULL):wxBusyInfo(msg, parent){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxBusyInfo{
    wxBusyInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxBusyInfo;

void php_wxBusyInfo_free(void *object TSRMLS_DC);
zend_object* php_wxBusyInfo_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxBusyInfo_functions[] = {
	PHP_ME(php_wxBusyInfo, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxBusyInfo * php_wxBusyInfo_fetch_object(zend_object *obj) {
      return (zo_wxBusyInfo *)((char *)obj - XtOffsetOf(zo_wxBusyInfo, zo));
}

#define Z_wxBusyInfo_P(zv) php_wxBusyInfo_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxSingleChoiceDialog_entry;
void php_wxSingleChoiceDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxSingleChoiceDialog_php: public wxSingleChoiceDialog{
	public:
	
	wxSingleChoiceDialog_php(wxWindow* parent, const wxString& message, const wxString& caption, int n, const wxString* choices, void** clientData=NULL, long style=wxCHOICEDLG_STYLE, const wxPoint& pos=wxDefaultPosition):wxSingleChoiceDialog(parent, message, caption, n, choices, clientData, style, pos){}
	wxSingleChoiceDialog_php(wxWindow* parent, const wxString& message, const wxString& caption, const wxArrayString& choices, void** clientData=NULL, long style=wxCHOICEDLG_STYLE, const wxPoint& pos=wxDefaultPosition):wxSingleChoiceDialog(parent, message, caption, choices, clientData, style, pos){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxSingleChoiceDialog{
    wxSingleChoiceDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxSingleChoiceDialog;

void php_wxSingleChoiceDialog_free(void *object TSRMLS_DC);
zend_object* php_wxSingleChoiceDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSingleChoiceDialog_functions[] = {
	PHP_ME(php_wxSingleChoiceDialog, GetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleChoiceDialog, GetStringSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleChoiceDialog, SetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleChoiceDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSingleChoiceDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxSingleChoiceDialog, GetSelectionData, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxSingleChoiceDialog * php_wxSingleChoiceDialog_fetch_object(zend_object *obj) {
      return (zo_wxSingleChoiceDialog *)((char *)obj - XtOffsetOf(zo_wxSingleChoiceDialog, zo));
}

#define Z_wxSingleChoiceDialog_P(zv) php_wxSingleChoiceDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPrintDialogData_entry;
void php_wxPrintDialogData_destruction_handler(zend_resource * TSRMLS_DC);

class wxPrintDialogData_php: public wxPrintDialogData{
	public:
	
	wxPrintDialogData_php():wxPrintDialogData(){}
	wxPrintDialogData_php(const wxPrintData& printData):wxPrintDialogData(printData){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPrintDialogData{
    wxPrintDialogData_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPrintDialogData;

void php_wxPrintDialogData_free(void *object TSRMLS_DC);
zend_object* php_wxPrintDialogData_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPrintDialogData_functions[] = {
	PHP_ME(php_wxPrintDialogData, EnableHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, EnablePageNumbers, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, EnablePrintToFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, EnableSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetAllPages, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetCollate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetFromPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetMaxPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetMinPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetNoCopies, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetPrintData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetPrintToFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, GetToPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, IsOk, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetCollate, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetFromPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetMaxPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetMinPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetNoCopies, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetPrintData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetPrintToFile, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, SetToPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxPrintDialogData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxPrintDialogData * php_wxPrintDialogData_fetch_object(zend_object *obj) {
      return (zo_wxPrintDialogData *)((char *)obj - XtOffsetOf(zo_wxPrintDialogData, zo));
}

#define Z_wxPrintDialogData_P(zv) php_wxPrintDialogData_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxColourDialog_entry;
void php_wxColourDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxColourDialog_php: public wxColourDialog{
	public:
	
	wxColourDialog_php(wxWindow* parent, wxColourData* data=NULL):wxColourDialog(parent, data){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxColourDialog{
    wxColourDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxColourDialog;

void php_wxColourDialog_free(void *object TSRMLS_DC);
zend_object* php_wxColourDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxColourDialog_functions[] = {
	PHP_ME(php_wxColourDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxColourDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourDialog, GetColourData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourDialog, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxColourDialog * php_wxColourDialog_fetch_object(zend_object *obj) {
      return (zo_wxColourDialog *)((char *)obj - XtOffsetOf(zo_wxColourDialog, zo));
}

#define Z_wxColourDialog_P(zv) php_wxColourDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxColourData_entry;
void php_wxColourData_destruction_handler(zend_resource * TSRMLS_DC);

class wxColourData_php: public wxColourData{
	public:
	
	wxColourData_php():wxColourData(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxColourData{
    wxColourData_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxColourData;

void php_wxColourData_free(void *object TSRMLS_DC);
zend_object* php_wxColourData_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxColourData_functions[] = {
	PHP_ME(php_wxColourData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxColourData, ToString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, SetCustomColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, SetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, SetChooseFull, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, GetCustomColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, GetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, GetChooseFull, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxColourData, FromString, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxColourData * php_wxColourData_fetch_object(zend_object *obj) {
      return (zo_wxColourData *)((char *)obj - XtOffsetOf(zo_wxColourData, zo));
}

#define Z_wxColourData_P(zv) php_wxColourData_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxDialog_entry;
void php_wxDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxDialog_php: public wxDialog{
	public:
	
	wxDialog_php(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE, const wxString& name=wxDialogNameStr):wxDialog(parent, id, title, pos, size, style, name){}
	wxDialog_php():wxDialog(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDialog{
    wxDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDialog;

void php_wxDialog_free(void *object TSRMLS_DC);
zend_object* php_wxDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDialog_functions[] = {
	PHP_ME(php_wxDialog, AddMainButtonId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, Centre, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, CreateButtonSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, CreateSeparatedButtonSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, CreateSeparatedSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, CreateStdDialogButtonSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, EndModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetAffirmativeId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetContentWindow, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetEscapeId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetReturnCode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, Iconize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, IsIconized, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, IsModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetAffirmativeId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxDialog, ShowWindowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, Show, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetReturnCode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetLayoutAdaptationMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetLayoutAdaptationLevel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetIcons, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetEscapeId, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, SetLayoutAdaptationDone, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetLayoutAdaptationDone, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, GetLayoutAdaptationLevel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, EnableLayoutAdaptation, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, DoLayoutAdaptation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, CanDoLayoutAdaptation, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDialog, IsLayoutAdaptationEnabled, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxDialog * php_wxDialog_fetch_object(zend_object *obj) {
      return (zo_wxDialog *)((char *)obj - XtOffsetOf(zo_wxDialog, zo));
}

#define Z_wxDialog_P(zv) php_wxDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxDirDialog_entry;
void php_wxDirDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxDirDialog_php: public wxDirDialog{
	public:
	
	wxDirDialog_php(wxWindow* parent, const wxString& message=wxDirSelectorPromptStr, const wxString& defaultPath=wxEmptyString, long style=wxDD_DEFAULT_STYLE, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, const wxString& name=wxDirDialogNameStr):wxDirDialog(parent, message, defaultPath, style, pos, size, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxDirDialog{
    wxDirDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxDirDialog;

void php_wxDirDialog_free(void *object TSRMLS_DC);
zend_object* php_wxDirDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxDirDialog_functions[] = {
	PHP_ME(php_wxDirDialog, GetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDirDialog, GetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDirDialog, SetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDirDialog, SetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDirDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxDirDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxDirDialog * php_wxDirDialog_fetch_object(zend_object *obj) {
      return (zo_wxDirDialog *)((char *)obj - XtOffsetOf(zo_wxDirDialog, zo));
}

#define Z_wxDirDialog_P(zv) php_wxDirDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFindReplaceData_entry;
void php_wxFindReplaceData_destruction_handler(zend_resource * TSRMLS_DC);

class wxFindReplaceData_php: public wxFindReplaceData{
	public:
	
	wxFindReplaceData_php(wxUint32 flags=0):wxFindReplaceData(flags){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFindReplaceData{
    wxFindReplaceData_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFindReplaceData;

void php_wxFindReplaceData_free(void *object TSRMLS_DC);
zend_object* php_wxFindReplaceData_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFindReplaceData_functions[] = {
	PHP_ME(php_wxFindReplaceData, GetFindString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, GetReplaceString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, GetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, SetFindString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, SetFlags, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, SetReplaceString, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxFindReplaceData * php_wxFindReplaceData_fetch_object(zend_object *obj) {
      return (zo_wxFindReplaceData *)((char *)obj - XtOffsetOf(zo_wxFindReplaceData, zo));
}

#define Z_wxFindReplaceData_P(zv) php_wxFindReplaceData_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFindReplaceDialog_entry;
void php_wxFindReplaceDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxFindReplaceDialog_php: public wxFindReplaceDialog{
	public:
	
	wxFindReplaceDialog_php(wxWindow* parent, wxFindReplaceData* data, const wxString& title, int style=0):wxFindReplaceDialog(parent, data, title, style){}
	wxFindReplaceDialog_php():wxFindReplaceDialog(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFindReplaceDialog{
    wxFindReplaceDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFindReplaceDialog;

void php_wxFindReplaceDialog_free(void *object TSRMLS_DC);
zend_object* php_wxFindReplaceDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFindReplaceDialog_functions[] = {
	PHP_ME(php_wxFindReplaceDialog, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceDialog, GetData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFindReplaceDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxFindReplaceDialog * php_wxFindReplaceDialog_fetch_object(zend_object *obj) {
      return (zo_wxFindReplaceDialog *)((char *)obj - XtOffsetOf(zo_wxFindReplaceDialog, zo));
}

#define Z_wxFindReplaceDialog_P(zv) php_wxFindReplaceDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileDialog_entry;
void php_wxFileDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxFileDialog_php: public wxFileDialog{
	public:
	
	wxFileDialog_php(wxWindow* parent, const wxString& message=wxFileSelectorPromptStr, const wxString& defaultDir=wxEmptyString, const wxString& defaultFile=wxEmptyString, const wxString& wildcard=wxFileSelectorDefaultWildcardStr, long style=wxFD_DEFAULT_STYLE, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, const wxString& name=wxFileDialogNameStr):wxFileDialog(parent, message, defaultDir, defaultFile, wildcard, style, pos, size, name){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileDialog{
    wxFileDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileDialog;

void php_wxFileDialog_free(void *object TSRMLS_DC);
zend_object* php_wxFileDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileDialog_functions[] = {
	PHP_ME(php_wxFileDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFileDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetWildcard, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetFilterIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetFilename, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, SetDirectory, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetWildcard, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetPaths, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetPath, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetFilterIndex, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetFilenames, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetFilename, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetExtraControl, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFileDialog, GetDirectory, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFileDialog * php_wxFileDialog_fetch_object(zend_object *obj) {
      return (zo_wxFileDialog *)((char *)obj - XtOffsetOf(zo_wxFileDialog, zo));
}

#define Z_wxFileDialog_P(zv) php_wxFileDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFontData_entry;
void php_wxFontData_destruction_handler(zend_resource * TSRMLS_DC);

class wxFontData_php: public wxFontData{
	public:
	
	wxFontData_php():wxFontData(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFontData{
    wxFontData_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFontData;

void php_wxFontData_free(void *object TSRMLS_DC);
zend_object* php_wxFontData_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFontData_functions[] = {
	PHP_ME(php_wxFontData, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxFontData, SetShowHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, SetRange, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, SetInitialFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, SetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, SetChosenFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, SetAllowSymbols, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetShowHelp, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetInitialFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetEnableEffects, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetChosenFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, GetAllowSymbols, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontData, EnableEffects, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxFontData * php_wxFontData_fetch_object(zend_object *obj) {
      return (zo_wxFontData *)((char *)obj - XtOffsetOf(zo_wxFontData, zo));
}

#define Z_wxFontData_P(zv) php_wxFontData_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFontDialog_entry;
void php_wxFontDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxFontDialog_php: public wxFontDialog{
	public:
	
	wxFontDialog_php():wxFontDialog(){}
	wxFontDialog_php(wxWindow* parent):wxFontDialog(parent){}
	wxFontDialog_php(wxWindow* parent, const wxFontData& data):wxFontDialog(parent, data){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFontDialog{
    wxFontDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFontDialog;

void php_wxFontDialog_free(void *object TSRMLS_DC);
zend_object* php_wxFontDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFontDialog_functions[] = {
	PHP_ME(php_wxFontDialog, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontDialog, GetFontData, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxFontDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxFontDialog * php_wxFontDialog_fetch_object(zend_object *obj) {
      return (zo_wxFontDialog *)((char *)obj - XtOffsetOf(zo_wxFontDialog, zo));
}

#define Z_wxFontDialog_P(zv) php_wxFontDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxMessageDialog_entry;
void php_wxMessageDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxMessageDialog_php: public wxMessageDialog{
	public:
	
	wxMessageDialog_php(wxWindow* parent, const wxString& message, const wxString& caption=wxMessageBoxCaptionStr, long style=wxOK|wxCENTRE, const wxPoint& pos=wxDefaultPosition):wxMessageDialog(parent, message, caption, style, pos){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxMessageDialog{
    wxMessageDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxMessageDialog;

void php_wxMessageDialog_free(void *object TSRMLS_DC);
zend_object* php_wxMessageDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMessageDialog_functions[] = {
	PHP_ME(php_wxMessageDialog, GetCancelLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetCaption, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetEffectiveIcon, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetExtendedMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetHelpLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetMessageDialogStyle, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetNoLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetOKLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, GetYesLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, HasCustomLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetExtendedMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxMessageDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetYesNoLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetYesNoCancelLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetOKLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetOKCancelLabels, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxMessageDialog, SetHelpLabel, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxMessageDialog * php_wxMessageDialog_fetch_object(zend_object *obj) {
      return (zo_wxMessageDialog *)((char *)obj - XtOffsetOf(zo_wxMessageDialog, zo));
}

#define Z_wxMessageDialog_P(zv) php_wxMessageDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxGenericProgressDialog_entry;
void php_wxGenericProgressDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxGenericProgressDialog_php: public wxGenericProgressDialog{
	public:
	
	wxGenericProgressDialog_php(const wxString& title, const wxString& message, int maximum=100, wxWindow* parent=NULL, int style=wxPD_AUTO_HIDE|wxPD_APP_MODAL):wxGenericProgressDialog(title, message, maximum, parent, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxGenericProgressDialog{
    wxGenericProgressDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxGenericProgressDialog;

void php_wxGenericProgressDialog_free(void *object TSRMLS_DC);
zend_object* php_wxGenericProgressDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxGenericProgressDialog_functions[] = {
	PHP_ME(php_wxGenericProgressDialog, GetMessage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, GetRange, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, GetValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, Resume, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, Pulse, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, SetRange, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, Update, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, WasCancelled, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, WasSkipped, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxGenericProgressDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxGenericProgressDialog * php_wxGenericProgressDialog_fetch_object(zend_object *obj) {
      return (zo_wxGenericProgressDialog *)((char *)obj - XtOffsetOf(zo_wxGenericProgressDialog, zo));
}

#define Z_wxGenericProgressDialog_P(zv) php_wxGenericProgressDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxRearrangeDialog_entry;
void php_wxRearrangeDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxRearrangeDialog_php: public wxRearrangeDialog{
	public:
	
	wxRearrangeDialog_php():wxRearrangeDialog(){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxRearrangeDialog{
    wxRearrangeDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxRearrangeDialog;

void php_wxRearrangeDialog_free(void *object TSRMLS_DC);
zend_object* php_wxRearrangeDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxRearrangeDialog_functions[] = {
	PHP_ME(php_wxRearrangeDialog, AddExtraControls, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRearrangeDialog, GetList, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxRearrangeDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxRearrangeDialog * php_wxRearrangeDialog_fetch_object(zend_object *obj) {
      return (zo_wxRearrangeDialog *)((char *)obj - XtOffsetOf(zo_wxRearrangeDialog, zo));
}

#define Z_wxRearrangeDialog_P(zv) php_wxRearrangeDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxSymbolPickerDialog_entry;
void php_wxSymbolPickerDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxSymbolPickerDialog_php: public wxSymbolPickerDialog{
	public:
	
	wxSymbolPickerDialog_php():wxSymbolPickerDialog(){}
	wxSymbolPickerDialog_php(const wxString& symbol, const wxString& initialFont, const wxString& normalTextFont, wxWindow* parent, wxWindowID id=wxID_ANY, const wxString& title=_("Symbols"), const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxCLOSE_BOX):wxSymbolPickerDialog(symbol, initialFont, normalTextFont, parent, id, title, pos, size, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxSymbolPickerDialog{
    wxSymbolPickerDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxSymbolPickerDialog;

void php_wxSymbolPickerDialog_free(void *object TSRMLS_DC);
zend_object* php_wxSymbolPickerDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxSymbolPickerDialog_functions[] = {
	PHP_ME(php_wxSymbolPickerDialog, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, GetFontName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, GetFromUnicode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, GetNormalTextFontName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, GetSymbol, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, GetSymbolChar, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, HasSelection, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, SetFontName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, SetFromUnicode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, SetNormalTextFontName, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, SetSymbol, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, SetUnicodeMode, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, UseNormalFont, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxSymbolPickerDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxSymbolPickerDialog * php_wxSymbolPickerDialog_fetch_object(zend_object *obj) {
      return (zo_wxSymbolPickerDialog *)((char *)obj - XtOffsetOf(zo_wxSymbolPickerDialog, zo));
}

#define Z_wxSymbolPickerDialog_P(zv) php_wxSymbolPickerDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxPasswordEntryDialog_entry;
void php_wxPasswordEntryDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxPasswordEntryDialog_php: public wxPasswordEntryDialog{
	public:
	
	wxPasswordEntryDialog_php(wxWindow* parent, const wxString& message, const wxString& caption=wxGetPasswordFromUserPromptStr, const wxString& defaultValue=wxEmptyString, long style=wxTextEntryDialogStyle, const wxPoint& pos=wxDefaultPosition):wxPasswordEntryDialog(parent, message, caption, defaultValue, style, pos){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxPasswordEntryDialog{
    wxPasswordEntryDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxPasswordEntryDialog;

void php_wxPasswordEntryDialog_free(void *object TSRMLS_DC);
zend_object* php_wxPasswordEntryDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxPasswordEntryDialog_functions[] = {
	PHP_ME(php_wxPasswordEntryDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxPasswordEntryDialog * php_wxPasswordEntryDialog_fetch_object(zend_object *obj) {
      return (zo_wxPasswordEntryDialog *)((char *)obj - XtOffsetOf(zo_wxPasswordEntryDialog, zo));
}

#define Z_wxPasswordEntryDialog_P(zv) php_wxPasswordEntryDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxTextEntryDialog_entry;
void php_wxTextEntryDialog_destruction_handler(zend_resource * TSRMLS_DC);

class wxTextEntryDialog_php: public wxTextEntryDialog{
	public:
	
	wxTextEntryDialog_php(wxWindow* parent, const wxString& message, const wxString& caption=wxGetTextFromUserPromptStr, const wxString& value=wxEmptyString, long style=wxTextEntryDialogStyle, const wxPoint& pos=wxDefaultPosition):wxTextEntryDialog(parent, message, caption, value, style, pos){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxTextEntryDialog{
    wxTextEntryDialog_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxTextEntryDialog;

void php_wxTextEntryDialog_free(void *object TSRMLS_DC);
zend_object* php_wxTextEntryDialog_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxTextEntryDialog_functions[] = {
	PHP_ME(php_wxTextEntryDialog, GetValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextEntryDialog, SetValue, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextEntryDialog, ShowModal, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxTextEntryDialog, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_FE_END
};
#endif


static inline zo_wxTextEntryDialog * php_wxTextEntryDialog_fetch_object(zend_object *obj) {
      return (zo_wxTextEntryDialog *)((char *)obj - XtOffsetOf(zo_wxTextEntryDialog, zo));
}

#define Z_wxTextEntryDialog_P(zv) php_wxTextEntryDialog_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxWizard_entry;
void php_wxWizard_destruction_handler(zend_resource * TSRMLS_DC);

class wxWizard_php: public wxWizard{
	public:
	
	wxWizard_php():wxWizard(){}
	wxWizard_php(wxWindow* parent, int id=wxID_ANY, const wxString& title=wxEmptyString, const wxBitmap& bitmap=wxNullBitmap, const wxPoint& pos=wxDefaultPosition, long style=wxDEFAULT_DIALOG_STYLE):wxWizard(parent, id, title, bitmap, pos, style){}
		
	
	
	void ***tsrm_ls;
	zval* phpObj;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxWizard{
    wxWizard_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxWizard;

void php_wxWizard_free(void *object TSRMLS_DC);
zend_object* php_wxWizard_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxWizard_functions[] = {
	PHP_ME(php_wxWizard, Create, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, FitToPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetBitmapBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetBitmapPlacement, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetCurrentPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetMinimumBitmapWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, GetPageSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, HasNextPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, HasPrevPage, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, RunWizard, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetBitmap, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetBitmapBackgroundColour, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetBitmapPlacement, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetBorder, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetMinimumBitmapWidth, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, SetPageSize, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(php_wxWizard, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(php_wxWizard, GetPageAreaSizer, NULL, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
#endif


static inline zo_wxWizard * php_wxWizard_fetch_object(zend_object *obj) {
      return (zo_wxWizard *)((char *)obj - XtOffsetOf(zo_wxWizard, zo));
}

#define Z_wxWizard_P(zv) php_wxWizard_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_CMNDLG_H_GUARD
