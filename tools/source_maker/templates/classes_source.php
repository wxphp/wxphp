<?php
/**
 * To corretcly handle memory cleaning without segmentation faults
 * we obviate sizers, controls and some other wxWidgets classes that
 * are automatically destroyed by the parent window that holds them.
 *
 * Also it seems that in the way wxWidgets works is better for classes
 * that inherit from wxTopLevelWindow to not be automatically deleted and
 * require the user to call Destroy. Examples: wxMessageDialog, etc...
 *
 * This classes do not implement a destructor:
 * wxGridCellAttr, wxGridCellEditor, wxDataViewModel, wxVariantData
 *
 * Strangely wxPageSetupDialog and wxPrintDialog inherit from wxWindow as
 * pointed by the documentation but they dont implement Destroy
 */
?>
<?php
/*
void php_<?=$class_name?>_destruction_handler(zend_resource *rsrc)
{
<?if(!inherits_from_class("wxSizer", $class_name) && !inherits_from_class("wxTopLevelWindow", $class_name) && !inherits_from_class("wxPanel", $class_name) && !inherits_from_class("wxControl", $class_name) && $class_name != "wxMenu" && $class_name != "wxMenuItem" && $class_name != "wxMenuBar" && $class_name != "wxPanel" && $class_name != "wxSplitterWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxAuiManager"){?>
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Calling php_<?=$class_name?>_destruction_handler on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n");
    #endif

<?if($class_name != "wxGridCellAttr" && $class_name != "wxGridCellEditor" && $class_name != "wxDataViewModel" && $class_name != "wxRefCounter" && $class_name != "wxVariantData"){?>

    <?=$class_name?>_php* object = static_cast<<?=$class_name?>_php*>(rsrc->ptr);

    if(rsrc->ptr != NULL)
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Pointer not null\n");
        php_printf("Pointer address %x\n", (unsigned int)(size_t)rsrc->ptr);
        #endif

        if(object->references.IsUserInitialized())
        {
<?if(inherits_from_class("wxWindow", $class_name) && $class_name != "wxPageSetupDialog" && $class_name != "wxPrintDialog"){?>
            #ifdef USE_WXPHP_DEBUG
            php_printf("Deleting object by calling destroy\n");
            #endif

            object->Destroy();
<?}else{?>
            #ifdef USE_WXPHP_DEBUG
            php_printf("Deleting pointer with delete\n");
            #endif

            delete object;
<?}?>
            rsrc->ptr = NULL;
        }

        #ifdef USE_WXPHP_DEBUG
        php_printf("Deletion of <?=$class_name?> done\n");
        php_printf("===========================================\n\n");
        #endif
    }
    else
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Not user space initialized\n");
        #endif
    }
<?}?>
<?}elseif(inherits_from_class("wxTopLevelWindow", $class_name)){?>
    zend_error(
        E_NOTICE,
        "Object of class <?=$class_name?> went out of scope. "
        "Remember to always call Destroy() to prevent memory leaks."
    );
<?}else{?>
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Obviate php_<?=$class_name?>_destruction_handler "
        "call on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n\n");
    #endif
<?}?>
}
*/
?>
BEGIN_EXTERN_C()
void php_<?=$class_name?>_free(void *object)
{
    zo_<?=$class_name?>* custom_object = (zo_<?=$class_name?>*) object;

<?if(!inherits_from_class("wxSizer", $class_name) && !inherits_from_class("wxTopLevelWindow", $class_name) && !inherits_from_class("wxPanel", $class_name) && !inherits_from_class("wxControl", $class_name) && $class_name != "wxMenu" && $class_name != "wxMenuItem" && $class_name != "wxMenuBar" && $class_name != "wxPanel" && $class_name != "wxSplitterWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxAuiManager" && $class_name != "wxThread"){?>
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Calling php_<?=$class_name?>_free on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n");
    #endif

<?if($class_name != "wxDropTarget" && $class_name != "wxGridCellRenderer" && $class_name != "wxGridCellAttr" && $class_name != "wxGridCellEditor" && $class_name != "wxDataViewModel" && $class_name != "wxRefCounter" && $class_name != "wxVariantData" && $class_name != "wxTreeItemData" && $class_name != "wxClipBoard" && $class_name != "wxDataObject" && !inherits_from_class("wxGridCellEditor", $class_name) && !inherits_from_class("wxDataObject", $class_name) && !inherits_from_class("wxDropTarget", $class_name)){?>
    if(custom_object->native_object != NULL)
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Pointer not null\n");
        php_printf("Pointer address %x\n", (unsigned int)(size_t)custom_object->native_object);
        #endif

        if(custom_object->is_user_initialized)
        {
<?if(inherits_from_class("wxWindow", $class_name) && $class_name != "wxPageSetupDialog" && $class_name != "wxPrintDialog"){?>
            #ifdef USE_WXPHP_DEBUG
            php_printf(
                "Deleting object by calling destroy and delete\n"
            );
            #endif

            custom_object->native_object->Destroy();
            delete custom_object->native_object;
<?}else{?>
            #ifdef USE_WXPHP_DEBUG
            php_printf("Deleting pointer with delete\n");
            #endif

<?if(class_has_properties($class_name)){?>
            custom_object->native_object->UninitProperties();
<?}?>
            delete custom_object->native_object;
<?}?>
            custom_object->native_object = NULL;
        }

        #ifdef USE_WXPHP_DEBUG
        php_printf("Deletion of <?=$class_name?> done\n");
        php_printf("===========================================\n\n");
        #endif
    }
    else
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Not user space initialized\n");
        #endif
    }
<?}?>
<?}elseif(inherits_from_class("wxTopLevelWindow", $class_name)){?>
    /*zend_error(
        E_WARNING,
        "Object of class <?=$class_name?> went out of scope. "
        "Remember to always call Destroy() to prevent memory leaks."
    );*/
<?}else{?>
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Obviate delete call for <?=$class_name?> on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n\n");
    #endif
<?}?>

    zend_object_std_dtor(&custom_object->zo);
    efree(custom_object);
}

zend_object* php_<?=$class_name?>_new(zend_class_entry *class_type)
{
    #ifdef USE_WXPHP_DEBUG
    php_printf(
        "Calling php_<?=$class_name?>_new on %s at line %i\n",
        zend_get_executed_filename(),
        zend_get_executed_lineno()
    );
    php_printf("===========================================\n");
    #endif

    zo_<?=$class_name?>* custom_object;

    custom_object = (zo_<?=$class_name?>*) ecalloc(
        1,
        sizeof(zo_<?=$class_name?>)
        + zend_object_properties_size(class_type)
    );

    zend_object_std_init(&custom_object->zo, class_type);
    object_properties_init(&custom_object->zo, class_type);

    custom_object->zo.handlers = &wxphp_<?=$class_name?>_object_handlers;

    custom_object->native_object = NULL;
<? if(!in_array("__construct", funcsOfClass($class_name, 1, $output)) && has_all_pure_virtual_implemented($class_name)){ ?>

    zval temp;
    Z_TYPE_INFO(temp) = IS_OBJECT;
    Z_OBJ(temp) = &custom_object->zo;

    custom_object->native_object = new <?=$class_name?>_php();
    custom_object->native_object->phpObj = temp;
<? } ?>
    custom_object->object_type = PHP_<?=strtoupper($class_name)?>_TYPE;
    custom_object->is_user_initialized = 0;

    return &custom_object->zo;
}
END_EXTERN_C()

