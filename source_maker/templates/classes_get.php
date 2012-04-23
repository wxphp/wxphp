PHP_METHOD(php_<?=$class_name?>, __get)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::__get\n");
	php_printf("===========================================\n");
	#endif
	
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	
	char* name;
	int name_len;
	
	//Get pointer of object that called this method if not a static method
	if (getThis() != NULL) 
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			zend_error(E_ERROR, "Failed to get the parent object that called <?=$class_name . "::" . $method_name ?>\n");
			
			return;
		}
		else
		{
			id_to_find = Z_RESVAL_P(*tmp);
			_this = zend_list_find(id_to_find, &parent_rsrc_type);
		}
	}
	else
	{
		zend_error(E_ERROR, "Could not process __get call as static\n");
	}
	
	char parse_parameters_string[] = "s";
	
	if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &name, &name_len ) == FAILURE)
	{
		RETVAL_NULL();
	}
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("Property to get: %s\n", name);
	php_printf("===========================================\n\n");
	#endif
	
	if(false){}
	<?=classes_get_property_code($class_name)?>
	else
	{
		RETVAL_NULL();
	}
	
}
