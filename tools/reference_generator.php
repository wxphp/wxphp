<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Generate a simple reference of available wxWidgets options
 * for php
 * 
 * To run it execute: php reference_generator.php
 * 
 * The output is saved to the doc directory on the root
 * source directory of wxPHP
 * 
*/

//Disable unnecesary php warnings
error_reporting(E_ALL ^ E_NOTICE ^ E_WARNING);

//Change to correct working directory to be able to execute the script from everywhere
if($argv[0] == $_SERVER["SCRIPT_NAME"])
{
	chdir(str_replace("reference_generator.php" , "", $argv[0]));
}
else
{
	chdir(getcwd() . "/" . str_replace($_SERVER["SCRIPT_NAME"] , "", $_SERVER["PHP_SELF"]));
}

include("../source_maker/include/functions.php");
include("../source_maker/include/function_generation.php");
include("../source_maker/include/class_header_generation.php");
include("../source_maker/include/class_virtual_source_generation.php");

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


//Load functions parsed by the xml_parser
if(file_exists("../source_maker/dumps/functions.json"))
{
	$defFunctions = unserialize_json(file_get_contents("../source_maker/dumps/functions.json"));
	
	//Manually defined as a template
	$defFunctions["wxDynamicCast"] = array();
	
	//blacklist functions
	include("../source_maker/include/functions_blacklist.php");
}

//Load classes parsed by the xml_parser
if(file_exists("../source_maker/dumps/classes.json"))
{
	$defIni = unserialize_json(file_get_contents("../source_maker/dumps/classes.json"));
	
	//Blacklist classes
	unset($defIni['wxArrayString']);
}

//Load class and global enums parsed by the xml_parser
if(file_exists("../source_maker/dumps/enums.json"))
{
	$defEnums = unserialize_json(file_get_contents("../source_maker/dumps/enums.json"));
}

//Import all constants defined by hand
include("../source_maker/include/constants.php");
	
//Load constants found by the xml parser
if(file_exists("../source_maker/dumps/consts.json"))
{	
	$temp = unserialize_json(file_get_contents("../source_maker/dumps/consts.json"));
	$defConsts = array_merge($temp, $defConsts);

	//blacklist constants
	include("../source_maker/include/constants_blacklist.php");
}

//Load global variables parsed by the xml_parser
if(file_exists("../source_maker/dumps/global_variables.json"))
{
	$defGlobals = unserialize_json(file_get_contents("../source_maker/dumps/global_variables.json"));
	
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
if(file_exists("../source_maker/dumps/typedef.json"))
{
	$defTypedef = unserialize_json(file_get_contents("../source_maker/dumps/typedef.json"));
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

//Remove methods implementing unhandled argument declaration like 
//wxRichTextCtrl::PrepareContent(wxRichTextParagraphLayoutBox &WXUNUSED(container))
remove_methods_implementing_unhandled_arguments($defIni);


//Set the home page
$home_page = "http://wxphp.org/";

//Html code for header
$header_html = "";

//Html code for footer
$footer_html = '<div class="footer">
	Reference for <a target="_top" href="' . $home_page . '">wxPHP</a> auto-generated with <a href="http://php.net/">PHP</a> scripting language on <b>' . date("r", time()) .'</b>.
</div>';

//Create reference directory if it doesn't exists
if(!file_exists("../doc"))
{
	mkdir("../doc");
}

rcopy("reference", "../doc");

ksort($defIni);

//Create menu page
$menu = fopen("../doc/menu.html", "w");
fwrite($menu, "<html>\n<head>\n<title>wxPHP Reference Menu</title>\n");
fwrite($menu, "<link href=\"menu.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($menu, "<a id=\"logo\" href=\"intro.html\" target=\"content\"><img src=\"images/logo-small.png\" /></a>\n");
fwrite($menu, "<a class=\"home\" href=\"$home_page\" target=\"_top\">Home Page</a>\n\t<ul>\n\n");
fwrite($menu, "\t\t<li style=\"margin: 15px 0 0 0\"><a href=\"constants.html\" target=\"content\">Constants</a></li>\n");
fwrite($menu, "\t\t<li><a href=\"enum_constants.html\" target=\"content\">Categorized Constants</a></li>\n");
fwrite($menu, "\t\t<li><a href=\"object_constants.html\" target=\"content\">Object Constants</a></li>\n");
fwrite($menu, "\t\t<li><a href=\"class_constants.html\" target=\"content\">Class Constants</a></li>\n");
fwrite($menu, "\t\t<li style=\"margin: 0 0 15px 0\"><a href=\"functions.html\" target=\"content\">Functions</a></li>\n");
fwrite($menu, "\t\t<hr />\n");
fwrite($menu, "\t\t<h3>Classes</h3>\n");

//Generate constants section
$constants = fopen("../doc/constants.html", "w");
fwrite($constants, "<html>\n<head>\n<title>wxPHP Constants</title>\n");
fwrite($constants, "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($constants, "<h1>Constants</h1>\n");
fwrite($constants, "<ul class=\"constants-list\">\n");
ksort($defConsts);
foreach($defConsts as $constant_name=>$constant_value)
{
	fwrite($constants, "<li>$constant_name</li>\n");
}
fwrite($constants, "</ul>\n");
if(file_exists("../doc/footer.html"))
{
	fwrite($constants, file_get_contents("../doc/footer.html"));
}
else
{
	fwrite($constants, $footer_html);
}
fwrite($constants, "</body>\n</html>\n");
fclose($constants);

//Generate enum constants
$enums = fopen("../doc/enum_constants.html", "w");
fwrite($enums, "<html>\n<head>\n<title>wxPHP Categorized Constants</title>\n");
fwrite($enums, "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($enums, "<h1>Categorized Constants</h1>\n");
fwrite($enums, "<ul class=\"constants-list\">\n");

foreach($defEnums[1] as $enumName=>$enumList)
{
	fwrite($enums, "</ul>\n");
	
	fwrite($enums, "<h2>$enumName<a name=\"$enumName\"> </a></h2>\n");
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
			
		fwrite($enums, "<li>$enumValue</li>\n");
	}
	fwrite($enums, "</ul>\n");
}
fwrite($enums, "</ul>\n");
if(file_exists("../doc/footer.html"))
{
	fwrite($enums, file_get_contents("../doc/footer.html"));
}
else
{
	fwrite($enums, $footer_html);
}
fwrite($enums, "</body>\n</html>\n");
fclose($enums);

//Generate object constants section
$globals = fopen("../doc/object_constants.html", "w");
fwrite($globals, "<html>\n<head>\n<title>wxPHP Object Constants</title>\n");
fwrite($globals, "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($globals, "<h1>Object Constants</h1>\n");
fwrite($globals, "<ul class=\"constants-list\">\n");
asort($defGlobals);
foreach($defGlobals as $constant_name=>$constant_type)
{
	$object = str_replace(array("&", "$"), "", get_method_type_link($constant_type, $constant_name, "dummy", null));
	
	if(trim($object) != "" && !isset($defConsts[$constant_name]))
		fwrite($globals, "<li><span class=\"parameter-type\">".$object."</span></li>\n");
}
fwrite($globals, "</ul>\n");
if(file_exists("../doc/footer.html"))
{
	fwrite($globals, file_get_contents("../doc/footer.html"));
}
else
{
	fwrite($globals, $footer_html);
}
fwrite($globals, "</body>\n</html>\n");
fclose($globals);

//Generate class constants
$class_const = fopen("../doc/class_constants.html", "w");
fwrite($class_const, "<html>\n<head>\n<title>wxPHP Class Constants</title>\n");
fwrite($class_const, "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($class_const, "<h1>Class Constants</h1>\n");
fwrite($class_const, "<p>To use these constants the synxtax used should be: wxClass::CONSTANT_NAME</p>\n");
foreach($defEnums[0] as $enumClassName=>$classEnums)
{
	//Only add enums of enabled classes
	if(isset($defIni[$enumClassName]))
	{
		foreach($classEnums as $enumName=>$enumList)
		{
			fwrite($class_const, "<h2>$enumClassName - $enumName <a name=\"$enumName\"> </a></h2>\n");
			fwrite($class_const, "<ul>\n");
			
			foreach($enumList as $enumOption=>$enumValue)
			{
					fwrite($class_const, "<li>$enumValue</li>\n");
			}
			
			fwrite($class_const, "</ul>\n");
		}
	}
}
if(file_exists("../doc/footer.html"))
{
	fwrite($class_const, file_get_contents("../doc/footer.html"));
}
else
{
	fwrite($class_const, $footer_html);
}
fwrite($class_const, "</body>\n</html>\n");
fclose($class_const);

//Generate functions
$functions = fopen("../doc/functions.html", "w");
fwrite($functions, "<html>\n<head>\n<title>wxPHP Functions</title>\n");
fwrite($functions, "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($functions, "<h1>Functions</h1>\n");
fwrite($functions, "<ul>\n");
foreach($defFunctions as $function_name=>$function_definitions)
{
	fwrite($functions, "\t<li><a href=\"#$function_name\" target=\"content\">$function_name</a></li>\n");
}
fwrite($functions, "</ul>\n");
$function_content = "";
foreach($defFunctions as $function_name=>$function_definitions)
{
	$function_content .= "<a name=\"$function_name\"></a>\n";
	
	$function_content .= "<h3>$function_name</h3>\n";
	$function_content .= "<ul>\n";
	
	foreach($function_definitions as $function_index=>$function_definition)
	{
		$return_type = "";
		$parameters = "( ";
		
		$return_type = $function_name != "class_name"?get_method_type_link($function_definition["return_type"]) . " ":"";
		$return_type = str_replace(array("<span class=\"parameter-name\">", "</span>"), "", $return_type);
		$return_type = trim($return_type, " \$");
		$return_type = str_replace(" &", "&", $return_type);
		
		foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_type)
		{
			$parameter_name = $function_definition["parameters_name"][$parameter_index];
			
			$parameters .= "<span class=\"parameter-type\">" . get_method_type_link($parameter_type, $parameter_name, $function_name, null) . "</span>"; 
			
			if($function_definition["parameters_default_value"][$parameter_index])
			{
				$parameters .= "=" . "<span class=\"parameter-value\">" . $function_definition["parameters_default_value"][$parameter_index] . "</span>";
			}
			
			$parameters .= ", ";
		}
		
		$parameters = rtrim($parameters, ", ");
		
		$parameters .= " )";
		
		$function_content .= "<span class=\"return-type\">$return_type</span> <span class=\"method\">$function_name<span> $parameters<br />\n";
	}
	
	$function_content .= "</ul>\n";
	
	$function_content .= "<hr />\n\n";
}
fwrite($functions, $function_content);
if(file_exists("../doc/footer.html"))
{
	fwrite($functions, file_get_contents("../doc/footer.html"));
}
else
{
	fwrite($functions, $footer_html);
}
fwrite($functions, "</body>\n</html>\n");
fclose($functions);

//Generate classes reference
foreach($defIni as $class_name=>$class_methods)
{	
	//Move constructor to top if available
	if(isset($class_methods[$class_name]))
	{
		$constructor = array();
		$constructor[$class_name] = $class_methods[$class_name];
		
		unset($class_methods[$class_name]);
		
		ksort($class_methods);
		
		$class_methods = array_merge($constructor, $class_methods);
	}
	
	print "Generating menu entry for $class_name\n";
	fwrite($menu, "\t\t<li><a href=\"$class_name.html\" target=\"content\">$class_name</a></li>\n");
	
	//Create class reference file
	print "Generating reference html file for $class_name\n\n";
	$class_file = fopen("../doc/" . $class_name . ".html", "w");
	
	$content = "<html>\n<head>\n<title>$class_name - wxPHP Class Reference</title>\n";
	$content .= "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n";
	$content .= "</head>\n\n<body>\n\n";
	
	if(file_exists("../doc/header.html"))
	{
		$content .= file_get_contents("../doc/header.html");
	}
	else
	{
		$content .= $header_html;
	}
	
	$content .= "<h1>$class_name</h1>\n\n";
	
	//If the class implements another one generate a menu of classes where this one is derived
	if(isset($class_methods["_implements"]))
	{
		$content .= "<h2>Implements methods from the following classes</h2>\n";
		
		$content .= "<ul>\n";
		
		foreach($class_methods["_implements"] as $class_implemented)
		{
			$content .= "\t<li><a href=\"$class_implemented.html\" target=\"content\">$class_implemented</a></li>\n";
		}
		
		$content .= "</ul>\n";
		
		$content .= "<hr />\n\n";
	}
	
	//Write methods menu
	$content .= "<h2>Methods</h2>\n";
	
	$content .= "<ul>\n";
	
	$static_found = false;
	foreach($class_methods as $method_name=>$method_definitions)
	{
		if($method_name{0} != "_" && !$method_definitions[0]["static"])
			$content .= "\t<li><a href=\"#$method_name\" target=\"content\">$method_name</a></li>\n";
		else if($method_definitions[0]["static"])
			$static_found = true;
	}
	
	$content .= "</ul>\n";
	
	if($static_found)
	{
		//Write static methods menu
		$content .= "<h2>Static Methods</h2>\n";
		
		$content .= "<ul>\n";
		
		foreach($class_methods as $method_name=>$method_definitions)
		{
			if($method_name{0} != "_" && $method_definitions[0]["static"])
				$content .= "\t<li><a href=\"#$method_name\" target=\"content\">$method_name</a></li>\n";
		}
		
		$content .= "</ul>\n";
	}
	
	$content .= "<hr />\n\n";
	
	foreach($class_methods as $method_name=>$method_definitions)
	{
		$content .= "<a name=\"$method_name\"></a>\n";
		
		if($method_name{0} != "_")
		{
			$content .= "<h3>$method_name</h3>\n";
			$content .= "<ul>\n";
			
			$count_method_definitions = count($method_definitions);
			
			foreach($method_definitions as $method_index=>$method_definition)
			{
				$return_type = "";
				$parameters = "( ";
				
				$static = $method_definition["static"] ? "static " : "";
				
				$return_type = $method_name != "class_name"?get_method_type_link($method_definition["return_type"]) . " ":"";
				$return_type = str_replace(array("<span class=\"parameter-name\">", "</span>"), "", $return_type);
				$return_type = trim($return_type, " \$");
				$return_type = str_replace(" &", "&", $return_type);
				
				foreach($method_definition["parameters_type"] as $parameter_index=>$parameter_type)
				{
					$parameter_name = $method_definition["parameters_name"][$parameter_index];
					
					$parameters .= "<span class=\"parameter-type\">" . get_method_type_link($parameter_type, $parameter_name, $method_name, $class_name) . "</span>"; 
					
					if($method_definition["parameters_default_value"][$parameter_index])
					{
						$parameters .= "=" . "<span class=\"parameter-value\">" . $method_definition["parameters_default_value"][$parameter_index] . "</span>";
					}
					
					$parameters .= ", ";
				}
				
				$parameters = rtrim($parameters, ", ");
				
				$parameters .= " )";
				
				$content .= "$static<span class=\"return-type\">$return_type</span> <span class=\"method\">$method_name<span> $parameters<br />\n";
			}
			
			$content .= "</ul>\n";
			
			$content .= "<hr />\n\n";
		}
	}
	
	if(file_exists("../doc/footer.html"))
	{
		$content .= file_get_contents("../doc/footer.html");
	}
	else
	{
		$content .= $footer_html;
	}

	
	$content .= "\n</body>";
	
	fwrite($class_file, $content);
	
	fclose($class_file);
}

//Write end tags and close menu page
fwrite($menu, "\n\t</ul>\n</body>\n</html>");
fclose($menu);

//Create index page
print "Creating index page...\n";
file_put_contents("../doc/index.html",
"<html>
<head>
<title>wxPHP Class Reference</title>
</head>

<frameset cols=\"280,*\">

  <frame src=\"menu.html\" />
  <frame src=\"intro.html\" name=\"content\" />

</frameset>

</html>
");

//Create intro page
print "Creating intro page...\n";
$intro_content = '<html>
<head>
<title>wxPHP Class Reference</title>
<link href="content.css" rel="stylesheet" type="text/css" media="all" />
</head>

<body>';

if(file_exists("../doc/header.html"))
{
	$intro_content .= file_get_contents("../doc/header.html");
}
else
{
	$intro_content .= $header_html;
}

$intro_content .= '	<h1>wxPHP Class Reference</h1>
	
	<p>
		<a target="_top" href="' . $home_page . '">wxPHP</a> is a binding to the popular framework to develop crossplatform GUI desktop applications
		named <a href="http://wxwidgets.org/">wxWidgets</a>. In this way we can combine the powerful features 
		that php brings to develop desktop applications more easier than with compiled languages.
	</p>
	
	<p>
		On this pages you will find reference for classes that has been implemented, and which methods
		are available on the wxPHP binding. Is really important to notice that when a class implements another one
		all the enabled methods from the implemented class will be also available to the derived class.
	</p>
	
	<p>
		This pages are not a tutorial on how to use wxWidgets. It is just a reference auto-generated from
		the wxPHP code generator mapping file (classes.out), to keep track of the classes implemented
		on the binding, and help you know what you can, and can not do with wxPHP at the moment. For a complete
		reference of <strong>wxWidgets</strong> please refer to the official documentation site at 
		<a href="http://www.wxwidgets.org/docs/">http://www.wxwidgets.org/docs</a>
	</p>
	
	<p>
		We are working on enabling most of the functionality that wxWidgets has on wxPHP.
	</p>
</body>
</html>
';

if(file_exists("../doc/footer.html"))
{
	$intro_content .= file_get_contents("../doc/footer.html");
} 
else
{
	$intro_content .= $footer_html;
}

print "Done!\n";

file_put_contents("../doc/intro.html", $intro_content);

/**
 * Converts an argument type to an html link only if the type
 * is a wxwidgets class or strips const, reference and pointer
 * operators.
 * 
 * @param $method_type The name of the type to parse
 * 
 * @return html link
 */
function get_method_type_link($type, $type_name, $function_name, $class_name=null)
{
	$declaration_modifier = "";
	$standard_type = parameter_type($type, false, $function_name, $class_name, $declaration_modifier, true);
	
	$cleaned_type = str_replace(array("const ", "*", "&"), "", $type);
	$type_name = "<span class=\"parameter-name\">\$$type_name</span>";
	
	$method_type = "";
	
	switch($standard_type)
	{
		case	"bool":
		{
			switch($declaration_modifier)
			{
				case "pointer": //bool*
				case "reference": //bool&
					$method_type = "bool &$type_name";
					break;
					
				case "const_pointer": //const bool* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const bool&
				case "none": //bool
				case "const_none": //const bool
					$method_type = "bool $type_name";
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
					$method_type = "integer &$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "integer $type_name";
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
					$method_type = "<a href=\"class_constants.html#$cleaned_type\">$cleaned_type</a> &$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "<a href=\"class_constants.html#$cleaned_type\">$cleaned_type</a> $type_name";
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
					$method_type = "<a href=\"enum_constants.html#$cleaned_type\">$cleaned_type</a> &$type_name";
					break;
					
				case "const_pointer": //const integer* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const integer&
				case "none": //integer
				case "const_none": //const integer
					$method_type = "<a href=\"enum_constants.html#$cleaned_type\">$cleaned_type</a> $type_name";
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
					$method_type = "float &$type_name";
					break;
					
				case "const_pointer": //const float* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const float&
				case "none": //float
				case "const_none": //const float
					$method_type = "float $type_name";
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
					$method_type = "string &$type_name";
					break;
					
				case "const_pointer": //const char*
					$method_type = "string $type_name";
					break;
				
				case "const_reference": //const char&
				case "none": //char
				case "const_none": //const char
					$method_type = "string $type_name";
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
					$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
					$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
					
					if($declaration_modifier == "pointer" || $declaration_modifier == "pointer_pointer")
						$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
						
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
					$method_type = "timestamp &$type_name";
					break;
					
				case "const_pointer": //const long* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const long&
				case "none": //long
				case "const_none": //const long
					$method_type = "timestamp $type_name";
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
					$method_type = "string &$type_name";
					break;
					
				case "const_pointer": //const wxString* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const wxString&
				case "none": //wxString
				case "const_none": //const wxString
					$method_type = "string $type_name";
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
					$method_type = "array &$type_name";
					break;
					
				case "const_pointer": //const wxArrayString* Array
					$method_type = "array $type_name";
					break;
				
				case "const_reference": //const wxArrayString&
				case "none": //wxArrayString
				case "const_none": //const wxArrayString
					$method_type = "array $type_name";
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
					$method_type = "<a href=\"$cleaned_type.html\">$cleaned_type</a> &$type_name";
					break;
					
				case "const_pointer": //const bool* Array
				case "const_reference": //const bool&
				case "none": //bool
				case "const_none": //const bool
					$method_type = "<a href=\"$cleaned_type.html\">$cleaned_type</a> $type_name";
					break;
			}
			break;
		}	
		default: 
			
	}
	
	return $method_type;
}

/**
 * Recursively remove a directory.
 */
function rrmdir($dir)
{
	if(is_dir($dir))
	{
		$files = scandir($dir);
		foreach ($files as $file)
		{
			if ($file != "." && $file != "..") rrmdir("$dir/$file");
			rmdir($dir);
		}
	}
	else if(file_exists($dir))
	{
		unlink($dir);
	}
}

/**
 * Recursively copy a directory
 */
function rcopy($src, $dst)
{
	if (file_exists($dst)) 
	{
		rrmdir($dst);
	}
	
	if (is_dir($src))
	{
		mkdir($dst);
		$files = scandir($src);
	
		foreach ($files as $file)
		{
			if ($file != "." && $file != "..")
			{
				rcopy("$src/$file", "$dst/$file");
			}
		}
	}
	else if (file_exists($src))
	{
		copy($src, $dst);
	}
}

?>
