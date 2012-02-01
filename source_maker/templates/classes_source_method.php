PHP_METHOD(php_<?=$class_name?>, <?=$method_name?>)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::<?=$method_name?>\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int parent_rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	wxPHPObjectReferences* references;
	bool return_is_user_initialized = false;
	
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
			
			<?=references_cast_code($class_name)?>
		}
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Processing the method call as static\n");
		#endif
	}
	
	<?=function_parameters($method_definitions, $method_name, $class_name)?>
	
	<?=function_called_overload($method_definitions, $method_name, $class_name)?>
	
	<?=function_return($method_definitions, $method_name, $class_name)?>
	
}
