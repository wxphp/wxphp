<?php
/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @description
 * Functions to assist on the generation of virtual methods that call
 * php user space functions
 * 
*/

/**
 * Generates the code for conversion from normal parameter types to
 * zvals
 * 
 * @param array $method_definition Data for the method.
 * @param string $method_name Name of the function.
 * @param string $class_name Name of the parent class.
 * 
 * @return string Generated code ready to insert on the beginning 
 * of a virtual mehtod body
 */
function class_virtual_method_parameters_to_zvals($method_definition, $method_name, $class_name)
{
	//Positions on the array of function_data where parameters data is stored
	$parameter_types = "parameters_type";
	$parameter_names = "parameters_name";
	$parameter_values = "parameters_default_value";
	
	$output = "";
	
	$output .= "//Parameters for conversion\n\t";
	foreach($method_definition[$parameter_types] as $parameter_index=>$parameter_type)
	{
		$parameter_is_array = $method_definition["parameters_is_array"][$parameter_index];
		
		$argument_type_modifier = "";
		$standard_parameter_type = parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name, $argument_type_modifier);
		$argument_type = str_replace(array("const ", "&", "*"), "", $parameter_type);
		
		switch($standard_parameter_type)
		{
			case	"bool":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_BOOL(&arguments[$parameter_index], *".$method_definition[$parameter_names][$parameter_index].");\n";
						break;
						
					default: 
						$output .= "ZVAL_BOOL(&arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index].");\n";
				}
				break;
			}	
			case	"integer":
			case	"class_enum":
			case	"global_enum":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_LONG(arguments[$parameter_index], *".$method_definition[$parameter_names][$parameter_index].");\n";
						break;
						
					default: 
						$output .= "ZVAL_LONG(arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index].");\n";
				}
				break;
			}	
			case	"float":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_DOUBLE(arguments[$parameter_index], *".$method_definition[$parameter_names][$parameter_index].");\n";
						break;
						
					default: 
						$output .= "ZVAL_DOUBLE(arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index].");\n";
				}
				break;
			}	
			case	"characters":
            {
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_STRING(&arguments[$parameter_index], (char*) ".$method_definition[$parameter_names][$parameter_index].");\n";
						break;
						
					default: 
						$output .= "ZVAL_STRING(&arguments[$parameter_index], (char*) &".$method_definition[$parameter_names][$parameter_index].");\n";
				}
				break;
			}	
			case	"void":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
                        break;
                    
					case "const_pointer":
						$output .= "ZVAL_STRING(&arguments[$parameter_index], (char*) ".$method_definition[$parameter_names][$parameter_index].");\n";
						break;
						
					default: 
						$output .= "ZVAL_STRING(&arguments[$parameter_index], (char*) &".$method_definition[$parameter_names][$parameter_index].");\n";
				}
				break;
			}	
			case	"date":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_LONG(arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index]."->GetTicks());\n";
						break;
						
					default: 
						$output .= "ZVAL_LONG(arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index].".GetTicks());\n";
				}
				break;
			}
			case	"string":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "ZVAL_STRING(&arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index]."->char_str());\n";
						break;
						
					default:
							$output .= "ZVAL_STRING(&arguments[$parameter_index], ".$method_definition[$parameter_names][$parameter_index].".char_str());\n";
				}
				break;
			}	
			case	"strings_array":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						die("unhandled wxArrayString* on virtual function.");
						break;
						
					default: 
						$output .= "array_init(arguments[$parameter_index]);\n";
						$output .= tabs(1) . "for(int i=0; i<".$method_definition[$parameter_names][$parameter_index].".GetCount(); i++)\n";
						$output .= tabs(1) . "{\n";
						$output .= tabs(2) . "temp_string = (char*)malloc(sizeof(wxChar)*(".$method_definition[$parameter_names][$parameter_index]."[i].size()+1));\n";
						$output .= tabs(2) . "strcpy(temp_string, (const char *) ".$method_definition[$parameter_names][$parameter_index]."[i].char_str());\n";
						$output .= tabs(2) . "add_next_index_string(arguments[$parameter_index], temp_string, 1);\n";
						$output .= tabs(2) . "free(temp_string);\n";
						$output .= tabs(1) . "}\n";
				}
				break;
			}	
			case "object":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					case "const_pointer":
						$output .= "object_init_ex(arguments[$parameter_index], php_{$argument_type}_entry);\n";
						$output .= tabs(1) . "Z_{$argument_type}_P(arguments[$parameter_index] TSRMLS_CC)->native_object = ({$argument_type}_php*) ".$method_definition[$parameter_names][$parameter_index].";\n";
						break;
				
					case "reference":
					case "const_reference":
						$output .= "object_init_ex(arguments[$parameter_index], php_{$argument_type}_entry);\n";
						$output .= tabs(1) . "Z_{$argument_type}_P(arguments[$parameter_index] TSRMLS_CC)->native_object = ({$argument_type}_php*) &".$method_definition[$parameter_names][$parameter_index].";\n";
						break;
						
					case "none":
					case "const_none":
						$output .= "object_init_ex(arguments[$parameter_index], php_{$argument_type}_entry);\n";
						$output .= tabs(1) . "Z_{$argument_type}_P(arguments[$parameter_index] TSRMLS_CC)->native_object = ({$argument_type}_php*) &".$method_definition[$parameter_names][$parameter_index].";\n";
						break;
				}
				break;
			}
				
			default: 
				ob_clean();
				die("Virtual Unhandled type " . parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name) . " on class '$class_name' at method '$method_name'\n");
		}
		
		$output .= "\t";
	}
	
	return $output;
}

/**
 * Generates the code that sets the virtual method reference parameters to
 * the values returned on the parameters of the php method counterpart
 * 
 * @param array $method_definition Data for the method.
 * @param string $method_name Name of the function.
 * @param string $class_name Name of the parent class.
 * 
 * @return string Generated code ready to insert after the php method is
 * called on the virtual mehtod body.
 */
function class_virtual_method_parameters_set_references($method_definition, $method_name, $class_name)
{
	//Positions on the array of function_data where parameters data is stored
	$parameter_types = "parameters_type";
	$parameter_names = "parameters_name";
	$parameter_values = "parameters_default_value";
	
	$output = "";
    
    $reference_code = "";
	
	foreach($method_definition[$parameter_types] as $parameter_index=>$parameter_type)
	{
		$parameter_is_array = $method_definition["parameters_is_array"][$parameter_index];
		
		$argument_type_modifier = "";
		$standard_parameter_type = parameter_type($parameter_type, $parameter_is_array, $method_name, $class_name, $argument_type_modifier);
		$argument_type = str_replace(array("const ", "&", "*"), "", $parameter_type);
        $parameter_name =  $method_definition[$parameter_names][$parameter_index];
		
		switch($standard_parameter_type)
		{
			case	"bool":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
                        
				}
				break;
			}	
			case	"integer":
			case	"class_enum":
			case	"global_enum":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
                        
				}
				break;
			}	
			case	"float":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					
				}
				break;
			}	
			case	"characters":
			case	"void":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
                        $reference_code .= tabs(2) . "memcpy ((void*) $parameter_name, (void*) Z_STRVAL_P(arguments[$parameter_index]), Z_STRLEN_P(arguments[$parameter_index]));\n";
				}
				break;
			}	
			case	"date":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					
				}
				break;
			}
			case	"string":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					
				}
				break;
			}	
			case	"strings_array":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					
				}
				break;
			}	
			case "object":
			{
				switch($argument_type_modifier)
				{
					case "pointer":
					
				}
				break;
			}
		}
	}
    
    if($reference_code)
    {
        $output .= "if(function_called != FAILURE)\n";
        $output .= tabs(1) . "{\n";
        $output .= $reference_code;
        $output .= tabs(1) . "}\n";
    }
	
	return $output;
}

/**
 * Generates the code that calls a user space virtual method and returns the data
 *
 * @param array $method_definitions Data for the method.
 * @param string $method_name Name of the method.
 * @param string $class_name Name of the method parent class.
 * 
 * @return string Generated code ready to insert on the end of 
 * the virtual method body.
 */
function class_virtual_method_return($method_definition, $method_name, $class_name)
{
	//Positions on the array of $method_definition where type and parameters data is stored
	$function_return_types = "return_type";
	
	$output = "";
	
	$return_type_modifier = "";
	$standard_parameter_type = parameter_type($method_definition[$function_return_types], false, $method_name, $class_name, $return_type_modifier);
	$return_type = str_replace(array("const ", "&", "*"), "", $method_definition[$function_return_types]);
	
	switch($standard_parameter_type)
	{
		case	"bool":
		{
			$output = "return Z_TYPE_INFO_P(return_value) == IS_TRUE;\n";
			break;
		}
		case	"integer":
		case	"class_enum":
		case	"global_enum":
		{
			$output .= "return ($return_type) Z_LVAL_P(return_value);\n";
			break;
		}
		case	"float":
		{
			$output .= "return Z_DVAL_P(return_value);\n";
			break;
		}
		case	"characters":
		{
			$output .= "return Z_STRVAL_P(return_value);\n";
			break;
		}
		case "void":
		{
			switch($return_type_modifier)
			{
				case "const_pointer":
				case "pointer":
					$output .= "return (void*) Z_STRVAL_P(return_value);\n";
					break;
				
				default:	
					$output .= "return;\n";
					break;
			}
			break;
		}
		case	"date":
		{
			$output .= "return wxDateTime(Z_LVAL_P(return_value));\n";
			break;
		}		
		case	"string":
		{
			$output .= "return wxString(Z_STRVAL_P(return_value), wxConvUTF8);\n";
			break;
		}	
		/*case "strings_array":
			
			break;*/
			
		case "object":
		{
			$output .= "if(Z_TYPE_P(return_value) == IS_OBJECT)\n";
			$output .= tabs(1) . "{\n";
			$output .= tabs(2) . "return_object = (void*) Z_{$return_type}_P(return_value TSRMLS_CC)->native_object;\n";
			$output .= tabs(1) . "}\n\n";
			
			$output .= tabs(1) . "//Threat it as a normal object on the calling function and not a php user space intiialized one\n";
			$output .= tabs(1) . "Z_{$return_type}_P(return_value TSRMLS_CC)->is_user_initialized = 0;\n";
			$output .= tabs(1) . "{$return_type}_php* var = ({$return_type}_php*) return_object;\n";
			$output .= tabs(1) . "var->references.UnInitialize();\n\n";
			
			switch($return_type_modifier)
			{
				case "const_pointer":
				case "pointer":
					$output .= tabs(1) . "return (".$method_definition[$function_return_types].") return_object;\n";
					break;
					
				case "const_reference":
				case "reference":
				case "const_none":
				case "none":
					$output .= tabs(1) . "return *(".$return_type."*) return_object;\n";
			}
			break;
		}
	}
	
	return $output;
}


?>
