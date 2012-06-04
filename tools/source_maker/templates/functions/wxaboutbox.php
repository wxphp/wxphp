/* {{{ proto void wxAboutBox(wxAboutDialogInfo info, wxWindow parent)
   This function shows the standard about dialog containing the information specified in info. */
PHP_FUNCTION(php_wxAboutBox)
{
	wxAboutDialogInfo *info;
	zval *object;
	
	char parse_parameters[] = "O";
	
	if(zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &object, php_wxAboutDialogInfo_entry) == FAILURE)
	{
		RETURN_NULL();
	}
	
	info = (wxAboutDialogInfo*) ((zo_wxAboutDialogInfo*) zend_object_store_get_object(object TSRMLS_CC))->native_object;
	
	wxAboutBox(*info);
}
/* }}} */

