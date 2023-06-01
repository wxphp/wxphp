<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Generates an interface file "wxwidgets.php" that serves as a library
 * for working code completion on IDE's like eclipse, netbeans, etc.
 * 
 * To run it execute: php interface_generator.php
 * 
 * The wxwidgets.php interface file is created on the same path
 * where this script resides.
 * 
*/

//Disable unnecesary php warnings
error_reporting(E_ALL ^ E_NOTICE ^ E_WARNING);

//Change to correct working directory to be able to execute the script from everywhere
if($argv[0] == $_SERVER["SCRIPT_NAME"])
{
	chdir(str_replace("interface_generator.php" , "", $argv[0]));
}
else
{
	chdir(getcwd() . "/" . str_replace($_SERVER["SCRIPT_NAME"] , "", $_SERVER["PHP_SELF"]));
}

include("source_maker/include/functions.php");
include("source_maker/include/function_generation.php");
include("source_maker/include/class_header_generation.php");
include("source_maker/include/class_virtual_source_generation.php");

//Initialize class enums
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


//Load functions parsed by the json_generator
if(file_exists("../json/functions.json"))
{
	$defFunctions = unserialize_json(file_get_contents("../json/functions.json"));
	
	//Manually defined as a template
	$defFunctions["wxDynamicCast"] = array( 
		array(
			"return_type"=>"wxObject",
			"brief_description"=>"Converts a given object from one type to another", 
			"parameters_type"=>array("wxObject", "wxString"),
			"parameters_name"=>array("object", "type")
		)
	);
	
	//Custom function to convert object constants to non constants
	$defFunctions["wxC2D"] = array(
		array(
			"return_type"=>"void*",
			"brief_description"=>"Converts a wxWidgets constant object to dynamic in order to be able to access its methods like wxC2D(wxNORMAL_FONT)->GetPointSize().",
			"parameters_type"=>array("void*"),
			"parameters_name"=>array("constantObject"),
			"parameters_required"=>array(true)
		)
	);
	
	//blacklist functions
	include("source_maker/include/functions_blacklist.php");
}

//Load classes parsed by the json_generator
if(file_exists("../json/classes.json"))
{
	$defIni = unserialize_json(file_get_contents("../json/classes.json"));
	
	//Blacklist classes
	unset($defIni['wxArrayString']);
}

//Load class and global enums parsed by the json_generator
if(file_exists("../json/enums.json"))
{
	$defEnums = unserialize_json(file_get_contents("../json/enums.json"));
}

//Import all constants defined by hand
include("source_maker/include/constants.php");
	
//Load constants found by the xml parser
if(file_exists("../json/consts.json"))
{	
	$temp = unserialize_json(file_get_contents("../json/consts.json"));
	$defConsts = array_merge($temp, $defConsts);

	//blacklist constants
	include("source_maker/include/constants_blacklist.php");
}

//Load global variables parsed by the json_generator
if(file_exists("../json/global_variables.json"))
{
	$defGlobals = unserialize_json(file_get_contents("../json/global_variables.json"));
	
	//Temporary black list
	unset($defGlobals['wxEVT_HOTKEY']);
	unset($defGlobals['wxNullRegion']);
}

//Load typedef parsed by the json_generator
if(file_exists("../json/typedef.json"))
{
	$defTypedef = unserialize_json(file_get_contents("../json/typedef.json"));
}

//Empty the discarded log
file_put_contents("discarded.log", "All class methods removed by the cleaning functions\n");
file_put_contents("discarded.log", "====================================================\n\n", FILE_APPEND);

//Remove protected methods since they aren't accessible outside the class scope
remove_protected_methods($defIni);

//Remove virtual methods that override non virtual methods with the same name
//since this methods cant be overrided causing conflicts and compilation errors.
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

//Remove deprecated class methods.
remove_deprecated_methods($defIni);

//Remove methods implementing unhandled argument declaration like 
//wxRichTextCtrl::PrepareContent(wxRichTextParagraphLayoutBox &WXUNUSED(container))
remove_methods_implementing_unhandled_arguments($defIni);


ksort($defIni);

//Open output file
$library = fopen("wxwidgets.php", "w");

fwrite($library, "<?php\n");
fwrite(
$library, 
"/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 *
 * @description
 * Auto-generated interface file to enable code completion on IDE's
 * like eclipse, netbeans, etc... Just drop it on your project tree
 * and it should be automatically parsed by the IDE code completion
 * engine.
 *
 */
 
 
// To prevent this code from being executed since functionality
// is already provided by the wxwidgets extension.
if(defined(\"DUMMY_WXWIDGETS_LIBRARY\"))
{\n\n
 "
);

print "Adding constants...\n";

//Write global constants
print "   Numeric...\n";

fwrite($library, "//wxWidgets constants\n\n");
foreach($defConsts as $constant_name=>$constant_value)
{
	if(!isset($defConsts[$constant_value]))
	{
		$constant_value = cleanup_constant_value($constant_value);
	}
	fwrite($library, "define('{$constant_name}', {$constant_value});\n");
}
fwrite($library, "\n");


//Write enums as global constants
print "   Enumerated...\n";

fwrite($library, "//wxWidgets enum constants\n\n");
foreach($defEnums[1] as $enumName=>$enumList)
{
	foreach($enumList as $enumIndex=>$enumValue)
	{	
		//Temporary measure to skip some constants (we need to 
		//compile wxWidgets with wxWebView suuport)
		if(
            "".stripos($enumValue, "wxACC_")."" != "" || 
            "".stripos($enumValue, "wxAutomationInstance_")."" != "" ||
            "".stripos($enumValue, "wxCURSOR_")."" != "" ||
            "".stripos($enumValue, "wxFS_VOL_")."" != "" ||
            "".stripos($enumValue, "wxNAVDIR_")."" != "" ||
            "".stripos($enumValue, "wxOBJID_")."" != "" ||
            "".stripos($enumValue, "wxROLE_")."" != ""
		)
			continue;
			
		fwrite($library, "define('{$enumValue}', 1);\n");
	}
}
fwrite($library, "\n");

//Write global object constants
print "   Objects...\n";

fwrite($library, "//wxWidgets object constants\n\n");
foreach($defGlobals as $constant_name=>$constant_type)
{
	$constant_type = str_replace(array("const ", "*", "&"), "", $constant_type);
	fwrite($library, "define('{$constant_name}', '{$constant_type}');\n");
}
fwrite($library, "\n");



print "\n\nAdding functions...\n";

//Generate functions
fwrite($library, "//wxWidgets functions\n\n");
foreach($defFunctions as $function_name=>$function_definitions)
{
	fwrite($library, generata_documentation($function_name, $function_definitions)."\n");
	fwrite($library, "function " . $function_name . "(");
	$arguments = "";
	foreach($function_definitions as $function_index=>$function_definition)
	{
		foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_type)
		{
			$argument_data = get_argument_declaration(array($parameter_type), $function_definition["parameters_name"][$parameter_index], $function_name);
			
			if($argument_data)
			{
				$arguments .= $argument_data;
				
				if($function_definition["parameters_default_value"][$parameter_index])
				{
					$argument_value = $function_definition["parameters_default_value"][$parameter_index];
					
					if($argument_value == "wxString()")
						$argument_value = "''";
					elseif(strpos($argument_value, "|") !== false)
						$argument_value = "null";
						
					$argument_type = explode(" ", $argument_data);
					
					if(count($argument_type) > 1 && $argument_type[0] != "array")
						$arguments .= "=null";
					else
						$arguments .= "=" . $argument_value;
				}
				
				$arguments .= ", ";
			}
		}
		break;
	}
	$arguments = trim($arguments, ", ");
	fwrite($library, $arguments);
	fwrite($library, "){}\n\n");
}
fwrite($library, "\n");


print "\n\nAdding classes...\n";

//Generate classes reference
fwrite($library, "//wxWidgets Classes\n\n");
foreach($defIni as $class_name=>$class_methods)
{	
	print "Adding $class_name...\n";
	
	//Move constructor to top if available
	if(isset($class_methods[$class_name]))
	{
		$constructor = array(
			'__construct' => $class_methods[$class_name],
			$class_name   => $class_methods[$class_name]
		);
		
		unset($class_methods[$class_name]);
		
		ksort($class_methods);
		
		$class_methods = array_merge($constructor, $class_methods);
	}
	
	$content = "";
	$content .= "class $class_name";
	
	if(isset($class_methods["_implements"]))
	{
		$content .= " extends " . $class_methods["_implements"][0];
	}
	
	$content .= "\n{\n";
	
	//Generate class constants
	if(isset($defEnums[0][$class_name]))
	{
		foreach($defEnums[0][$class_name] as $enumName=>$enumList)
		{
			foreach($enumList as $enumOption=>$enumValue)
			{
				$content .= "\tconst $enumValue = 1;\n";
			}
		}
		
		$content .= "\n";
	}
	
	foreach($class_methods as $method_name=>$method_definitions)
	{
		if($method_name[0] !== "_" || $method_name[1] === "_")
		{
			$method_name       = lcfirst($method_name);
			$method_definition = combine_arrays($method_definitions);
			
			$content .= generata_documentation($method_name, $method_definition, 1)."\n";
			
			$content .= "\tpublic ";
			
			if($method_definitions[0]["static"])
			{
				$content .= "static ";
			}
			$content .= "function " . php_method_name($method_name) . "(";
	
			$arguments = "";
			foreach($method_definition["parameters_type"] as $parameter_index => $parameter_types)
			{
				$parameter_name = normalize_param_name($method_definition['parameters_name'][$parameter_index]);				
				$argument_data  = get_argument_declaration($parameter_types, $parameter_name, $method_name, $class_name);
				
				if($argument_data)
				{
					$arguments .= $argument_data;
					
					$argument_values = array();
					if(isset($method_definition["parameters_default_value"][$parameter_index]))
					{
						$argument_values = $method_definition["parameters_default_value"][$parameter_index];
					}

					if(count($argument_values) == 1)
					{
						$argument_value = reset($argument_values);
						if($argument_value === null)
							$argument_value = "null";
						elseif($argument_value == "wxString()")
							$argument_value = "''";
						elseif($argument_value[0] === "(")
							$argument_value = "null";
						elseif($argument_value[0] === "_" && $argument_value[1] === "(")
							$argument_value = str_replace(array("_(", ")"), "", $argument_value);
						elseif($argument_value[0] === "w" && $argument_value[1] === "x" && $argument_value[2] === "T" && $argument_value[3] === "(")
							$argument_value = str_replace(array("wxT(", ")"), "", $argument_value);
						elseif($argument_value[0] === "w" && $argument_value[1] === "x" && "" . strstr($argument_value, "(") . "" != "")
							$argument_value = "null";
						elseif(strpos($argument_value, "|") !== false)
							$argument_value = "null";
											
						$arguments .= " = {$argument_value}";
					}
					elseif(count($argument_values) > 1)
					{
						$arguments .= " = null";						
					}
					
					$arguments .= ", ";
				}
			}
			$arguments = trim($arguments, ", ");
			$content .= $arguments;
			$content .= ") {}\n\n";
		}
	}
	
	$content = rtrim($content, "\n") . "\n";
	
	$content .= "}\n\n";
	fwrite($library, $content);
}
fwrite($library, "}\n");

fclose($library);

print "\n\nDone!";

function combine_arrays(array $arrays)
{
	$combinedArray = array();
	$minParamCount = -1;
	$maxParamCount = 0;
	foreach($arrays as $key => $array)
	{
		$combinedArray = combine_array($array, $combinedArray, $key, $minParamCount, $maxParamCount);
	}
	
	for($i = $minParamCount; $i < $maxParamCount; $i++)
	{
		if(empty($combinedArray['parameters_default_value'][$i]))
		{
			$combinedArray['parameters_default_value'][$i] = array(null);
		}
	}

	return $combinedArray;
}

function combine_array($array, $combinedArray, $key, &$minParamCount, &$maxParamCount)
{
	if(!is_array($array))
	{
		return $array;
	}

	foreach($array as $index => $value)
	{
		if(!($combinedArray[$index]))
		{
			$combinedArray[$index] = array();
		}
		
		if(is_array($value))
		{
			if($index == 'parameters_type')
			{
				$paramCount = count($value);
				if($paramCount > $maxParamCount)
				{
					$maxParamCount = $paramCount;
					if($minParamCount == -1)
					{
						$minParamCount = $paramCount;
					}
				}

				if($paramCount < $minParamCount)
				{
					$minParamCount = $paramCount;
				}
			}

			$combinedArray[$index] = combine_array($value, $combinedArray[$index], $key, $minParamCount, $maxParamCount);
		}
		else
		{
			if($value !== null && !in_array($value, $combinedArray[$index]))
			{
				// index = parameters_name
				$combinedArray[$index][$key] = $value;
			}
		}
	}
	
	return $combinedArray;
}

function generata_documentation($function_name, $function_definition, $tabs=0)
{
	$tabs_count = $tabs;
	$tabs = "";
	for($i=0; $i<$tabs_count; $i++)
	{
		$tabs .= "\t";
	}
	
	$documentation = $tabs . "/**\n";
	
	if($function_definition["brief_description"])
	{
		foreach($function_definition["brief_description"] as $description)
		{
			$documentation .= $tabs . " * {$description}\n";					
		}
	}
	else
	{
		$documentation .= $tabs . " * {$function_name}\n";
	}
	
	foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_types)
	{
		$parameter_name = normalize_param_name($function_definition['parameters_name'][$parameter_index]);
		$param_data = get_type_doc_param($parameter_types, $parameter_name, $function_name);
		
		if($param_data)
		{
			$documentation .= $tabs . " * @param " . $param_data . "\n";
		}
	}
	
	$return_data = str_replace(" \$", "", get_type_doc_param($function_definition["return_type"], "", $function_name));
	
	if($return_data)
		$documentation .= $tabs . " * @return " . $return_data . "\n";
	
	$documentation .= $tabs . " */";
	
	return $documentation;
}

/**
 * @param array|string $parameter_names
 * @return mixed
 */
function normalize_param_name($parameter_names)
{
	if(!is_array($parameter_names))
	{
		return $parameter_names;
	}
	
	$parameter_name = "";
	$first = true;
	foreach($parameter_names as $param)
	{
		if($first == true)
		{
			$first = false;
			$parameter_name .= $param;
		}
		elseif($param !== null)
		{
			$parameter_name .= "Or" . ucfirst($param);
		}
	}
	
	return $parameter_name;
}

function get_type_doc_param($types, $type_name, $function_name, $class_name=null)
{
	$declaration_modifier = "";
	$method_types = array();
	
	foreach($types as $type)
	{
		$standard_type = parameter_type($type, false, $function_name, $class_name, $declaration_modifier, true);
		
		$cleaned_type = str_replace(array("const ", "*", "&"), "", $type);
		
		$method_type = "";
		
		switch($standard_type)
		{
			case	"bool":
			{
				switch($declaration_modifier)
				{
					case "pointer": //bool*
					case "reference": //bool&
						$method_type = "bool";
						break;
						
					case "const_pointer": //const bool* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const bool&
					case "none": //bool
					case "const_none": //const bool
						$method_type = "bool";
						break;
				}
				break;
			}	
			case	"integer":
			{
				switch($declaration_modifier)
				{
					case "pointer": //integer*
					case "reference": //integer&
						$method_type = "integer";
						break;
						
					case "const_pointer": //const integer* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const integer&
					case "none": //integer
					case "const_none": //const integer
						$method_type = "integer";
						break;
				}
				break;
			}	
			case	"class_enum":
			{
				switch($declaration_modifier)
				{
					case "pointer": //integer*
					case "reference": //integer&
						$method_type = "$cleaned_type";
						break;
						
					case "const_pointer": //const integer* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const integer&
					case "none": //integer
					case "const_none": //const integer
						$method_type = "$cleaned_type";
						break;
				}
				break;
			}	
			case	"global_enum":
			{
				switch($declaration_modifier)
				{
					case "pointer": //integer*
					case "reference": //integer&
						$method_type = "$cleaned_type";
						break;
						
					case "const_pointer": //const integer* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const integer&
					case "none": //integer
					case "const_none": //const integer
						$method_type = "$cleaned_type";
						break;
				}
				break;
			}
			case	"float":
			{
				switch($declaration_modifier)
				{
					case "pointer": //float*
					case "reference": //float&
						$method_type = "float";
						break;
						
					case "const_pointer": //const float* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const float&
					case "none": //float
					case "const_none": //const float
						$method_type = "float";
						break;
				}
				break;
			}
			case	"characters":
			{
				switch($declaration_modifier)
				{
					case "pointer": //char*
					case "reference": //char&
						$method_type = "string";
						break;
						
					case "const_pointer": //const char*
						$method_type = "string";
						break;
					
					case "const_reference": //const char&
					case "none": //char
					case "const_none": //const char
						$method_type = "string";
						break;
				}
				break;
			}
			case	"void":
			{
				switch($declaration_modifier)
				{
					case "const_pointer_pointer": //const void**
					case "pointer_pointer":
					case "const_pointer": //const void*
					case "pointer": //void*
						$method_type = "mixed";						
						break;
				}
				break;
			}
			case	"date":
			{
				switch($declaration_modifier)
				{
					case "pointer": //long*
					case "reference": //long&
						$method_type = "timestamp";
						break;
						
					case "const_pointer": //const long* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const long&
					case "none": //long
					case "const_none": //const long
						$method_type = "timestamp";
						break;
				}
				break;
			}	
			case	"string":
			{
				switch($declaration_modifier)
				{
					case "pointer": //wxString*
					case "reference": //wxString&
						$method_type = "string";
						break;
						
					case "const_pointer": //const wxString* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const wxString&
					case "none": //wxString
					case "const_none": //const wxString
						$method_type = "string";
						break;
				}
				break;
			}
			case	"strings_array":
			{
				switch($declaration_modifier)
				{
					case "pointer": //wxArrayString*
					case "reference": //wxArrayString&
						$method_type = "array";
						break;
						
					case "const_pointer": //const wxArrayString* Array
						$method_type = "array";
						break;
					
					case "const_reference": //const wxArrayString&
					case "none": //wxArrayString
					case "const_none": //const wxArrayString
						$method_type = "array";
						break;
				}
				break;
			}	
			case "object":
			{
				switch($declaration_modifier)
				{
					case "pointer": //object*
					case "reference": //object&
						$method_type = "$cleaned_type";
						break;
						
					case "const_pointer": //const bool* Array
					case "const_reference": //const bool&
					case "none": //bool
					case "const_none": //const bool
						$method_type = "$cleaned_type";
						break;
				}
				break;
			}	
			default: 
				
		}
		
		$method_types[] = $method_type;
	}
	
	return implode('|', $method_types) . " \$$type_name";
}

/**
 * @param string[] $types Type of the parameter (declared as a reference in case the value needs to be substitued).
 * @param string $type_name
 * @param string $function_name
 * @param string $class_name
 * @return string
 */
function get_argument_declaration(array $types, $type_name, $function_name, $class_name=null)
{
	$declaration_modifier = "";
	$standard_types = array();
	$cleaned_types = array();
	$method_type = "";

	foreach($types as $type)
	{
		$standard_types[parameter_type($type, false, $function_name, $class_name, $declaration_modifier, true)] = true;
		$cleaned_types[str_replace(array("const ", "*", "&"), "", $type)] = true;	
	}

	if(count($standard_types) == 1 && count($cleaned_types) == 1)
	{
		$standard_types = array_keys($standard_types);
		$cleaned_types  = array_keys($cleaned_types);
		$standard_type  = reset($standard_types);
		$cleaned_type   = reset($cleaned_types);
	}
	else
	{
		$standard_type = "mixed";
		$cleaned_type  = "mixed";
	}
	
	switch($standard_type)
	{
		case	"bool":
		{
			switch($declaration_modifier)
			{
				case "pointer": //bool*
				case "reference": //bool&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const bool* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const bool&
				case "none": //bool
				case "const_none": //const bool
					$method_type = "\$$type_name";
					break;
			}
			break;
		}	
		case	"integer":
		{
			switch($declaration_modifier)
			{
				case "pointer": //integer*
				case "reference": //integer&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "\$$type_name";
					break;
			}
			break;
		}	
		case	"class_enum":
		{
			switch($declaration_modifier)
			{
				case "pointer": //integer*
				case "reference": //integer&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "\$$type_name";
					break;
			}
			break;
		}	
		case	"global_enum":
		{
			switch($declaration_modifier)
			{
				case "pointer": //integer*
				case "reference": //integer&
					$method_type = "$cleaned_type &\$$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "$cleaned_type \$$type_name";
					break;
			}
			break;
		}
		case	"float":
		{
			switch($declaration_modifier)
			{
				case "pointer": //float*
				case "reference": //float&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const float* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const float&
				case "none": //float
				case "const_none": //const float
					$method_type = "\$$type_name";
					break;
			}
			break;
		}
		case	"characters":
		{
			switch($declaration_modifier)
			{
				case "pointer": //char*
				case "reference": //char&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const char*
					$method_type = "\$$type_name";
					break;
				
				case "const_reference": //const char&
				case "none": //char
				case "const_none": //const char
					$method_type = "\$$type_name";
					break;
			}
			break;
		}
		case	"void":
		{
			switch($declaration_modifier)
			{
				case "const_pointer_pointer": //const void**
				case "pointer_pointer":
				case "const_pointer": //const void*
				case "pointer": //void*
					$method_type = "\$$type_name";						
					break;
			}
			break;
		}
		case	"date":
		{
			switch($declaration_modifier)
			{
				case "pointer": //long*
				case "reference": //long&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const long* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const long&
				case "none": //long
				case "const_none": //const long
					$method_type = "\$$type_name";
					break;
			}
			break;
		}	
		case	"string":
		{
			switch($declaration_modifier)
			{
				case "pointer": //wxString*
				case "reference": //wxString&
					$method_type = "&\$$type_name";
					break;
					
				case "const_pointer": //const wxString* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const wxString&
				case "none": //wxString
				case "const_none": //const wxString
					$method_type = "\$$type_name";
					break;
			}
			break;
		}
		case	"strings_array":
		{
			switch($declaration_modifier)
			{
				case "pointer": //wxArrayString*
				case "reference": //wxArrayString&
					$method_type = "array &\$$type_name";
					break;
					
				case "const_pointer": //const wxArrayString* Array
					$method_type = "array \$$type_name";
					break;
				
				case "const_reference": //const wxArrayString&
				case "none": //wxArrayString
				case "const_none": //const wxArrayString
					$method_type = "array \$$type_name";
					break;
			}
			break;
		}	
		case "object":
		{
			switch($declaration_modifier)
			{
				case "pointer": //object*
				case "reference": //object&
					$method_type = "$cleaned_type \$$type_name";
					break;
					
				case "const_pointer": //const bool* Array
				case "const_reference": //const bool&
				case "none": //bool
				case "const_none": //const bool
					$method_type = "$cleaned_type \$$type_name";
					break;
			}
			break;
		}	
		default: 
		{
			$method_type = "\$$type_name";
		}
	}
	
	return $method_type;
}

function cleanup_constant_value($constant_value)
{
	if($constant_value === true)
	{
		$constant_value = "true";
	}
	elseif($constant_value === false)
	{
		$constant_value = "false";
	}
	elseif(substr($constant_value, -1) != ")" && strpos($constant_value, "0x") !== 0 && !is_numeric($constant_value))
	{
		$constant_value = "'{$constant_value}'";
	}
	
	if($constant_value[0] === "(" && substr($constant_value, -1) == ")")
	{
		$constant_value = substr($constant_value, 1, -1);
	}

	$constant_value = str_replace("\\\n", "\n", $constant_value);
	
	return $constant_value;
}