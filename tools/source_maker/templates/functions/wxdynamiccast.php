<?=proto_begin($function_name)?>
PHP_FUNCTION(php_wxDynamicCast)
{
    zval object;
    char* object_type;
    int object_type_len = 0;
    void* native_object = 0;

    char parse_parameters[] = "z!s!";

    if (
        zend_parse_parameters_ex(
            ZEND_PARSE_PARAMS_QUIET,
            ZEND_NUM_ARGS(),
            parse_parameters,
            &object,
            &object_type,
            &object_type_len
        ) == SUCCESS
    )
    {
        if(Z_TYPE(object) == IS_OBJECT)
        {
            native_object = (void*)
                Z_wxObject_P(&object)->native_object
            ;

            if(!native_object)
            {
                zend_error(
                    E_ERROR,
                    "Could not retreive native object of argument 1\n"
                );
            }
        }
        else
        {
            zend_error(E_ERROR, "Argument 1 is not an object\n");
        }

<?foreach($defIni as $className => $classDef){

    //Skip if class doesnt derives from wxObject
    if(!isset($wxObject_derivations[$className]))
        continue;
?>
        if(!strcmp(object_type, "<?=$className?>"))
        {
            object_init_ex(return_value, php_<?=$className?>_entry);
            <?=$className?>* return_native_object = wxDynamicCast(
                native_object, <?=$className?>_php
            );

            Z_<?=$className?>_P(return_value)->native_object
                = (<?=$className?>_php*) return_native_object
            ;
            return;
        }
<?}?>
        else
        {
            zend_error(
                E_ERROR,
                "Could not convert to object type %s",
                object_type
            );
        }
    }
    else
    {
        zend_error(E_ERROR, "Invalid parameters\n");
    }
}
<?=proto_end()?>

