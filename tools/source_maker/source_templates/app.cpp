/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Manual binding implemetation of the wxApp class
 * 
*/

#include "php_wxwidgets.h"
#include "app.h"

#ifdef __WXMAC__
/* Header for process type transformation functions */
#include <ApplicationServices/ApplicationServices.h>
#endif

BEGIN_EXTERN_C()
void php_wxApp_free(void *object TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxApp_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
    zo_wxApp* custom_object = (zo_wxApp*) object;
    //delete custom_object->native_object;
    zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxApp_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxApp_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
    zend_object_value retval;
    zo_wxApp* custom_object;
    custom_object = (zo_wxApp*) emalloc(sizeof(zo_wxApp));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	zval *temp;
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
#endif

    custom_object->native_object = NULL;
    custom_object->object_type = PHP_WXAPP_TYPE;
    custom_object->is_user_initialized = 0;

    retval.handle = zend_objects_store_put(custom_object, NULL, php_wxApp_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();
	
    return retval;
}
END_EXTERN_C()

int wxAppWrapper::OnExit()
{
	zval *retval;
	zval func_name;

	ZVAL_STRINGL(&func_name, (char *)"OnExit", sizeof("OnExit")-1, 0);
	
	if(call_user_function_ex(NULL, &phpObj, &func_name, &retval, 0, NULL, 0, NULL TSRMLS_CC) == FAILURE)
	{
		wxMessageBox(_T("Failed Call to wxApp::OnExit()!\n"));
	}
	return 0;
}

bool wxAppWrapper::OnInit()
{
	zval *retval;
	zval func_name;

	ZVAL_STRINGL(&func_name, (char *)"OnInit", sizeof("OnInit")-1, 0);

	wxFileSystem::AddHandler(new wxZipFSHandler);
	
	if(call_user_function_ex(NULL, &phpObj, &func_name, &retval, 0, NULL, 0, NULL TSRMLS_CC) == FAILURE)
	{
		wxMessageBox(_T("Failed Call to wxApp::OnInit()!\n"));
	}

	return true;
}


IMPLEMENT_APP_NO_MAIN(wxAppWrapper);


/* {{{ proto wxApp wxApp::__construct() 
   Constructor. */
PHP_METHOD(php_wxApp, __construct)
{
	zo_wxApp* current_object;
	
	wxAppWrapper* native_object = new wxAppWrapper();
	native_object->phpObj = getThis();
	
	#ifdef ZTS
	native_object->tsrm_ls = tsrm_ls;
	#endif
	
	current_object = (zo_wxApp*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
	current_object->native_object = native_object;
		
	current_object->is_user_initialized = 1;
}
/* }}} */

/* {{{ proto void wxApp::SetInstance(wxApp app) 
   Allows external code to modify global wxTheApp, but you should really know what you're doing if you call it.*/
PHP_METHOD(php_wxApp, SetInstance)
{
	zval *objvar;
	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, (char *)"O", &objvar, php_wxApp_entry) == FAILURE)
	{
		RETURN_NULL();
	}
	
	wxApp::SetInstance((wxAppWrapper*) ((zo_wxApp*) zend_object_store_get_object(objvar TSRMLS_CC))->native_object);
        
    #ifdef __WXMAC__
    /* In order to correctly receive keyboard input we need to explicitly
     * tell mac to convert this console process to a gui process.
     *
     * Solution found at: 
     * http://stackoverflow.com/questions/4341098/wxwidgets-commandline-gui-hybrid-application-fails-to-get-dialog-input
     */
    ProcessSerialNumber PSN;
    GetCurrentProcess(&PSN);
    TransformProcessType(&PSN,kProcessTransformToForegroundApplication);
    #endif
}
/* }}} */

/* {{{ proto bool wxApp::Yield() */
PHP_METHOD(php_wxApp, Yield)
{
	wxAppWrapper* native_object = ((zo_wxApp*) zend_object_store_get_object(getThis() TSRMLS_CC))->native_object;
	
	if (zend_parse_parameters_none() == FAILURE)
		return;

	RETURN_BOOL(((wxApp*)native_object)->Yield())
}
/* }}} */
