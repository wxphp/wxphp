<?=proto_begin($method_name, $class_name)?>
PHP_METHOD(php_<?=$class_name?>, <?=php_method_name($method_name)?>)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::<?=$method_name?>\n");
	php_printf("===========================================\n");
	#endif
	
	zo_<?=$class_name?>* current_object;
	wxphp_object_type current_object_type;
	<?=$class_name?>_php* native_object;
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
		current_object = (zo_<?=$class_name?>*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for <?=$class_name . "::" . $method_name ?> call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			<?=references_cast_code($class_name)?>
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	<?=function_parameters($method_definitions, $method_name, $class_name)?>
	
	<?=function_called_overload($method_definitions, $method_name, $class_name)?>
	
	<?=function_return($method_definitions, $method_name, $class_name)?>
	
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: <?=$class_name . "::" . $method_name ?>\n");
	}
}
<?=proto_end()?>
