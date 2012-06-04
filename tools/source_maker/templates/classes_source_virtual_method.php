<?=proto_begin($method_name, $class_name)?>
<?=$method_definition["return_type"] ?> <?=$class_name?>_php::<?=$method_name?>(<?=function_arguments_string($method_definition, false)?>)<?=$method_definition["constant"]?"const\n":"\n"?>
{
	static zend_function* cached_function = NULL;
	static bool is_php_user_space_implemented = true;
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual <?=$class_name?>::<?=$method_name?>\n");
	php_printf("===========================================\n");
	#endif
	
<? if(count($method_definition["parameters_type"])<=0){ ?>
	zval** params[1];
	zval* arguments[1];
	arguments[0] = NULL;
	params[0] = NULL;
<? } else{ ?>
	zval** params[<?=count($method_definition["parameters_type"])?>];
	zval *arguments[<?=count($method_definition["parameters_type"])?>];
	
	//Initilize arguments array
	for(int i=0; i<<?=count($method_definition["parameters_type"])?>; i++)
	{
		MAKE_STD_ZVAL(arguments[i]);
	}
<? } ?>

	zval* return_value;
	MAKE_STD_ZVAL(return_value);
	zval function_name;
	ZVAL_STRING(&function_name, "<?=$method_name?>", 0);
	char* temp_string;
	void* return_object;
	int function_called;
	
	<?=class_virtual_method_parameters_to_zvals($method_definition, $method_name, $class_name)?>
	
<? if(count($method_definition["parameters_type"])>0){ ?>
	for(int i=0; i<<?=count($method_definition["parameters_type"])?>; i++)
	{
		params[i] = &arguments[i];
	}
<? } ?>

	#ifdef USE_WXPHP_DEBUG
	php_printf("Trying to call user defined method\n");
	#endif
	
	if(is_php_user_space_implemented)
	{
		function_called = wxphp_call_method((zval**) &this->phpObj, NULL, &cached_function, "<?=$method_name?>", <?=strlen($method_name)?>, &return_value, <?=count($method_definition["parameters_type"])?>, params TSRMLS_CC);
	}
	else
	{
		function_called = FAILURE;
	}
	
<? if(count($method_definition["parameters_type"])>0){ ?>
	//Delete already used parameters from memory
	for(int i=0; i<<?=count($method_definition["parameters_type"])?>; i++)
	{
		efree(arguments[i]);
	}
<? } ?>
	
	if(function_called == FAILURE)
	{
		is_php_user_space_implemented = false;
		
		#ifdef USE_WXPHP_DEBUG
		php_printf("Invocation of user defined method failed\n");
		#endif
		
<? if($method_definition["pure_virtual"]){ ?>
		wxMessageBox("Failed to call virtual method '<?=$class_name?>::<?=$method_name?>'!", "Error", wxOK|wxICON_ERROR);
<? } ?>
	}
<? if(!$method_definition["pure_virtual"]){ ?>
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Returning userspace value.\n");
		#endif
		
		<?=class_virtual_method_return($method_definition, $method_name, $class_name)?>
	}
<? }else{ ?>

	#ifdef USE_WXPHP_DEBUG
	php_printf("Returning userspace value.\n");
	#endif
		
	<?=class_virtual_method_return($method_definition, $method_name, $class_name)?>
<? } ?>
	
<? if(!$method_definition["pure_virtual"]){ ?>
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling original method\n");
	php_printf("===========================================\n\n");
	#endif
	
	//Call original method
<? if($method_definition["return_type"]!="void"){ ?>
	return <?=$class_name?>::<?=$method_name?>(<?=function_arguments_call_string($method_definition)?>);
<? }else{ ?>
	<?=$class_name?>::<?=$method_name?>(<?=function_arguments_call_string($method_definition)?>);
<? } ?>
<? } ?>
}
<?=proto_end()?>
