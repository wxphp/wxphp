PHP_FUNCTION(php_<?=$function_name?>)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking function <?=$function_name?>\n");
	php_printf("===========================================\n");
	#endif
	
	//In case the function uses objects
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	char _wxResource[] = "wxResource";
	
	//Other variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	zval* dummy;
	bool already_called = false;
	bool return_is_user_initialized = false;
	
	<?=function_parameters($function_data, $function_name)?>
	
	<?=function_called_overload($function_data, $function_name)?>
	
	<?=function_return($function_data, $function_name)?>
	
}
