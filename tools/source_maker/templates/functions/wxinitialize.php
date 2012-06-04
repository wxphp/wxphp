/* {{{ proto bool wxInitialize()
   Initialize the library (may be called as many times as needed, but each call to wxInitialize() must be matched by wxUninitialize()). */
PHP_FUNCTION(php_wxInitialize)
{
	wxInitAllImageHandlers();
	RETVAL_BOOL(wxInitialize());
}
/* }}} */

