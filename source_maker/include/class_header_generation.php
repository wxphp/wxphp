<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Functions to assist on the generation of the wxWidgets classes
 * declarations header file (classes.h)
 * 
*/

function class_constructors_declaration($class_name, $class_methods)
{
	$constructors = "";
	
	foreach($class_methods[$class_name] as $constructor_definition)
	{
		$constructors .= "{$class_name}_php(";
		
		$constructors .= function_arguments_string($constructor_definition);
		
		$constructors .= ")";
		
		if(!isset($constructor_definition["no_parent_call"]))
		{
			$constructors .= ":{$class_name}(";
			$constructors .= function_arguments_call_string($constructor_definition);
			$constructors .= ")";
		}
		
		$constructors .= "{}\n\t";
	}
	
	return $constructors;
}

function class_virtual_declarations($class_name, $class_methods)
{
	$virtual_methods = "";
	
	foreach($class_methods as $method_name=>$method_definitions)
	{
		foreach($method_definitions as $method_definition)
		{
			//Skip constructors, static functions, and non protected virtual functions or pure virtual
			if(($method_definition["virtual"] && $method_definition["protected"]) || $method_definition["pure_virtual"] ||
				"".strpos($method_name, "On")."" == "0"
			)
			{
				if($method_name{0} != "_")
				{
					$virtual_methods .= $method_definition["return_type"] . " {$method_name}(";
					
					$virtual_methods .= function_arguments_string($method_definition);
					
					$virtual_methods .= ")";
					
					if($method_definition["constant"])
					{
						$virtual_methods .= " const";
					}
					
					$virtual_methods .= ";\n\t";
				}
			}
		}
	}
	
	return $virtual_methods;
}

?>
