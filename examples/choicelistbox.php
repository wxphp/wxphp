<?php

	if ( !ini_get('enable_dl') ) {
		exec("php -d enable_dl=On $argv[0]");
		exit;
	}


	dl("wxwidgets.so");
	
	class mainFrame extends wxFrame
	{
		function mainFrame()
		{
			parent::__construct(null, 10, "Checks List Box Example");
			
			for($i=0; $i<=100; $i++)
			{
				$array_strings[] = $i;
			}
			
			$check = new wxCheckListBox($this, wxID_ANY, new wxPoint(0,0), new wxSize(0,0), $array_strings);
			
			$status_bar = $this->CreateStatusBar(1);
			
			$status_bar->SetMinHeight(30);
			$status_bar->SetStatusText("List generated with PHP array");
		}
	}
	
	
	class myApp extends wxApp 
	{
		function OnInit()
		{
			global $mf;
			
			$mf = new mainFrame();
			
			$value = wxMessageBox("Show the frame?", "", wxYES_NO, $mf);
			
			if($value == wxYES)
			{
				$mf->Show();
				$mf->Centre();
				
				//Static Method Call Test
				$window = wxWindow::FindWindowById(10);
				
				//Dynamic cast test
				$window = wxDynamicCast($window, "wxFrame");
				print $window->GetTitle() . "\n";
			}
			else
			{
				$mf->Close();
			}
			
			return 0;
		}
		
		function OnExit()
		{
			return 0;
		}
	}

	$xt = new myApp();

	wxApp::SetInstance($xt);
	wxEntry();

?>
