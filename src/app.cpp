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

int wxAppWrapper::OnExit()
{
	zval *retval;
	zval func_name;

	ZVAL_STRINGL(&func_name, (char *)"OnExit", sizeof("OnExit")-1, 0);
	
	if(call_user_function_ex(NULL, &phpObj, &func_name, &retval, 0, NULL, 0, NULL TSRMLS_CC) == FAILURE)
	{
		wxMessageBox(_T("Failed Call!\n"));
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
		wxMessageBox(_T("Failed Call!\n"));
	}

	return true;
}


IMPLEMENT_APP_NO_MAIN(wxAppWrapper);


/* {{{ proto wxApp wxApp::__construct() 
   Constructor. */
PHP_METHOD(php_wxApp, __construct)
{
	wxAppWrapper* my = new wxAppWrapper();
	my->phpObj = getThis();
	
	#ifdef ZTS
	my->tsrm_ls = tsrm_ls;
	#endif
	
	add_property_resource(getThis(),(char *)"wxResource", zend_list_insert(my, le_wxApp));
}

/* {{{ proto void wxApp::SetInstance(wxApp app) 
   Allows external code to modify global wxTheApp, but you should really know what you're doing if you call it.*/
PHP_METHOD(php_wxApp, SetInstance)
{
	zval **tmp;
	int id_to_find;
	void *property;
	zval *objvar;
	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, (char *)"O", &objvar, php_wxApp_entry) == FAILURE)
	{
		RETURN_NULL();
	}
	
	if(zend_hash_find(Z_OBJPROP_P(objvar), (char *)"wxResource", sizeof("wxResource"),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	
	id_to_find = Z_LVAL_PP(tmp);
	
	property = zend_list_find(id_to_find, &le_wxApp);
	
	wxApp::SetInstance((wxAppWrapper*) property);
}

/* {{{ proto bool wxApp::Yield() */
PHP_METHOD(php_wxApp, Yield)
{
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	void *_this;
	
	if (zend_hash_find(Z_OBJPROP_P(getThis()), (char *)"wxResource", sizeof("wxResource"),  (void **)&tmp) == FAILURE) 
	{
		return;
	}
	
	id_to_find = Z_RESVAL_P(*tmp);
	_this = zend_list_find(id_to_find, &rsrc_type);
	
	if (ZEND_NUM_ARGS()==0)
	{
		bool ret0;
		int gr = ZEND_NUM_ARGS();
		switch(gr)
		{
			case 0:
				ret0 =  ((wxApp*)_this)->Yield();
				break;
			default:
				break;
		}
		RETURN_BOOL(ret0)
	}

}


