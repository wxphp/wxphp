<?=proto_begin($method_name, $class_name)?>
PHP_METHOD(php_<?=$class_name?>, Disconnect)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf("Invoking <?=$class_name?>::Disconnect\n");
    php_printf("===========================================\n");
    php_printf("Parameters received: %d\n", ZEND_NUM_ARGS());
    #endif

    zo_<?=$class_name?>* current_object;
    wxEvtHandler* native_object;

    //Get native object of the php object that called the method
    if (getThis() != NULL)
    {
        current_object = Z_<?=$class_name?>_P(getThis());

        if(current_object->native_object == NULL)
        {
            zend_error(
                E_ERROR,
                "Failed to get the native object for "
                "<?=$class_name . "::" . $method_name ?> call\n"
            );

            return;
        }
        else
        {
            native_object = (wxEvtHandler*) current_object->native_object;
        }
    }
    else
    {
        zend_error(E_ERROR, "Could not process Disconnect call as static\n");
    }

    zend_fcall_info fci = empty_fcall_info;
    zend_fcall_info_cache fci_cache = empty_fcall_info_cache;
    long flag, id0 = 0, id1 = 0;
    int args = ZEND_NUM_ARGS();

    //To supress some warnings due to passing a string directly
    char parse_parameters_4[] = "lll";
    char parse_parameters_3[] = "ll";
    char parse_parameters_2[] = "l";

    switch(args)
    {
        case 3:
            #ifdef USE_WXPHP_DEBUG
            php_printf("Parsing parameters with \"lll\"\n");
            #endif

            if(
                zend_parse_parameters_ex(
                    ZEND_PARSE_PARAMS_QUIET,
                    args,
                    parse_parameters_4,
                    &id0,
                    &id1,
                    &flag
                ) == FAILURE
            )
            {
                zend_error(E_ERROR, "Incorrect type of parameters");
                return;
            }
            break;
        case 2:
            #ifdef USE_WXPHP_DEBUG
            php_printf("Parsing parameters with \"ll\"\n");
            #endif

            if(
                zend_parse_parameters_ex(
                    ZEND_PARSE_PARAMS_QUIET,
                    args,
                    parse_parameters_3,
                    &id0,
                    &flag
                ) == FAILURE
            )
            {
                zend_error(E_ERROR, "Incorrect type of parameters");
                return;
            }
            break;
        case 1:
            #ifdef USE_WXPHP_DEBUG
            php_printf("Parsing parameters with \"l\"\n");
            #endif

            if(
                zend_parse_parameters_ex(
                    ZEND_PARSE_PARAMS_QUIET,
                    args,
                    parse_parameters_2,
                    &flag
                ) == FAILURE
            )
            {
                zend_error(E_ERROR, "Incorrect type of parameters");
                return;
            }
            break;
        default:
            zend_error(E_ERROR, "Wrong amount of parameters");
    }

    switch(args)
    {
        case 3:
            #ifdef USE_WXPHP_DEBUG
            php_printf(
                "Executing: native_object->Disconnect("
                "id0, id1, flag, "
                "wxEventHandler(<?=$class_name?>_php::onEvent)"
                ");\n"
            );
            php_printf(
                "Object id: %d Object last id: %d Event type: %d\n",
                (int)id0, (int)id1, (int)flag
            );
            #endif

            RETVAL_BOOL(native_object->Disconnect(
                id0,
                id1,
                flag,
                wxEventHandler(<?=$class_name?>_php::onEvent)
            ));
            return;
            break;
        case 2:
            #ifdef USE_WXPHP_DEBUG
            php_printf(
                "Executing: native_object->Disconnect("
                "id0, flag, "
                "wxEventHandler(<?=$class_name?>_php::onEvent)"
                ");\n"
            );
            php_printf(
                "Object id: %d Event type: %d\n", (int)id0, (int)flag
            );
            #endif

            RETVAL_BOOL(native_object->Disconnect(
                id0,
                flag,
                wxEventHandler(<?=$class_name?>_php::onEvent)
            ));
            return;
            break;
        case 1:
            #ifdef USE_WXPHP_DEBUG
            php_printf(
                "Executing: native_object->Disconnect("
                "flag, "
                "wxEventHandler(<?=$class_name?>_php::onEvent)"
                ");\n"
            );
            php_printf("Event type: %d\n", (int)flag);
            #endif

            RETVAL_BOOL(native_object->Disconnect(
                flag,
                wxEventHandler(<?=$class_name?>_php::onEvent)
            ));
            return;
            break;
        default:
            wxMessageBox(
                "Failed to remove event",
                "Error",
                wxOK|wxICON_ERROR
            );
            break;
    }

    #ifdef USE_WXPHP_DEBUG
    php_printf("===========================================\n\n");
    #endif
}
<?=proto_end()?>
