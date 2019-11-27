/* {{{ proto string wxImage::GetData()
   Returns the image data as an array. */
PHP_METHOD(php_wxImage, GetData)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking wxImage::GetData\n");
    php_printf("===========================================\n");
    #endif

    zo_wxImage* current_object;
    wxphp_object_type current_object_type;
    wxImage_php* native_object;
    void* argument_native_object = NULL;

    //Other variables used thru the code
    zval dummy;
    ZVAL_NULL(&dummy);
    bool already_called = false;
    wxPHPObjectReferences* references;
    int arguments_received = ZEND_NUM_ARGS();
    bool return_is_user_initialized = false;

    //Get native object of the php object that called the method
    if(getThis() != NULL)
    {
        current_object = Z_wxImage_P(getThis());

        if(current_object->native_object == NULL)
        {
            zend_error(
                E_ERROR,
                "Failed to get the native object for "
                "wxImage::GetData call\n"
            );

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
    bool overload0_called = false;

    //Overload 0
    overload0:
    if(!already_called && arguments_received == 0)
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Parameters received %d\n", arguments_received);
        php_printf("Parsing parameters with '' ()\n");
        #endif

        overload0_called = true;
        already_called = true;
    }

    if(overload0_called)
    {
        switch(arguments_received)
        {
            case 0:
            {
                #ifdef USE_WXPHP_DEBUG
                php_printf(
                    "Executing RETURN_STRING(wxImage::GetData())\n\n"
                );
                #endif

                size_t bytes_count = ((wxImage_php*)native_object)->GetWidth()
                    * ((wxImage_php*)native_object)->GetHeight()
                    * 3
                ;

                unsigned char* value_to_return0;
                value_to_return0 = (unsigned char*) emalloc(bytes_count);

                memcpy(
                    value_to_return0,
                    ((wxImage_php*)native_object)->GetData(),
                    bytes_count
                );

                RETVAL_STRINGL(
                    (char*) value_to_return0,
                    bytes_count
                );

                return;
                break;
            }
        }
    }

    //In case wrong type/count of parameters was passed
    if(!already_called)
    {
        zend_error(
            E_ERROR,
            "Wrong type or count of parameters passed to: "
            "wxImage::GetData\n"
        );
    }
}
/* }}} */

