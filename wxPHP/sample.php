<?php
	dl('wxWidgets.so');
	
	class mainFrame extends wxFrame
	{
		function onQuit()
		{
			$this->Destroy();
		}
		
		function onAbout()
		{
			$dlg = new wxMessageDialog($this,"Welcome to wxPHP!!\nBased on wxWidgets 2.8.4\n\nThis is a minimal wxPHP sample!","About box...",wxICON_INFORMATION);
			$dlg->ShowModal();
		}
	
		function mainFrame()
		{
			parent::__construct(null ,null,"Minimal wxPHP App",wxDefaultPosition, new wxSize(350,260));
			echo "aqui3\n";
			/*$ico = new wxIcon();
			$ico->CopyFromBitmap(new wxBitmap("sample.xpm",wxBITMAP_TYPE_XPM));
			$this->SetIcon($ico);*/
			
			$mb = new wxMenuBar();
			
			$mn = new wxMenu();
			$mn->Append(2,"E&xit","Quit this program");
			$mb->Append($mn,"&File");
			
			$mn = new wxMenu();
			$mn->AppendCheckItem(4,"&About...","Show about dialog");
			$mb->Append($mn,"&Help");
			
			$this->SetMenuBar($mb);
			
			$sbar = $this->CreateStatusBar(2);
			$sbar->SetStatusText("Welcome to wxPHP...");
			
			$this->Connect(2,wxEVT_COMMAND_MENU_SELECTED,array($this,"onQuit"));
			$this->Connect(4,wxEVT_COMMAND_MENU_SELECTED,array($this,"onAbout"));
			echo "aqui2\n";
		}
	}
	
	
	class myApp extends wxApp 
	{
		function OnInit()
		{
			global $mf;
			echo "aqui\n";
			
			$mf = new mainFrame();
			//$mf->Destroy();
			$mf->Show();
			
			return 0;
		}
		
		function OnExit()
		{
			
			echo "Application terminated";
			return 0;
		}
	}

	$xt = new myApp();

	//if(wxInitialize())
	{
		wxApp::SetInstance($xt);
		echo "aqui4\n";
		wxEntry();
		echo "aqui5\n";
	}	

?>
