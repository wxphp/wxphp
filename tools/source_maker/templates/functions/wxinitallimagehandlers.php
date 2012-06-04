/* {{{ proto void wxInitAllImageHandlers()
   Initializes all available image handlers. */
PHP_FUNCTION(php_wxInitAllImageHandlers)
{
	wxInitAllImageHandlers();
	RETVAL_TRUE;
}
/* }}} */

