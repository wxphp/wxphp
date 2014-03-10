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

#include "php_wxwidgets.h"
#include "appmanagement.h"
#include "aui.h"
#include "bookctrl.h"
#include "cfg.h"
#include "cmndlg.h"
#include "containers.h"
#include "ctrl.h"
#include "data.h"
#include "dc.h"
#include "dnd.h"
#include "docview.h"
#include "dvc.h"
#include "events.h"
#include "file.h"
#include "gdi.h"
#include "grid.h"
#include "help.h"
#include "html.h"
#include "logging.h"
#include "managedwnd.h"
#include "media.h"
#include "menus.h"
#include "misc.h"
#include "miscwnd.h"
#include "net.h"
#include "pickers.h"
#include "printing.h"
#include "ribbon.h"
#include "richtext.h"
#include "rtti.h"
#include "stc.h"
#include "streams.h"
#include "threading.h"
#include "validator.h"
#include "vfs.h"
#include "webview.h"
#include "winlayout.h"
#include "xml.h"
#include "xrc.h"
#include "others.h"


BEGIN_EXTERN_C()
void php_wxWebViewHistoryItem_free(void *object TSRMLS_DC) 
{
    zo_wxWebViewHistoryItem* custom_object = (zo_wxWebViewHistoryItem*) object;
    
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHistoryItem_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	if(custom_object->native_object != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
		#endif
		
		if(custom_object->is_user_initialized)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
       
            delete custom_object->native_object;
			
			custom_object->native_object = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxWebViewHistoryItem done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}

	zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxWebViewHistoryItem_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHistoryItem_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	zval *temp;
    zend_object_value retval;
    zo_wxWebViewHistoryItem* custom_object;
    custom_object = (zo_wxWebViewHistoryItem*) emalloc(sizeof(zo_wxWebViewHistoryItem));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
#endif

	retval.handle = zend_objects_store_put(custom_object, NULL, php_wxWebViewHistoryItem_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();

    custom_object->native_object = NULL;
	custom_object->object_type = PHP_WXWEBVIEWHISTORYITEM_TYPE;
	custom_object->is_user_initialized = 0;
	
    return retval;
}
END_EXTERN_C()

/* {{{ proto  wxWebViewHistoryItem::wxWebViewHistoryItem(string url, string title)
   Construtor. */
PHP_METHOD(php_wxWebViewHistoryItem, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewHistoryItem* current_object;
	wxWebViewHistoryItem_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	int arguments_received = ZEND_NUM_ARGS();
	
	
	//Parameters for overload 0
	char* url0;
	long url_len0;
	char* title0;
	long title_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'ss' (&url0, &url_len0, &title0, &title_len0)\n");
		#endif

		char parse_parameters_string[] = "ss";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &url0, &url_len0, &title0, &title_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(url0, wxConvUTF8), wxString(title0, wxConvUTF8))\n");
				#endif

				native_object = new wxWebViewHistoryItem_php(wxString(url0, wxConvUTF8), wxString(title0, wxConvUTF8));

				native_object->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		native_object->phpObj = getThis();
		

		current_object = (zo_wxWebViewHistoryItem*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		current_object->native_object = native_object;
		
		current_object->is_user_initialized = 1;
		
		#ifdef ZTS 
		native_object->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewHistoryItem::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto string wxWebViewHistoryItem::GetUrl() */
PHP_METHOD(php_wxWebViewHistoryItem, GetUrl)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::GetUrl\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewHistoryItem* current_object;
	wxphp_object_type current_object_type;
	wxWebViewHistoryItem_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxWebViewHistoryItem*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxWebViewHistoryItem::GetUrl call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXWEBVIEWHISTORYITEM_TYPE){
				references = &((wxWebViewHistoryItem_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_STRING(wxWebViewHistoryItem::GetUrl().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHistoryItem_php*)native_object)->GetUrl();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHistoryItem::GetUrl\n");
	}
}
/* }}} */

/* {{{ proto string wxWebViewHistoryItem::GetTitle() */
PHP_METHOD(php_wxWebViewHistoryItem, GetTitle)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHistoryItem::GetTitle\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewHistoryItem* current_object;
	wxphp_object_type current_object_type;
	wxWebViewHistoryItem_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxWebViewHistoryItem*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxWebViewHistoryItem::GetTitle call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXWEBVIEWHISTORYITEM_TYPE){
				references = &((wxWebViewHistoryItem_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_STRING(wxWebViewHistoryItem::GetTitle().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHistoryItem_php*)native_object)->GetTitle();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHistoryItem::GetTitle\n");
	}
}
/* }}} */

BEGIN_EXTERN_C()
void php_wxWebViewHandler_free(void *object TSRMLS_DC) 
{
    zo_wxWebViewHandler* custom_object = (zo_wxWebViewHandler*) object;
    
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHandler_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	if(custom_object->native_object != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
		#endif
		
		if(custom_object->is_user_initialized)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
       
            delete custom_object->native_object;
			
			custom_object->native_object = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxWebViewHandler done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}

	zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxWebViewHandler_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewHandler_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	zval *temp;
    zend_object_value retval;
    zo_wxWebViewHandler* custom_object;
    custom_object = (zo_wxWebViewHandler*) emalloc(sizeof(zo_wxWebViewHandler));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
#endif

	retval.handle = zend_objects_store_put(custom_object, NULL, php_wxWebViewHandler_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();

    custom_object->native_object = NULL;
	custom_object->object_type = PHP_WXWEBVIEWHANDLER_TYPE;
	custom_object->is_user_initialized = 0;
	
    return retval;
}
END_EXTERN_C()

/* {{{ proto  wxWebViewHandler::wxWebViewHandler(string scheme)
   Constructor. */
PHP_METHOD(php_wxWebViewHandler, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHandler::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewHandler* current_object;
	wxWebViewHandler_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	int arguments_received = ZEND_NUM_ARGS();
	
	
	//Parameters for overload 0
	char* scheme0;
	long scheme_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&scheme0, &scheme_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &scheme0, &scheme_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(scheme0, wxConvUTF8))\n");
				#endif

				native_object = new wxWebViewHandler_php(wxString(scheme0, wxConvUTF8));

				native_object->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		native_object->phpObj = getThis();
		

		current_object = (zo_wxWebViewHandler*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		current_object->native_object = native_object;
		
		current_object->is_user_initialized = 1;
		
		#ifdef ZTS 
		native_object->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewHandler::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto string wxWebViewHandler::GetName() */
PHP_METHOD(php_wxWebViewHandler, GetName)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewHandler::GetName\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewHandler* current_object;
	wxphp_object_type current_object_type;
	wxWebViewHandler_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxWebViewHandler*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxWebViewHandler::GetName call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXWEBVIEWHANDLER_TYPE){
				references = &((wxWebViewHandler_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXWEBVIEWARCHIVEHANDLER_TYPE) && (!reference_type_found)){
				references = &((wxWebViewArchiveHandler_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 0)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with '' ()\n");
		#endif

		overload0_called = true;
		already_called = true;
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 0:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing RETURN_STRING(wxWebViewHandler::GetName().fn_str(), 1)\n\n");
				#endif

				wxString value_to_return0;
				value_to_return0 = ((wxWebViewHandler_php*)native_object)->GetName();
				char* temp_string0;
				temp_string0 = (char*)malloc(sizeof(wxChar)*(value_to_return0.size()+1));
				strcpy (temp_string0, (const char *) value_to_return0.char_str() );
				ZVAL_STRING(return_value, temp_string0, 1);
				free(temp_string0);


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewHandler::GetName\n");
	}
}
/* }}} */

/* {{{ proto wxFSFile wxWebViewHandler::GetFile(string uri) */
wxFSFile* wxWebViewHandler_php::GetFile(const wxString& uri)
{
	static zend_function* cached_function = NULL;
	static bool is_php_user_space_implemented = true;
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual wxWebViewHandler::GetFile\n");
	php_printf("===========================================\n");
	#endif
	
	zval** params[1];
	zval *arguments[1];
	
	//Initilize arguments array
	for(int i=0; i<1; i++)
	{
		ALLOC_INIT_ZVAL(arguments[i]);
	}

	zval* return_value;
	MAKE_STD_ZVAL(return_value);
	zval function_name;
	ZVAL_STRING(&function_name, "GetFile", 0);
	char* temp_string;
	void* return_object;
	int function_called;
	
	//Parameters for conversion
	temp_string = (char*)malloc(sizeof(wxChar)*(uri.size()+1));
	strcpy(temp_string, (const char *) uri.char_str());
	ZVAL_STRING(arguments[0], temp_string, 1);
	free(temp_string);
		
	for(int i=0; i<1; i++)
	{
		params[i] = &arguments[i];
	}

	#ifdef USE_WXPHP_DEBUG
	php_printf("Trying to call user defined method\n");
	#endif
	
	if(is_php_user_space_implemented)
	{
		function_called = wxphp_call_method((zval**) &this->phpObj, NULL, &cached_function, "GetFile", 7, &return_value, 1, params TSRMLS_CC);
	}
	else
	{
		function_called = FAILURE;
	}
    
    	
	//Delete already used parameters from memory
	for(int i=0; i<1; i++)
	{
		zval_ptr_dtor(&arguments[i]);
	}
	
	if(function_called == FAILURE)
	{
		is_php_user_space_implemented = false;
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Invocation of user defined method failed\n");
		#endif
		
		wxMessageBox("Failed to call virtual method 'wxWebViewHandler::GetFile'!", "Error", wxOK|wxICON_ERROR);
	}

	#ifdef USE_WXPHP_DEBUG
	php_printf("Returning userspace value.\n");
	#endif
		
	if(Z_TYPE_P(return_value) == IS_OBJECT)
	{
		return_object = (void*) ((zo_wxFSFile*) zend_object_store_get_object(return_value TSRMLS_CC))->native_object;
	}

	//Threat it as a normal object on the calling function and not a php user space intiialized one
	((zo_wxFSFile*) zend_object_store_get_object(return_value TSRMLS_CC))->is_user_initialized = 0;
	wxFSFile_php* var = (wxFSFile_php*) return_object;
	var->references.UnInitialize();

	return (wxFSFile*) return_object;
	
}
/* }}} */

BEGIN_EXTERN_C()
void php_wxWebViewArchiveHandler_free(void *object TSRMLS_DC) 
{
    zo_wxWebViewArchiveHandler* custom_object = (zo_wxWebViewArchiveHandler*) object;
    
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewArchiveHandler_free on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	if(custom_object->native_object != NULL)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Pointer not null\n");
		php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
		#endif
		
		if(custom_object->is_user_initialized)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Deleting pointer with delete\n");
			#endif
			
       
            delete custom_object->native_object;
			
			custom_object->native_object = NULL;
		}
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Deletion of wxWebViewArchiveHandler done\n");
		php_printf("===========================================\n\n");
		#endif
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Not user space initialized\n");
		#endif
	}

	zend_object_std_dtor(&custom_object->zo TSRMLS_CC);
    efree(custom_object);
}

zend_object_value php_wxWebViewArchiveHandler_new(zend_class_entry *class_type TSRMLS_DC)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_wxWebViewArchiveHandler_new on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n");
	#endif
	
	zval *temp;
    zend_object_value retval;
    zo_wxWebViewArchiveHandler* custom_object;
    custom_object = (zo_wxWebViewArchiveHandler*) emalloc(sizeof(zo_wxWebViewArchiveHandler));

    zend_object_std_init(&custom_object->zo, class_type TSRMLS_CC);

#if PHP_VERSION_ID < 50399
	ALLOC_HASHTABLE(custom_object->zo.properties);
    zend_hash_init(custom_object->zo.properties, 0, NULL, ZVAL_PTR_DTOR, 0);
    zend_hash_copy(custom_object->zo.properties, &class_type->default_properties, (copy_ctor_func_t) zval_add_ref,(void *) &temp, sizeof(zval *));
#else
	object_properties_init(&custom_object->zo, class_type);
#endif

	retval.handle = zend_objects_store_put(custom_object, NULL, php_wxWebViewArchiveHandler_free, NULL TSRMLS_CC);
	retval.handlers = zend_get_std_object_handlers();

    custom_object->native_object = NULL;
	custom_object->object_type = PHP_WXWEBVIEWARCHIVEHANDLER_TYPE;
	custom_object->is_user_initialized = 0;
	
    return retval;
}
END_EXTERN_C()

/* {{{ proto  wxWebViewArchiveHandler::wxWebViewArchiveHandler(string scheme)
   Constructor. */
PHP_METHOD(php_wxWebViewArchiveHandler, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewArchiveHandler::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewArchiveHandler* current_object;
	wxWebViewArchiveHandler_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	int arguments_received = ZEND_NUM_ARGS();
	
	
	//Parameters for overload 0
	char* scheme0;
	long scheme_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&scheme0, &scheme_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &scheme0, &scheme_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing __construct(wxString(scheme0, wxConvUTF8))\n");
				#endif

				native_object = new wxWebViewArchiveHandler_php(wxString(scheme0, wxConvUTF8));

				native_object->references.Initialize();
				break;
			}
		}
	}

		
	if(already_called)
	{
		native_object->phpObj = getThis();
		

		current_object = (zo_wxWebViewArchiveHandler*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		current_object->native_object = native_object;
		
		current_object->is_user_initialized = 1;
		
		#ifdef ZTS 
		native_object->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract class or wrong type/count of parameters passed to: wxWebViewArchiveHandler::__construct\n");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
/* }}} */

/* {{{ proto wxFSFile wxWebViewArchiveHandler::GetFile(string uri) */
PHP_METHOD(php_wxWebViewArchiveHandler, GetFile)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWebViewArchiveHandler::GetFile\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWebViewArchiveHandler* current_object;
	wxphp_object_type current_object_type;
	wxWebViewArchiveHandler_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxWebViewArchiveHandler*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxWebViewArchiveHandler::GetFile call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXWEBVIEWARCHIVEHANDLER_TYPE){
				references = &((wxWebViewArchiveHandler_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	char* uri0;
	long uri_len0;
	bool overload0_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received == 1)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 's' (&uri0, &uri_len0)\n");
		#endif

		char parse_parameters_string[] = "s";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &uri0, &uri_len0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxWebViewArchiveHandler::GetFile(wxString(uri0, wxConvUTF8)) to return object pointer\n\n");
				#endif

				wxFSFile_php* value_to_return1;
				value_to_return1 = (wxFSFile_php*) ((wxWebViewArchiveHandler_php*)native_object)->GetFile(wxString(uri0, wxConvUTF8));

				if(value_to_return1 == NULL){
					ZVAL_NULL(return_value);
				}
				else if(value_to_return1->references.IsUserInitialized()){
					if(value_to_return1->phpObj != NULL){
						*return_value = *value_to_return1->phpObj;
						zval_add_ref(&value_to_return1->phpObj);
						return_is_user_initialized = true;
					}
					else{
						zend_error(E_ERROR, "Could not retreive original zval.");
					}
				}
				else{
					object_init_ex(return_value, php_wxFSFile_entry);
					((zo_wxFSFile*) zend_object_store_get_object(return_value TSRMLS_CC))->native_object = (wxFSFile_php*) value_to_return1;
				}

				if(Z_TYPE_P(return_value) != IS_NULL && (void*)value_to_return1 != (void*)native_object && return_is_user_initialized){
					references->AddReference(return_value, "wxWebViewArchiveHandler::GetFile at call with 1 argument(s)");
				}


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWebViewArchiveHandler::GetFile\n");
	}
}
/* }}} */

