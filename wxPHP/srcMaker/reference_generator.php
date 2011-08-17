<?php

//Set the home page
$home_page = "http://wxphp.org/";

//Html code for header
$header_html = "";

//Html code for footer
$footer_html = '<div class="footer">
	Reference for <a target="_top" href="' . $home_page . '">wxPHP</a> auto-generated with <a href="http://php.net/">PHP</a> scripting language on <b>' . date("r", time()) .'</b>.
</div>';

//Get activated classes data
$data = unserialize(file_get_contents("classes.out"));

//Create reference directory if it doesn't exists
if(!file_exists("reference"))
{
	mkdir("reference");
}

ksort($data);

//Create menu page
$menu = fopen("reference/menu.html", "w");
fwrite($menu, "<html>\n<head>\n<title>wxPHP Class Reference Menu</title>\n");
fwrite($menu, "<link href=\"menu.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n</head>\n\n<body>\n");
fwrite($menu, "<a id=\"logo\" href=\"intro.html\" target=\"content\"><img src=\"images/logo-small.png\" /></a>\n");
fwrite($menu, "<a class=\"home\" href=\"$home_page\" target=\"_top\">Home Page</a>\n\t<ul>\n\n");

foreach($data as $class_name=>$class_data)
{	
	//Move constructor to top if available
	if(isset($class_data[$class_name]))
	{
		$constructor = array($class_name=>$class_data[$class_name]);
		
		unset($class_data[$class_name]);
		
		$class_data = array_merge($constructor, $class_data);
	}
	
	print "Generating menu entry for $class_name\n";
	fwrite($menu, "\t\t<li><a href=\"$class_name.html\" target=\"content\">$class_name</a></li>\n");
	
	//Create class reference file
	print "Generating reference html file for $class_name\n\n";
	$class_file = fopen("reference/" . $class_name . ".html", "w");
	
	$content = "<html>\n<head>\n<title>$class_name - wxPHP Class Reference</title>\n";
	$content .= "<link href=\"content.css\" rel=\"stylesheet\" type=\"text/css\" media=\"all\" />\n";
	$content .= "</head>\n\n<body>\n\n";
	
	if(file_exists("reference/header.html"))
	{
		$content .= file_get_contents("reference/header.html");
	}
	else
	{
		$content .= $header_html;
	}
	
	$content .= "<h1>$class_name</h1>\n\n";
	
	//If the class implements another one generate a menu of classes where this one is derived
	if(isset($class_data["_implements"]))
	{
		$content .= "<h2>Implements methods from the following classes</h2>\n";
		
		$content .= "<ul>\n";
		
		foreach($class_data["_implements"] as $class_implemented)
		{
			$content .= "\t<li><a href=\"$class_implemented.html\" target=\"content\">$class_implemented</a></li>\n";
		}
		
		$content .= "</ul>\n";
		
		$content .= "<hr />\n\n";
	}
	
	//Write methods menu
	$content .= "<h2>Methods</h2>\n";
	
	$content .= "<ul>\n";
	
	foreach($class_data as $method_name=>$method_data)
	{
		if($method_name{0} != "_")
			$content .= "\t<li><a href=\"#$method_name\" target=\"content\">$method_name</a></li>\n";
	}
	
	$content .= "</ul>\n";
		
	$content .= "<hr />\n\n";
	
	foreach($class_data as $method_name=>$method_data)
	{
		$content .= "<a name=\"$method_name\"></a>\n";
		
		if($method_name{0} != "_")
		{
			$content .= "<h3>$method_name</h3>\n";
			$content .= "<ul>\n";
			
			$count_method_data = count($method_data);
			
			for($i=0; $i<$count_method_data; $i++)
			{	
				$return_type = "";
				$parameters = "( ";
				
				foreach($method_data[$i] as $parameter_key=>$parameter_type)
				{
					if($parameter_key == 0)
					{
						$return_type = $method_name != "class_name"?get_method_type_link($parameter_type) . " ":"";
					}
					else
					{
						$parameters .= "<span class=\"parameter-type\">" . get_method_type_link($parameter_type) . "</span>"; 
						
						if($method_data[$i+1][1][$parameter_key] != "")
						{
							$parameters .= "=" . "<span class=\"parameter-value\">" . $method_data[$i+1][1][$parameter_key] . "</span>";
						}
						$parameters .= ", ";
					}
				}
				
				$parameters = rtrim($parameters, ", ");
				
				$parameters .= " )";
				
				$i++;
				
				$content .= "<span class=\"return-type\">$return_type</span> <span class=\"method\">$method_name<span> $parameters<br />\n";
			}
			$content .= "</ul>\n";
			
			$content .= "<hr />\n\n";
		}
	}
	
	if(file_exists("reference/footer.html"))
	{
		$content .= file_get_contents("reference/footer.html");
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
print "Creating index page...\n";
fwrite($menu, "\n\t</ul>\n</body>\n</html>");
fclose($menu);

//Create index page
file_put_contents("reference/index.html",
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

if(file_exists("reference/header.html"))
{
	$intro_content .= file_get_contents("reference/header.html");
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

if(file_exists("reference/footer.html"))
{
	$intro_content .= file_get_contents("reference/footer.html");
} 
else
{
	$intro_content .= $footer_html;
}

print "Done!\n";

file_put_contents("reference/intro.html", $intro_content);

/**
 * Converts an argument type to an html link only if the type
 * is a wxwidgets class or strips const, reference and pointer
 * operators.
 * 
 * @param $method_type The name of the type to parse
 * 
 * @return html link
 */
function get_method_type_link($method_type)
{
	if(is_array($method_type))
	{
		print_r($method_type);
		return "";
	}
	
	$method_type = str_replace(array("*", "const", "&"), "", $method_type);
	
	if("" . strstr($method_type, "wx") . "" != "")
	{	
		$method_type = str_replace(" ", "", $method_type);
		return "<a href=\"$method_type.html\">$method_type</a>";
	}
	else
	{
		
	}
	
	return $method_type;
}

?>
