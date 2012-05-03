void <?=$class_name?>_php::onEvent(wxEvent& evnt)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking virtual <?=$class_name?>::onEvent\n");
	php_printf("===========================================\n");
	#endif
	
	zval *arg[1];
	MAKE_STD_ZVAL(arg[0]);
	char _wxResource[] = "wxResource";
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
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_<?=$kevn?>));
	}
	<? } ?>
	else if(!tcscmp(evnt.GetClassInfo()->GetClassName(), wxT("wxEvent")))
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Converting event type 'wxEvent' to zval to call user function.\n\n");
		#endif
		
		object_init_ex(arg[0], php_wxEvent_entry);
		add_property_resource(arg[0], _wxResource, zend_list_insert(&evnt, le_wxEvent));
	}
	else
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Event type not declared\n\n");
		#endif
		
		wxString errorMsg;
		errorMsg += "Failed to pass as argument event of type: ";
		errorMsg += evnt.GetClassInfo()->GetClassName();
		wxMessageBox(errorMsg);
	}

	char* wxname;
	zval dummy;
	zval* fc_name;
	wxCommandEvent* ce;
	wxPhpClientData* co;

	ce = (wxCommandEvent*) evnt.m_callbackUserData;
	co = (wxPhpClientData*) ce->GetClientObject();

	MAKE_STD_ZVAL(fc_name);
	
	wxname = (char*)malloc(sizeof(wxChar)*(ce->GetString().size()+1));
	strcpy(wxname, (const char *) ce->GetString().char_str());
	
	ZVAL_STRING(fc_name, wxname, 1);
	
	//Free allocated memory since ZVAL_STRING does a copy of it
	free(wxname);

	if(call_user_function(NULL, &(co->phpObj), fc_name, &dummy, 1, arg TSRMLS_CC) == FAILURE)
	{
		wxString errorMessage = "Failed to call method: '";
		errorMessage += ce->GetString().char_str();
		errorMessage += "'";
		
		wxMessageBox(errorMessage);
	}
	
}
PHP_METHOD(php_<?=$class_name?>, Connect)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking <?=$class_name?>::Connect\n");
	php_printf("===========================================\n");
	php_printf("Parameters received: %d\n", ZEND_NUM_ARGS());
	#endif
	
	zval **tmp;
	int rsrc_type;
	int id_to_find;
	int valid = 1;
	char _wxResource[] = "wxResource";
	wxEvtHandler *_this;

	if(getThis())
	{
		if(zend_hash_find(Z_OBJPROP_P(getThis()), _wxResource, sizeof(_wxResource),  (void **)&tmp) == FAILURE)
		{
			return;
		}
	}
	else
	{
		zend_error(E_ERROR, "Failed to get parent object of Connect method");
	}
	
	id_to_find = Z_RESVAL_P(*tmp);
	_this = (wxEvtHandler*) zend_list_find(id_to_find, &rsrc_type);

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
	
	zend_hash_index_find(HASH_OF(fc), 0, (void**)&fc_obj);
	zend_hash_index_find(HASH_OF(fc), 1, (void**)&fc_name);
	Z_ADDREF_P(*fc_obj);
	
	ct = (*fc_name)->value.str.val;

	wxCommandEvent* ce = new wxCommandEvent();
	ce->SetString(wxString::Format(wxT("%s"), ct));
	ce->SetClientObject(new wxPhpClientData(*fc_obj));
	
	switch(args)
	{
		case 4:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: _this->Connect(id0, id1, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Object id: %d Object last id: %d Event type: %d\n", (int)id0, (int)id1, (int)flag);
			#endif
			_this->Connect(id0, id1, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		case 3:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: _this->Connect(id0, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Object id: %d Event type: %d\n", (int)id0, (int)flag);
			#endif
			_this->Connect(id0, flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		case 2:
			#ifdef USE_WXPHP_DEBUG
			php_printf("Executing: _this->Connect(flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);\n");
			php_printf("Event type: %d\n", (int)flag);
			#endif
			_this->Connect(flag, wxEventHandler(<?=$class_name?>_php::onEvent), ce);
			break;
		default:
			wxMessageBox(_T("Failed to create event\n"));
			break;
	}	
	
	#ifdef USE_WXPHP_DEBUG
	php_printf("===========================================\n\n");
	#endif
}
