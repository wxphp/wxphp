<?php
/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Script to generate the wxWidgets extension cpp source code using as 
 * input the serialized output produced by the wxWidgets doxygen 
 * documentation xml_parser.
 * 
 * 
*/

//Load the wxPHP module
if(!extension_loaded('wxwidgets'))
{
	dl('wxwidgets.' . PHP_SHLIB_SUFFIX);
}

//Change to correct working directory to be able to execute the script from everywhere
if($argv[0] == $_SERVER["SCRIPT_NAME"])
{
	chdir(str_replace("selector.php" , "", $argv[0]));
}
else
{
	chdir(getcwd() . "/" . str_replace($_SERVER["SCRIPT_NAME"] , "", $_SERVER["PHP_SELF"]));
}

//Json serializing functions
include("../include/functions.php");

//Load the full set of classes available on wxWidgets
if(file_exists("full_classes_set.json"))
{
	$cls = unserialize_json(file_get_contents('full_classes_set.json'));
}
else
{
	die("The file full_classes_set.json wasn't found. Run the xml parser and copy the full_classes_set.json file to the directory where this script resides.");
}

//Sort the classes by name
ksort($cls);

//Load previously enabled classes
if(file_exists("classes.json"))
	$clo = unserialize_json(file_get_contents('classes.json'));

if(!isset($clo))
{
	//Initialize array that will hold enabled class/methods
	$clo = array();
}
else
{
	//Clean classes not found on full_classes_set.json
	foreach($clo as $class_out_name=>$class_out_data)
	{
		if(!isset($cls[$class_out_name]))
		{
			unset($clo[$class_out_name]);
		}
	}
}

//Variable that stores the current clicked class
$selClass = null;

class wxTaskBarIconCustom extends wxTaskBarIcon
{
	function __construct()
	{
		parent::__construct();
	}
	
	function CreatePopupMenu()
	{
		$menu = new wxMenu();
		$menu->Append(-1, "&Save", "save the changes to classes.json");
		
		return $menu;
	}
}

//Main application frame
class myFrame extends wxFrame 
{
	function __construct()
	{	
		parent::__construct( null ,null, "wxPHP Classes Selector, v0.2", new wxPoint(0, 0), new wxSize(600,400));
		$this->SetIcon(new wxIcon("sample.xpm", wxBITMAP_TYPE_XPM));
		
		$this->sz = new wxBoxSizer(wxHORIZONTAL);
		$sw = new wxSplitterWindow($this, -1, new wxPoint(0, 0), new wxSize(0,0), wxSP_NO_XP_THEME);
		
		$leftPanel = new wxPanel($sw);
		$rightPanel = new wxPanel($sw);
		
		$this->leftSizer = new wxBoxSizer(wxVERTICAL);
		
		$txtAutoCompletion = new wxTextCtrl($leftPanel, wxID_ANY);
		$tree = new wxTreeCtrl($leftPanel, -1);
		
		$this->leftSizer->Add($txtAutoCompletion, 0, wxEXPAND | wxALL);
		$this->leftSizer->Add($tree, 1, wxEXPAND | wxALL);
		
		$leftPanel->SetSizer($this->leftSizer);
		
		$this->sz2 = new wxBoxSizer(wxVERTICAL);
		$lstMethods	= new wxCheckListBox();
		$lstMethods->Create($rightPanel, -1);
		
		$lstImplements	= new wxCheckListBox();
		$lstImplements->Create($rightPanel, -1);
		
		$lstMethods->Connect(wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, array($this,"onMethodChecked"));
		$lstImplements->Connect(wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, array($this,"onParentChecked"));
		
		$this->sz2->Add($lstImplements, 1, wxEXPAND | wxALL);
		$this->sz2->Add($lstMethods, 1, wxEXPAND | wxALL);
		
		$rightPanel->SetSizer($this->sz2);
		
		$this->lstMethods = $lstMethods;
		$this->lstImplements = $lstImplements;
		
		$rtNode = $tree->AddRoot("wxPHP");
		
		global $cls;
		$this->treeItems = array();
		$class_names = array();
		foreach($cls as $k => $v)
		{
			$clNode = $tree->AppendItem($rtNode, $k);
			$this->treeItems[] = $clNode;
			$class_names[] = $k;
		}
		
		$txtAutoCompletion->AutoComplete($class_names);
		
		$txtAutoCompletion->Connect( wxEVT_KEY_UP, array($this, "onAutoCompleteEnter") );
		
		$tree->ExpandAll();
			
		$tree->Connect(wxEVT_COMMAND_TREE_SEL_CHANGED, array($this,"onClassSelected"));

		$this->tree = $tree;
		$this->txtAutoCompletion = $txtAutoCompletion;
		
		$sw->SplitVertically($leftPanel, $rightPanel);
		$sw->SetMinimumPaneSize(150);
		$this->sz->Add($sw,1,wxEXPAND | wxALL);
		
		$this->SetSizer($this->sz);
		
		$mb = new wxMenuBar();
		
		$mn = new wxMenu();
		$mn->Append(-1, "&Save", "save the changes to classes.json");
		$mb->Append($mn, "&File");
		
		$this->SetMenuBar($mb);
		
		$sbar = $this->CreateStatusBar(2);
		$sbar->SetStatusText("wxPHP Class Methods Selector");
		$sbar->SetStatusText("v0.2", 1);
		$this->SetStatusWidths(2, array(250, -1));
		
		$this->Connect(wxEVT_COMMAND_MENU_SELECTED, array($this,"onSave"));
		$this->Connect(wxEVT_CLOSE_WINDOW, array($this, "onWindowClose"));
		
		$this->taskBar = new wxTaskBarIconCustom();
		$this->taskBar->SetIcon(new wxIcon("sample.xpm", wxBITMAP_TYPE_XPM), "wxPHP Classes Selector v0.2");
		
		$this->taskBar->Connect(wxEVT_TASKBAR_LEFT_DCLICK, array($this, "onTaskBarClick"));
	}
	
	function onWindowClose($event)
	{
		//Remove tray icon
		if($this->taskBar->IsIconInstalled())
		{
			$this->taskBar->RemoveIcon();
		}
		
		$event->Skip();
	}
	
	function onTaskBarClick()
	{
		if($this->IsShown())
		{
			$this->Hide();
		}
		else
		{
			$this->Show();
		}
	}
	
	function onAutoCompleteEnter($event)
	{
		if($event->GetKeyCode() == WXK_RETURN || $event->GetKeyCode() == WXK_NUMPAD_ENTER)
		{
			for($i=0; $i<$this->tree->GetCount(); $i++)
			{
				$text = $this->tree->GetItemText($this->treeItems[$i]);
				
				if($text == $this->txtAutoCompletion->GetValue())
				{
					$this->tree->SelectItem($this->treeItems[$i]);
					break;
				}
			}
		}
	}
	
	/**
	 * Saves the output to classes.json
	 */
	function onSave($event)
	{
		global $clo;
		file_put_contents("classes.json", serialize_json($clo));
	}
	
	/**
	 * Triggers when a class is selected to show the class methods
	 * and parents.
	 */
	function onClassSelected($event)
	{
		$selected_class = $this->tree->GetItemText($event->GetItem());
		
		global $selClass;
		global $cls;
		global $clo;
		
		$arr = array();
		$optIndex = 0;
		$optIndexArr = array();
		
		//Clear inheritance list
		$implements_array = array();
		$this->lstImplements->Set($implements_array, null);
		
		if(isset($cls[$selected_class]))
		{
			$selClass = $selected_class;
			ksort($cls[$selected_class]);
			
			foreach($cls[$selected_class] as $method_name => $method_definitions)
			{
				//Generate inheritance list
				if($method_name=="_implements")
				{
					$implements_array = array(); //Store parent classes fir addition to list control
					$saved_selections = array(); //Store the index of selected parent classes on classes.out file
					$parent_classes_count = 0; //Count of parent classes
					
					foreach($cls[$selected_class]["_implements"] as $parent_class)
					{
						$implements_array[] = $parent_class;
						
						if(!isset($clo[$selected_class]["_implements"]))
							continue;
							
						//If parent was previously selected or stored on classes.out store its position
						if(in_array($parent_class, $clo[$selected_class]["_implements"]))
							$saved_selections[] = $parent_classes_count;
							
						$parent_classes_count++;
					}
					
					//Add inheritance list
					$this->lstImplements->Set($implements_array, null);
					
					//Check bases classes that were checked or stored on classes.out
					foreach($saved_selections as $selection_index)
						$this->lstImplements->Check($selection_index, true);
				}
				
				//Skip non methods like _implements
				if($method_name{0}=="_")
					continue;
				
					
				foreach($method_definitions as $method_definition)
				{
					$arguments = array();
					
					foreach($method_definition["parameters_type"] as $parameter_index=>$parameter_type)
					{	
						$argument_string = $parameter_type . " " . $method_definition["parameters_name"][$parameter_index];
						
						//Argument is array
						if($method_definition["parameters_is_array"][$parameter_index])
							$argument_string .= "[]";
						
						//Argument without default value
						if(!is_null($method_definition["parameters_default_value"][$parameter_index]))
							$argument_string .= " = " .  $method_definition["parameters_default_value"][$parameter_index];
							
						$arguments[] = $argument_string;
					}
					
					$arguments_string = join(', ',$arguments);
					
					$protected = $method_definition["protected"] ? "protected " : "";
					$virtual = $method_definition["virtual"] ? "virtual " : "";
					$pure = $method_definition["pure_virtual"] ? "pure virtual " : "";
					$static = $method_definition["static"] ? "static " : "";
					$type = $method_definition["return_type"] . " ";
					
					$arr[] = $method_name."( ".$arguments_string." )" . " : " . $protected . $pure . $virtual . $static . $type;
					
					$found = false;
					if(isset($clo[$selected_class][$method_name]))
					{
						foreach($clo[$selected_class][$method_name] as $method_data)
						{
							if($method_data==$method_definition)
							{
								$found=true;
								break;
							}
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

		$this->lstMethods->Set($arr, null);
		
		foreach($optIndexArr as $optIndex)
			$this->lstMethods->Check($optIndex,true);
	}
	
	/**
	 * Event that receives notifications of checked parent classes
	 * and saves them on the global classes output ($clo) variable.
	 */
	function onParentChecked($event)
	{
		global $cls;
		global $clo;
		global $selClass;
		
		$l=$event->GetSelection();
		
		$imps = $cls[$selClass]['_implements'];
		
		if(!isset($clo[$selClass]['_implements']))
			$clo[$selClass]['_implements'] = array();
			
		if(!in_array($imps[$l],$clo[$selClass]['_implements']))
		{
			$clo[$selClass]['_implements'][]=$imps[$l];
		}
		elseif(($c = array_search($imps[$l],$clo[$selClass]['_implements']))!==false)
		{
			unset($clo[$selClass]['_implements'][$c]);
			
			//Reassign indexes
			$temp_implements = $clo[$selClass]['_implements'];
			$clo[$selClass]['_implements'] = array();
			foreach($temp_implements as $parentClass)
				$clo[$selClass]['_implements'][] = $parentClass;
		}
			
		if(count($clo[$selClass]['_implements']) <= 0)
			unset($clo[$selClass]['_implements']);
			
		if(count($clo[$selClass]) <= 0)
			unset($clo[$selClass]);
	}
	
	/**
	 * When a method is checked this function checks if not already declared
	 * and store it on the classes output variable ($clo), but if it is already
	 * declared then remove it from the classes output and do some cleaning.
	 */
	function onMethodChecked($event)
	{
		global $cls;
		global $clo;
		global $selClass;
		
		$selected_method_index = $event->GetSelection();
		
		$methods_count = 0;
		foreach($cls[$selClass] as $method_name=>$method_definitions)
		{
			if($method_name{0} == "_")
				continue;
				
			foreach($method_definitions as $method_definition)
			{
				//We are on the same method that the user selected
				if($selected_method_index == $methods_count)
				{
					if(!isset($clo[$selClass][$method_name]))
					{
						$clo[$selClass][$method_name] = array();
					}
					
					$method_found = false;
					$method_found_index = false;
					foreach($clo[$selClass][$method_name] as $method_index=>$method_data)
					{
						if($method_data == $method_definition)
						{
							$method_found_index = $method_index;
							$method_found = true;
							break;
						}
					}
					
					if(!$method_found)
					{
						//Add the method definition
						$clo[$selClass][$method_name][] = $method_definition;
						
						//Reassign indexes
						$temp_methods = $clo[$selClass][$method_name];
						$clo[$selClass][$method_name] = array();
						foreach($temp_methods as $method_overload)
							$clo[$selClass][$method_name][] = $method_overload;
					}
					else
					{
						//Remove the selected method overload if was already on the method array
						unset($clo[$selClass][$method_name][$method_found_index]);
						
						//Remove method definition from class if no overload is selected
						if(count($clo[$selClass][$method_name]) <= 0)
						{
							unset($clo[$selClass][$method_name]);
						}
						
						//Remove class from output if there isnt a method or implementation selected
						if(count($clo[$selClass]) <= 0)
						{
							unset($clo[$selClass]);
						}
					}
					
					return;
				}
				
				$methods_count++;
			}
		}
	}
}

//Application initialization start point
class myApp extends wxApp 
{
	function OnInit()
	{
		$zs = new myFrame();
		$zs->Show();
		$zs->Maximize();
		
		$this->frm = $zs;
		
		return true;
	}
	
	function OnExit()
	{
		return 0;
	}
}

wxInitAllImageHandlers();

$classSelectorApp = new myApp();

wxApp::SetInstance($classSelectorApp);
wxEntry();

?>
