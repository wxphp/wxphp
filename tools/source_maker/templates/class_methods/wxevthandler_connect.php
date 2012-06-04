<?=proto_begin($method_name, $class_name)?>
void <?=$class_name?>_php::onEvent(wxEvent& evnt)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual <?=$class_name?>::onEvent\n");
	php_printf("===========================================\n");
	#endif
	
	zval *arg[1];
	MAKE_STD_ZVAL(arg[0]);
	TSRMLS_FETCH();

	if(0)
	{}
	<? foreach(derivationsOfClass('wxEvent') as $kevn=>$vevn){ ?>	
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(), wxT("<?=$kevn?>")))
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Converting event type '<?=$kevn?>' to zval to call user function.\n\n");
		#endif
		
		object_init_ex(arg[0], php_<?=$kevn?>_entry);
		((zo_<?=$kevn?>*) zend_object_store_get_object(arg[0] TSRMLS_CC))->native_object = (<?=$kevn?>_php*) &evnt;
	}
	<? } ?>
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(), wxT("wxEvent")))
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Converting event type 'wxEvent' to zval to call user function.\n\n");
		#endif
		
		object_init_ex(arg[0], php_wxEvent_entry);
		((zo_wxEvent*) zend_object_store_get_object(arg[0] TSRMLS_CC))->native_object = (wxEvent_php*) &evnt;
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Event type not declared\n\n");
		#endif
		
		wxString errorMsg;
		errorMsg += "Failed to pass as argument event of type: ";
		errorMsg += evnt.GetClassInfo()->GetClassName();
		wxMessageBox(errorMsg, "Error", wxOK|wxICON_ERROR);
	}

	char* wxname;
	zval dummy;
	zval* fc_name;
	wxCommandEvent* ce;
	wxPhpClientData* co;

	ce = (wxCommandEvent*) evnt.m_callbackUserData;
	co = (wxPhpClientData*) ce->GetClientObject();

	MAKE_STD_ZVAL(fc_name);
	
	wxname = (char*)emalloc(sizeof(wxChar)*(ce->GetString().size()+1));
	strcpy(wxname, (const char *) ce->GetString().char_str());
	
	ZVAL_STRING(fc_name, wxname, 1);

	if(call_user_function(NULL, &(co->phpObj), fc_name, &dummy, 1, arg TSRMLS_CC) == FAILURE)
	{
		wxString errorMessage = "Failed to call method: '";
		errorMessage += ce->GetString().char_str();
		errorMessage += "'";
		
		wxMessageBox(errorMessage, "Error", wxOK|wxICON_ERROR);
	}
	
	efree(arg[0]);
	efree(wxname);
	zval_ptr_dtor(&fc_name);
}

PHP_METHOD(php_<?=$class_name?>, Connect)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::Connect\n");
	php_printf("===========================================\n");
	php_printf("Parameters received: %d\n", ZEND_NUM_ARGS());
	#endif
	
	zo_<?=$class_name?>* current_object;
	wxEvtHandler* native_object;
	
	//Get native object of the php object that called the method
	if (getThis() != NULL) 
	{
		current_object = (zo_<?=$class_name?>*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for <?=$class_name . "::" . $method_name ?> call\n");
			
			return;
		}
		else
		{
			native_object = (wxEvtHandler*) current_object->native_object;
		}
	}
	else
	{
		zend_error(E_ERROR, "Could not process Connect call as static\n");
	}

	zval* fc;
	long flag, id0 = 0, id1 = 0;

	zval** fc_obj;
	zval** fc_name;
	char* ct;
	int args = ZEND_NUM_ARGS();
	
	//To supress some warnings due to passing a string directly
	char parse_parameters_4[] = "lllz";
	char parse_parameters_3[] = "llz";
	char parse_parameters_2[] = "lz";

	switch(args)
	{
		case 4:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Parsing parameters with \"lllz\"\n");
			#endif
			if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, parse_parameters_4, &id0, &id1, &flag , (void**)&fc) == FAILURE)
			{
				zend_error(E_ERROR, "Incorrect type of parameters");
				return;
			}
			break;
		case 3:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Parsing parameters with \"llz\"\n");
			#endif
			if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, parse_parameters_3, &id0, &flag , (void**)&fc) == FAILURE)
			{
				zend_error(E_ERROR, "Incorrect type of parameters");
				return;
			}
			break;
		case 2:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Parsing parameters with \"lz\"\n");
			#endif
			if(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, args TSRMLS_CC, parse_parameters_2, &flag , (void**)&fc) == FAILURE)
			{
				zend_error(E_ERROR, "Incorrect type of parameters");
				return;
			}
			break;
		default:
			zend_error(E_ERROR, "Wrong amount of parameters");
	}
	
	zend_hash_index_find(Z_ARRVAL_P(fc), 0, (void**)&fc_obj);
	zend_hash_index_find(Z_ARRVAL_P(fc), 1, (void**)&fc_name);
	Z_ADDREF_P(*fc_obj);
	
	ct = Z_STRVAL_PP(fc_name);

	wxCommandEvent* ce = new wxCommandEvent();
	ce->SetString(wxString::Format(wxT("%s"), ct));
	ce->SetClientObject(new wxPhpClientData(*fc_obj));
	
	switch(args)
	{
		case 4:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: native_object->Connect(id0, id1, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Object id: %d Object last id: %d Event type: %d\n", (int)id0, (int)id1, (int)flag);
			#endif
			
			native_object->Connect(id0, id1, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		case 3:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: native_object->Connect(id0, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Object id: %d Event type: %d\n", (int)id0, (int)flag);
			#endif
			
			native_object->Connect(id0, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		case 2:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: native_object->Connect(flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Event type: %d\n", (int)flag);
			#endif
			
			native_object->Connect(flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		default:
			wxMessageBox("Failed to create event", "Error", wxOK|wxICON_ERROR);
			break;
	}	
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("===========================================\n\n");
	#endif
}
<?=proto_end()?>
