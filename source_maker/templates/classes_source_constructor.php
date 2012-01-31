PHP_METHOD(php_<?=$class_name?>, __construct)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::__construct\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the constructor uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	void *_this;
	zval* dummy;
	bool already_called = false;
	
	<?=function_parameters($method_definitions, $method_name, $class_name)?>
	
	<?=function_called_overload($method_definitions, $method_name, $class_name)?>
	
	<?=function_return($method_definitions, $method_name, $class_name, true)?>
	
	if(already_called)
	{
		long id_to_find = zend_list_insert(_this, le_<?=$class_name?>);
		
		add_property_resource(getThis(), _wxResource, id_to_find);
		
		MAKE_STD_ZVAL(((<?=$class_name?>_php*) _this)->evnArray);
		
		array_init(((<?=$class_name?>_php*) _this)->evnArray);
		
		((<?=$class_name?>_php*) _this)->phpObj = getThis();
		
		((<?=$class_name?>_php*) _this)->InitProperties();
		
		#ifdef ZTS 
		((<?=$class_name?>_php*) _this)->TSRMLS_C = TSRMLS_C;
		#endif
	}
	else
	{
		zend_error(E_ERROR, "Abstract type: failed to call a proper constructor");
	}
	
	#ifdef USE_WXPHP_DEBUG
		php_printf("===========================================\n\n");
	#endif
}
