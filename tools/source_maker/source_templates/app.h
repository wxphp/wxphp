/*
 * @author Mário Soares
 * @contributors Jefferson González
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

extern zend_class_entry *php_wxApp_entry;

class wxAppWrapper : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
		zval* phpObj;
		void ***tsrm_ls;
};

BEGIN_EXTERN_C()
struct zo_wxApp
{
    zend_object zo;
    wxAppWrapper* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_wxApp_free(void *object TSRMLS_DC);
zend_object_value php_wxApp_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

static zend_function_entry php_wxApp_functions[] = {
	PHP_ME(php_wxApp, SetInstance ,NULL,ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, Yield ,NULL,ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};

#endif //WXPHP_APP_H_GUARD
