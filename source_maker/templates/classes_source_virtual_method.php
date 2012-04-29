<?=$method_definition["return_type"] ?> <?=$class_name?>_php::<?=$method_name?>(<?=function_arguments_string($method_definition, false)?>)<?=$method_definition["constant"]?"const\n":"\n"?>
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual <?=$class_name?>::<?=$method_name?>\n");
	php_printf("===========================================\n");
	#endif
	
<? if(count($method_definition["parameters_type"])<=0){ ?>
	zval* arguments[1];
	arguments[0] = NULL;
<? } else{ ?>
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
	char _wxResource[] = "wxResource";
	zval **tmp;
	int id_to_find;
	void* return_object;
	int rsrc_type;
	
	<?=class_virtual_method_parameters_to_zvals($method_definition, $method_name, $class_name)?>
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("Trying to call user defined method\n");
	#endif
	
	if(call_user_function(NULL, (zval**) &this->phpObj, &function_name, return_value, <?=count($method_definition["parameters_type"])?>, arguments TSRMLS_CC) == FAILURE)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Invocation of user defined method failed\n");
		#endif
		
<? if($method_definition["pure_virtual"]){ ?>
		wxMessageBox("Failed to call virtual method '<?=$method_name?>'!", "Error");
<? } ?>
	}
<? if(!$method_definition["pure_virtual"]){ ?>
	else
	{
<? } ?>
		#ifdef USE_WXPHP_DEBUG
		php_printf("Returning userspace value.\n");
		#endif
		
		<?=class_virtual_method_return($method_definition, $method_name, $class_name)?>
<? if(!$method_definition["pure_virtual"]){ ?>
	}
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
