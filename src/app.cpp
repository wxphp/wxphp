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
wxIMPLEMENT_APP_NO_MAIN(wxAppWrapper);

BEGIN_EXTERN_C()
zend_object* php_wxApp_new(zend_class_entry *class_type)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Calling php_wxApp_new on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n");
    #endif

    zo_wxApp* custom_object = (zo_wxApp*) ecalloc(
        1,
        sizeof(zo_wxApp) + zend_object_properties_size(class_type)
    );

    zend_object_std_init(&custom_object->zo, class_type);
    object_properties_init(&custom_object->zo, class_type);

    custom_object->zo.handlers = zend_get_std_object_handlers();

    custom_object->native_object = NULL;
    custom_object->object_type = PHP_WXAPP_TYPE;
    custom_object->is_user_initialized = 0;

    return &custom_object->zo;
}

void php_wxApp_free(void *object)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Calling php_wxApp_free on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n");
    #endif

    zo_wxApp* custom_object = (zo_wxApp*) object;
    //delete custom_object->native_object;
    zend_object_std_dtor(&custom_object->zo);
    efree(custom_object);
}
END_EXTERN_C()

bool wxAppWrapper::OnInit()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual wxApp::OnInit\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "OnInit", 6);

    zval return_value;

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj.value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj.value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, &phpObj, &function_name, &return_value,
            0, NULL, 0, NULL
        );
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

        return false;
    }

    return true;
}

int wxAppWrapper::OnExit()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual wxApp::OnExit\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "OnExit", 6);

    zval return_value;

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj.value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj.value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, &phpObj, &function_name, &return_value,
            0, NULL, 0, NULL
        );
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

    return 0;
}

#ifdef __WXMAC__
void wxAppWrapper::MacNewFile()
{
    static bool is_php_user_space_implemented = true;

    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking virtual wxApp::MacNewFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacNewFile", 10);

    zval return_value;

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            0, NULL, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::MacOpenFiles\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacOpenFiles", 12);

    zval* params[1];
    zval arguments[1];

    zval return_value;

    int function_called;

    //Parameters for conversion
    array_init(&arguments[0]);
    for(int i=0; i<fileNames.GetCount(); i++)
    {
        add_next_index_string(
            &arguments[0],
            fileNames[i].ToUTF8().data()
        );
    }

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            1, params, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::MacOpenFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacOpenFile", 11);

    zval* params[1];
    zval arguments[1];

    zval return_value;

    int function_called;

    //Parameters for conversion
    ZVAL_STRING(&arguments[0], fileName.ToUTF8().data());

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            1, params, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::MacOpenURL\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacOpenURL", 10);

    zval* params[1];
    zval arguments[1];

    zval return_value;

    int function_called;

    //Parameters for conversion
    ZVAL_STRING(&arguments[0], url.ToUTF8().data());

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            1, params, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::MacPrintFile\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacPrintFile", 12);

    zval* params[1];
    zval arguments[1];

    zval return_value;

    int function_called;

    //Parameters for conversion
    ZVAL_STRING(&arguments[0], fileName.ToUTF8().data());

    //Set parameters that are sent to function
    params[0] = &arguments[0];

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            1, params, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::MacReopenApp\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "MacReopenApp", 12);

    zval return_value;

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            0, NULL, 0, NULL
        );
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
    php_printf("Invoking virtual wxApp::OSXIsGUIApplication\n");
    php_printf("===========================================\n");
    #endif

    zval function_name;
    ZVAL_STRINGL(&function_name, "OSXIsGUIApplication", 19);

    zval return_value;

    int function_called;

    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Trying to call user defined method '%s'",
        Z_STRVAL(function_name)
    );

    if (phpObj->value.obj->ce == NULL) {
        php_printf(" on NULL!\n");
    } else {
        php_printf(" on '%s'\n", ZSTR_VAL(phpObj->value.obj->ce->name));
    }
    #endif

    if(is_php_user_space_implemented)
    {
        function_called = call_user_function_ex(
            NULL, phpObj, &function_name, &return_value,
            0, NULL, 0, NULL
        );
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
    native_object->phpObj = *getThis();

    current_object = Z_wxApp_P(getThis());

    current_object->native_object = native_object;

    current_object->is_user_initialized = 1;
}
/* }}} */

/* {{{ proto void wxApp::SetInstance(wxApp app)
   Allows external code to modify global wxTheApp, but you should
   really know what you're doing if you call it.*/
PHP_METHOD(php_wxApp, SetInstance)
{
    zval *objvar;

    if(
        zend_parse_parameters(
            ZEND_NUM_ARGS(), (char *)"O", &objvar, php_wxApp_entry
        )
        ==
        FAILURE
    )
    {
        RETURN_NULL();
    }

    wxApp::SetInstance(Z_wxApp_P(objvar)->native_object);
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
    else if(!Z_ISNULL(instance->phpObj)) // Todo: Does this work?
    {
        return_value = &instance->phpObj;
        zval_add_ref(&instance->phpObj);
    }
    else
    {
        object_init_ex(return_value, php_wxApp_entry);

        Z_wxApp_P(return_value)->native_object = instance;
    }
}
/* }}} */

/* {{{ proto bool wxApp::Yield() */
PHP_METHOD(php_wxApp, Yield)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    if (zend_parse_parameters_none() == FAILURE)
        return;

    RETURN_BOOL(native_object->Yield())
}
/* }}} */

/* {{{ proto bool wxApp::GetAppDisplayName() */
PHP_METHOD(php_wxApp, GetAppDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    wxString value_to_return = native_object->GetAppDisplayName();

    ZVAL_STRING(return_value, value_to_return.ToUTF8().data());
}
/* }}} */

/* {{{ proto bool wxApp::GetAppName() */
PHP_METHOD(php_wxApp, GetAppName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    wxString value_to_return = native_object->GetAppName();

    ZVAL_STRING(return_value, value_to_return.ToUTF8().data());
}
/* }}} */

/* {{{ proto bool wxApp::GetClassName() */
PHP_METHOD(php_wxApp, GetClassName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    wxString value_to_return = native_object->GetClassName();

    ZVAL_STRING(return_value, value_to_return.ToUTF8().data());
}
/* }}} */

/* {{{ proto bool wxApp::GetVendorDisplayName() */
PHP_METHOD(php_wxApp, GetVendorDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    wxString value_to_return = native_object->GetVendorDisplayName();

    ZVAL_STRING(return_value, value_to_return.ToUTF8().data());
}
/* }}} */

/* {{{ proto bool wxApp::GetVendorName() */
PHP_METHOD(php_wxApp, GetVendorName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    wxString value_to_return = native_object->GetVendorName();

    ZVAL_STRING(return_value, value_to_return.ToUTF8().data());
}
/* }}} */


/* {{{ proto bool wxApp::SetAppDisplayName(string name) */
PHP_METHOD(php_wxApp, SetAppDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    char* name;
    size_t name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";

        if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET,
                ZEND_NUM_ARGS(),
                parse_parameters_string,
                &name,
                &name_len
            ) == SUCCESS
        )
        {
            native_object->SetAppDisplayName(
                wxString(name, wxConvUTF8)
            );
        }
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetAppName(string name) */
PHP_METHOD(php_wxApp, SetAppName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    char* name;
    size_t name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";

        if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET,
                ZEND_NUM_ARGS(),
                parse_parameters_string,
                &name,
                &name_len
            ) == SUCCESS
        )
        {
            native_object->SetAppName(
                wxString(name, wxConvUTF8)
            );
        }
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetClassName(string name) */
PHP_METHOD(php_wxApp, SetClassName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    char* name;
    size_t name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";

        if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET,
                ZEND_NUM_ARGS(),
                parse_parameters_string,
                &name,
                &name_len
            ) == SUCCESS
        )
        {
            native_object->SetClassName(
                wxString(name, wxConvUTF8)
            );
        }
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetVendorDisplayName(string name) */
PHP_METHOD(php_wxApp, SetVendorDisplayName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    char* name;
    size_t name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";

        if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET,
                ZEND_NUM_ARGS(),
                parse_parameters_string,
                &name,
                &name_len
            ) == SUCCESS
        )
        {
            native_object->SetVendorDisplayName(
                wxString(name, wxConvUTF8)
            );
        }
    }
}
/* }}} */

/* {{{ proto bool wxApp::SetVendorName(string name) */
PHP_METHOD(php_wxApp, SetVendorName)
{
    wxAppWrapper* native_object = Z_wxApp_P(getThis())->native_object;

    char* name;
    size_t name_len;

    if(ZEND_NUM_ARGS() > 0)
    {
        char parse_parameters_string[] = "s";

        if(
            zend_parse_parameters_ex(
                ZEND_PARSE_PARAMS_QUIET,
                ZEND_NUM_ARGS(),
                parse_parameters_string,
                &name,
                &name_len
            ) == SUCCESS
        )
        {
            native_object->SetVendorName(
                wxString(name, wxConvUTF8)
            );
        }
    }
}
/* }}} */
