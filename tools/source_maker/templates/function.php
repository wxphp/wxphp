<?=proto_begin($function_name)?>
PHP_FUNCTION(php_<?=$function_name?>)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking function <?=$function_name?>\n");
	php_printf("===========================================\n");
	#endif
	
	void* argument_native_object = NULL;
	
	//Variables used thru the code
	int arguments_received = ZEND_NUM_ARGS();
	zval* dummy;
	bool already_called = false;
	bool return_is_user_initialized = false;
	
	<?=function_parameters($function_data, $function_name)?>
	
	<?=function_called_overload($function_data, $function_name)?>
	
	<?=function_return($function_data, $function_name)?>
	
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to <?=$function_name?>()\n");
	}
}
<?=proto_end()?>
