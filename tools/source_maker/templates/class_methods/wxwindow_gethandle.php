/* {{{ proto int wxWindow::GetHandle()
   Returns the platform-specific handle of the physical window. */
PHP_METHOD(php_wxWindow, GetHandle)
{
	#ifdef USE_WXPHP_DEBUG
	php_printf("Invoking wxWindow::GetHandle\n");
	php_printf("===========================================\n");
	#endif
	
	zo_wxWindow* current_object;
	wxphp_object_type current_object_type;
	wxWindow_php* native_object;
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
		current_object = (zo_wxWindow*) zend_object_store_get_object(getThis() TSRMLS_CC);
		
		if(current_object->native_object == NULL)
		{
			zend_error(E_ERROR, "Failed to get the native object for wxWindow::GetHandle call\n");
			
			return;
		}
		else
		{
			native_object = current_object->native_object;
			current_object_type = current_object->object_type;
			
			bool reference_type_found = false;

			if(current_object_type == PHP_WXWINDOW_TYPE){
				references = &((wxWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXNONOWNEDWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxNonOwnedWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTOPLEVELWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxTopLevelWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFRAME_TYPE) && (!reference_type_found)){
				references = &((wxFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSPLASHSCREEN_TYPE) && (!reference_type_found)){
				references = &((wxSplashScreen_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMDICHILDFRAME_TYPE) && (!reference_type_found)){
				references = &((wxMDIChildFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMDIPARENTFRAME_TYPE) && (!reference_type_found)){
				references = &((wxMDIParentFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMINIFRAME_TYPE) && (!reference_type_found)){
				references = &((wxMiniFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPREVIEWFRAME_TYPE) && (!reference_type_found)){
				references = &((wxPreviewFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHTMLHELPDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxHtmlHelpDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHTMLHELPFRAME_TYPE) && (!reference_type_found)){
				references = &((wxHtmlHelpFrame_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTEXTENTRYDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxTextEntryDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPASSWORDENTRYDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxPasswordEntryDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMESSAGEDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxMessageDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFINDREPLACEDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxFindReplaceDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDIRDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxDirDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSYMBOLPICKERDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxSymbolPickerDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPROPERTYSHEETDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxPropertySheetDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXWIZARD_TYPE) && (!reference_type_found)){
				references = &((wxWizard_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPROGRESSDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxProgressDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCOLOURDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxColourDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFILEDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxFileDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFONTDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxFontDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSINGLECHOICEDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxSingleChoiceDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXGENERICPROGRESSDIALOG_TYPE) && (!reference_type_found)){
				references = &((wxGenericProgressDialog_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPOPUPWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxPopupWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPOPUPTRANSIENTWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxPopupTransientWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCONTROL_TYPE) && (!reference_type_found)){
				references = &((wxControl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTATUSBAR_TYPE) && (!reference_type_found)){
				references = &((wxStatusBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXANYBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxAnyButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBITMAPBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxBitmapButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTOGGLEBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxToggleButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBITMAPTOGGLEBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxBitmapToggleButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTREECTRL_TYPE) && (!reference_type_found)){
				references = &((wxTreeCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCONTROLWITHITEMS_TYPE) && (!reference_type_found)){
				references = &((wxControlWithItems_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXLISTBOX_TYPE) && (!reference_type_found)){
				references = &((wxListBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCHECKLISTBOX_TYPE) && (!reference_type_found)){
				references = &((wxCheckListBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXREARRANGELIST_TYPE) && (!reference_type_found)){
				references = &((wxRearrangeList_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCHOICE_TYPE) && (!reference_type_found)){
				references = &((wxChoice_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBOOKCTRLBASE_TYPE) && (!reference_type_found)){
				references = &((wxBookCtrlBase_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXAUINOTEBOOK_TYPE) && (!reference_type_found)){
				references = &((wxAuiNotebook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXLISTBOOK_TYPE) && (!reference_type_found)){
				references = &((wxListbook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCHOICEBOOK_TYPE) && (!reference_type_found)){
				references = &((wxChoicebook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXNOTEBOOK_TYPE) && (!reference_type_found)){
				references = &((wxNotebook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTREEBOOK_TYPE) && (!reference_type_found)){
				references = &((wxTreebook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTOOLBOOK_TYPE) && (!reference_type_found)){
				references = &((wxToolbook_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXANIMATIONCTRL_TYPE) && (!reference_type_found)){
				references = &((wxAnimationCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTYLEDTEXTCTRL_TYPE) && (!reference_type_found)){
				references = &((wxStyledTextCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSCROLLBAR_TYPE) && (!reference_type_found)){
				references = &((wxScrollBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTATICTEXT_TYPE) && (!reference_type_found)){
				references = &((wxStaticText_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTATICLINE_TYPE) && (!reference_type_found)){
				references = &((wxStaticLine_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTATICBOX_TYPE) && (!reference_type_found)){
				references = &((wxStaticBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSTATICBITMAP_TYPE) && (!reference_type_found)){
				references = &((wxStaticBitmap_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCHECKBOX_TYPE) && (!reference_type_found)){
				references = &((wxCheckBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTEXTCTRL_TYPE) && (!reference_type_found)){
				references = &((wxTextCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSEARCHCTRL_TYPE) && (!reference_type_found)){
				references = &((wxSearchCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCOMBOBOX_TYPE) && (!reference_type_found)){
				references = &((wxComboBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBITMAPCOMBOBOX_TYPE) && (!reference_type_found)){
				references = &((wxBitmapComboBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXAUITOOLBAR_TYPE) && (!reference_type_found)){
				references = &((wxAuiToolBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXLISTCTRL_TYPE) && (!reference_type_found)){
				references = &((wxListCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXLISTVIEW_TYPE) && (!reference_type_found)){
				references = &((wxListView_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRADIOBOX_TYPE) && (!reference_type_found)){
				references = &((wxRadioBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRADIOBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxRadioButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSLIDER_TYPE) && (!reference_type_found)){
				references = &((wxSlider_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSPINCTRL_TYPE) && (!reference_type_found)){
				references = &((wxSpinCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSPINBUTTON_TYPE) && (!reference_type_found)){
				references = &((wxSpinButton_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXGAUGE_TYPE) && (!reference_type_found)){
				references = &((wxGauge_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHYPERLINKCTRL_TYPE) && (!reference_type_found)){
				references = &((wxHyperlinkCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSPINCTRLDOUBLE_TYPE) && (!reference_type_found)){
				references = &((wxSpinCtrlDouble_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXGENERICDIRCTRL_TYPE) && (!reference_type_found)){
				references = &((wxGenericDirCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCALENDARCTRL_TYPE) && (!reference_type_found)){
				references = &((wxCalendarCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPICKERBASE_TYPE) && (!reference_type_found)){
				references = &((wxPickerBase_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCOLOURPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxColourPickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFONTPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxFontPickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFILEPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxFilePickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDIRPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxDirPickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTIMEPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxTimePickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTOOLBAR_TYPE) && (!reference_type_found)){
				references = &((wxToolBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDATEPICKERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxDatePickerCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCOLLAPSIBLEPANE_TYPE) && (!reference_type_found)){
				references = &((wxCollapsiblePane_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXCOMBOCTRL_TYPE) && (!reference_type_found)){
				references = &((wxComboCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDATAVIEWCTRL_TYPE) && (!reference_type_found)){
				references = &((wxDataViewCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDATAVIEWLISTCTRL_TYPE) && (!reference_type_found)){
				references = &((wxDataViewListCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXDATAVIEWTREECTRL_TYPE) && (!reference_type_found)){
				references = &((wxDataViewTreeCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHEADERCTRL_TYPE) && (!reference_type_found)){
				references = &((wxHeaderCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHEADERCTRLSIMPLE_TYPE) && (!reference_type_found)){
				references = &((wxHeaderCtrlSimple_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXFILECTRL_TYPE) && (!reference_type_found)){
				references = &((wxFileCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXINFOBAR_TYPE) && (!reference_type_found)){
				references = &((wxInfoBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONCONTROL_TYPE) && (!reference_type_found)){
				references = &((wxRibbonControl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONBAR_TYPE) && (!reference_type_found)){
				references = &((wxRibbonBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONBUTTONBAR_TYPE) && (!reference_type_found)){
				references = &((wxRibbonButtonBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONGALLERY_TYPE) && (!reference_type_found)){
				references = &((wxRibbonGallery_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONPAGE_TYPE) && (!reference_type_found)){
				references = &((wxRibbonPage_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONPANEL_TYPE) && (!reference_type_found)){
				references = &((wxRibbonPanel_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXRIBBONTOOLBAR_TYPE) && (!reference_type_found)){
				references = &((wxRibbonToolBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXWEBVIEW_TYPE) && (!reference_type_found)){
				references = &((wxWebView_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMEDIACTRL_TYPE) && (!reference_type_found)){
				references = &((wxMediaCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSPLITTERWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxSplitterWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPANEL_TYPE) && (!reference_type_found)){
				references = &((wxPanel_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSCROLLEDWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxScrolledWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHTMLWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxHtmlWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXGRID_TYPE) && (!reference_type_found)){
				references = &((wxGrid_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPREVIEWCANVAS_TYPE) && (!reference_type_found)){
				references = &((wxPreviewCanvas_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXWIZARDPAGE_TYPE) && (!reference_type_found)){
				references = &((wxWizardPage_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXWIZARDPAGESIMPLE_TYPE) && (!reference_type_found)){
				references = &((wxWizardPageSimple_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXEDITABLELISTBOX_TYPE) && (!reference_type_found)){
				references = &((wxEditableListBox_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHSCROLLEDWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxHScrolledWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXPREVIEWCONTROLBAR_TYPE) && (!reference_type_found)){
				references = &((wxPreviewControlBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMENUBAR_TYPE) && (!reference_type_found)){
				references = &((wxMenuBar_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXBANNERWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxBannerWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXMDICLIENTWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxMDIClientWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXTREELISTCTRL_TYPE) && (!reference_type_found)){
				references = &((wxTreeListCtrl_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSASHWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxSashWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXSASHLAYOUTWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxSashLayoutWindow_php*)native_object)->references;
				reference_type_found = true;
			}
			if((current_object_type == PHP_WXHTMLHELPWINDOW_TYPE) && (!reference_type_found)){
				references = &((wxHtmlHelpWindow_php*)native_object)->references;
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
				php_printf("Executing RETURN_LONG(wxWindow::GetHandle())\n\n");
				#endif

				ZVAL_LONG(return_value, (size_t) ((wxWindow_php*)native_object)->GetHandle());


				return;
				break;
			}
		}
	}

		
	//In case wrong type/count of parameters was passed
	if(!already_called)
	{
		zend_error(E_ERROR, "Wrong type or count of parameters passed to: wxWindow::GetHandle\n");
	}
}
/* }}} */

