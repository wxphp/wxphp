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

include("include/functions.php");
include("include/function_generation.php");
include("include/class_header_generation.php");
include("include/class_source_generation.php");
include("include/class_virtual_source_generation.php");

//Disable unnecesary php warnings
error_reporting(E_ALL ^ E_NOTICE ^ E_WARNING);

//Initialize includes list
$defIncludes = array();

//Initialize class and global enums
$defEnums = array();

//Initialize constant definitions
$defConsts = array();

//Initialize global variables
$defGlobals = array();

//Initialize typedef definitions
$defTypedef = array();

//Initialize function definitions
$defFunctions = array();

//Initialize classes definitions
$defIni = array();

//Initialize class properties
$defClassProperties = array();

//Initialize class groups
$defClassGroups = array();

//Load includes parsed by the xml_parser
if(file_exists("dumps/includes.json"))
{
	$defIncludes = unserialize_json(file_get_contents("dumps/includes.json"));
	
	//for wxAbort()
	$defIncludes["wx/debug.h"] = 1;
	
	//blacklist include files
	unset($defIncludes["wx/msw/ole/activex.h"]);
	unset($defIncludes["wx/aui/toolbar.h"]);
	unset($defIncludes["wx/msw/ole/automtn.h"]);
	unset($defIncludes["wx/dde.h"]);
	unset($defIncludes["wx/msw/regconf.h"]);
	unset($defIncludes["wx/msw/registry.h"]);
}

//Load functions parsed by the xml_parser
if(file_exists("dumps/functions.json"))
{
	$defFunctions = unserialize_json(file_get_contents("dumps/functions.json"));
	
	//Manually defined as a template
	$defFunctions["wxDynamicCast"] = array();
	
	//blacklist functions
	include("include/functions_blacklist.php");
}

//Load classes parsed by the xml_parser
if(file_exists("dumps/classes.json"))
{
	$defIni = unserialize_json(file_get_contents("dumps/classes.json"));
	
	//Blacklist classes
	unset($defIni['wxArrayString']); //Dont implement this class since it is interpreted as php native array()
}

//Load class properties parsed by the xml_parser
if(file_exists("dumps/class_variables.json"))
{
	$defClassProperties = unserialize_json(file_get_contents("dumps/class_variables.json"));
	
	//Blacklist class properties
	unset($defClassProperties["wxTreeListCtrl"]);
}

//Load class properties parsed by the xml_parser
if(file_exists("dumps/class_groups.json"))
{
	$defClassGroups = unserialize_json(file_get_contents("dumps/class_groups.json"));
}

//Load class and global enums parsed by the xml_parser
if(file_exists("dumps/enums.json"))
{
	$defEnums = unserialize_json(file_get_contents("dumps/enums.json"));
}

//Import all constants defined by hand
include("include/constants.php");
	
//Load constants found by the xml parser
if(file_exists("dumps/consts.json"))
{	
	$temp = unserialize_json(file_get_contents("dumps/consts.json"));
	$defConsts = array_merge($temp, $defConsts);
	
	//Append global enumeration constants
	foreach($defEnums[1] as $enumName=>$enumList)
	{
		foreach($enumList as $enumIndex=>$enumValue)
		{	
			//Temporary measure to skip some constants (we need to 
			//compile wxWidgets with wxWebView suuport)
			if("".stripos($enumValue, "ASCII")."" != "" ||
				"".stripos($enumValue, "BINARY")."" != "" ||
				"".stripos($enumValue, "NONE")."" != "" ||
				"".stripos($enumValue, "wxACC_")."" != "" || 
				"".stripos($enumValue, "wxAutomationInstance_")."" != "" ||
				"".stripos($enumValue, "wxCURSOR_")."" != "" ||
				"".stripos($enumValue, "wxFS_VOL_")."" != "" ||
				"".stripos($enumValue, "wxMEDIACTRLPLAYER")."" != "" ||
				"".stripos($enumValue, "wxNAVDIR_")."" != "" ||
				"".stripos($enumValue, "wxOBJID_")."" != "" ||
				"".stripos($enumValue, "wxROLE_")."" != "" ||
				"".stripos($enumValue, "wxWEB_")."" != ""
			)
				continue;
				
			$defConsts[$enumValue] = true;
		}
	}

	//blacklist constants
	include("include/constants_blacklist.php");
}

//Load global variables parsed by the xml_parser
if(file_exists("dumps/global_variables.json"))
{
	$defGlobals = unserialize_json(file_get_contents("dumps/global_variables.json"));
	
	//Temporary black list
	unset($defGlobals['wxEVT_HOTKEY']);
	unset($defGlobals['wxNullRegion']);
	
	//(we need to compile with wxWebView support)
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_NAVIGATING']);
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_NAVIGATED']);
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_LOADED']);
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_ERROR']);
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_NEWWINDOW']);
	unset($defGlobals['wxEVT_COMMAND_WEB_VIEW_TITLE_CHANGED']);
}

//Load typedef parsed by the xml_parser
if(file_exists("dumps/typedef.json"))
{
	$defTypedef = unserialize_json(file_get_contents("dumps/typedef.json"));
}

//Store all classes that derive from wxEvtHandler
$evnHandlers = derivationsOfClass('wxEvtHandler');

//Store all classes that derive from wxObject
$wxObject_derivations = derivationsOfClass('wxObject');

//Prepair class groups to generate different source files correctly
prepair_groups($defClassGroups, $defIni);

//Empty the discarded log
file_put_contents("discarded.log", "All class methods removed by the cleaning functions\n");
file_put_contents("discarded.log", "====================================================\n\n", FILE_APPEND);

//Remove protected methods since they aren't accessible outside the class scope
remove_protected_methods($defIni);

//Remove virtual methods that override non virtual methods with the same name
//since these methods cant be overrided causing conflicts and compilation errors.
remove_virtual_methods_overrides($defIni);

//Remove operators (TODO: is there a way to implement them on PHP ZEND?)
remove_operators($defIni);

//Remove non virtual On* methods (this methods are usually used internally on wxWidgets
//and trying to ovveride them will create compilation errors.
remove_non_virtual_on($defIni);

//Remove methods from classes that inherit from more than 1 class with the same method name
//For example wxComboBox inherits from wxItemContainer and wxTextEntry and both implement IsEmpty
//So this create compilation errors because one of the base class methods dont implement it as
//virtual
remove_methods_duplicated_on_base_classes($defIni);

//Removes methods implementing unknown parameter types or return types
remove_methods_implementing_unknown_types($defIni);

//Removes functions implementing unknown parameter types or return types
remove_functions_implementing_unknown_types($defFunctions);

//Remove classes and methods not implemented on all 3 target platforms (windows, linux, mac)
remove_classes_and_methods_not_crossplatform($defIni);

//Remove methods implementing unhandled argument declaration like 
//wxRichTextCtrl::PrepareContent(wxRichTextParagraphLayoutBox &WXUNUSED(container))
remove_methods_implementing_unhandled_arguments($defIni);


//Merges method overloads from parents to child classes
//classes_method_merger($defIni); //This is provoking compilation errors on some classes

//Generate header files of class groups
$header_files = "";
foreach($defClassGroups as $header_name => $v)
{
	$header_name = str_replace("group_class_", "", $header_name);
	$header_files .= "#include \"$header_name.h\"\n";
}
	
//Generate classes source and header files
foreach($defClassGroups as $file_name => $class_list)
{
	//Strip group_class_
	$file_name = str_replace("group_class_", "", $file_name);
	
	echo "Generating $file_name.cpp ...\n";
	
	//Add neccesary headers to classes implementation file
	$classes_source_code = classes_author_header();
	$classes_source_code .= "#include \"php_wxwidgets.h\"\n";
	$classes_source_code .= "$header_files\n\n";
	
	foreach($class_list as $class_name)
	{
		if(!isset($defIni[$class_name]))
			continue;
			
		$class_methods = $defIni[$class_name];
			
		ob_start();
		include("templates/classes_source.php");
		$classes_source_code .= ob_get_contents();
		ob_end_clean();
		
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Skip _implements (inheritance) list
			if($method_name{0} == "_")
				continue;
				
			//On the documentation the width and height seems to be optional but not on gtk :S
			//TODO: modify this directly on full_classes_set.json and classes.json
			if($class_name == "wxIcon" && $method_name == "LoadFile")
			{
				//Create a new overload
				$method_definitions[] = $method_definitions[0];
				
				//Modify original definition
				unset($method_definitions[0]["parameters_type"][2]);
				unset($method_definitions[0]["parameters_type"][3]);
				unset($method_definitions[0]["parameters_name"][2]);
				unset($method_definitions[0]["parameters_name"][3]);
				unset($method_definitions[0]["parameters_default_value"][2]);
				unset($method_definitions[0]["parameters_default_value"][3]);
				
				//Modify overload definition
				$method_definitions[1]["parameters_required"][] = true;
				$method_definitions[1]["parameters_required"][] = true;
				$method_definitions[1]["parameters_required"][] = true;
			}
				
			//First print virtual methods
			foreach($method_definitions as $method_index=>$method_definition)
			{
				if(($method_definition["virtual"] && $method_definition["protected"]) || $method_definition["pure_virtual"] ||
					"".strpos($method_name, "On")."" == "0"
				)
				{
					ob_start();
					include("templates/classes_source_virtual_method.php");
					$classes_source_code .= ob_get_contents();
					ob_end_clean();
				}
			}
			
			$custom_method_template = "templates/class_methods/" . strtolower($class_name) . "_" . strtolower($method_name) . ".php";
			
			if(file_exists($custom_method_template))
			{
				ob_start();
				include($custom_method_template);
				$classes_source_code .= ob_get_contents();
				ob_end_clean();
				continue;
			}
			elseif($class_name == $method_name)
			{
				ob_start();
				include("templates/classes_source_constructor.php");
				if(isset($defClassProperties[$class_name]))
					include("templates/classes_get.php");
				$classes_source_code .= ob_get_contents();
				ob_end_clean();
			}
			elseif(!$method_definitions[0]["protected"] && !$method_definitions[0]["pure_virtual"] &&
					"".strpos($method_name, "On")."" != "0"
			)
			{
				ob_start();
				include("templates/classes_source_method.php");
				$classes_source_code .= ob_get_contents();
				ob_end_clean();
			}
		}
	}

	file_put_contents($file_name.".cpp", $classes_source_code);
	
	//Generate header file that holds class declarations
	echo "Generating $file_name.h ...\n";
	
	$classes_header_code = classes_author_header();
	
	$classes_header_code .= "#ifndef WXPHP_".strtoupper($file_name)."_H_GUARD\n";
	$classes_header_code .= "#define WXPHP_".strtoupper($file_name)."_H_GUARD\n\n";
	
	$classes_header_code .= "#include \"references.h\"\n\n";
	
	$classes_header_code .= "ZEND_BEGIN_ARG_INFO_EX(wxphp_{$file_name}_get_args, 0, 0, 1)\n";
	$classes_header_code .= tabs(1) . "ZEND_ARG_INFO(0, name)\n";
    $classes_header_code .= "ZEND_END_ARG_INFO()\n\n";
    
	foreach($class_list as $class_name)
	{
		if(!isset($defIni[$class_name]))
			continue;
			
		$class_methods = $defIni[$class_name];
		
		ob_start();
		include("templates/classes_header.php");
		$classes_header_code .= ob_get_contents();
		ob_end_clean();
	}
	
	$classes_header_code .= "#endif //WXPHP_".strtoupper($file_name)."_H_GUARD\n";

	file_put_contents($file_name.".h", $classes_header_code);

} //Ends foreach($defClassGroups as $file_name => $class_list)


//Generate functions.h prototypes and functions.cpp code
$function_prototypes = "";
$functions = "";
foreach($defFunctions as $function_name=>$function_data)
{
	//Generate function protytpes code
	$function_prototypes .= "PHP_FUNCTION(php_{$function_name});\n\n";
	
	//Generate functions code
	$function_template = "templates/functions/".strtolower($function_name).".php";
	
	ob_start();
	if(file_exists($function_template))
	{
		include($function_template);
	}
	else
	{
		include("templates/function.php");
	}
	$functions .= ob_get_contents();
	ob_end_clean();
}

echo "Generating functions.h\n";
ob_start();
	include("source_templates/functions.h");
	$functions_h_source .= ob_get_contents();
ob_end_clean();

file_put_contents("functions.h", $functions_h_source);

echo "Generating functions.cpp\n";
ob_start();
	include("source_templates/functions.cpp");
	$functions_cpp_source .= ob_get_contents();
ob_end_clean();

file_put_contents("functions.cpp", $functions_cpp_source);


//Update wxwidgets.cpp by just upgrading the code betewen 
//entries ---> code <--- entries and classes ---> code <--- classes
echo "Generating wxwidgets.cpp...\n";

//Generate zend_class_entry declaration of each class
$entries = $header_files;
$entries .= "\n";

foreach($defIni as $class_name => $class_methods)
{
	$entries .= "zend_class_entry* php_{$class_name}_entry;\n";
	$entries .= "int le_{$class_name};\n\n";
}

//Generate classes and constants initialization code for the MINIT function
$classes = "";
foreach($defIni as $class_name => $class_methods)
{
	$classes .= "\tchar PHP_{$class_name}_name[] = \"$class_name\";\n";
	$classes .= "\tchar le_{$class_name}_name[] = \"native $class_name\";\n";
	$classes .= "\tINIT_CLASS_ENTRY(ce, PHP_{$class_name}_name, php_{$class_name}_functions);\n";
	$classes .= "\tphp_{$class_name}_entry = zend_register_internal_class(&ce TSRMLS_CC);\n";
	$classes .= "\tle_{$class_name} = zend_register_list_destructors_ex(php_{$class_name}_destruction_handler, NULL, le_{$class_name}_name, module_number);\n";
	$classes .= "\n";
}

$classes .= "\n";

ksort($defConsts);

$classes .= "\t//Variables found on consts.json\n";
$classes .= "\n";
foreach($defConsts as $constant_name => $constant_value)
{
	//Skip constants that dont include a numeric value or weren't defined manually
	if(($constant_value{0} != "0" && $contant_value{1} != "x") && "".$constant_value."" != "1")
		continue;
	
	//Use the name as constant value for manually defined constants
	if($constant_value == 1)
	{
		$classes .= "\tREGISTER_LONG_CONSTANT(\"$constant_name\", $constant_name, CONST_CS | CONST_PERSISTENT);\n";
	}
	else
	{
		$classes .= "\tREGISTER_LONG_CONSTANT(\"$constant_name\", $constant_value, CONST_CS | CONST_PERSISTENT);\n";
	}
}

//Register wxWidgets global variables as php constants
$classes .= "\n";
$classes .= "\t//Variables found on global_variables.json\n";
$classes .= "\n";
$object_constants = ""; //To store constants of type object since they need to be initialized on the RINIT
foreach($defGlobals as $variable_name => $variable_type)
{
	//Skip already defined (repeated) constants
	if(isset($defConsts[$variable_name]))
		continue;
	
	//Manually define wxEmptyString
	if($variable_name == "wxEmptyString")
	{
		$classes .= "\tchar wxphp_empty_string[] = \"\";\n";
		$classes .= "\tREGISTER_STRING_CONSTANT(\"$variable_name\", wxphp_empty_string, CONST_CS | CONST_PERSISTENT);\n";
		continue;
	}
	
	//Manually define wxTransparentColour since it causes a "taking address of temporary" error because it is a macro
	//defined as #define wxTransparentColour wxColour(0, 0, 0, wxALPHA_TRANSPARENT) on wx/colour.h
	if($variable_name == "wxTransparentColour")
	{
		$object_constants .= tabs(2) . "wxColour* _wx_transparent_color = new wxColour(0, 0, 0, wxALPHA_TRANSPARENT);\n";
		$object_constants .= tabs(2) . "wxPHP_REGISTER_RESOURCE_CONSTANT(\"wxTransparentColour\", (void*) _wx_transparent_color, php_wxColour_entry, le_wxColour, CONST_CS | CONST_PERSISTENT);\n";
		continue;
	}
	
	//Since wxART_ global variables are defined as wxString but what they are really is a char[]
	if("".strpos($variable_name,"wxART_")."" != "")
	{
		$classes .= "\tchar _wxchar_{$variable_name}[] = $variable_name;\n";
		$classes .= "\tREGISTER_STRING_CONSTANT(\"$variable_name\", _wxchar_$variable_name, CONST_CS | CONST_PERSISTENT);\n";
		continue;
	}
	
	//To prevent wx/datetime.h(1810): assert "IsValid()" failed in GetTicks(): invalid wxDateTime
	if($variable_name == "wxDefaultDateTime")
	{
		$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", time(NULL), CONST_CS | CONST_PERSISTENT);\n";
		continue;
	}
		
		
	$type_modifier = "";
	$standard_type = parameter_type($variable_type, false, "Global Variables", null, $type_modifier, true);
	$plain_type = str_replace(array("const ", "&", "*"), "", $variable_type);
	
	switch($standard_type)
	{
		case "bool":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", *$variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", $variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		case "integer":
		case "class_enum":
		case "global_enum":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", *$variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", $variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
		
		case "float":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_DOUBLE_CONSTANT(\"$variable_name\", *$variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_DOUBLE_CONSTANT(\"$variable_name\", $variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		case "characters":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_STRING_CONSTANT(\"$variable_name\", $variable_name, CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", reinterpret_cast<long int>($variable_name), CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		case "date":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", *$variable_name->GetTicks(), CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_LONG_CONSTANT(\"$variable_name\", $variable_name.GetTicks(), CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		case "string":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$classes .= "\tREGISTER_STRINGL_CONSTANT(\"$variable_name\", reinterpret_cast<const char*>($variable_name->char_str()), $variable_name->Len(), CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$classes .= "\tREGISTER_STRINGL_CONSTANT(\"$variable_name\", reinterpret_cast<const char*>($variable_name.char_str()), $variable_name.Len(), CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		case "object":
			switch($type_modifier)
			{
				case "pointer":
				case "const_pointer":
					$object_constants .= tabs(2) . "wxPHP_REGISTER_RESOURCE_CONSTANT(\"$variable_name\", (void*) {$variable_name}, php_{$plain_type}_entry, le_{$plain_type}, CONST_CS | CONST_PERSISTENT);\n";
					break;
					
				case "reference":
				case "const_reference":
				case "none":
				case "const_none":
					$object_constants .= tabs(2) . "wxPHP_REGISTER_RESOURCE_CONSTANT(\"$variable_name\", (void*) &{$variable_name}, php_{$plain_type}_entry, le_{$plain_type}, CONST_CS | CONST_PERSISTENT);\n";
					break;
			}
			break;
			
		default:
			//Just skip unknown types
	}
}

$classes .= "\n";
$classes .= "\t//Class enumerations\n";
$classes .= "\n";

foreach($defEnums[0] as $enumClassName=>$classEnums)
{
	//Only add enums of enabled classes
	if(isset($defIni[$enumClassName]))
	{
		foreach($classEnums as $enumName=>$enumList)
		{
			foreach($enumList as $enumOption=>$enumValue)
			{
				//To produce constant with class property syntax class::constant
				//Gives a type 'void' unexpected error when compiling on windows
				$classes .= "\tzend_declare_class_constant_long(php_{$enumClassName}_entry, \"$enumValue\", " . strlen($enumValue) . ",  $enumClassName::$enumValue TSRMLS_CC);\n";
				
				//Constant in global scope
				//$classes .= "REGISTER_LONG_CONSTANT(\"$enumOption\", $enumClassName::$enumOption, CONST_CS | CONST_PERSISTENT);\n";
			}
		}
	}
}

//Generating wxwidgets.cpp function table entries

$functions = "";
$functions_table = "";
foreach($defFunctions as $function_name=>$function_data)
{
	$function_template = "templates/functions/".strtolower($function_name).".php";
	
	ob_start();
	if(file_exists($function_template))
	{
		include($function_template);
	}
	else
	{
		include("templates/function.php");
	}
	$functions .= ob_get_contents();
	ob_end_clean();
	
	//Write to functions table entry
	$functions_table .= "\tPHP_FALIAS($function_name, php_$function_name, NULL)\n";
}

//Generate wxwidgets.cpp
ob_start();
	include("source_templates/wxwidgets.cpp");
	$wxwidgets_source .= ob_get_contents();
ob_end_clean();

file_put_contents("wxwidgets.cpp", $wxwidgets_source);


//Update php_wxwidgets.h by just upgrading the code betewen 
//entries ---> code <--- entries
echo "Generating php_wxwidgets.h...\n";
$output = "";
foreach($defIni as $className => $classDef)
{
	foreach($classDef as $fcName => $fc)
	{
		//Skip specification attributes like _pure_virtual, _implements, etc...
		if($fcName{0}=="_")
		{
			continue;
		}
		
		if($fcName==$className)
		{
			$fcName = "__construct";
			
			if(isset($defClassProperties[$className]))
			{
				$output .= "PHP_METHOD(php_$className, __get);\n";
			}
		}

		$output .= "PHP_METHOD(php_$className, $fcName);\n";
	}
	
	if(isset($evnHandlers[$className]))
	{
		$output .= "PHP_METHOD(php_$className, Connect);\n";
	}
		
}

$old = file_get_contents("source_templates/php_wxwidgets.h");

if(preg_match("/(.*?\/\/ entries --->)[^<]+(\/\/ <--- entries[^§]+)/sm", $old, $matches))
{
	$output = $matches[1] . "\n" . $output . $matches[2];
	
	$hd = fopen("php_wxwidgets.h", "w");
	fwrite($hd, $output);
	fclose($hd);
}



//Update common.h by just upgrading the code betewen 
//entries ---> code <--- entries
echo "Generating list of include files for common.h...\n";
$output = "";
foreach($defIncludes as $file_name => $value)
{
	$output .= "#include <$file_name>\n";
}

$old = file_get_contents("source_templates/common.h");

if(preg_match("/(.*?\/\/ entries --->)[^<]+(\/\/ <--- entries[^§]+)/sm", $old, $matches))
{
	$output = $matches[1] . "\n" . $output . $matches[2];
	
	$hd = fopen("common.h", "w");
	fwrite($hd, $output);
	fclose($hd);
}


//Update config files (config.m4, config.w32)
echo "\nUpdating config files with list of source files...\n\n";
$source_files = "";

foreach($defClassGroups as $group_name=>$class_list)
{
	$source_files .= str_replace("group_class_", "", $group_name) . ".cpp ";
}

$source_files = trim($source_files);

$unix_config = "";
ob_start();
	include("config_templates/config.m4");
	$unix_config .= ob_get_contents();
ob_end_clean();

file_put_contents("config.m4", $unix_config);

$win_config = "";
ob_start();
	include("config_templates/config.w32");
	$win_config .= ob_get_contents();
ob_end_clean();

file_put_contents("config.w32", $win_config);


die("Done!\n");

?>
