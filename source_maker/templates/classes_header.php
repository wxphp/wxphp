extern zend_class_entry *php_<?=$class_name?>_entry;
void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

#define PHP_<?=$class_name?>_NAME "<?=$class_name?>"
#define le_<?=$class_name?>_name  "native <?=$class_name?>"

class <?=$class_name?>_php <?if(!$class_methods["_forward_declaration"]){?>: public <?=$class_name?><?}?>
{
	public:
	
	<?=class_constructors_declaration($class_name, $class_methods)?>
	
	<?=class_virtual_declarations($class_name, $class_methods)?>
		
	zval *evnArray;
	void onEvent(wxEvent& evnt);
	void ***tsrm_ls;
	zval* phpObj;
};

extern int le_<?=$class_name?>;

static function_entry php_<?=$class_name?>_functions[] = {
<?php
	$methods_entry = "";
	funcsOfClass($class_name, 1, $methods_entry);
	print $methods_entry;
?>
	{ NULL, NULL, NULL }
};

