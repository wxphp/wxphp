
extern zend_class_entry *php_wxApp_entry;

#define PHP_wxApp_NAME "wxApp"
#define le_wxApp_name  "native wxApp"

extern int le_wxApp;

class wxAppWrapper : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
		zval* phpObj;
		void ***tsrm_ls;
};

static function_entry php_wxApp_functions[] = {
	PHP_ME(php_wxApp, helloWorld ,NULL,ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, SetInstance ,NULL,ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, Yield ,NULL,ZEND_ACC_PUBLIC)
	PHP_ME(php_wxApp, __construct, NULL,ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	{ NULL, NULL, NULL }
};
