<?php
	dl("wxwidgets.so");

	$cls = unserialize(file_get_contents('classes.dump'));
	ksort($cls);
	
	$clo = unserialize(file_get_contents('classes.out'));
	if(!$clo)
		$clo = array();
		
	$selClass = null;
	
	class myFrame extends wxFrame 
	{
		function simpleCB($evn)
		{
			global $clo;
			$hd = fopen("classes.out",'w');
			fwrite($hd,serialize($clo));
			fclose($hd);
		}
		
		function treeSelection($evn)
		{
			$class = $this->tree->GetItemText($evn->GetItem());
			//$class = $evn->GetLabel();
			var_dump($class);
			
			global $selClass;
			global $cls;
			global $clo;
			$arr 		= new wxArrayString();
			$optIndex = 0;
			$optIndexArr = array();
			if(isset($cls[$class]))
			{
				$selClass = $class;
				foreach($cls[$class] as $mName => $mArr)
				{
					var_dump($mName);
					if($mName=="_implements")
					{
						$arr2 = new wxArrayString();
						$sels = array();
						$selsIdx = 0;
						foreach($cls[$class]["_implements"] as $imp)
						{
							$arr2->Add($imp);
							if(!isset($clo[$class]["_implements"]))
								continue;
							if(in_array($imp,$clo[$class]["_implements"]))
								$sels[] = $selsIdx;
							$selsIdx++;
						}
						$this->lst2->Set($arr2);
						foreach($sels as $selsIdx)
							$this->lst2->Check($selsIdx,true);
					}
					if($mName[0]=="_")
						continue;
					for($i=0;$i<count($mArr);$i+=2)
					{
						$argStr = array();
						for($e=1;$e<count($mArr[$i]);$e++)
						{
							if(is_null($mArr[$i+1][1][$e]))
								$argStr[] = $mArr[$i][$e];
							else
								$argStr[] = $mArr[$i][$e]." = ".$mArr[$i+1][1][$e];
						}
						$argStr = join(' , ',$argStr);
						$argStr = str_replace("&","&&",$argStr);
						$arr->Add($mName."( ".$argStr." )");
						
						$found = false;
						if(isset($clo[$class][$mName]))
						foreach($clo[$class][$mName] as $v)
						{
							if($v==$mArr[$i])
							{
								$found=true;
								break;
							}
						}
						if($found)
						{
							$optIndexArr[] = $optIndex;
						}
						$optIndex++;
					}
				}
			}
			$this->lst->Set($arr);
			foreach($optIndexArr as $optIndex)
				$this->lst->Check($optIndex,true);
			echo "tree selection changed\n";
		}
		
		function saveImplements($evn)
		{
			echo "--> saveImplents\n";
			global $cls;
			global $clo;
			global $selClass;
			$l=$evn->GetSelection();
			var_dump($l);
			var_dump($clo[$selClass]['_implements']);
			$imps = $cls[$selClass]['_implements'];
			if(!isset($clo[$selClass]['_implements']))
				$clo[$selClass]['_implements'] = array();
			if(!in_array($imps[$l],$clo[$selClass]['_implements']))
				$clo[$selClass]['_implements'][]=$imps[$l];
			elseif(($c = array_search($imps[$l],$clo[$selClass]['_implements']))!==false)
				array_splice($clo[$selClass]['_implements'],$c,1);
			if(!count($clo[$selClass]['_implements']))
				unset($clo[$selClass]['_implements']);
		}
		
		function checkLst($evn)
		{
			global $cls;
			global $clo;
			global $selClass;
			
			$l=$evn->GetSelection();
			$methods = array_keys($cls[$selClass]);
			foreach($methods as $meth)
			{
				if($meth[0]=='_')
					continue;
				
				if((count($cls[$selClass][$meth])/2)>$l)
					break;
				$l-=count($cls[$selClass][$meth])/2;
			}
			$methA = $cls[$selClass][$meth][$l*2];
			$methB = $cls[$selClass][$meth][$l*2+1];
			
			//procurar o registo que se pretende
			if(!isset($clo[$selClass]))
				$clo[$selClass] = array();
			if(!isset($clo[$selClass][$meth]))
				$clo[$selClass][$meth] = array();
			$found = false;
			for($i=0;$i<count($clo[$selClass][$meth]);$i++)
			{
				//var_dump($i);
				if($clo[$selClass][$meth][$i]==$methA)
				{
					$found = true;
					break;
				}
			}
			//var_dump($clo[$selClass][$meth]);
			if($this->lst->IsChecked($evn->GetSelection()))
			{
				if(!$found)
				{
					//var_dump($methA);
					//var_dump($methB);
					$clo[$selClass][$meth][] = $methA;
					$clo[$selClass][$meth][] = $methB;
					if(isset($cls[$selClass]['_pure_virtual']) &&  in_array($meth,$cls[$selClass]['_pure_virtual']))
					{
						if(!isset($clo[$selClass]['_pure_virtual']))
							$clo[$selClass]['_pure_virtual'] = array($meth);
						else
							$clo[$selClass]['_pure_virtual'][] = $meth;
					}
					if(isset($cls[$selClass]['_const']) &&  in_array($meth,$cls[$selClass]['_const']))
					{
						if(!isset($clo[$selClass]['_const']))
							$clo[$selClass]['_const'] = array($meth);
						else
							$clo[$selClass]['_const'][] = $meth;
					}
				}
			}
			else
			{
				if($found)
				{
					unset($clo[$selClass][$meth][$i]);
					unset($clo[$selClass][$meth][$i+1]);
					if(isset($clo[$selClass]['_pure_virtual']) && ($pos = array_search($meth,$clo[$selClass]['_pure_virtual']))!==false)
					{
						unset($clo[$selClass]['_pure_virtual'][$pos]);
						if(!count($clo[$selClass]['_pure_virtual']))
							unset($clo[$selClass]['_pure_virtual']);
					}
					if(isset($clo[$selClass]['_const']) && ($pos = array_search($meth,$clo[$selClass]['_const']))!==false)
					{
						unset($clo[$selClass]['_const'][$pos]);
						if(!count($clo[$selClass]['_const']))
							unset($clo[$selClass]['_const']);
					}
				}
			}
			//var_dump($clo[$selClass][$meth]);
			
			//retify index
			$narr = array();
			for($i=0;$i<count($clo[$selClass][$meth]);$i+=2)
			//foreach($clo[$selClass][$meth] as $v)
			{
				$v = $clo[$selClass][$meth][$i];
				$k = $clo[$selClass][$meth][$i+1];
				//remove any method that isn't in the source tree
				$found = false;
				for($e=0;$e<count($cls[$selClass][$meth]);$e+=2)
				//foreach($cls[$selClass][$meth] as $v2)
				{
					$v2 = $cls[$selClass][$meth][$e];
					$k2 = $cls[$selClass][$meth][$e+1];
					if($v==$v2 && $k==$k2)
						$found = true;
				}
				if(!$found)
					continue;
				$narr[]=$v;
				$narr[]=$k;
			}
			
			$clo[$selClass][$meth]= $narr;
			
			if(!count($clo[$selClass][$meth]))
				unset($clo[$selClass][$meth]);
			if(!count($clo[$selClass]))
				unset($clo[$selClass]);
			
		}
		
		function myFrame()
		{
			parent::__construct( null ,null,"wxPhp Source Maker GUI, v0.1",wxDefaultPosition, new wxSize(600,400));
			$this->SetIcon(new wxIcon("sample.xpm",wxBITMAP_TYPE_XPM));
			
			$sz 		= new wxBoxSizer(wxHORIZONTAL);
			$sw 		= new wxSplitterWindow($this,-1,wxDefaultPosition,wxDefaultSize,wxSP_NO_XP_THEME);
			$tree 	= new wxTreeCtrl($sw,-1);
			$dummy 	= new wxPanel($sw);
			
			
			$sz2 		= new wxBoxSizer(wxVERTICAL);
			$lst 		= new wxCheckListBox($dummy,-1);
			$lst2 		= new wxCheckListBox($dummy,-1);
			$lst->Connect(wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,array($this,"checkLst"));
			$lst2->Connect(wxEVT_COMMAND_CHECKLISTBOX_TOGGLED,array($this,"saveImplements"));
			$sz2->Add($lst2,1,wxEXPAND | wxALL);
			$sz2->Add($lst,1,wxEXPAND | wxALL);
			$dummy->SetSizer($sz2);
			$this->lst = $lst;
			$this->lst2 = $lst2;
			
			
			//var_dump($dummy->AppendTextColumn("Nome",0));
			//$dummy 	= new wxListCtrl($sw,-1,wxDefaultPosition,wxDefaultSize,wxLC_REPORT);
			//$dummy->InsertColumn(0,"Nome");
			//var_dump(wxLC_ICON);
			//$dummy 	= new wxTextCtrl($sw,-1,"");
			//$dummy->Connect(wxEVT_COMMAND_TEXT_UPDATED,array($this,'simpleCB'));
			
			$rtNode = $tree->AddRoot("wxPHP");
			global $cls;
			foreach($cls as $k => $v)
			{
				$clNode = $tree->AppendItem($rtNode,$k);
				/*foreach($v as $k1=>$v1)
				{
					if($k1[0]=="_")
						continue;
					$tree->AppendItem($clNode,$k1);
				}*/
			}
				
				
			$tree->Connect(wxEVT_COMMAND_TREE_SEL_CHANGED,array($this,"treeSelection"));
			//$tree->ExpandAll();
			$this->tree = $tree;
			
			$sw->SplitVertically($tree, $dummy);
			$sw->SetMinimumPaneSize(150);
			$sz->Add($sw,1,wxEXPAND | wxALL);
			
			$this->SetSizer($sz);
			$tb = $this->CreateToolBar();
			$tb->AddTool(-1,"Abrir",new wxBitmap("sample.xpm",wxBITMAP_TYPE_XPM),"Abrir documentos");
			$tb->AddSeparator();
			$tb->Realize();
			
			$mb = new wxMenuBar();
			$mn = new wxMenu();
			
			$mn->AppendCheckItem(-1,"&Salvar");
			//$mn->Append(15,"abrir","serve para abrir");
			
			$mb->Append($mn,"&File");
			$this->SetMenuBar($mb);
			
			
			$this->Connect(wxEVT_COMMAND_MENU_SELECTED,array($this,"simpleCB"));
			
		}
	}
	
	class myApp extends wxApp 
	{
		function OnInit()
		{
			$zs = new myFrame();
			$zs->Show();
			
			$this->frm = $zs;/**/
			
			return true;
		}
		
		function OnExit()
		{
			
			echo "kg";
			return 0;
		}
	}

	$xt = new myApp();

	//if(wxInitialize())
	{
		wxApp::SetInstance($xt);
		wxEntry();
	}
?>
