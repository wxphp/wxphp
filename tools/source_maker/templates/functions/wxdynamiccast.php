PHP_FUNCTION(php_wxDynamicCast)
{
	zval **tmp;
	int rsrc_type;
	char _wxResource[] = "wxResource";
	int valid = 1;

	char* _argStr0;
	int _argStr0_len;
	void *_ptrObj0 = 0;
	zval *_argObj0 = 0;
	int id_to_find0;
	
	char parse_parameters[] = "z!s!";
	
	if (zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, ZEND_NUM_ARGS() TSRMLS_CC, parse_parameters, &_argObj0 , &_argStr0 , &_argStr0_len ) == SUCCESS){

		if(_argObj0)
		{
			if(Z_TYPE_P(_argObj0)==IS_OBJECT && zend_hash_find(Z_OBJPROP_P(_argObj0), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)
			{
				id_to_find0 = Z_RESVAL_P(*tmp);
				_ptrObj0 = zend_list_find(id_to_find0, &rsrc_type);
			}
		}
		
		if(valid){
<?foreach($defIni as $className => $classDef){	
	
	//Skip if class doesnt derives from wxObject
	if(!isset($wxObject_derivations[$className]))
		continue;
?>
			if(!strcmp(_argStr0, "<?=$className?>")){
				object_init_ex(return_value, php_<?=$className?>_entry);
				<?=$className?>* ret = wxDynamicCast(_ptrObj0, <?=$className?>_php);
				long id_to_find = zend_list_insert(ret, le_<?=$className?>);
				add_property_resource(return_value, _wxResource, id_to_find);
				return;
			}
<?}?>
		}
	}
}
