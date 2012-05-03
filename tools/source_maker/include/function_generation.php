<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Functions to assist on the generation of code to wrap the wxWidgets
 * class methods and global functions.
 * 
*/

/**
 * Generates the parameters list code for a given class method or
 * function including its overloads
 * 
 * @param array $method_definitions Data for the method or function.
 * @param string $method_name Name of the function.
 * @param string $class_name Name of the parent class if applicable.
 * 
 * @return string Generated code ready to insert on the beginning 
 * of the PHP_METHOD or PHP_FUNCTION body
 */
function function_parameters($method_definitions, $method_name, $class_name=null)
{
	//Positions on the array of function_data where parameters data is stored
	$parameter_types = "parameters_type";
	$parameter_names = "parameters_name";
	$parameter_values = "parameters_default_value";
	
	$parameters = "";
	
	foreach($method_definitions as $declaration_index=>$declaration)
	{
		$parameters .= "//Parameters for overload $declaration_index\n\t";
		foreach($declaration[$parameter_types] as $parameter_index=>$parameter_type)
		{
			$parameter_is_array = $declaration["parameters_is_array"][$parameter_index];
			
			$declaration_modifier = "";
			$standard_parameter_type = parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name, $declaration_modifier);
			
			switch($standard_parameter_type)
			{
				case	"bool":
				{
					switch($declaration_modifier)
					{
						case "pointer": //bool*
							$parameters .= "bool* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
							
						case "const_pointer": //const bool* Array
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
							
						case "reference": //bool&
							$parameters .= "bool " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const bool&
						case "none": //bool
						case "const_none": //const bool
							$parameters .= "bool " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
					}
					break;
				}	
				case	"integer":
				case	"class_enum":
				case	"global_enum":
				{
					switch($declaration_modifier)
					{
						case "pointer": //long*
							$parameters .= "long* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
							
						case "const_pointer": //const long* Array
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
							
						case "reference": //long&
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const long&
						case "none": //long
						case "const_none": //const long
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
					}
					break;
				}
				case	"float":
				{
					switch($declaration_modifier)
					{
						case "pointer": //double*
							$parameters .= "double* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
							
						case "const_pointer": //const double* Array
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
							
						case "reference": //double&
							$parameters .= "double " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const double&
						case "none": //double
						case "const_none": //const double
							$parameters .= "double " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
					}
					break;
				}
				case	"characters":
				{
					switch($declaration_modifier)
					{
						case "pointer": //char* with reference
							$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_pointer": //const char*
							$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
							break;
							
						case "reference": //char&
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const char&
						case "none": //char
						case "const_none": //const char
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
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
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
							
						case "const_pointer": //const long* Array
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
							
						case "reference": //long&
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const long&
						case "none": //long
						case "const_none": //const long
							$parameters .= "long " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
					}
					break;
				}	
				case	"string":
				{
					switch($declaration_modifier)
					{
						case "pointer": //wxString*
							$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
							
						case "const_pointer": //const wxString* Array
						case "const_reference_array": //const wxString&[]
						case "const_none_array": //const wxString[]
						case "none_array": //wxString[]
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							break;
							
						case "reference": //wxString&
							$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const wxString&
						case "none": //wxString
						case "const_none": //const wxString
							$parameters .= "char* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . ";\n";
							$parameters .= "\tlong " . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ";\n";
							break;
					}
					break;
				}
				case	"strings_array":
				{
					switch($declaration_modifier)
					{
						case "pointer": //wxArrayString*
							die("Unhandled wxArrayString*");
							break;
							
						case "const_pointer": //const wxArrayString* Array
							die("Unhandled const wxArrayString*");
							break;
							
						case "reference": //wxArrayString&
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . " = 0;\n";
							$parameters .= "\tzval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref;\n";
							break;
						
						case "const_reference": //const wxArrayString&
						case "none": //wxArrayString
						case "const_none": //const wxArrayString
							$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . " = 0;\n";
							break;
					}
					break;
				}	
				case "object":
				{
					$parameters .= "zval* " . $declaration[$parameter_names][$parameter_index] . $declaration_index . " = 0;\n";
					$parameters .= "\tvoid* object_pointer{$declaration_index}_{$parameter_index} = 0;\n";
					break;
				}	
				default: 
					ob_clean();
					die("Unhandled type " . parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name) . " on class '$class_name' at method '$method_name'\n");
			}
			
			$parameters .= "\t";
		}
		
		$parameters .= "bool overload{$declaration_index}_called = false;\n\t";
	}
	
	return $parameters;
}



/**
 * Generates the code that checks which of the method 
 * or function overloads was called
 * 
 * @param array $method_definitions Data for the function.
 * @param string $method_name Name of the function.
 * @param string $class_name Name of the parent class if applicable.
 * 
 * @return string Generated code ready to insert on the middle of 
 * the PHP_METHOD or PHP_FUNCTION body after the generated code of 
 * function_parameters()
 */
function function_called_overload($method_definitions, $method_name, $class_name=null)
{
	//Positions on the array of function_data where parameters data is stored
	$parameter_types = "parameters_type";
	$parameter_names = "parameters_name";
	$parameter_required = "parameters_required";
	$parameter_values = "parameters_default_value";
	
	$called_overload = "";
	
	$declarations_count = count($method_definitions);
	
	foreach($method_definitions as $declaration_index=>$declaration)
	{
		$object_retrieve_code = "";
		
		$required_parameters = count($declaration[$parameter_required]);
		$parameters_count = count($declaration[$parameter_types]);
		
		$clause = $required_parameters == $parameters_count ? "arguments_received == $required_parameters" : "arguments_received >= $required_parameters  && arguments_received <= $parameters_count";
		
		$called_overload .= "//Overload $declaration_index\n";
		$called_overload .= "\toverload$declaration_index:\n";
		$called_overload .= "\tif(!already_called && $clause)\n";
		$called_overload .= "\t{\n";
		
		$zend_parse_parameters = "";
		$zend_parse_parameters_string = "";
		
		$references_found = false;
		$references_parameters_string = "";
		$references_parameters = "";
		
		for($parameter_index=0; $parameter_index<$parameters_count; $parameter_index++)
		{	
			//Check if all parameters are optional
			if($required_parameters == 0 && $parameters_count > 0 && $parameter_index == 0)
			{
				$zend_parse_parameters_string .= "|";
				$references_parameters_string .= "|";
			}
			
			$references_parameters_string .= "z";
			
			$parameter_is_array = $declaration["parameters_is_array"][$parameter_index];
			
			$declaration_modifier = "";
			$standard_parameter_type = parameter_type($declaration[$parameter_types][$parameter_index], $parameter_is_array, $method_name, $class_name, $declaration_modifier);
			$argument_parameter_type = str_replace(array("const ", "*", "&"), "", $declaration[$parameter_types][$parameter_index]);
			
			switch($standard_parameter_type)
			{
				case	"bool":
				{
					switch($declaration_modifier)
					{
						case "pointer": //bool*
							$zend_parse_parameters_string .= "b";
							$zend_parse_parameters .= $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const bool* Array
							$zend_parse_parameters_string .= "a";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //bool&
							$zend_parse_parameters_string .= "b";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const bool&
						case "none": //bool
						case "const_none": //const bool
							$zend_parse_parameters_string .= "b";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}	
				case	"integer":
				case	"class_enum":
				case	"global_enum":
				{
					switch($declaration_modifier)
					{
						case "pointer": //long*
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const long* Array
							$zend_parse_parameters_string .= "a";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //long&
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const long&
						case "none": //long
						case "const_none": //const long
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}
				case	"float":
				{
					switch($declaration_modifier)
					{
						case "pointer": //double*
							$zend_parse_parameters_string .= "d";
							$zend_parse_parameters .= $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const double* Array
							$zend_parse_parameters_string .= "a";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //double&
							$zend_parse_parameters_string .= "d";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const double&
						case "none": //bool
						case "const_none": //const double
							$zend_parse_parameters_string .= "d";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}
				case	"characters":
				{
					switch($declaration_modifier)
					{
						case "pointer": //char*
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const char*
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //char&
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const char&
						case "none": //char
						case "const_none": //const char
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}
				case	"void":
				{
					switch($declaration_modifier)
					{		
						case "pointer": //void*
						case "pointer_pointer": //void**
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const void*
						case "const_pointer_pointer": //const void**
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}
				case	"date":	
				{
					switch($declaration_modifier)
					{
						case "pointer": //long*
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const long* Array
							$zend_parse_parameters_string .= "a";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //long&
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const long&
						case "none": //long
						case "const_none": //const long
							$zend_parse_parameters_string .= "l";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}	
				case	"string":
				{
					switch($declaration_modifier)
					{
						case "pointer": //wxString*
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_pointer": //const wxString* array
						case "const_reference_array": //const wxString&[]
						case "const_none_array": //const wxString[]
						case "none_array": //wxString[]
							$zend_parse_parameters_string .= "a";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
							
						case "reference": //wxString&
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_found = true;
							$references_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref, ";
							break;
							
						case "const_reference": //const wxString&
						case "none": //wxString
						case "const_none": //const wxString
							$zend_parse_parameters_string .= "s";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
							$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . "_len" . $declaration_index . ", ";
							$references_parameters .= "&dummy, ";
							break;
					}
					break;
				}	
				case	"strings_array":
				{
					//wxArrayString
					$zend_parse_parameters_string .= "a";
					$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
					$references_parameters .= "&dummy, ";
					break;
				}	
				case "object":
				{
					$zend_parse_parameters .= "&" . $declaration[$parameter_names][$parameter_index] . $declaration_index . ", ";
					
					$references_parameters .= "&dummy, ";
					
					$typeVerifierStr = array();
					if($declaration_modifier == "pointer" || $declaration_modifier == "const_pointer" || $declaration_modifier == "const_pointer_pointer")
					{
						$zend_parse_parameters_string .= "z";
						
						$typeVerifier = derivationsOfClass($argument_parameter_type);
						
						foreach($typeVerifier as $argument_parent_class => $v)
						{
							$typeVerifierStr[] = "rsrc_type != le_".$argument_parent_class;
						}
						
						$typeVerifierStr = trim(join(" && ", $typeVerifierStr));
					}
					else
					{
						$zend_parse_parameters_string .= "O";
						$zend_parse_parameters .= "php_{$argument_parameter_type}_entry" . ", ";
					}
			
					$object_retrieve_code .= "\t\t\tif(arguments_received >= ".($parameter_index+1)."){\n";
					$object_retrieve_code .= "\t\t\t\tif(Z_TYPE_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.") == IS_OBJECT && zend_hash_find(Z_OBJPROP_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index."), _wxResource , sizeof(_wxResource),  (void **)&tmp) == SUCCESS)\n";
					$object_retrieve_code .= "\t\t\t\t{\n";
					$object_retrieve_code .= "\t\t\t\t\tid_to_find = Z_RESVAL_P(*tmp);\n";
					$object_retrieve_code .= "\t\t\t\t\tobject_pointer{$declaration_index}_{$parameter_index} = zend_list_find(id_to_find, &rsrc_type);\n";
					$object_retrieve_code .= "\t\t\t\t\tif (!object_pointer{$declaration_index}_{$parameter_index} ";
					if(trim($typeVerifierStr) != "") 
					{
						 $object_retrieve_code .= "|| ($typeVerifierStr)";
					}
					$object_retrieve_code .= ")\n";
					$object_retrieve_code .= "\t\t\t\t\t{\n";
					
					if(($declaration_index+1) != $declarations_count && $declarations_count > 1)
					{
						$object_retrieve_code .= "\t\t\t\t\t\tgoto overload".($declaration_index+1).";\n";
					}
					else
					{
						$object_retrieve_code .= "\t\t\t\t\t\tzend_error(E_ERROR, \"Parameter $paramenter_index could not be retreived correctly.\");\n";
					}
					
					$object_retrieve_code .= "\t\t\t\t\t}\n";
					$object_retrieve_code .= "\t\t\t\t}\n";
					$object_retrieve_code .= "\t\t\t\telse if(Z_TYPE_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.") != IS_NULL)\n";
					$object_retrieve_code .= "\t\t\t\t{\n";
					
					if(($declaration_index+1) != $declarations_count && $declarations_count > 1)
					{
						$object_retrieve_code .= "\t\t\t\t\t\tgoto overload".($declaration_index+1).";\n";
					}
					else
					{
						$object_retrieve_code .= "\t\t\t\t\t\tzend_error(E_ERROR, \"Parameter $paramenter_index could not be retreived correctly.\");\n";
					}
					
					$object_retrieve_code .= "\t\t\t\t}\n";
					$object_retrieve_code .= "\t\t\t}\n\n";
					break;
				}
			}
			
			//Check if all other parameters are optional
			if($parameter_index == $required_parameters-1 && $required_parameters > 0 && $parameters_count > 1 && $required_parameters != $parameters_count)
			{
				$zend_parse_parameters_string .= "|";
				$references_parameters_string .= "|";
			}
		}
		
		$called_overload .= "\t\t#ifdef USE_WXPHP_DEBUG\n";
		$called_overload .= "\t\tphp_printf(\"Parameters received %d\\n\", arguments_received);\n";
		$called_overload .= "\t\tphp_printf(\"Parsing parameters with '$zend_parse_parameters_string' (".trim($zend_parse_parameters, ", ").")\\n\");\n";
		$called_overload .= "\t\t#endif\n";
		
		if($required_parameters == 0 && $parameters_count < 1)
		{
			$called_overload .= "\t\toverload{$declaration_index}_called = true;\n";
			$called_overload .= "\t\talready_called = true;\n";
		}
		else
		{
			$called_overload .= "\t\tchar parse_parameters_string[] = \"$zend_parse_parameters_string\";\n";
			$called_overload .= "\t\tif(zend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_parameters_string, ".trim($zend_parse_parameters, ", ")." ) == SUCCESS)\n";
			$called_overload .= "\t\t{\n";
			$called_overload .= $object_retrieve_code;
			$called_overload .= "\t\t\toverload{$declaration_index}_called = true;\n";
			$called_overload .= "\t\t\talready_called = true;\n";
			
			//Just get variables not originally parsed as zvals since they are references
			if($references_found)
			{
				$called_overload .= "\n\t\t\tchar parse_references_string[] = \"$references_parameters_string\";\n";
				$called_overload .= "\t\t\tzend_parse_parameters_ex(ZEND_PARSE_PARAMS_QUIET, arguments_received TSRMLS_CC, parse_references_string, ".trim($references_parameters, ", ")." );\n";
			}
			
			$called_overload .= "\t\t}\n";
		}
		
		$called_overload .= "\t}\n";
		$called_overload .= "\n\t";
	}
	
	return $called_overload;
}



/**
 * Generates the code that calls a method, function or constructor 
 * and returns the data
 *
 * @param array $method_definitions Data for the method or function.
 * @param string $method_name Name of the function.
 * @param string $class_name Name of parent class if applicable
 * @param bool $is_constructor Flag to indicate if constructor or just a regular method.
 * 
 * @return string Generated code ready to insert on the end of 
 * the PHP_METHOD or PHP_FUNCTION body after the generated code of class_method_called_overload()
 */
function function_return($method_definitions, $method_name, $class_name=null, $is_constructor=false)
{
	//Positions on the array of $method_definition where type and parameters data is stored
	$function_return_types = "return_type";
	$parameter_types = "parameters_type";
	$parameter_names = "parameters_name";
	$parameter_required = "parameters_required";
	$parameter_values = "parameters_default_value";
	
	$return_called_overload = "";
	
	foreach($method_definitions as $declaration_index=>$declaration)
	{
		$return_called_overload .= "if(overload{$declaration_index}_called)\n";
		$return_called_overload .= "\t{\n";
	
		$required_parameters = count($declaration[$parameter_required]);
		$parameters_count = count($declaration[$parameter_types]);
		
		//Generate code for object arguments
		foreach($declaration[$parameter_types] as $parameter_index=>$parameter_type)
		{
			$parameter_is_array = $declaration["parameters_is_array"][$parameter_index];
			
			$argument_type_modifier = "";
			$standard_parameter_type = parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name, $argument_type_modifier);
			$plain_type = str_replace(array("const ", "&", "*"), "", $parameter_type);
			
			switch($standard_parameter_type)
			{
				case "bool":
					switch($argument_type_modifier)
					{
						case  "const_pointer":
							$return_called_overload .= tabs(2) . "int array_count{$declaration_index}_{$parameter_index} = 1;\n";
							$return_called_overload .= tabs(2) . "HashTable* arr_hash{$declaration_index}_{$parameter_index};\n";
							$return_called_overload .= tabs(2) . "if(arguments_received > $parameter_index)\n";
							$return_called_overload .= tabs(2) . "{\n";
							$return_called_overload .= tabs(3) . "arr_hash{$declaration_index}_{$parameter_index} = Z_ARRVAL_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.");\n";
							$return_called_overload .= tabs(3) . "array_count{$declaration_index}_{$parameter_index} = zend_hash_num_elements(arr_hash{$declaration_index}_{$parameter_index});\n";
							$return_called_overload .= tabs(2) . "}\n";
							$return_called_overload .= tabs(2) . "bool* bools_array{$declaration_index}_{$parameter_index} = new bool[array_count{$declaration_index}_{$parameter_index}];\n";
							$return_called_overload .= tabs(2) . "bool bools_continue{$declaration_index}_{$parameter_index} = true;\n\n";
							break;
					}
					break;
					
				case "integer":
					switch($argument_type_modifier)
					{
						case  "const_pointer":
							$return_called_overload .= tabs(2) . "int array_count{$declaration_index}_{$parameter_index} = 1;\n";
							$return_called_overload .= tabs(2) . "HashTable* arr_hash{$declaration_index}_{$parameter_index};\n";
							$return_called_overload .= tabs(2) . "if(arguments_received > $parameter_index)\n";
							$return_called_overload .= tabs(2) . "{\n";
							$return_called_overload .= tabs(3) . "arr_hash{$declaration_index}_{$parameter_index} = Z_ARRVAL_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.");\n";
							$return_called_overload .= tabs(3) . "array_count{$declaration_index}_{$parameter_index} = zend_hash_num_elements(arr_hash{$declaration_index}_{$parameter_index});\n";
							$return_called_overload .= tabs(2) . "}\n";
							$return_called_overload .= tabs(2) . "{$plain_type}* integers_array{$declaration_index}_{$parameter_index} = new {$plain_type}[array_count{$declaration_index}_{$parameter_index}];\n";
							$return_called_overload .= tabs(2) . "bool integers_continue{$declaration_index}_{$parameter_index} = true;\n\n";
							break;
					}
					break;
					
				case "float":
					switch($argument_type_modifier)
					{
						case  "const_pointer":
							$return_called_overload .= tabs(2) . "int array_count{$declaration_index}_{$parameter_index} = 1;\n";
							$return_called_overload .= tabs(2) . "HashTable* arr_hash{$declaration_index}_{$parameter_index};\n";
							$return_called_overload .= tabs(2) . "if(arguments_received > $parameter_index)\n";
							$return_called_overload .= tabs(2) . "{\n";
							$return_called_overload .= tabs(3) . "arr_hash{$declaration_index}_{$parameter_index} = Z_ARRVAL_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.");\n";
							$return_called_overload .= tabs(3) . "array_count{$declaration_index}_{$parameter_index} = zend_hash_num_elements(arr_hash{$declaration_index}_{$parameter_index});\n";
							$return_called_overload .= tabs(2) . "}\n";
							$return_called_overload .= tabs(2) . "{$plain_type}* floats_array{$declaration_index}_{$parameter_index} = new {$plain_type}[array_count{$declaration_index}_{$parameter_index}];\n";
							$return_called_overload .= tabs(2) . "bool floats_continue{$declaration_index}_{$parameter_index} = true;\n\n";
							break;
					}
					break;
					
				case "string":
					switch($argument_type_modifier)
					{
						case  "const_pointer": //const wxString* Array
						case "const_reference_array": //const wxString&[]
						case "const_none_array": //const wxString[]
						case "none_array": //wxString[]
							$return_called_overload .= tabs(2) . "int array_count{$declaration_index}_{$parameter_index} = 1;\n";
							$return_called_overload .= tabs(2) . "HashTable* arr_hash{$declaration_index}_{$parameter_index};\n";
							$return_called_overload .= tabs(2) . "if(arguments_received > $parameter_index)\n";
							$return_called_overload .= tabs(2) . "{\n";
							$return_called_overload .= tabs(3) . "arr_hash{$declaration_index}_{$parameter_index} = Z_ARRVAL_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.");\n";
							$return_called_overload .= tabs(3) . "array_count{$declaration_index}_{$parameter_index} = zend_hash_num_elements(arr_hash{$declaration_index}_{$parameter_index});\n";
							$return_called_overload .= tabs(2) . "}\n";
							$return_called_overload .= tabs(2) . "wxString* strings_array{$declaration_index}_{$parameter_index} = new wxString[array_count{$declaration_index}_{$parameter_index}];\n";
							$return_called_overload .= tabs(2) . "bool strings_continue{$declaration_index}_{$parameter_index} = true;\n\n";
							break;
					}
					break;
									
				case "strings_array":
					$return_called_overload .= tabs(2) . "wxArrayString strings_array{$declaration_index}_{$parameter_index};\n";
					$return_called_overload .= tabs(2) . "bool strings_continue{$declaration_index}_{$parameter_index} = true;\n\n";
					break;
					
				case "date":
					switch($argument_type_modifier)
					{
						case  "const_pointer":
							$return_called_overload .= tabs(2) . "int array_count{$declaration_index}_{$parameter_index} = 1;\n";
							$return_called_overload .= tabs(2) . "HashTable* arr_hash{$declaration_index}_{$parameter_index};\n";
							$return_called_overload .= tabs(2) . "if(arguments_received > $parameter_index)\n";
							$return_called_overload .= tabs(2) . "{\n";
							$return_called_overload .= tabs(3) . "arr_hash{$declaration_index}_{$parameter_index} = Z_ARRVAL_P(".$declaration[$parameter_names][$parameter_index] . $declaration_index.");\n";
							$return_called_overload .= tabs(3) . "array_count{$declaration_index}_{$parameter_index} = zend_hash_num_elements(arr_hash{$declaration_index}_{$parameter_index});\n";
							$return_called_overload .= tabs(2) . "}\n";
							$return_called_overload .= tabs(2) . "wxDateTime* dates_array{$declaration_index}_{$parameter_index} = new wxDateTime[array_count{$declaration_index}_{$parameter_index}];\n";
							$return_called_overload .= tabs(2) . "bool dates_continue{$declaration_index}_{$parameter_index} = true;\n\n";
							break;
					}
					break;
			}
		}
		
		$return_called_overload .= "\t\tswitch(arguments_received)\n";
		$return_called_overload .= "\t\t{\n";
		
		for($required_parameters; $required_parameters<=$parameters_count; $required_parameters++)
		{	
			$return_called_overload .= "\t\t\tcase $required_parameters:\n";
			$return_called_overload .= "\t\t\t{\n";
			$after_return_called_overload = ""; //Holds code that sets reference variables (* or &)
			$after_constructor_called = ""; //Holds code to execute after a constructor was called
			
			$parameters_string = "";
			
			for($parameter_index=0; $parameter_index<$required_parameters; $parameter_index++)
			{
				$parameter_is_array = $declaration["parameters_is_array"][$parameter_index];
				
				$declaration_modifier = "";
				$standard_parameter_type = parameter_type($declaration[$parameter_types][$parameter_index], $parameter_is_array, $method_name, $class_name, $declaration_modifier);
				$argument_parameter_type = str_replace(array("const ", "*", "&"), "", $declaration[$parameter_types][$parameter_index]);
				
				//Holds the name of the variable passed to called function
				$variable_name = $declaration[$parameter_names][$parameter_index] . $declaration_index;
				
				//Holds the name for the reference variable
				$reference_name = $declaration[$parameter_names][$parameter_index] . $declaration_index . "_ref";
				
				switch($standard_parameter_type)
				{
					case	"bool":
					{
						switch($declaration_modifier)
						{
							case "pointer": //bool*
								$parameters_string .= $variable_name . ", ";
								break;
								
							case "const_pointer": //const bool* Array
								$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "while(bools_continue{$declaration_index}_{$parameter_index})\n";
								$return_called_overload .= tabs(4) . "{\n";
								$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "convert_to_boolean_ex(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "bools_array{$declaration_index}_{$parameter_index}[array_index{$declaration_index}_{$parameter_index}] = Z_BVAL_PP(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "bools_continue{$declaration_index}_{$parameter_index} = false;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								
								$parameters_string .= "bools_array{$declaration_index}_{$parameter_index}, ";
								
								$after_return_called_overload .= "\t\t\t\tdelete[] bools_array{$declaration_index}_{$parameter_index};\n";
								break;
								
							case "reference": //bool&	
								$parameters_string .= $variable_name . ", ";
								break;
								
							case "const_reference": //const bool&
							case "none": //bool
							case "const_none": //const bool
								$parameters_string .= $variable_name . ", ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
								$after_return_called_overload .= "\t\t\t\tsize_t elements_returned{$declaration_index}_{$parameter_index} = sizeof($variable_name)/sizeof(*$variable_name);\n";
								$after_return_called_overload .= "\t\t\t\tarray_init($reference_name);\n";
								$after_return_called_overload .= "\t\t\t\tfor(size_t i=0; i<elements_returned{$declaration_index}_{$parameter_index}; i++)\n";
								$after_return_called_overload .= "\t\t\t\t{\n";
								$after_return_called_overload .= "\t\t\t\t\tadd_next_index_long($reference_name, {$variable_name}[i]);\n";
								$after_return_called_overload .= "\t\t\t\t}\n";
								break;
								
							case "reference":
								$after_return_called_overload .= "\t\t\t\tZVAL_BOOL($reference_name, $variable_name);\n";
								break;	
						}
						break;
					}
					case	"integer":
					case	"class_enum":
					case	"global_enum":
					{
						$integer_type = $class_enum.$declaration[$parameter_types][$parameter_index];
						
						if($enum_class = enum_parent_class($argument_parameter_type))
						{
							if("".strpos($integer_type, "$enum_class::")."" == "")
								$integer_type = str_replace($argument_parameter_type, "$enum_class::$argument_parameter_type", $integer_type);
						}
							
						switch($declaration_modifier)
						{
							case "pointer": //integer*
								$parameters_string .= "(".$integer_type.") " . $variable_name . ", ";
								break;
								
							case "const_pointer": //const integer* Array
								$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "while(integers_continue{$declaration_index}_{$parameter_index})\n";
								$return_called_overload .= tabs(4) . "{\n";
								$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "convert_to_long_ex(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "integers_array{$declaration_index}_{$parameter_index}[array_index{$declaration_index}_{$parameter_index}] = ($argument_parameter_type) Z_LVAL_PP(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "integers_continue{$declaration_index}_{$parameter_index} = false;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								
								$parameters_string .= "(".$integer_type.") " . "integers_array{$declaration_index}_{$parameter_index}, ";
								
								$after_return_called_overload .= "\t\t\t\tdelete[] integers_array{$declaration_index}_{$parameter_index};\n";
								break;
								
							case "reference": //integer&	
								$parameters_string .= "(".$integer_type.") " . $variable_name . ", ";
								break;
								
							case "const_reference": //const integer&
							case "none": //integer
							case "const_none": //const integer
								$parameters_string .= "(".$integer_type.") " . $variable_name . ", ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
								$after_return_called_overload .= "\t\t\t\tsize_t elements_returned{$declaration_index}_{$parameter_index} = sizeof($variable_name)/sizeof(*$variable_name);\n";
								$after_return_called_overload .= "\t\t\t\tarray_init($reference_name);\n";
								$after_return_called_overload .= "\t\t\t\tfor(size_t i=0; i<elements_returned{$declaration_index}_{$parameter_index}; i++)\n";
								$after_return_called_overload .= "\t\t\t\t{\n";
								$after_return_called_overload .= "\t\t\t\t\tadd_next_index_long($reference_name, {$variable_name}[i]);\n";
								$after_return_called_overload .= "\t\t\t\t}\n";
								break;
								
							case "reference":
								$after_return_called_overload .= "\t\t\t\tZVAL_LONG($reference_name, $variable_name);\n";
								break;	
						}
						break;
					}
					case	"float":
					{
						switch($declaration_modifier)
						{
							case "pointer": //double*
								$parameters_string .= $variable_name . ", ";
								break;
								
							case "const_pointer": //const double* Array
								$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "while(floats_continue{$declaration_index}_{$parameter_index})\n";
								$return_called_overload .= tabs(4) . "{\n";
								$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "convert_to_double_ex(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "floats_array{$declaration_index}_{$parameter_index}[array_index{$declaration_index}_{$parameter_index}] = ($argument_parameter_type) Z_DVAL_PP(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "floats_continue{$declaration_index}_{$parameter_index} = false;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								
								$parameters_string .= "(".$declaration[$parameter_types][$parameter_index].") " . "floats_array{$declaration_index}_{$parameter_index}, ";
								
								$after_return_called_overload .= "\t\t\t\tdelete[] floats_array{$declaration_index}_{$parameter_index};\n";
								break;
								
							case "reference": //double&	
								$parameters_string .= $variable_name . ", ";
								break;
								
							case "const_reference": //const double&
							case "none": //double
							case "const_none": //const double
								$parameters_string .= $variable_name . ", ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
								$after_return_called_overload .= "\t\t\t\tsize_t elements_returned{$declaration_index}_{$parameter_index} = sizeof($variable_name)/sizeof(*$variable_name);\n";
								$after_return_called_overload .= "\t\t\t\tarray_init($reference_name);\n";
								$after_return_called_overload .= "\t\t\t\tfor(size_t i=0; i<elements_returned{$declaration_index}_{$parameter_index}; i++)\n";
								$after_return_called_overload .= "\t\t\t\t{\n";
								$after_return_called_overload .= "\t\t\t\t\tadd_next_index_long($reference_name, {$variable_name}[i]);\n";
								$after_return_called_overload .= "\t\t\t\t}\n";
								break;
								
							case "reference":
								$after_return_called_overload .= "\t\t\t\tZVAL_DOUBLE($reference_name, $variable_name);\n";
								break;	
						}
						break;
					}
					case	"characters":
					{
						switch($declaration_modifier)
						{
							case "pointer": //char* Array with reference
							case "const_pointer": //const char* Array
								$parameters_string .= $variable_name . ", ";
								break;
								
							case "reference": //char&	
								$parameters_string .= "(".$declaration[$parameter_types][$parameter_index].") " . $variable_name . ", ";
								break;
								
							case "const_reference": //const char&
							case "none": //char
							case "const_none": //const char
								$parameters_string .= "(".$declaration[$parameter_types][$parameter_index].") " . $variable_name . ", ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
								$after_return_called_overload .= "\t\t\t\tZVAL_STRING($reference_name, $variable_name, 1);\n";
								break;
								
							case "reference":
								$after_return_called_overload .= "\t\t\t\tZVAL_LONG($reference_name, $variable_name);\n";
								break;	
						}
						break;
					}
					case	"void":
					{
						switch($declaration_modifier)
						{
							case "pointer": //void*
							case "const_pointer": //const void*
								$parameters_string .= "(".$declaration[$parameter_types][$parameter_index].") " . $variable_name . ", ";
								break;
							
							//Not handled for now
							case "pointer_pointer":
							case "const_pointer_pointer":
								$parameters_string .= "(void**) 0, ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
								$after_return_called_overload .= "\t\t\t\tZVAL_STRING($reference_name, (char*) $variable_name, 1);\n";
								break;
						}
						break;
					}
					case	"date":
					{
						switch($declaration_modifier)
						{
							case "pointer": //date*
								$return_called_overload .= tabs(4) . "wxDateTime date_time{$declaration_index}_{$parameter_index} = wxDateTime(".$variable_name.");\n";
								$parameters_string .= "&date_time{$declaration_index}_{$parameter_index}, ";
								break;
								
							case "const_pointer": //const date* Array
								$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "while(dates_continue{$declaration_index}_{$parameter_index})\n";
								$return_called_overload .= tabs(4) . "{\n";
								$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "convert_to_long_ex(temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "dates_array{$declaration_index}_{$parameter_index}[array_index{$declaration_index}_{$parameter_index}] = wxDateTime(Z_LVAL_PP(temp_array_value{$declaration_index}_{$parameter_index}));\n";
								$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "dates_continue{$declaration_index}_{$parameter_index} = false;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								
								$parameters_string .= "dates_array{$declaration_index}_{$parameter_index}, ";
								
								$after_return_called_overload .= "\t\t\t\tdelete[] dates_array{$declaration_index}_{$parameter_index};\n";
								break;
								
							case "reference": //date&	
								$return_called_overload .= tabs(4) . "wxDateTime date_time{$declaration_index}_{$parameter_index} = wxDateTime(".$variable_name.");\n";
								$parameters_string .= "date_time{$declaration_index}_{$parameter_index}, ";
								break;
								
							case "const_reference": //const date&
							case "none": //date
							case "const_none": //const date
								$parameters_string .= "wxDateTime(".$variable_name."), ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
							case "reference":
								$after_return_called_overload .= "\t\t\t\tZVAL_LONG($reference_name, date_time{$declaration_index}_{$parameter_index}.GetTicks());\n";
								break;	
						}
						break;
					}
					case	"string":
					{
						switch($declaration_modifier)
						{
							case "pointer": //wxString*
								$return_called_overload .= tabs(4) . "wxString string_arg{$declaration_index}_{$parameter_index} = wxString(".$variable_name.", wxConvUTF8);\n";
								$parameters_string .= "&string_arg{$declaration_index}_{$parameter_index}, ";
								break;
								
							case "const_pointer": //const wxString* Array
							case "const_reference_array": //const wxString&[]
							case "const_none_array": //const wxString[]
							case "none_array": //wxString[]
								$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
								$return_called_overload .= tabs(4) . "while(strings_continue{$declaration_index}_{$parameter_index})\n";
								$return_called_overload .= tabs(4) . "{\n";
								$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "convert_to_string(*temp_array_value{$declaration_index}_{$parameter_index});\n";
								$return_called_overload .= tabs(6) . "strings_array{$declaration_index}_{$parameter_index}[array_index{$declaration_index}_{$parameter_index}] = wxString(Z_STRVAL_PP(temp_array_value{$declaration_index}_{$parameter_index}), wxConvUTF8);\n";
								$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else\n";
								$return_called_overload .= tabs(5) . "{\n";
								$return_called_overload .= tabs(6) . "strings_continue{$declaration_index}_{$parameter_index} = false;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								
								$parameters_string .= "strings_array{$declaration_index}_{$parameter_index}, ";
								
								$after_return_called_overload .= "\t\t\t\tdelete[] strings_array{$declaration_index}_{$parameter_index};\n";
								break;
								
							case "reference": //wxString&	
								$return_called_overload .= tabs(4) . "wxString string_arg{$declaration_index}_{$parameter_index} = wxString(".$variable_name.", wxConvUTF8);\n";
								$parameters_string .= "string_arg{$declaration_index}_{$parameter_index}, ";
								break;
								
							case "const_reference": //const wxString&
							case "none": //char
							case "const_none": //const wxString
								$parameters_string .= "wxString(".$variable_name.", wxConvUTF8), ";
								break;
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
							case "reference":
								$after_return_called_overload .= "\t\t\t\tchar* temp_string{$declaration_index}_{$parameter_index};\n";
								$after_return_called_overload .= "\t\t\t\ttemp_string{$declaration_index}_{$parameter_index} = (char*)malloc(sizeof(wxChar)*(string_arg{$declaration_index}_{$parameter_index}.size()+1));\n";
								$after_return_called_overload .= "\t\t\t\tstrcpy (temp_string{$declaration_index}_{$parameter_index}, (const char *) string_arg{$declaration_index}_{$parameter_index}.char_str() );\n";
								$after_return_called_overload .= "\t\t\t\tZVAL_STRING($reference_name, (char*) temp_string{$declaration_index}_{$parameter_index}, 1);\n";
								$after_return_called_overload .= "\t\t\t\tfree(temp_string{$declaration_index}_{$parameter_index});\n\n";
								break;	
						}
						break;
					}
					case	"strings_array":
					{
						$return_called_overload .= tabs(4) . "int array_index{$declaration_index}_{$parameter_index} = 0;\n";
						$return_called_overload .= tabs(4) . "zval** temp_array_value{$declaration_index}_{$parameter_index} = 0;\n";
						$return_called_overload .= tabs(4) . "while(strings_continue{$declaration_index}_{$parameter_index})\n";
						$return_called_overload .= tabs(4) . "{\n";
						$return_called_overload .= tabs(5) . "if(zend_hash_index_find(HASH_OF(".$variable_name."), array_index{$declaration_index}_{$parameter_index}, (void**)&temp_array_value{$declaration_index}_{$parameter_index}) == SUCCESS)\n";
						$return_called_overload .= tabs(5) . "{\n";
						$return_called_overload .= tabs(6) . "convert_to_string(*temp_array_value{$declaration_index}_{$parameter_index});\n";
						$return_called_overload .= tabs(6) . "strings_array{$declaration_index}_{$parameter_index}.Add(wxString(Z_STRVAL_PP(temp_array_value{$declaration_index}_{$parameter_index}), wxConvUTF8));\n";
						$return_called_overload .= tabs(6) . "array_index{$declaration_index}_{$parameter_index}++;\n";
						$return_called_overload .= tabs(5) . "}\n";
						$return_called_overload .= tabs(5) . "else\n";
						$return_called_overload .= tabs(5) . "{\n";
						$return_called_overload .= tabs(6) . "strings_continue{$declaration_index}_{$parameter_index} = false;\n";
						$return_called_overload .= tabs(5) . "}\n";
						$return_called_overload .= tabs(4) . "}\n";
						
						switch($declaration_modifier)
						{
							case "const_pointer":
							case "pointer":
								$parameters_string .= "&strings_array{$declaration_index}_{$parameter_index}, ";
								break;
							
							case "const_reference":
							case "reference":
							case "const_none":
							case "none":
								$parameters_string .= "strings_array{$declaration_index}_{$parameter_index}, ";
								break;	
						}
						
						//Code to set references
						switch($declaration_modifier)
						{
							case "pointer":
							case "reference":
								$after_return_called_overload .= "\t\t\t\tchar* temp_string{$declaration_index}_{$parameter_index};\n";
								$after_return_called_overload .= "\t\t\t\tarray_init($variable_name);\n";
								$after_return_called_overload .= "\t\t\t\tfor(size_t i=0; i<strings_array{$declaration_index}_{$parameter_index}.GetCount(); i++)\n";
								$after_return_called_overload .= "\t\t\t\t{\n";
								$after_return_called_overload .= "\t\t\t\t\ttemp_string{$declaration_index}_{$parameter_index} = (char*)malloc(sizeof(wxChar)*(strings_array{$declaration_index}_{$parameter_index}[i].size()+1));\n";
								$after_return_called_overload .= "\t\t\t\t\tstrcpy (temp_string{$declaration_index}_{$parameter_index}, (const char *) strings_array{$declaration_index}_{$parameter_index}[i].char_str() );\n";
								$after_return_called_overload .= "\t\t\t\t\tadd_next_index_string($variable_name, (char*) temp_string{$declaration_index}_{$parameter_index}, 1);\n";
								$after_return_called_overload .= "\t\t\t\t\tfree(temp_string{$declaration_index}_{$parameter_index});\n\n";
								$after_return_called_overload .= "\t\t\t\t}\n";
								break;
						}
						break;
					}
					case "object":
						switch($declaration_modifier)
						{
							case "pointer": //object* Array with reference
							case "const_pointer": //const object* Array
								$parameters_string .= "(".$declaration[$parameter_types][$parameter_index].") object_pointer{$declaration_index}_{$parameter_index}" . ", ";
								
								if(!$declaration["static"] && $class_name && !$is_constructor)
									$after_return_called_overload .= tabs(4) . "references->AddReference($variable_name);\n";
								else if($is_constructor)
									$after_constructor_called .= tabs(4) . "(({$class_name}_php*) _this)->references.AddReference($variable_name);\n";
								break;
								
							case "reference": //object&	
							case "const_reference": //const object&
								$parameters_string .= "*(".$argument_parameter_type."*) object_pointer{$declaration_index}_{$parameter_index}" . ", ";
								
								if(!$declaration["static"] && $class_name && !$is_constructor)
									$after_return_called_overload .= tabs(4) . "references->AddReference($variable_name);\n";
								else if($is_constructor)
									$after_constructor_called .= tabs(4) . "(({$class_name}_php*) _this)->references.AddReference($variable_name);\n";
								break;
								
							case "none": //char
							case "const_none": //const object
								$parameters_string .= "*(".$argument_parameter_type."*) object_pointer{$declaration_index}_{$parameter_index}" . ", ";
								break;
						}
						break;
				}
			}
			
			$parameters_string = trim($parameters_string, ", ");
			
			if(!$is_constructor)
			{
				$parameter_is_array = $declaration["parameters_is_array"][$parameter_index];
				
				$return_modifier = "";
				$standard_return_type = parameter_type($declaration[$function_return_types], $parameter_is_array, $method_name, $class_name, $return_modifier);
				$return_type = str_replace(array("const ", "*", "&"), "", $declaration[$function_return_types]);
				
				switch($standard_return_type)
				{
					case	"bool":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing RETURN_BOOL($class_name::$method_name($parameters_string))\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							switch($return_modifier)
							{
								case "pointer":
								case "const_pointer":
									$return_called_overload .= "\t\t\t\tZVAL_BOOL(return_value, *($class_name::$method_name($parameters_string)));\n";
									break;
									
								default:
									$return_called_overload .= "\t\t\t\tZVAL_BOOL(return_value, $class_name::$method_name($parameters_string));\n";
									break;
							}
						}
						break;
					}
					case	"integer":
					case	"class_enum":
					case	"global_enum":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing RETURN_LONG($class_name::$method_name($parameters_string))\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							switch($return_modifier)
							{
								case "pointer":
								case "const_pointer":
									$return_called_overload .= "\t\t\t\tZVAL_LONG(return_value, *($class_name::$method_name($parameters_string)));\n";
									break;
									
								default:
									$return_called_overload .= "\t\t\t\tZVAL_LONG(return_value, $class_name::$method_name($parameters_string));\n";
									break;
							}
						}
						break;
					}	
					case	"float":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing RETURN_LONG($class_name::$method_name($parameters_string))\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							switch($return_modifier)
							{
								case "pointer":
								case "const_pointer":
									$return_called_overload .= "\t\t\t\tZVAL_DOUBLE(return_value, *($class_name::$method_name($parameters_string)));\n";
									break;
									
								default:
									$return_called_overload .= "\t\t\t\tZVAL_DOUBLE(return_value, $class_name::$method_name($parameters_string));\n";
									break;
							}
						}
						break;
					}
					case	"characters":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing RETURN_STRING($class_name::$method_name($parameters_string).fn_str(), 1)\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						$return_called_overload .= "\t\t\t\t" . $return_type . "* value_to_return{$required_parameters};\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = $class_name::$method_name($parameters_string);\n";
						}
						$return_called_overload .= "\t\t\t\tZVAL_STRING(return_value, value_to_return{$required_parameters}, 1);\n";
						break;
					}
					case "void":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string)\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							$return_called_overload .= "\t\t\t\t$class_name::$method_name($parameters_string);\n";
						}
						break;	
					}
					case "date":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string) to return timestamp\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						$return_type = "long";
						
						$return_called_overload .= "\t\t\t\t" . $return_type . " value_to_return{$required_parameters};\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = $class_name::$method_name($parameters_string).GetTicks();\n";
						}
						$return_called_overload .= "\t\t\t\tZVAL_LONG(return_value, value_to_return{$required_parameters});\n";
						break;
					}
					case	"string":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing RETURN_STRING($class_name::$method_name($parameters_string).fn_str(), 1)\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						$return_called_overload .= "\t\t\t\t" . $return_type . " value_to_return{$required_parameters};\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = $class_name::$method_name($parameters_string);\n";
						}
						$return_called_overload .= "\t\t\t\tchar* temp_string{$required_parameters};\n";
						$return_called_overload .= "\t\t\t\ttemp_string{$required_parameters} = (char*)malloc(sizeof(wxChar)*(value_to_return{$required_parameters}.size()+1));\n";
						$return_called_overload .= "\t\t\t\tstrcpy (temp_string{$required_parameters}, (const char *) value_to_return{$required_parameters}.char_str() );\n";
						$return_called_overload .= "\t\t\t\tZVAL_STRING(return_value, temp_string{$required_parameters}, 1);\n";
						$return_called_overload .= "\t\t\t\tfree(temp_string{$required_parameters});\n";
						break;
					}
					case "strings_array":
					{
						$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
						if($declaration["static"])
						{
							$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
						}
						$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string) to return strings array\\n\\n\");\n";
						$return_called_overload .= "\t\t\t\t#endif\n";
						
						$return_type = str_replace(array("const", " ", "&"), "", $declaration[$function_return_types]);
						
						$return_called_overload .= "\t\t\t\t" . $return_type . " value_to_return{$required_parameters};\n";
						
						if($class_name == null)
						{
							$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						elseif(!$declaration["static"])
						{
							$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
						}
						else
						{
							$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = $class_name::$method_name($parameters_string);\n";
						}
						
						$return_called_overload .= "\t\t\t\tchar* temp_string{$required_parameters};\n";
						$return_called_overload .= "\t\t\t\tarray_init(return_value);\n";
						$return_called_overload .= "\t\t\t\tfor(size_t i=0; i<value_to_return{$required_parameters}.GetCount(); i++)\n";
						$return_called_overload .= "\t\t\t\t{\n";
						$return_called_overload .= "\t\t\t\t\ttemp_string{$required_parameters} = (char*)malloc(sizeof(wxChar)*(value_to_return{$required_parameters}[i].size()+1));\n";
						$return_called_overload .= "\t\t\t\t\tstrcpy (temp_string{$required_parameters}, (const char *) value_to_return{$required_parameters}[i].char_str() );\n";
						$return_called_overload .= "\t\t\t\t\tadd_next_index_string(return_value, (char*) temp_string{$required_parameters}, 1);\n";
						$return_called_overload .= "\t\t\t\t\tfree(temp_string{$required_parameters});\n";
						$return_called_overload .= "\t\t\t\t}\n";
						break;
					}
					case "object":
					{
						switch($return_modifier)
						{
							case "pointer":
							case "const_pointer":	
								$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
								if($declaration["static"])
								{
									$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
								}
								$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string) to return object pointer\\n\\n\");\n";
								$return_called_overload .= "\t\t\t\t#endif\n";
								
								$return_called_overload .= "\t\t\t\t" . $return_type . "_php* value_to_return{$required_parameters};\n";
								
								if($class_name == null)
								{
									$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								elseif(!$declaration["static"])
								{
									$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								else
								{
									$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = ({$return_type}_php*) $class_name::$method_name($parameters_string);\n";
								}
								$return_called_overload .= tabs(4) . "if(value_to_return{$required_parameters} == NULL){\n";
								$return_called_overload .= tabs(5) . "ZVAL_NULL(return_value);\n";
								$return_called_overload .= tabs(4) . "}\n";
								$return_called_overload .= tabs(4) . "else if(value_to_return{$required_parameters}->references.IsUserInitialized()){\n";
								$return_called_overload .= tabs(5) . "if(value_to_return{$required_parameters}->phpObj != NULL){\n";
								$return_called_overload .= tabs(6) . "*return_value = *value_to_return{$required_parameters}->phpObj;\n";
								$return_called_overload .= tabs(6) . "zval_add_ref(&value_to_return{$required_parameters}->phpObj);\n";
								$return_called_overload .= tabs(6) . "return_is_user_initialized = true;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else{\n";
								$return_called_overload .= tabs(6) . "zend_error(E_ERROR, \"Could not retreive original zval.\");\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								$return_called_overload .= tabs(4) . "else{\n";
								$return_called_overload .= tabs(5) . "object_init_ex(return_value,php_{$return_type}_entry);\n";
								$return_called_overload .= tabs(5) . "add_property_resource(return_value, \"wxResource\", zend_list_insert(value_to_return{$required_parameters}, le_{$return_type}));\n";
								$return_called_overload .= tabs(4) . "}\n\n";
								
								if(!$declaration["static"] && $class_name)
								{
									$return_called_overload .= tabs(4) . "if(Z_TYPE_P(return_value) != IS_NULL && value_to_return{$required_parameters} != _this && return_is_user_initialized){\n";
									$return_called_overload .= tabs(5) . "references->AddReference(return_value);\n";
									$return_called_overload .= tabs(4) . "}\n";
								}
									
								break;
								
							case "const_reference":
							case "reference":
								$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
								if($declaration["static"])
								{
									$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
								}
								$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string) to return object reference\\n\\n\");\n";
								$return_called_overload .= "\t\t\t\t#endif\n";
								
								$return_called_overload .= "\t\t\t\t" . $return_type . "_php* value_to_return{$required_parameters};\n";
								
								if($class_name == null)
								{
									$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								elseif(!$declaration["static"])
								{
									$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								else
								{
									$return_called_overload .= "\t\t\t\tvalue_to_return{$required_parameters} = ({$return_type}_php*) &$class_name::$method_name($parameters_string);\n";
								}
								$return_called_overload .= tabs(4) . "if(value_to_return{$required_parameters}->references.IsUserInitialized()){\n";
								$return_called_overload .= tabs(5) . "if(value_to_return{$required_parameters}->phpObj != NULL){\n";
								$return_called_overload .= tabs(6) . "*return_value = *value_to_return{$required_parameters}->phpObj;\n";
								$return_called_overload .= tabs(6) . "zval_add_ref(&value_to_return{$required_parameters}->phpObj);\n";
								$return_called_overload .= tabs(6) . "return_is_user_initialized = true;\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(5) . "else{\n";
								$return_called_overload .= tabs(6) . "zend_error(E_ERROR, \"Could not retreive original zval.\");\n";
								$return_called_overload .= tabs(5) . "}\n";
								$return_called_overload .= tabs(4) . "}\n";
								$return_called_overload .= tabs(4) . "else{\n";
								$return_called_overload .= tabs(5) . "object_init_ex(return_value,php_{$return_type}_entry);\n";
								$return_called_overload .= tabs(5) . "add_property_resource(return_value, \"wxResource\", zend_list_insert(value_to_return{$required_parameters}, le_{$return_type}));\n";
								$return_called_overload .= tabs(4) . "}\n\n";
								
								if(!$declaration["static"] && $class_name)
								{
									$return_called_overload .= tabs(4) . "if(value_to_return{$required_parameters} != _this && return_is_user_initialized){ //Prevent adding references to it self\n";
									$return_called_overload .= tabs(5) . "references->AddReference(return_value);\n";
									$return_called_overload .= tabs(4) . "}\n";
								}
									
								break;
								
							case "const_none":
							case "none":
								$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
								if($declaration["static"])
								{
									$return_called_overload .= "\t\t\t\tphp_printf(\"Static \");\n";
								}
								$return_called_overload .= "\t\t\t\tphp_printf(\"Executing $class_name::$method_name($parameters_string) to return new object\\n\\n\");\n";
								$return_called_overload .= "\t\t\t\t#endif\n";
								
								$return_called_overload .= "\t\t\t\t" . $return_type . " value_to_return{$required_parameters};\n";
								
								if($class_name == null)
								{
									$return_called_overload .= function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								elseif(!$declaration["static"])
								{
									$return_called_overload .= class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $declaration[$function_return_types]);
								}
								else
								{
									$return_called_overload .= tabs(4) . "value_to_return{$required_parameters} = $class_name::$method_name($parameters_string);\n";
									
									$return_called_overload .= tabs(4) . "void* ptr = safe_emalloc(1, sizeof({$return_type}_php), 0);\n";
									$return_called_overload .= tabs(4) . "memcpy(ptr, &value_to_return{$required_parameters}, sizeof({$return_type}));\n";
									$return_called_overload .= tabs(4) . "object_init_ex(return_value, php_{$return_type}_entry);\n";
									$return_called_overload .= tabs(4) . "add_property_resource(return_value, _wxResource, zend_list_insert(ptr, le_{$return_type}));\n";
									$return_called_overload .= tabs(4) . "(({$return_type}_php*)ptr)->phpObj = return_value;\n";
									$return_called_overload .= tabs(4) . "MAKE_STD_ZVAL((({$return_type}_php*) ptr)->evnArray);\n";
									$return_called_overload .= tabs(4) . "array_init((({$return_type}_php*) ptr)->evnArray);\n";
									$return_called_overload .= tabs(4) . "(({$return_type}_php*)ptr)->InitProperties();\n";
								}
								break;
						}
						break;
					}	
				}
				
				$return_called_overload .= "\n" . $after_return_called_overload . "\n";
				$return_called_overload .= "\t\t\t\treturn;\n";
			}
			else
			{
				$return_called_overload .= "\t\t\t\t#ifdef USE_WXPHP_DEBUG\n";
				$return_called_overload .= "\t\t\t\tphp_printf(\"Executing __construct($parameters_string)\\n\");\n";
				$return_called_overload .= "\t\t\t\t#endif\n";
				$return_called_overload .= "\t\t\t\t_this = new {$method_name}_php($parameters_string);\n\n";
				$return_called_overload .= tabs(4) . "(({$class_name}_php*) _this)->references.Initialize();\n";
				$return_called_overload .= $after_constructor_called;
			}

			
			$return_called_overload .= "\t\t\t\tbreak;\n";
			$return_called_overload .= "\t\t\t}\n";
		}
		
		$return_called_overload .= "\t\t}\n";
		$return_called_overload .= "\t}\n";
		
		$return_called_overload .= "\n\t";
	}
	
	return $return_called_overload;
}


/**
 * This function generates the code that ensures that the function is 
 * called apropiatly for its return type
 */
function function_return_call($method_name, $parameters_string, $required_parameters, $standard_return_type, $method_return_type)
{
		
	$return_modifier = type_modifier($method_return_type);
	$return_type = str_replace(array("const ", "&", "*"), "", $method_return_type);
	
	//Amount of indentation for function calls
	$t = 4;

	switch($standard_return_type)
	{
		case	"bool":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "ZVAL_BOOL(return_value, *($method_name($parameters_string)));\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "ZVAL_BOOL(return_value, $method_name($parameters_string));\n";
					break;
			}
			break;
		}
		case	"integer":
		case	"class_enum":
		case	"global_enum":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "ZVAL_LONG(return_value, *($method_name($parameters_string)));\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "ZVAL_LONG(return_value, $method_name($parameters_string));\n";
					break;
			}
			break;
		}
		case	"float":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "ZVAL_DOUBLE(return_value, *($method_name($parameters_string)));\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "ZVAL_DOUBLE(return_value, $method_name($parameters_string));\n";
					break;
			}
			break;
		}	
		case	"characters":
		{
			switch($return_modifier)
			{
				case "const_pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = const_cast<char*>($method_name($parameters_string));\n";
					break;
					
				case "pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "char value_to_return_temp{$required_parameters} = $method_name($parameters_string);\n";
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = &value_to_return_temp{$required_parameters};\n";
					break;
			}
			break;
		}	
		case "void":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "ZVAL_STRING(return_value, (char*) $method_name($parameters_string), 1);\n";
					break;
					
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "$method_name($parameters_string);\n";
					break;
			}
			break;
		}	
		case "date":	
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string)->GetTicks();\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string).GetTicks();\n";
					break;
			}
			break;
		}		
		case	"string":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";
					break;
			}
			break;
		}	
		case "strings_array":
		{
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";
					break;
			
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";
					break;
			}
			break;
		}
		case "object":
		{	
			switch($return_modifier)
			{
				case "const_pointer":
				case "pointer":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = ({$return_type}_php*) $method_name($parameters_string);\n";
					break;
			
				case "const_reference":
				case "reference":
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = ({$return_type}_php*) &$method_name($parameters_string);\n";
					break;
					
				case "const_none":
				case "none":
					$return_type = str_replace(array("const", " "), "", $method_return_type);
					
					$call_code .= tabs($t) . "value_to_return{$required_parameters} = $method_name($parameters_string);\n";

					$call_code .= tabs($t) . "void* ptr = safe_emalloc(1, sizeof({$return_type}_php), 0);\n";
					$call_code .= tabs($t) . "memcpy(ptr, &value_to_return{$required_parameters}, sizeof({$return_type}));\n";
					$call_code .= tabs($t) . "object_init_ex(return_value, php_{$return_type}_entry);\n";
					$call_code .= tabs($t) . "add_property_resource(return_value, \"wxResource\", zend_list_insert(ptr, le_{$return_type}));\n";
					break;
			}
			break;
		}
	}
	
	return $call_code;
}


/**
 * This function generates the code that ensures that the object 
 * calling the function is casted to the appropiate type
 */
function class_method_return_call($class_name, $method_name, $parameters_string, $required_parameters, $standard_return_type, $method_return_type)
{
	global $defIni;
	
	$call_code = "";
	
	$first_call = true;
	
	$derivations = array();
	
	//Amount of indentation for inner elements
	$t = 4;
	
	//Skip derivations type checking if this class implements a constructor
	if(!isset($defIni[$class_name][$class_name]))
	{	
		$derivations = derivationsOfClass($class_name);
		
		//Since type checking code is generated add 1 indenting place
		$t += 1;
	}
	
	//Append this class to the parent_rsrc_type checking code
	$derivations[$class_name] = true;
	
	foreach($derivations as $derivation_class_name=>$dummy)
	{
		if($derivation_class_name != $class_name)
		{
			//Skip methods that already have a seperate implementation
			if(isset($defIni[$derivation_class_name][$method_name]))
			{
				continue;
			}
			
			//Skip classes that dont inherit the method from this class but another base class
			if(!inherits_method_from_class($method_name, $class_name, $derivation_class_name))
			{
				continue;
			}
		}
		
		//Skip derivations type checking code if this class implements a constructor
		if(!isset($defIni[$class_name][$class_name]))
		{
			if($first_call)
			{
				$call_code .= tabs(4) . "if(";
				$first_call = false;
			}
			else
			{
				$call_code .= tabs(4) . "else if(";
			}
			
			$call_code .= "parent_rsrc_type == le_{$derivation_class_name}";
								
			$call_code .= ")\n";
			
			$call_code .= tabs(4) . "{\n";
		}
		
		$return_modifier = type_modifier($method_return_type);
		$return_type = str_replace(array("const ", "&", "*"), "", $method_return_type);
		
		switch($standard_return_type)
		{
			case	"bool":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "ZVAL_BOOL(return_value, *((({$derivation_class_name}_php*)_this)->$method_name($parameters_string)));\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "ZVAL_BOOL(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "ZVAL_BOOL(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
				}
				break;
			}
			case	"integer":
			case	"class_enum":
			case	"global_enum":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "ZVAL_LONG(return_value, *((({$derivation_class_name}_php*)_this)->$method_name($parameters_string)));\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "ZVAL_LONG(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "ZVAL_LONG(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
				}
				break;
			}
			case	"float":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "ZVAL_DOUBLE(return_value, *((({$derivation_class_name}_php*)_this)->$method_name($parameters_string)));\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "ZVAL_DOUBLE(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "ZVAL_DOUBLE(return_value, (({$derivation_class_name}_php*)_this)->$method_name($parameters_string));\n";
						break;
				}
				break;
			}	
			case	"characters":
			{
				switch($return_modifier)
				{
					case "const_pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (char*) (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
						
					case "pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "char value_to_return_temp{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = &value_to_return_temp{$required_parameters};\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "char value_to_return_temp{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = &value_to_return_temp{$required_parameters};\n";
						break;
				}
				break;
			}	
			case "void":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "ZVAL_STRING(return_value, (char*) (({$derivation_class_name}_php*)_this)->$method_name($parameters_string), 1);\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "(({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				}
				break;
			}	
			case "date":	
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string)->GetTicks();\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string).GetTicks();\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string).GetTicks();\n";
						break;
				}
				break;
			}		
			case	"string":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				}
				break;
			}	
			case "strings_array":
			{
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
						
					case "const_none":
					case "none":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";
						break;
				}
				break;
			}
			case "object":
			{	
				switch($return_modifier)
				{
					case "const_pointer":
					case "pointer":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = ({$return_type}_php*) (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n\n";
						break;
				
					case "const_reference":
					case "reference":
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = ({$return_type}_php*) &(({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n\n";
						break;
						
					case "const_none":
					case "none":
						$return_type = str_replace(array("const", " "), "", $method_return_type);
						
						$call_code .= tabs($t) . "value_to_return{$required_parameters} = (({$derivation_class_name}_php*)_this)->$method_name($parameters_string);\n";

						$call_code .= tabs($t) . "void* ptr = safe_emalloc(1, sizeof({$return_type}_php), 0);\n";
						$call_code .= tabs($t) . "memcpy(ptr, &value_to_return{$required_parameters}, sizeof({$return_type}));\n";
						$call_code .= tabs($t) . "object_init_ex(return_value, php_{$return_type}_entry);\n";
						$call_code .= tabs($t) . "add_property_resource(return_value, \"wxResource\", zend_list_insert(ptr, le_{$return_type}));\n";
						break;
				}
				break;
			}
		}
		
		//Skip derivations type checking code if this class implements a constructor
		if(!isset($defIni[$class_name][$class_name]))
		{
			$call_code .= tabs(4) . "}\n";
		}
	}
	
	//Skip derivations type checking code if this class implements a constructor
	if(!isset($defIni[$class_name][$class_name]))
	{
		$return_called_overload .= tabs(5) . "else{zend_error(E_ERROR, \"The object type that called the method '$method_name' couldn't be determined.\");}\n";
	}
	
	return $call_code;
}

/**
 * Generates the code to correctly cast the references variable using
 * the parent_rsrc_type in order to correctly retrieve the references
 * object.
 */
function references_cast_code($class_name)
{
	$derivations = derivationsOfClass($class_name);
	
	//Instead of using elseif we have to break it in multiple if since
	//MS Visual C++ compiler doesnt supports a very deep elseif sequence.
	$code .= "bool reference_type_found = false;\n\n";
	$code .= tabs(3) . "if(parent_rsrc_type == le_{$class_name}){\n";
	$code .= tabs(4) . "references = &(({$class_name}_php*)_this)->references;\n";
	$code .= tabs(4) . "reference_type_found = true;\n";
	$code .= tabs(3) . "}\n";
	
	foreach($derivations as $derivation_name=>$derivation_value)
	{
		$code .= tabs(3) . "if((parent_rsrc_type == le_{$derivation_name}) && (!reference_type_found)){\n";
		$code .= tabs(4) . "references = &(({$derivation_name}_php*)_this)->references;\n";
		$code .= tabs(4) . "reference_type_found = true;\n";
		$code .= tabs(3) . "}\n";
	}
	
	return $code;
}
?>
