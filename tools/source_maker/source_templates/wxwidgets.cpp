/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 *
 * @license
 * This file is part of wxPHP check the LICENSE file for information.
 *
 * @description
 * Main start point for the wxWidgets php extension
 *
 * @note
 * Some parts of this file are auto-generated by the wxPHP source maker
*/

#include "php_wxwidgets.h"
#include "app.h"
#include "functions.h"
#include "arginfo_void.h"

#ifdef __WXMSW__
#include <wx/msw/private.h>
#include <wx/msw/winundef.h>
#include <wx/msw/msvcrt.h>
#endif

/**
 * To enable inclusion of class methods tables entries code
 * on the generated headers
 */
#define WXPHP_INCLUDE_METHOD_TABLES

/**
 * Space reserved for the zend_class_entry declaration of each class
 * as the resource id and its include files
 */
<?php print $entries ?>

/**
 * Predefined handcoded class entry and object handler for wxApp
 */
zend_class_entry *php_wxApp_entry;
zend_object_handlers wxphp_wxApp_object_handlers;

/**
 * Custom function to register global objects as constants
 */
BEGIN_EXTERN_C()
void wxphp_register_object_constant(const char *name, zval object, int flags, int module_number)
{
    zend_constant c;

    c.name = zend_string_init(name, strlen(name), flags & CONST_PERSISTENT);
    ZVAL_COPY(&c.value, &object);

    #if PHP_VERSION_ID < 70300
    c.flags = flags;
    c.module_number = module_number;
    #else
    ZEND_CONSTANT_SET_FLAGS(&c, flags, module_number);
    #endif

    zend_register_constant(&c);
}
END_EXTERN_C()

/**
 * Custom zend_method_call function to call methods with more than 2 parameters
 */
BEGIN_EXTERN_C()
int wxphp_call_method(zval *object_p, zend_class_entry *obj_ce, zend_function **fn_proxy, const char *function_name, int function_name_len, zval *retval_ptr, int param_count, zval** params)
{
    /*First check the method is callable*/
    zval method_to_call;
    zend_fcall_info_cache fcc;
    int is_callable = SUCCESS;

    if(!*fn_proxy)
    {
        array_init(&method_to_call);
        add_next_index_zval(&method_to_call, object_p);
        add_next_index_stringl(&method_to_call, (char*) function_name, function_name_len);

        if(!zend_is_callable_ex(&method_to_call, NULL, 0, NULL, &fcc, NULL))
        {
            is_callable = FAILURE;
        }

        if(is_callable == FAILURE)
            return FAILURE;
    }

    int result;
    zend_fcall_info fci;
    zval z_fname;
    zval *retval;
    HashTable *function_table;

    fci.size = sizeof(fci);
    fci.object = object_p ? Z_OBJ_P(object_p) : NULL;
    fci.function_name = z_fname;
    fci.retval = retval_ptr ? retval_ptr : retval;
    fci.param_count = param_count;
    fci.params = *params;

    if (!fn_proxy && !obj_ce) {
        /* no interest in caching and no information already present that is
         * needed later inside zend_call_function. */
        ZVAL_STRINGL(&z_fname, function_name, function_name_len);
        result = zend_call_function(&fci, NULL);
    } else {
        zend_fcall_info_cache fcic = fcc;

        #if PHP_VERSION_ID < 70300
        fcic.initialized = 1;
        #endif

        if (!obj_ce) {
            obj_ce = object_p ? Z_OBJCE_P(object_p) : NULL;
        }
        if (!fn_proxy || !*fn_proxy) {
            if (fn_proxy) {
                *fn_proxy = fcic.function_handler;
            }
        } else {
            fcic.function_handler = *fn_proxy;
        }
        fcic.calling_scope = obj_ce;
        if (object_p) {
            fcic.called_scope = Z_OBJCE_P(object_p);
        } else if (obj_ce) {
            fcic.called_scope = obj_ce;
        }

        fcic.object = object_p ? Z_OBJ_P(object_p) : NULL;
        result = zend_call_function(&fci, &fcic);
    }
    if (result == FAILURE) {
        /* error at c-level */
        if (!obj_ce) {
            obj_ce = object_p ? Z_OBJCE_P(object_p) : NULL;
        }
        if (!EG(exception)) {
            zend_error(E_CORE_ERROR, "Couldn't execute method %s%s%s", obj_ce ? obj_ce->name : (zend_string*) "", obj_ce ? "::" : "", function_name);
        }
    }
    if (!retval_ptr) {
        if (retval) {
            zval_ptr_dtor(retval);
        }
        return FAILURE;
    }
    return SUCCESS;
}
END_EXTERN_C()

/**
 * Code that enables correct functioning of comctl32.dll and 6.0 new
 * controls look. (Thanks to Robin Dunn from wxPython)
 */
#ifdef __WXMSW__
//----------------------------------------------------------------------
// Use an ActivationContext to ensure that the new (themed) version of
// the comctl32 DLL is loaded.
//----------------------------------------------------------------------

// Note that the use of the ISOLATION_AWARE_ENABLED define replaces the
// activation context APIs with wrappers that dynamically load the API
// pointers from the kernel32 DLL so we don't have to do that ourselves.
// Using ISOLATION_AWARE_ENABLED also causes the manifest resource to be put
// in slot #2 as expected for DLLs. (See wx/msw/wx.rc)
#ifdef ISOLATION_AWARE_ENABLED

static ULONG_PTR wxPHPSetActivationContext()
{

    OSVERSIONINFO info;
    wxZeroMemory(info);
    info.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
    GetVersionEx(&info);
    if (info.dwMajorVersion < 5)
        return 0;

    ULONG_PTR cookie = 0;
    HANDLE h;
    ACTCTX actctx;
    TCHAR modulename[MAX_PATH];

    GetModuleFileName(wxGetInstance(), modulename, MAX_PATH);
    wxZeroMemory(actctx);
    actctx.cbSize = sizeof(actctx);
    actctx.lpSource = modulename;
    actctx.lpResourceName = MAKEINTRESOURCE(2);
    actctx.hModule = wxGetInstance();
    actctx.dwFlags = ACTCTX_FLAG_HMODULE_VALID | ACTCTX_FLAG_RESOURCE_NAME_VALID;

    h = CreateActCtx(&actctx);
    if (h == INVALID_HANDLE_VALUE) {
        wxLogLastError(wxT("CreateActCtx"));
        return 0;
    }

    if (! ActivateActCtx(h, &cookie))
        wxLogLastError(wxT("ActivateActCtx"));

    return cookie;
}

static void wxPHPClearActivationContext(ULONG_PTR cookie)
{
    if (! DeactivateActCtx(0, cookie))
        wxLogLastError(wxT("DeactivateActCtx"));
}

#endif

//----------------------------------------------------------------------
// This gets run when the DLL is loaded.  We just need to save a handle.
//----------------------------------------------------------------------

extern "C"
BOOL WINAPI DllMain(
    HINSTANCE   hinstDLL,    // handle to DLL module
    DWORD       fdwReason,   // reason for calling function
    LPVOID      lpvReserved  // reserved
   )
{
    // If wxPHP is embedded in another wxWidgets app then
    // the instance has already been set.
    if (! wxGetInstance())
        wxSetInstance(hinstDLL);

    return TRUE;
}
#endif

// Prevent expansion of wxLog* macros

#undef wxLogError
#undef wxLogFatalError
#undef wxLogGeneric
#undef wxLogMessage
#undef wxLogStatus
#undef wxLogSysError
#undef wxLogVerbose
#undef wxLogWarning

/**
 * Global functions table entry used on the module initialization code
 */
static zend_function_entry php_wxWidgets_functions[] = {
    PHP_FALIAS(wxExecute, php_wxExecute, arginfo_void)
    PHP_FALIAS(wxEntry, php_wxEntry, arginfo_void)
    PHP_FALIAS(wxC2D, php_wxC2D, arginfo_void)

    PHP_FALIAS(wxLogError, php_wxLogError, arginfo_void)
    PHP_FALIAS(wxLogFatalError, php_wxLogFatalError, arginfo_void)
    PHP_FALIAS(wxLogGeneric, php_wxLogGeneric, arginfo_void)
    PHP_FALIAS(wxLogMessage, php_wxLogMessage, arginfo_void)
    PHP_FALIAS(wxLogStatus, php_wxLogStatus, arginfo_void)
    PHP_FALIAS(wxLogSysError, php_wxLogSysError, arginfo_void)
    PHP_FALIAS(wxLogVerbose, php_wxLogVerbose, arginfo_void)
    PHP_FALIAS(wxLogWarning, php_wxLogWarning, arginfo_void)

    /**
     * Space reserved for the addition to functions table of
     * autogenerated functions
     */
<?php print $functions_table ?>

    PHP_FE_END //Equivalent to { NULL, NULL, NULL, 0, 0 } at time of writing on PHP 5.4
};

/**
 * Initialize global objects and wxWidgets resources
 */
PHP_RINIT_FUNCTION(php_wxWidgets)
{
    static int objects_intialized = 0;

    /**
     * Space reserved for the initialization of global object
     * constants, since the php engine doesnt initializes the object
     * store prior to calling extensions MINIT function.
     *
     * Note:
     *
     * Predefined fonts, pens brushes, colors and cursos are  initilized
     * by 'wxStockGDI::instance().Get*(item)' functions and it needs
     * wxInitilize call in order to work (learned this the hard way)
     */

    if(objects_intialized < 1)
    {
        wxInitialize();

<?php print $object_constants ?>

        objects_intialized = 1;
    }

    return SUCCESS;
}

PHP_MINIT_FUNCTION(php_wxWidgets)
{
    #ifdef ISOLATION_AWARE_ENABLED
    wxPHPSetActivationContext();
    #endif

    /**
     * Define some version constants.
     */
    REGISTER_STRING_CONSTANT(
        "WXWIDGETS_EXTENSION_VERSION",
        (char*) PHP_WXWIDGETS_VERSION,
        CONST_CS | CONST_PERSISTENT
    );

    REGISTER_STRING_CONSTANT(
        "WXWIDGETS_LIBRARY_VERSION",
        (char*)  WXWIDGETS_LIBRARY_VERSION,
        CONST_CS | CONST_PERSISTENT
    );

    zend_class_entry ce; /* Temporary variable used to initialize class entries */

    /**
     * Predefined Initialization of wxApp class
     */
    char PHP_wxApp_name[] = "wxApp";
    INIT_CLASS_ENTRY(ce, PHP_wxApp_name, php_wxApp_functions);
    php_wxApp_entry = zend_register_internal_class(&ce);
    php_wxApp_entry->create_object = php_wxApp_new;
    wxPHP_PREPARE_OBJECT_HANDLERS(wxApp)

    /**
     * Space reserved for the initialization of autogenerated classes,
     * class enumerations and global constants
     */

<?php print $classes ?>

    return SUCCESS;
}

/**
 * UnInitialize wxWidgets resources
 */
PHP_MSHUTDOWN_FUNCTION(php_wxWidgets)
{
    wxUninitialize();

    return SUCCESS;
}

/**
 * TODO: Automate the process of updating versions number
 * Show version information to phpinfo()
 */
PHP_MINFO_FUNCTION(php_wxWidgets)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "wxWidgets", "enabled");
    php_info_print_table_row(2, "Extension Version", PHP_WXWIDGETS_VERSION);
    php_info_print_table_row(2, "Library Version",  WXWIDGETS_LIBRARY_VERSION);
    php_info_print_table_end();
}


/**
 * Declaration of wxWidgets module
 */
zend_module_entry wxWidgets_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_WXWIDGETS_EXTNAME,
    php_wxWidgets_functions,        /* Functions (module functions) */
    PHP_MINIT(php_wxWidgets),       /* MINIT (module initialization function) */
    PHP_MSHUTDOWN(php_wxWidgets),   /* MSHUTDOWN (module shutdown function) */
    PHP_RINIT(php_wxWidgets),       /* RINIT (request initialization function) */
    NULL,                           /* RSHUTDOWN (request shutdown function) */
    PHP_MINFO(php_wxWidgets),       /* MINFO (module information function) */
    PHP_WXWIDGETS_VERSION,
    STANDARD_MODULE_PROPERTIES
};

/**
 * Insertion of wxWidgets module to the PHP runtime
 */
#ifdef COMPILE_DL_WXWIDGETS
BEGIN_EXTERN_C()
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(wxWidgets)
END_EXTERN_C()
#endif
