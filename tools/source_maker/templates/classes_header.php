extern zend_class_entry* php_<?=$class_name?>_entry;
void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry * TSRMLS_DC);

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
	
<?if($class_name == "wxEvtHandler"){?>
	void onEvent(wxEvent& evnt);
<? } ?>
	void ***tsrm_ls;
	zval* phpObj;
	void** properties;
	wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
struct zo_<?=$class_name?> 
{
    zend_object zo;
    <?=$class_name?>_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
};

void php_<?=$class_name?>_free(void *object TSRMLS_DC);
zend_object_value php_<?=$class_name?>_new(zend_class_entry *class_type TSRMLS_DC);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_<?=$class_name?>_functions[] = {
<?php
	$methods_entry = "";
	funcsOfClass($class_name, 1, $methods_entry);
	print $methods_entry;
?>
<?if(isset($defClassProperties[$class_name]) && isset($defIni[$class_name][$class_name])){?>
	PHP_ME(php_<?=$class_name?>, __get, wxphp_<?=$file_name?>_get_args, ZEND_ACC_PUBLIC)
<?}?>
	PHP_FE_END
};
#endif

