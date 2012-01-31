void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
<?if(!inherits_from_class("wxSizer", $class_name)){?>
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_<?=$class_name?>_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n\n");
	#endif
	
	<?=$class_name?>_php* object = (<?=$class_name?>_php*)rsrc->ptr;
	
	if(object->references.IsUserInitialized())
	{
		delete object;
	}
<?}else{?>
	#ifdef USE_WXPHP_DEBUG
	php_printf("Obviate php_<?=$class_name?>_destruction_handler call on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n\n");
	#endif
<?}?>
}
