void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_<?=$class_name?>_destruction_handler\n");
	php_printf("===========================================\n\n");
	#endif
	
	//TODO: Does something is needed to maintain memory leaks out?
	//delete (<?=$class_name?>*)rsrc->ptr;
}
