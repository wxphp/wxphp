/*
 * @author Mário Soares
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Manual binding declaration to the wxApp class
 * 
*/

#ifndef wxphp_app_h_guard
#define wxphp_app_h_guard

extern zend_class_entry *php_wxApp_entry;

extern char PHP_wxApp_NAME[];
extern char le_wxApp_name[];

extern int le_wxApp;

class wxAppWrapper : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
		zval* phpObj;
		void ***tsrm_ls;
};

static function_entry php_wxApp_functions[] = {
	PHP_ME(php_wxApp, helloWorld ,NULL,ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, SetInstance ,NULL,ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, Yield ,NULL,ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};

#endif //wxphp_app_h_guard
