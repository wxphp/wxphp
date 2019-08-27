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

/**
 * Set the wxWidgets application handler.
 */
IMPLEMENT_APP_NO_MAIN(wxAppWrapper);

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

zend_object* php_wxApp_new(zend_class_entry *class_type TSRMLS_DC)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf("Calling php_wxApp_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
    php_printf("===========================================\n");
    #endif

    zo_wxApp* custom_object;
    custom_object = (zo_wxApp*) emalloc(sizeof(zo_wxApp) + zend_object_properties_size(class_type));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

    custom_object->native_object = NULL;
    custom_object->object_type = PHP_WXAPP_TYPE;
    custom_object->is_user_initialized = 0;

    custom_object->zo.handlers = zend_get_std_object_handlers();

    return &custom_object->zo;
}
END_EXTERN_C()

int wxAppWrapper::OnExit()
{
    zval *retval;
    zval func_name;

    ZVAL_STRINGL(&func_name, (char *)"OnExit", sizeof("OnExit")-1);

    call_user_function_ex(NULL, &phpObj, &func_name, &retval, 0, NULL, 0, NULL TSRMLS_CC);

    return 0;
}

bool wxAppWrapper::OnInit()
{
    zval *retval;
    zval func_name;

    ZVAL_STRINGL(&func_name, (char *)"OnInit", sizeof("OnInit")-1);

    wxFileSystem::AddHandler(new wxZipFSHandler);

    #ifdef ZTS
    if(!phpObj)
    {
        tsrm_ls = (void ***) ts_resource_ex(0, NULL);
    }
    #endif

    call_user_function_ex(NULL, &phpObj, &func_name, &retval, 0, NULL, 0, NULL TSRMLS_CC);

    return true;
}

#ifdef __WXMAC__
void wxAppWrapper::MacNewFile()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacNewFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacNewFile", sizeof("MacNewFile")-1);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 0, NULL, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

void wxAppWrapper::MacOpenFiles ( const wxArrayString &  fileNames)
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacOpenFiles\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacOpenFiles", sizeof("MacOpenFiles")-1);

    zval** params[1];
    zval *arguments[1];

    //Initilize arguments array
    MAKE_STD_ZVAL(arguments[0]);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    char* temp_string;
    int function_called;

    //Parameters for conversion
    array_init(arguments[0]);
    for(int i=0; i<fileNames.GetCount(); i++)
    {
        temp_string = (char*)malloc(sizeof(wxChar)*(fileNames[i].size()+1));
        strcpy(temp_string, (const char *) fileNames[i].char_str());
        add_next_index_string(arguments[0], temp_string, 1);
        free(temp_string);
    }

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 1, params, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    //Delete already used parameters from memory
    zval_ptr_dtor(&arguments[0]);

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

void wxAppWrapper::MacOpenFile(const wxString& fileName)
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacOpenFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacOpenFile", sizeof("MacOpenFile")-1);

    zval** params[1];
    zval *arguments[1];

    //Initilize arguments array
    MAKE_STD_ZVAL(arguments[0]);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    char* temp_string;
    int function_called;

    //Parameters for conversion
    temp_string = (char*)malloc(sizeof(wxChar)*(fileName.size()+1));
    strcpy(temp_string, (const char *) fileName.char_str());
    ZVAL_STRING(arguments[0], temp_string);
    free(temp_string);

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 1, params, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    //Delete already used parameters from memory
    zval_ptr_dtor(&arguments[0]);

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

void wxAppWrapper::MacOpenURL(const wxString& url)
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacOpenURL\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacOpenURL", sizeof("MacOpenURL")-1);

    zval** params[1];
    zval *arguments[1];

    //Initilize arguments array
    MAKE_STD_ZVAL(arguments[0]);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    char* temp_string;
    int function_called;

    //Parameters for conversion
    temp_string = (char*)malloc(sizeof(wxChar)*(url.size()+1));
    strcpy(temp_string, (const char *) url.char_str());
    ZVAL_STRING(arguments[0], temp_string);
    free(temp_string);

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 1, params, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    //Delete already used parameters from memory
    zval_ptr_dtor(&arguments[0]);

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

void wxAppWrapper::MacPrintFile(const wxString& fileName)
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacPrintFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacPrintFile", sizeof("MacPrintFile")-1);

    zval** params[1];
    zval *arguments[1];

    //Initilize arguments array
    MAKE_STD_ZVAL(arguments[0]);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    char* temp_string;
    int function_called;

    //Parameters for conversion
    temp_string = (char*)malloc(sizeof(wxChar)*(fileName.size()+1));
    strcpy(temp_string, (const char *) fileName.char_str());
    ZVAL_STRING(arguments[0], temp_string);
    free(temp_string);

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 1, params, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    //Delete already used parameters from memory
    zval_ptr_dtor(&arguments[0]);

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

void wxAppWrapper::MacReopenApp()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual MacReopenApp\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"MacReopenApp", sizeof("MacReopenApp")-1);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 0, NULL, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif
    }
}

bool wxAppWrapper::OSXIsGUIApplication()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual OSXIsGUIApplication\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, (char *)"OSXIsGUIApplication", sizeof("OSXIsGUIApplication")-1);

    zval* return_value;
    MAKE_STD_ZVAL(return_value);

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Trying to call user defined method\n");
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(NULL, &phpObj, &function_name, &return_value, 0, NULL, 0, NULL TSRMLS_CC);
    }
    else
    {
        function_called = FAILURE;
    }

    if(function_called == FAILURE)
    {
        is_php_user_space_implemented = false;

        #ifdef USE_WXPHP_DEBUG
        php_printf("Invocation of user defined method failed\n");
        #endif

        return true;
    }

    #ifdef USE_WXPHP_DEBUG
    php_printf("Returning userspace value.\n");
    #endif

    return Z_TYPE_INFO(return_value) == IS_TRUE;
}
#endif

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

    current_object = Z_wxApp_P(getThis());

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

    wxApp::SetInstance((wxAppWrapper*) Z_wxApp_P(objvar TSRMLS_CC)->native_object);
}
/* }}} */

/* {{{ proto void wxApp::GetInstance() */
PHP_METHOD(php_wxApp, GetInstance)
{
    wxAppWrapper* instance = (wxAppWrapper*) wxApp::GetInstance();

    if(instance == NULL)
    {
        ZVAL_NULL(return_value);
    }
    else if(instance->phpObj != NULL)
    {
        *return_value = *instance->phpObj;
        zval_add_ref(&instance->phpObj);
    }
    else
    {
        object_init_ex(return_value, php_wxApp_entry);
    
        Z_wxApp_P(return_value TSRMLS_CC)->native_object = (wxAppWrapper*) instance;
    }
}
/* }}} */

/* {{{ proto bool wxApp::Yield() */
PHP_METHOD(php_wxApp, Yield)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;

    if (zend_parse_parameters_none() == FAILURE)
        return;

    RETURN_BOOL(((wxApp*)native_object)->Yield())
}
/* }}} */

/* {{{ proto bool wxApp::GetAppDisplayName(string name) */
PHP_METHOD(php_wxApp, GetAppDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    wxString value_to_return;
    value_to_return = ((wxApp*)native_object)->GetAppDisplayName();
    
    char* temp_string;
    temp_string = (char*)malloc(sizeof(wxChar)*(value_to_return.size()+1));
    strcpy (temp_string, (const char *) value_to_return.char_str() );
    
    ZVAL_STRING(return_value, temp_string);
    
    free(temp_string);
}
/* }}} */

/* {{{ proto bool wxApp::GetAppName(string name) */
PHP_METHOD(php_wxApp, GetAppName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    wxString value_to_return;
    value_to_return = ((wxApp*)native_object)->GetAppName();
    
    char* temp_string;
    temp_string = (char*)malloc(sizeof(wxChar)*(value_to_return.size()+1));
    strcpy (temp_string, (const char *) value_to_return.char_str() );
    
    ZVAL_STRING(return_value, temp_string);
    
    free(temp_string);
}
/* }}} */

/* {{{ proto bool wxApp::GetClassName(string name) */
PHP_METHOD(php_wxApp, GetClassName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    wxString value_to_return;
    value_to_return = ((wxApp*)native_object)->GetClassName();
    
    char* temp_string;
    temp_string = (char*)malloc(sizeof(wxChar)*(value_to_return.size()+1));
    strcpy (temp_string, (const char *) value_to_return.char_str() );
    
    ZVAL_STRING(return_value, temp_string);
    
    free(temp_string);
}
/* }}} */
 
/* {{{ proto bool wxApp::GetVendorDisplayName(string name) */
PHP_METHOD(php_wxApp, GetVendorDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    wxString value_to_return;
    value_to_return = ((wxApp*)native_object)->GetVendorDisplayName();
    
    char* temp_string;
    temp_string = (char*)malloc(sizeof(wxChar)*(value_to_return.size()+1));
    strcpy (temp_string, (const char *) value_to_return.char_str() );
    
    ZVAL_STRING(return_value, temp_string);
    
    free(temp_string);
}
/* }}} */

/* {{{ proto bool wxApp::GetVendorName(string name) */
PHP_METHOD(php_wxApp, GetVendorName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    wxString value_to_return;
    value_to_return = ((wxApp*)native_object)->GetVendorName();
    
    char* temp_string;
    temp_string = (char*)malloc(sizeof(wxChar)*(value_to_return.size()+1));
    strcpy (temp_string, (const char *) value_to_return.char_str() );
    
    ZVAL_STRING(return_value, temp_string);
    
    free(temp_string);
}
/* }}} */


/* {{{ proto bool wxApp::SetAppDisplayName(string name) */
PHP_METHOD(php_wxApp, SetAppDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    char* name;
	long name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";
        
		if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET, 
                ZEND_NUM_ARGS() 
                TSRMLS_CC, 
                parse_parameters_string, 
                &name, 
                &name_len 
            ) == SUCCESS
        )
		{
			((wxApp*)native_object)->SetAppDisplayName(
                wxString(name, wxConvUTF8)
            );
		}
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetAppName(string name) */
PHP_METHOD(php_wxApp, SetAppName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    char* name;
	long name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";
        
		if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET, 
                ZEND_NUM_ARGS() 
                TSRMLS_CC, 
                parse_parameters_string, 
                &name, 
                &name_len 
            ) == SUCCESS
        )
		{
			((wxApp*)native_object)->SetAppName(
                wxString(name, wxConvUTF8)
            );
		}
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetClassName(string name) */
PHP_METHOD(php_wxApp, SetClassName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    char* name;
	long name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";
        
		if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET, 
                ZEND_NUM_ARGS() 
                TSRMLS_CC, 
                parse_parameters_string, 
                &name, 
                &name_len 
            ) == SUCCESS
        )
		{
			((wxApp*)native_object)->SetClassName(
                wxString(name, wxConvUTF8)
            );
		}
    }
}
/* }}} */
 
/* {{{ proto bool wxApp::SetVendorDisplayName(string name) */
PHP_METHOD(php_wxApp, SetVendorDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    char* name;
	long name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";
        
		if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET, 
                ZEND_NUM_ARGS() 
                TSRMLS_CC, 
                parse_parameters_string, 
                &name, 
                &name_len 
            ) == SUCCESS
        )
		{
			((wxApp*)native_object)->SetVendorDisplayName(
                wxString(name, wxConvUTF8)
            );
		}
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetVendorName(string name) */
PHP_METHOD(php_wxApp, SetVendorName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis() TSRMLS_CC)->native_object;
    
    char* name;
	long name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";
        
		if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET, 
                ZEND_NUM_ARGS() 
                TSRMLS_CC, 
                parse_parameters_string, 
                &name, 
                &name_len 
            ) == SUCCESS
        )
		{
			((wxApp*)native_object)->SetVendorName(
                wxString(name, wxConvUTF8)
            );
		}
    }
}
/* }}} */
