/* {{{ proto  wxImage::SetData(int &data, int new_width, int new_height, bool static_data)
   This is an overloaded member function, provided for convenience. It differs from the above function only in what argument(s) it accepts. */
PHP_METHOD(php_wxImage, SetData)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxImage::SetData\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxImage* current_object;
	wxphp_object_type current_object_type;
	wxImage_php* native_object;
	void* argument_native_object = NULL;
	
	//Other variables used thru the code
	zval* dummy = NULL;
	bool already_called = false;
	wxPHPObjectReferences* references;
	int arguments_received = ZEND_NUM_ARGS();
	bool return_is_user_initialized = false;
	
	//Get native object of the php object that called the method
	if(getThis() != NULL) 
	{
		current_object = (zo_wxImage*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxImage::SetData call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXIMAGE_TYPE){
				references = &((wxImage_php*)native_object)->references;
				reference_type_found = true;
			}
		}
	}
	#ifdef USE_WXPHP_DEBUG
	else
	{
		php_printf("Processing the method call as static\n");
	}
	#endif
	
	//Parameters for overload 0
	char* data0;
    long data0_len;
	long new_width0;
	long new_height0;
	bool static_data0;
	bool overload0_called = false;
	//Parameters for overload 1
	char* data1;
    char* data1_len;
	bool static_data1;
	bool overload1_called = false;
		
	//Overload 0
	overload0:
	if(!already_called && arguments_received >= 3  && arguments_received <= 4)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'lll|b' (data0, &new_width0, &new_height0, &static_data0)\n");
		#endif

		char parse_parameters_string[] = "sll|b";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &data0, &data0_len, &new_width0, &new_height0, &static_data0 ) == SUCCESS)
		{
			overload0_called = true;
			already_called = true;
		}
	}

	//Overload 1
	overload1:
	if(!already_called && arguments_received >= 1  && arguments_received <= 2)
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Parameters received %d\n", arguments_received);
		php_printf("Parsing parameters with 'l|b' (data1, &static_data1)\n");
		#endif

		char parse_parameters_string[] = "s|b";
		if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, &data1, &data1_len, &static_data1 ) == SUCCESS)
		{
			overload1_called = true;
			already_called = true;
		}
	}

		
	if(overload0_called)
	{
		switch(arguments_received)
		{
			case 3:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxImage::SetData((unsigned char*) data0, (int) new_width0, (int) new_height0)\n\n");
				#endif

				((wxImage_php*)native_object)->SetData((unsigned char*) data0, (int) new_width0, (int) new_height0);

				return;
				break;
			}
			case 4:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxImage::SetData((unsigned char*) data0, (int) new_width0, (int) new_height0, static_data0)\n\n");
				#endif

				((wxImage_php*)native_object)->SetData((unsigned char*) data0, (int) new_width0, (int) new_height0, static_data0);

				return;
				break;
			}
		}
	}

	if(overload1_called)
	{
		switch(arguments_received)
		{
			case 1:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxImage::SetData((unsigned char*) data1)\n\n");
				#endif

				((wxImage_php*)native_object)->SetData((unsigned char*) data1);

				return;
				break;
			}
			case 2:
			{
				#ifdef USE_WXPHP_DEBUG
				php_printf("Executing wxImage::SetData((unsigned char*) data1, static_data1)\n\n");
				#endif

				((wxImage_php*)native_object)->SetData((unsigned char*) data1, static_data1);

				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxImage::SetData\n");
	}
}
/* }}} */

