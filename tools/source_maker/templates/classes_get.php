PHP_METHOD(php_<?=$class_name?>, __get)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::__get\n");
	php_printf("===========================================\n");
	#endif
	
	int arguments_received = ZEND_NUM_ARGS();
	zo_<?=$class_name?>* current_object;
	<?=$class_name?>_php* native_object;
	
	char* name;
	int name_len;
	
	//Get native object of the php object that called the method
	if (getThis() != NULL) 
	{
		current_object = (zo_<?=$class_name?>*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for <?=$class_name . "::" . $method_name ?> call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
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
