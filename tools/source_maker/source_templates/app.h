/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 *
 * @license
 * This file is part of wxPHP check the LICENSE file for information.
 *
 * @description
 * Manual binding declaration to the wxApp class
 *
*/

#ifndef WXPHP_APP_H_GUARD
#define WXPHP_APP_H_GUARD

#include "object_types.h"
#include "arginfo_void.h"

extern zend_class_entry *php_wxApp_entry;
extern zend_object_handlers wxphp_wxApp_object_handlers;

class wxAppWrapper : public wxApp
{
    public:
        bool OnInit();
        int OnExit();

        #ifdef __WXMAC__
        void MacNewFile();
        void MacOpenFiles(const wxArrayString&  fileNames);
        void MacOpenFile(const wxString& fileName);
        void MacOpenURL(const wxString& url);
        void MacPrintFile(const wxString& fileName);
        void MacReopenApp();
        bool OSXIsGUIApplication();
        #endif

        bool is_php_user_space_implemented = false;
        zval phpObj;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxApp
{
    wxAppWrapper* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxApp;

void php_wxApp_free(void *object);
zend_object* php_wxApp_new(zend_class_entry *class_type);
END_EXTERN_C()

static zend_function_entry php_wxApp_functions[] = {
    PHP_ME(php_wxApp, SetInstance, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetInstance, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetAppDisplayName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetAppName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetClassName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetVendorDisplayName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, GetVendorName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, SetAppDisplayName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, SetAppName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, SetClassName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, SetVendorDisplayName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, SetVendorName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, Yield, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxApp, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    { NULL, NULL, NULL }
};

static inline zo_wxApp * php_wxApp_fetch_object(zend_object *obj) {
      return (zo_wxApp *)((char *)(obj) - XtOffsetOf(zo_wxApp, zo));
}

#define Z_wxApp_P(zv) php_wxApp_fetch_object(Z_OBJ_P(zv))

#endif //WXPHP_APP_H_GUARD
