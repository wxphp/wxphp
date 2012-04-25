<?php
/**
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @descrioption
 * Holds some of the core functions of the parser.
 * 
*/

/**
 * Gets the parent class of an enumeration if applicable
 * 
 * @param string $dataType The type of a variable parameter
 * 
 * @return string|bool Parent class if data type is an enumeration of class or 
 * false if not.
 */
function enum_parent_class($dataType)
{
	global $defEnums;
	
	$data_type_array = explode("::", $dataType);
	
	//Checks the class on types passed as class_name::enum_name
	if(count($data_type_array) > 1)
	{
		$class_name = $data_type_array[0];
	
		return $class_name;
	}
	//Checks class of types passed as enum_name
	else
	{
		foreach($defEnums[0] as $class_name=>$enums_array)
		{
			foreach($enums_array as $enum_name=>$enum_values)
			{
				if($enum_name == $dataType)
				{
					return $class_name;
				}
			}
		}
	}
	
	return false;
}

/**
 * Checks if a data type is a class enumeration
 * 
 * @param string $dataType The name of the type to check
 * 
 * @return bool
 */
function is_class_enum($dataType)
{
	global $defEnums;
	
	$data_type_array = explode("::", $dataType);
	
	//Check types passed as class_name::enum_name
	if(count($data_type_array) > 1)
	{
		$class_name = $data_type_array[0];
		$enum_name = $data_type_array[1];
	
		if(isset($defEnums[0][$class_name][$enum_name]))
			return true;
	
	}
	//Check types passed as enum_name
	else
	{
		foreach($defEnums[0] as $class_name=>$enums_array)
		{
			foreach($enums_array as $enum_name=>$enum_values)
			{
				if($enum_name == $dataType)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}

/**
 * Check if a type is a global enum
 * 
 * @param string $dataType The type of a variable parameter
 * 
 * @return bool True if a global enumeration otherwise false.
 */
function is_global_enum($dataType)
{
	global $defEnums;
	
	foreach($defEnums[1] as $enumName=>$enumData)
	{
		if($enumName == $dataType)
		{
			return true;
		}
	}
	
	return false;
}

/**
 * Generates an array of all the classes the inherit from a given one.
 * 
 * @param string $class Name of the class to search for derivations.
 * 
 * @return array All the classes that inherit from a given class.
 */
function derivationsOfClass($class)
{
	global $defIni;
	
	$derivations = array();
		
	foreach($defIni as $className=>$classDefinitions)
	{
		if(isset($classDefinitions['_implements']))
		{
			if(in_array($class, $classDefinitions['_implements']))
			{
				$derivations[$className]=1;
				$derivations = array_merge($derivations, derivationsOfClass($className));
			}
		}
	}
	
	return $derivations;
}

/**
 * Recursive function to generate a list of class methods for the templates.h
 *
 * @param $classN The name of the class to which generate the methods
 * @param $ctor boolean value to indicate if constructors should be generated or not
 * @param $output A reference variable where the output of the function will be stored.
 * 
 * @return array All function names
 */
function funcsOfClass($classN, $ctor=0, &$output, $ar = array())
{
	global $defIni;
	global $evnHandlers;
	$class_methods = "";
	
	if(!isset($defIni[$classN]))
		return array();

	$classDef3 = $classDef = $defIni[$classN];

	foreach($classDef as $funcName => $funcDef)
	{
		if($funcName{0}=="_")
			continue;
			
		if(($funcDef[0]["virtual"] && $funcDef[0]["protected"]) || $funcDef[0]["pure_virtual"] ||
					"".strpos($funcName, "On")."" == "0"
		)
			continue;
				
		$funcName2 = $funcName;
		if($classN==$funcName)
		{
			if(!$ctor)
				continue;
					
			$funcName2 = "__construct";
		}
		
		if(in_array($funcName2,$ar))
			continue;
			
		$ar[] = $funcName2;

		$class_methods .= "\tPHP_ME(php_{$classN}, {$funcName2}, NULL, ";
		
		if($funcDef[0]["static"])
		{
			$class_methods .= "ZEND_ACC_STATIC|";
		}
		
		$class_methods .= "ZEND_ACC_PUBLIC";
		
		if($funcName2 == "__construct" && $ctor)
		{
			$class_methods .= "|ZEND_ACC_CTOR";
		}
		
		$class_methods .= ")\n";
	}
	
	//becarefull not to mark a subclasse that is derived from another
	//this should be recursive
	if(isset($classDef['_implements']))
	{
		foreach($classDef['_implements'] as $imp)
		{
			$ar = array_merge($ar,funcsOfClass($imp, 0, $output, $ar));
			continue;
			
			if(!isset($defIni[$imp]))
				continue;
			$classDef2 = $defIni[$imp];
			foreach($classDef2 as $funcName2 => $funcDef2)
			{
				if($funcName2[0]=="_")//ignore implements and constructors
					continue;
					
				$found=false;
				$funcNamer = $funcName2;
				if($funcName2==$imp)
					$funcNamer = $classN;
					
				foreach($classDef3 as $funcName => $funcDef)
					if($funcNamer==$funcName)
						$found = true;
						
				//if already exists functions with the same name, verify if equal args
				if($found)
				{
					for($i=0;$i<count($funcDef2);$i+=2)
					{
						$found = false;
						for($e=0;$e<count($classDef[$funcNamer]);$e+=2)
							if($funcDef2[$i]==$classDef[$funcNamer][$e])
								$found = true;

						if(!$found)//merge overloads
						{
							$classDef[$funcNamer][] = $classDef2[$funcName2][$i];
							$classDef[$funcNamer][] = $classDef2[$funcName2][$i+1];
						}
					}
				}
				elseif($funcName2==$imp){// prevent foreign constructors
					//just skip it
				}
				else
				{
					if($funcDef[0]["static"])
					{
						$class_methods .= "\tPHP_ME(php_{$imp}, {$funcName2}, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)\n";
					}
					else
					{
						$class_methods .= "\tPHP_ME(php_{$imp}, {$funcName2}, NULL, ZEND_ACC_PUBLIC)\n";
					}
				}
			}
		}
	}

	$output .= $class_methods;
	
	return $ar;
}

/**
 * Merges a parent class methods as overloads to a child class
 * (This can produce a lot of compiling errors and is deprecated)
 */
function classes_method_merger(&$classes)
{
	foreach($classes as $class_name => $method_definitions)
	{
		if(isset($method_definitions['_implements']))
		{
			foreach($method_definitions['_implements'] as $parent_class)
			{
				if(!isset($classes[$parent_class]))
						continue;

				$parent_class_definitions = $classes[$parent_class];

				foreach($parent_class_definitions as $parent_class_method_name => $parent_class_method_definitions)
				{

					//Skip internal structures
					if($parent_class_method_name{0}=="_")
						continue;

					//Skip constructros since they cannot be overloaded in C++
					if($parent_class_method_name == $parent_class)
						continue;
				
					$method_name = $parent_class_method_name;
					
					//Method with same name exists in the child class
					if(in_array($method_name,array_keys($method_definitions)))
					{
						//Copy child class method definitions to later merge with parent class definitions
						$overloads = $method_definitions[$method_name];
						
						for($i=0; $i<count($parent_class_method_definitions); $i++)
						{
							//Iterate every base class overload
							$found = false;
							
							//Check if the same method is already declared
							for($e=0; $e<count($overloads); $e++)
							{
								//Do not merge protected virtual methods
								if($parent_class_method_definitions[$i]["protected"] && $parent_class_method_definitions[$i]["virtual"])
								{
									$found = true;
								}
								//Do not merge pure virtual	
								elseif($parent_class_method_definitions[$i]["pure_virtual"])
								{
									$found = true;
								}
								//Do not merge equal methos to child class
								elseif($parent_class_method_definitions[$i]==$overloads[$e])
								{	
									$found = true;
								}
							}
							
							//Method wasn't found so it's merge on child class
							if(!$found)
							{
								$overloads[] = $parent_class_method_definitions[$i];
							}
						}
						
						if(count($parent_class_method_definitions))
						{
							$classes[$class_name][$method_name] = $overloads;
						}
					}
				}
			}
		}
	}
}

/**
 * Removes all protected methods from classes since they cant
 * be accesed outside the class scope. One possible solution is to implement
 * a class mediator that calls these kind of methods.
 * 
 * @param array $classes
 */
function remove_protected_methods(&$classes)
{
	file_put_contents("discarded.log", "Protected Methods\n\n", FILE_APPEND);
	foreach($classes as $class_name=>$class_methods)
	{
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Skip _implements (inheritance) list
			if($method_name{0} == "_")
				continue;
				
			//Remove protected methods from method_definitions
			$temp_definitions = array();
			foreach($method_definitions as $method_index=>$method_definition)
			{
				//Just save method overloads that aren't protected
				if(!$method_definition["virtual"] && !$method_definition["pure_virtual"] && $method_definition["protected"])
				{
					file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
					
					//Skip protected method olverloads
					continue;
				}
				
				$temp_definitions[] = $method_definition;
			}
			$method_definitions = $temp_definitions;
			unset($temp_definitions);
			
			//If there are method overloads not protected save them
			if(count($method_definitions))
			{
				$classes[$class_name][$method_name] = $method_definitions;
			}
			//If no unprotected overload was found completely remove the method
			else
			{
				unset($classes[$class_name][$method_name]);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Removes virtual methods that override non virtual methods 
 * since they provoke some compiling errors.
 * 
 * @param array $classes
 */
function remove_virtual_methods_overrides(&$classes)
{
	file_put_contents("discarded.log", "Virtual Overrides\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$class_methods)
	{
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Only remove virtual methods that override non virtual methods with the same name
			if(count($method_definitions) > 1)
			{
				//Skip _implements (inheritance) list
				if($method_name{0} == "_")
					continue;
					
				//Not remove if all overrides are virtual
				$found_non_virtual = false;
				foreach($method_definitions as $method_index=>$method_definition)
				{
					if(!$method_definition["virtual"])
					{
						$found_non_virtual = true;
						break;
					}
				}
				
				if(!$found_non_virtual)
					continue;
					
				//Remove virtual methods from method_definitions
				$temp_definitions = array();
				foreach($method_definitions as $method_index=>$method_definition)
				{
					//Just save method overloads that aren't protected
					if($method_definition["virtual"])
					{
						file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
						
						//Skip protected method olverloads
						continue;
					}
					
					$temp_definitions[] = $method_definition;
				}
				$method_definitions = $temp_definitions;
				unset($temp_definitions);
				
				//If there are method overloads not protected save them
				if(count($method_definitions))
				{
					$classes[$class_name][$method_name] = $method_definitions;
				}
				//If no unprotected overload was found completely remove the method
				else
				{
					unset($classes[$class_name][$method_name]);
				}
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Removes all operators overrides
 * 
 * @param array $classes
 */
function remove_operators(&$classes)
{
	file_put_contents("discarded.log", "Operators\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$class_methods)
	{
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Remove operators
			if("".stripos($method_name, "operator")."" == "0")
			{
				file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
				
				unset($classes[$class_name][$method_name]);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Removes all non virtual On* methods (trying to implement this kind
 * of methods will only provoke compiling errors since they are used
 * internally by the class)
 * 
 * @param array $classes
 */
function remove_non_virtual_on(&$classes)
{
	file_put_contents("discarded.log", "Non Virtual On*\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$class_methods)
	{
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Remove non virtual On* events
			if("".stripos($method_name, "On")."" == "0" && !$method_definitions[0]["virtual"] 
				&& !$method_definitions[0]["pure_virtual"]
			)
			{
				file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
				
				unset($classes[$class_name][$method_name]);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Remove methods from classes that inherit from more than 1 class with 
 * the same method name. For example wxComboBox inherits from wxItemContainer 
 * and wxTextEntry and both implement IsEmpty and this produces compilation errors
 * because one of them doesnt implement the method as virtual
 */
function remove_methods_duplicated_on_base_classes(&$classes)
{
	file_put_contents("discarded.log", "Methods duplicated on multiple base classes and not all virtual\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$method_definitions)
	{
		if(isset($method_definitions["_implements"]))
		{
			foreach($method_definitions as $method_name=>$method_definition)
			{
				//Skip _implements
				if($method_name{0} == "_")
					continue;
				
				//Stores the amount of base classes that implement the method
				$implement_count = 0;
				$virtual_count = 0;
				
				foreach($method_definitions["_implements"] as $base_class_name)
				{
					$virtual = false;
					if(inherits_method_from_class_recursive($method_name, $base_class_name, $class_name, $virtual))
					{
						$implement_count++;
						
						if($virtual)
						{		
							$virtual_count++;
						}
					}
				}
				
				//If the methods is implemented in more than 1 base class remove it
				if($implement_count > 1 && $virtual_count != $implement_count)
				{
					file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
					unset($classes[$class_name][$method_name]);
				}
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * For removing methods with unknown arguments and return types
 * 
 * @param array $classes Reference to variable that holds list of classes
 */
function remove_methods_implementing_unknown_types(&$classes)
{
	file_put_contents("discarded.log", "Methods implementing unknown types\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$class_methods)
	{
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Skip _implements
			if($method_name{0} == "_")
				continue;
				
			//Skip wxEvtHandler
			if($class_name == "wxEvtHandler" && $method_name == "Connect")
				continue;
			
			$removed_definitions = 0;
			
			foreach($method_definitions as $method_index=>$method_definition)
			{
				$index_to_remove =  $method_index - $removed_definitions;
				
				$removed = false;
				$type_modifier = "";
				
				//Check return type if not constructor
				if($method_name != $class_name)
				{
					if(parameter_type($method_definition["return_type"], false, $method_name, $class_name, $type_modifier, true) == "unknown")
					{
						file_put_contents("discarded.log", $method_definition["return_type"] . "\t" . $method_definition["return_type"]." $class_name::$method_name(".function_arguments_string($method_definition).")\n", FILE_APPEND);
						unset($classes[$class_name][$method_name][$index_to_remove]);
						$removed = true;
					}
				}
				
				//Check all argument types
				if(!$removed)
				{
					foreach($method_definition["parameters_type"] as $parameter_index=>$parameter_type)
					{
						$parameter_is_array = $method_definition["parameters_is_array"][$parameter_index];
						
						if(parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name, $type_modifier, true) == "unknown")
						{
							file_put_contents("discarded.log", $parameter_type . "\t" . $method_definition["return_type"]." $class_name::$method_name(".function_arguments_string($method_definition).")\n", FILE_APPEND);
							unset($classes[$class_name][$method_name][$index_to_remove]);
							$removed = true;
							
							break;
						}
					}
				}
				
				if($removed)
				{
					$removed_definitions++;
					
					//Remove methods with no definitions
					if(count($classes[$class_name][$method_name]) <= 0)
					{
						unset($classes[$class_name][$method_name]);
					}
					//Reassign method definitions indexes
					else
					{
						$temp_definitions = $classes[$class_name][$method_name];
						$classes[$class_name][$method_name] = array();
						
						foreach($temp_definitions as $temp_definition)
						{
							$classes[$class_name][$method_name][] = $temp_definition;
						}
					}
				}
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * For removing global functions with unknown arguments and return types
 * 
 * @param array $functions Reference to variable that holds list of functions
 */
function remove_functions_implementing_unknown_types(&$functions)
{
	file_put_contents("discarded.log", "Functions implementing unknown types\n\n", FILE_APPEND);
	
	foreach($functions as $function_name=>$function_definitions)
	{
		$removed_definitions = 0;
		
		foreach($function_definitions as $function_index=>$function_definition)
		{
			$index_to_remove =  $function_index - $removed_definitions;
			
			$removed = false;
			$type_modifier = "";
			
			//Check return type
			if(parameter_type($function_definition["return_type"], false, $function_name, null, $type_modifier, true) == "unknown")
			{
				file_put_contents("discarded.log", $function_definition["return_type"] . "\t" . $function_definition["return_type"]." $function_name(".function_arguments_string($function_definition).")\n", FILE_APPEND);
				unset($functions[$function_name][$index_to_remove]);
				$removed = true;
			}
			
			//Check all argument types
			if(!$removed)
			{
				foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_type)
				{
					$parameter_is_array = $function_definition["parameters_is_array"][$parameter_index];
					
					if(parameter_type($parameter_type, $parameter_is_array, $function_name, null, $type_modifier, true) == "unknown")
					{
						file_put_contents("discarded.log", $parameter_type . "\t" . $function_definition["return_type"]." $function_name(".function_arguments_string($function_definition).")\n", FILE_APPEND);
						unset($functions[$function_name][$index_to_remove]);
						$removed = true;
						
						break;
					}
				}
			}
			
			if($removed)
			{
				$removed_definitions++;
					
				//Remove methods with no definitions
				if(count($functions[$function_name]) <= 0)
				{
					unset($functions[$function_name]);
				}
				//Reassign method definitions indexes
				else
				{
					$temp_definitions = $functions[$function_name];
					$functions[$function_name] = array();
					
					foreach($temp_definitions as $temp_definition)
					{
						$functions[$function_name][] = $temp_definition;
					}
				}
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Removes methods and classes that arent implemented on all
 * target platforms (windows, linux, mac)
 * 
 * @param array $classes
 */
function remove_classes_and_methods_not_crossplatform(&$classes)
{
	file_put_contents("discarded.log", "Not Crossplatform Classes\n\n", FILE_APPEND);
	foreach($classes as $class_name=>$class_methods)
	{
		if(isset($class_methods["_platforms"]))
		{
			$platforms = $class_methods["_platforms"];
			
			if(!in_array("wxmsw", $platforms) || !in_array("wxgtk", $platforms) || !in_array("wxosx", $platforms))
			{
				unset($classes[$class_name]);
				file_put_contents("discarded.log", "$class_name\n", FILE_APPEND);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
	
	file_put_contents("discarded.log", "Not Crossplatform Methods\n\n", FILE_APPEND);
	foreach($classes as $class_name=>$class_methods)
	{
		
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Skip _implements, _platforms (inheritance) list
			if($method_name{0} == "_")
				continue;
				
			//Remove not crossplatform methods from method_definitions
			$temp_definitions = array();
			foreach($method_definitions as $method_index=>$method_definition)
			{
				//Just save method overloads that are trully crossplatform
				if(isset($method_definition["platforms"]))
				{
					$platforms = $method_definition["platforms"];
					
					if(!in_array("wxmsw", $platforms) || !in_array("wxgtk", $platforms) || !in_array("wxosx", $platforms))
					{
						file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
					
						//Skip this method
						continue;
					}
				}
				
				$temp_definitions[] = $method_definition;
			}
			
			$method_definitions = $temp_definitions;
			unset($temp_definitions);
			
			//If there are method overloads trully crossplatform
			if(count($method_definitions))
			{
				$classes[$class_name][$method_name] = $method_definitions;
			}
			//If no trully crossplatform overload was found, completely remove the method
			else
			{
				unset($classes[$class_name][$method_name]);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

function remove_methods_implementing_unhandled_arguments(&$classes)
{
	file_put_contents("discarded.log", "Methods implemented unhandled argument declarations\n\n", FILE_APPEND);
	
	foreach($classes as $class_name=>$class_methods)
	{
		
		foreach($class_methods as $method_name=>$method_definitions)
		{
			//Skip _implements, _platforms (inheritance) list
			if($method_name{0} == "_")
				continue;
				
			//Remove methods implementing unhandled argument declarations from method_definitions
			$temp_definitions = array();
			foreach($method_definitions as $method_index=>$method_definition)
			{
				if(isset($method_definition["parameters_extra"]))
				{
					$unhandled_argument_found = false;
					foreach($method_definition["parameters_extra"] as $value)
					{
						if($value)
						{
							$unhandled_argument_found = true;
							break;
						}
					}
					
					if($unhandled_argument_found)
					{
						file_put_contents("discarded.log", "$class_name::$method_name\n", FILE_APPEND);
					
						//Skip this method
						continue;
					}
				}
				
				$temp_definitions[] = $method_definition;
			}
			
			$method_definitions = $temp_definitions;
			unset($temp_definitions);
			
			//If there are method overloads left add them
			if(count($method_definitions))
			{
				$classes[$class_name][$method_name] = $method_definitions;
			}
			//If no method overload was left, completely remove the method
			else
			{
				unset($classes[$class_name][$method_name]);
			}
		}
	}
	
	file_put_contents("discarded.log", "\n\n\n", FILE_APPEND);
}

/**
 * Fixes the class_groups.json for correct functioning by 
 * adding classes without a group to a group called others, removing
 * empty groups and class repetitions.
 * 
 * @param array $groups Reference to the groups array returned by the xml_parser
 * @param array $all_classes Reference to the classes array returned by xml_parser
 */
function prepair_groups(&$groups, $all_classes)
{
	$groups["others"] = array(); //Store classes without a group

	foreach($all_classes as $class_name => $class_data)
	{
		$found = false;
		foreach($groups as $file => $classes)
		{
			if(in_array($class_name, $classes))
			{
				$found = true;
				break;
			}
		}
		
		if(!$found)
			$groups["others"][] = $class_name;
	}

	//Remove empty groups or with no classes defined on $all_classes
	foreach($groups as $group_name=>$classes_list)
	{
		if(count($classes_list) <= 0)
			unset($groups[$group_name]);
		
		$class_found = false;
		foreach($classes_list as $class_index=>$class_name)
		{
			if(isset($all_classes[$class_name]))
			{
				$class_found = true;
				break;
			}
		}
		
		if(!$class_found)
			unset($groups[$group_name]);
	}

	//Remove classes repeated in more than 1 group
	$removed = array();
	foreach($groups as $current_group_name=>$classes_list)
	{	
		foreach($classes_list as $class_index=>$class_name)
		{
			if(isset($removed[$current_group_name][$class_index]))
				continue;
							
			foreach($groups as $group_name_to_check=>$classes_list_to_check)
			{
				if($group_name_to_check != $current_group_name)
				{
					foreach($classes_list_to_check as $class_to_check_index=>$class_to_check_name)
					{
						if($class_name == $class_to_check_name)
						{
							unset($groups[$group_name_to_check][$class_to_check_index]);
							$removed[$group_name_to_check][$class_to_check_index] = true;
						}
					}
				}
			}
		}
	}
}

/**
 * Generates a string of tabs, to deal more cleanly with tabs on output code
 * 
 * @param int $count The amount of tabs to generate
 * 
 * @return string
 */
function tabs($count=1)
{
	$tabs = "";
	
	for($t=0; $t<$count; $t++)
	{
		$tabs .= "\t";
	}
	
	return $tabs;
}

/**
 * Check if a given class inherits from another class
 * 
 * @param string $parent_class Base/parent class to check
 * @param string $child_class Child class to check if inherits from parent class
 * 
 * @return bool
 */
function inherits_from_class($parent_class, $child_class)
{
	$derivations = derivationsOfClass($parent_class);
	
	foreach($derivations as $derivation_name=>$derivation_value)
	{
		if($derivation_name == $child_class)
			return true;
	}
	
	return false;
}

/**
 * Checks if a given class inherits a method from a specific class
 * 
 * @param string $method_name 
 * @param string $parent_class_name
 * @param string $class_name
 * 
 * @return bool
 */
function inherits_method_from_class($method_name, $parent_class_name, $class_name)
{
	global $defIni;
	
	if(isset($defIni[$class_name]["_implements"]))
	{
		foreach($defIni[$class_name]["_implements"] as $class_implement_name)
		{
			if($parent_class_name != $class_implement_name && isset($defIni[$class_implement_name][$method_name]))
			{
				return false; //Should occure if an upper base class implements the method
			}
			else if($parent_class_name == $class_implement_name && isset($defIni[$class_implement_name][$method_name]))
			{
				return true;
			}
			else if($parent_class_name == $class_implement_name && !isset($defIni[$class_implement_name][$method_name]))
			{
				return false;
			}
			else if(inherits_method_from_class($method_name, $parent_class_name, $class_implement_name))
			{
				return true;
			}
		}
	}
	
	return false;
}

/**
 * Checks if a given class inherits a method from a specific parent 
 * class recursively checking all the parent class base classes
 * 
 * @param string $method_name 
 * @param string $parent_class_name
 * @param string $class_name
 * @param bool $is_virtual true if the found method is virtual
 * 
 * @return bool
 */
function inherits_method_from_class_recursive($method_name, $parent_class_name, $class_name, &$is_virtual=false)
{
	global $defIni;
	
	if(isset($defIni[$class_name]["_implements"]))
	{
		foreach($defIni[$class_name]["_implements"] as $class_implement_name)
		{
			if($parent_class_name == $class_implement_name && isset($defIni[$class_implement_name][$method_name]))
			{
				if($defIni[$class_implement_name][$method_name][0]["virtual"] || $defIni[$class_implement_name][$method_name][0]["pure_virtual"]) 
					$is_virtual = true;
					
				return true;
			}
			else if(inherits_method_from_class_recursive($method_name, $class_implement_name, $parent_class_name, $is_virtual))
			{
				return true;
			}
		}
	}
	
	return false;
}

/**
 * To evaluate a string that has php code
 * 
 * @param string $string String to evaluate as php code
 * 
 * @return string
 */
function php_eval($string)
{
	return eval("?>" . $string);
}

/**
 * Get a standard type value that represents various parameter types
 * 
 * @param string $parameter_type Type of the parameter (declared as a reference in case the value needs to be substitued).
 * @param bool $is_array To indicate if parameter is an array.
 * @param string $function_name Name of the function the parameter belongs to.
 * @param string $class_name Name of function/method's parent class.
 * @param string $parameter_modifier Reference to the modifier type of the parameter
 * @param bool $return_unknown If true the function returns unknown for parameters not known instead of exiting
 * 
 * @return string Standard value that represents the parameter type.
 */
function parameter_type($parameter_type, $is_array, $function_name, $class_name=null, &$parameter_modifier=null, $return_unknown=false)
{
	global $defIni, $defTypedef;
	
	$cleaned_type = str_replace(array("const ", "&", "*"), "", $parameter_type);
	
	$parameter_modifier = type_modifier($parameter_type, $is_array);
	
	$type = "";
	switch($cleaned_type)
	{		
		case	"bool":
			$type = "bool";
			break;
			
		case	"wxCalendarDateBorder":
		case	"unsigned int":
		case	"unsigned long":
		case	"long":
		case	"long int":
		case	"int":
		case	"size_t":
		case	"unsigned":
		case	"unsigned short":
		case	"unsigned char":
		case	"wxFileOffset":
			$type = "integer";
			break;
			
		case	"float":
		case	"double":
			$type = "float";
			break;
			
		case	"char":
			$type = "characters";
			break;
			
		case "void":
			$type = "void";
			break;
			
		case "wxDateTime":
			$type = "date";
			break;
			
		case	"wxString":
		case	"ButtonLabel":
		case	"class wxString": //For some typedef like wxArtClient
			$type = "string";
			break;
			
		case	"wxArrayString":
			$type = "strings_array";
			break;
			
		default:
			//Match object or const object
			if(isset($defIni[$cleaned_type]))
			{
				$type = "object";
			}
			//Check if typedef and evaluate its type
			elseif(isset($defTypedef[$cleaned_type]))
			{
				$type = parameter_type($defTypedef[$cleaned_type], $is_array, $function_name, $class_name, $parameter_modifier, $return_unknown);
			}
			//Check if enumartion of class
			elseif(is_class_enum($cleaned_type))
			{
				$type = "class_enum";
			}
			//Check if global enumartion
			elseif(is_global_enum($cleaned_type))
			{
				$type = "global_enum";
			}
			else
			{
				if($return_unknown)
					return "unknown";
					
				ob_end_clean();
				if($class_name)
				{
					die("Error: unknown parameter type '$parameter_type' on class '$class_name' at function '$function_name'\n");
				}
				else
				{
					die("Error: unknown parameter type '$parameter_type' on function '$function_name'\n");
				}
			}
	}
	
	return $type;
}

/**
 * Evaluates the modifiers for a given type declaration
 * 
 * @param string $type A parameter or function return type
 * 
 * @return string const_pointer, const_reference, const_none, pointer,
 * reference, none
 */
function type_modifier($type, $is_array=false)
{
	$modifier = "";
	
	if("".stristr($type, "const ")."" != "")
	{
		$modifier .= "const_";
	}
	
	if("".stristr($type, "**")."" != "")
	{
		$modifier .= "pointer_pointer";
	}
	elseif("".stristr($type, "*")."" != "")
	{
		$modifier .= "pointer";
	}
	elseif("".stristr($type, "&")."" != "")
	{
		$modifier .= "reference";
	}
	else
	{
		$modifier .= "none";
	}
	
	if($is_array)
	{
		$modifier .= "_array";
	}
	
	return $modifier;
}

/**
 * Generates the heading of classes.cpp and classes.h
 * 
 * @return string
 */
function classes_author_header()
{
	$header = "/*\n";
	$header .= " * @author Mário Soares\n";
	$header .= " * @contributors Jefferson González\n";
	$header .= " * \n";
	$header .= " * @license \n";
	$header .= " * This file is part of wxPHP check the LICENSE file for information.\n";
	$header .= " * \n";
	$header .= " * @note\n";
	$header .= " * This file was auto-generated by the wxPHP source maker\n";
	$header .= "*/\n\n";

	return $header;
}

/**
 * Generates the list of arguments used for a function or method declaration
 * 
 * @param array $function_definition The method or function data
 * 
 * @return string
 */
function function_arguments_string($function_definition, $default_argument=true)
{
	$arguments = "";
	foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_type)
	{
		$arguments .= $parameter_type . " " . $function_definition["parameters_name"][$parameter_index];
		
		if($function_definition["parameters_is_array"][$parameter_index])
		{
			$arguments .= "[]";
		}
		
		if(strlen($function_definition["parameters_default_value"][$parameter_index]) > 0 && $default_argument)
		{
			$arguments .= "=" . $function_definition["parameters_default_value"][$parameter_index];
		}
		
		$arguments .= ", ";
	}
	
	return trim($arguments, ", ");
}

/**
 * Generates the list of arguments used for a function or method call
 * 
 * @param array $function_definition The method or function data
 * 
 * @return string
 */
function function_arguments_call_string($function_definition)
{
	$arguments = "";
	foreach($function_definition["parameters_type"] as $parameter_index=>$parameter_type)
	{
		$arguments .= $function_definition["parameters_name"][$parameter_index];
		$arguments .= ", ";
	}
	
	return trim($arguments, ", ");
}

/**
 * Indents a flat JSON string to make it more human-readable.
 * URL: http://recursive-design.com/blog/2008/03/11/format-json-with-php/
 *
 * @param string $json The original JSON string to process.
 *
 * @return string Indented version of the original JSON string.
 */
function json_indent($json) {

    $result      = '';
    $pos         = 0;
    $strLen      = strlen($json);
    $indentStr   = "\t";
    $newLine     = "\n";
    $prevChar    = '';
    $outOfQuotes = true;

    for ($i=0; $i<=$strLen; $i++) {

        // Grab the next character in the string.
        $char = substr($json, $i, 1);

        // Are we inside a quoted string?
        if ($char == '"' && $prevChar != '\\') {
            $outOfQuotes = !$outOfQuotes;
        
        // If this character is the end of an element, 
        // output a new line and indent the next line.
        } else if(($char == '}' || $char == ']') && $outOfQuotes) {
            $result .= $newLine;
            $pos --;
            for ($j=0; $j<$pos; $j++) {
                $result .= $indentStr;
            }
        }
        
        // Add the character to the result string.
        $result .= $char;

        // If the last character was the beginning of an element, 
        // output a new line and indent the next line.
        if (($char == ',' || $char == '{' || $char == '[') && $outOfQuotes) {
            $result .= $newLine;
            if ($char == '{' || $char == '[') {
                $pos ++;
            }
            
            for ($j = 0; $j < $pos; $j++) {
                $result .= $indentStr;
            }
        }
        
        $prevChar = $char;
    }

    return $result;
}

/**
 * Equivalent of serilize function but output pretty printed 
 * json format to make it possible to edit the output manually.
 * 
 * @param array $data
 * 
 * @return string
 */
function serialize_json($data)
{
	$data = json_encode($data);
	
	return json_indent($data);
}

/**
 * Equivalent to unserialize for json.
 * This function retreive json objects as associative array.
 * 
 * @param string $data Json encoded data.
 * 
 * @return array
 */
function unserialize_json($data)
{
	return json_decode($data, true);
}
?>
