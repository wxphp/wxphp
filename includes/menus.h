/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_MENUS_H_GUARD
#define WXPHP_MENUS_H_GUARD

#include "references.h"
#include "object_types.h"
#include "arginfo_void.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_menus_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxMenuBar_entry;
extern zend_object_handlers wxphp_wxMenuBar_object_handlers;
void php_wxMenuBar_destruction_handler(zend_resource*);

class wxMenuBar_php: public wxMenuBar{
    public:

    wxMenuBar_php(long style=0):wxMenuBar(style){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxMenuBar{
    wxMenuBar_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxMenuBar;

void php_wxMenuBar_free(void *object);
zend_object* php_wxMenuBar_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMenuBar_functions[] = {
    PHP_ME(php_wxMenuBar, __construct, arginfo_void, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxMenuBar, Append, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Attach, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Check, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Detach, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Enable, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, EnableTop, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, FindMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, FindMenuItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetFrame, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetHelpString, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetMenuCount, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetMenuLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, GetMenuLabelText, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Insert, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, IsAttached, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, IsChecked, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, IsEnabled, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Refresh, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Remove, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, Replace, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, SetHelpString, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, SetLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuBar, SetMenuLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxMenuBar * php_wxMenuBar_fetch_object(zend_object *obj) {
    return (zo_wxMenuBar *)(
        (char *)(obj) - XtOffsetOf(zo_wxMenuBar, zo)
    );
}

#define Z_wxMenuBar_P(zv) \
    php_wxMenuBar_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxMenu_entry;
extern zend_object_handlers wxphp_wxMenu_object_handlers;
void php_wxMenu_destruction_handler(zend_resource*);

class wxMenu_php: public wxMenu{
    public:

    wxMenu_php(long style):wxMenu(style){}
    wxMenu_php(const wxString& title, long style=0):wxMenu(title, style){}
    wxMenu_php():wxMenu(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxMenu{
    wxMenu_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxMenu;

void php_wxMenu_free(void *object);
zend_object* php_wxMenu_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMenu_functions[] = {
    PHP_ME(php_wxMenu, __construct, arginfo_void, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxMenu, SetTitle, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, SetParent, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, SetLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, SetInvokingWindow, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, SetHelpString, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Remove, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, PrependSeparator, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, PrependRadioItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, PrependCheckItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Prepend, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Append, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, AppendCheckItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, AppendRadioItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, AppendSeparator, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, AppendSubMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Attach, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, BreakMethod, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Check, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Delete, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Destroy, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Detach, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Enable, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, FindItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, FindItemByPosition, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetHelpString, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetInvokingWindow, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetLabelText, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetMenuItemCount, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetParent, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetStyle, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetTitle, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, GetWindow, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, Insert, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, InsertCheckItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, InsertRadioItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, InsertSeparator, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, IsAttached, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, IsChecked, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, IsEnabled, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenu, FindChildItem, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxMenu * php_wxMenu_fetch_object(zend_object *obj) {
    return (zo_wxMenu *)(
        (char *)(obj) - XtOffsetOf(zo_wxMenu, zo)
    );
}

#define Z_wxMenu_P(zv) \
    php_wxMenu_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxMenuItem_entry;
extern zend_object_handlers wxphp_wxMenuItem_object_handlers;
void php_wxMenuItem_destruction_handler(zend_resource*);

class wxMenuItem_php: public wxMenuItem{
    public:

    wxMenuItem_php(wxMenu* parentMenu=NULL, int id=wxID_SEPARATOR, const wxString& text=wxEmptyString, const wxString& helpString=wxEmptyString, wxItemKind kind=wxITEM_NORMAL, wxMenu* subMenu=NULL):wxMenuItem(parentMenu, id, text, helpString, kind, subMenu){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxMenuItem{
    wxMenuItem_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxMenuItem;

void php_wxMenuItem_free(void *object);
zend_object* php_wxMenuItem_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxMenuItem_functions[] = {
    PHP_ME(php_wxMenuItem, __construct, arginfo_void, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxMenuItem, SetSubMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, SetMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, SetItemLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, SetHelp, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, IsSubMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, IsSeparator, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, Check, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, Enable, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetHelp, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetId, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetItemLabel, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetItemLabelText, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetKind, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetLabelText, arginfo_void, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, GetSubMenu, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, IsCheckable, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, IsChecked, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, IsEnabled, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxMenuItem, SetBitmap, arginfo_void, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxMenuItem * php_wxMenuItem_fetch_object(zend_object *obj) {
    return (zo_wxMenuItem *)(
        (char *)(obj) - XtOffsetOf(zo_wxMenuItem, zo)
    );
}

#define Z_wxMenuItem_P(zv) \
    php_wxMenuItem_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_MENUS_H_GUARD
