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
void php_<?=$class_name?>_destruction_handler(zend_rsrc_list_entry *rsrc TSRMLS_DC) 
{
<?if(!inherits_from_class("wxSizer", $class_name) && !inherits_from_class("wxTopLevelWindow", $class_name) && !inherits_from_class("wxPanel", $class_name) && !inherits_from_class("wxControl", $class_name) && $class_name != "wxMenu" && $class_name != "wxMenuItem" && $class_name != "wxMenuBar" && $class_name != "wxPanel" && $class_name != "wxSplitterWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxScrolledWindow" && $class_name != "wxAuiManager"){?>
	#ifdef USE_WXPHP_DEBUG
	php_printf("Calling php_<?=$class_name?>_destruction_handler on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
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
	zend_error(E_NOTICE, "Object of class <?=$class_name?> went out of scope. Remember to always call Destroy() to prevent memory leaks.");
<?}else{?>
	#ifdef USE_WXPHP_DEBUG
	php_printf("Obviate php_<?=$class_name?>_destruction_handler call on %s at line %i\n", zend_get_executed_filename(TSRMLS_C), zend_get_executed_lineno(TSRMLS_C));
	php_printf("===========================================\n\n");
	#endif
<?}?>
}
