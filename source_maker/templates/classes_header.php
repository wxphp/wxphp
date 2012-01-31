extern zend_class_entry *php_<?=$class_name?>_entry;
void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_<?=$class_name?>_NAME "<?=$class_name?>"
#define le_<?=$class_name?>_name  "native <?=$class_name?>"

class <?=$class_name?>_php<?if(!$class_methods["_forward_declaration"]){?>: public <?=$class_name?><?}?>
{
	public:
	
	<?=class_constructors_declaration($class_name, $class_methods)?>
	
	<?=class_virtual_declarations($class_name, $class_methods)?>
	
	void InitProperties(){
<?if(isset($defClassProperties[$class_name])){?>
<?=class_init_properties_code($class_name)?>
<?}?>
	}
	
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

extern int le_<?=$class_name?>;
    
static function_entry php_<?=$class_name?>_functions[] = {
<?php
	$methods_entry = "";
	funcsOfClass($class_name, 1, $methods_entry);
	print $methods_entry;
?>
<?if(isset($defClassProperties[$class_name]) && isset($defIni[$class_name][$class_name])){?>
	PHP_ME(php_<?=$class_name?>, __get, wxphp_get_args, ZEND_ACC_PUBLIC)
<?}?>
	{ NULL, NULL, NULL }
};

