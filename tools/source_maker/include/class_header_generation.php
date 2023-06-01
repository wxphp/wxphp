<?php
/**
 * @author Jefferson González
 * @contributors René Vögeli / Rangee GmbH
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

        $constructors .= "{}\n".tabs(1);
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
                if($method_name[0] !== "_")
                {
                    $virtual_methods .= $method_definition["return_type"] . " {$method_name}(";

                    $virtual_methods .= function_arguments_string($method_definition);

                    $virtual_methods .= ")";

                    if($method_definition["constant"])
                    {
                        $virtual_methods .= " const";
                    }

                    $virtual_methods .= ";\n".tabs(1);
                }
            }
        }
    }

    return $virtual_methods;
}

/**
 * Checks if a given class has properties.
 *
 * @param string $class_name
 *
 * @return bool
 */
function class_has_properties($class_name)
{
    global $defClassProperties;

    if(isset($defClassProperties[$class_name]))
    {
        return true;
    }

    return false;
}

/**
 * Generates the code to add a function to wxWidgets php class wrappers
 * that stores the pointer of all the wxWidgets class properties.
 *
 * @param string $class_name
 *
 * @return string
 */
function class_init_properties_code($class_name)
{
    global $defClassProperties;

    $code = "void InitProperties(){\n";

    if(isset($defClassProperties[$class_name]))
    {
        $properties_count = 0;
        $property_index = 0;
        $properties_init = "";

        foreach($defClassProperties[$class_name] as $property_name=>$property_attributes)
        {
            $type_modifier = "";
            $standard_type = parameter_type($property_attributes["type"], false, "InitProperties", $class_name, $type_modifier, true);

            //skip static properties
            if($property_attributes["static"])
            {
                continue;
            }

            //Just store none const properties, constants properties are initialized directly
            switch($type_modifier)
            {
                case "pointer":
                case "pointer_pointer": //This needs correct handling
                    $properties_init .= tabs(2) . "properties[$property_index] = &$property_name;\n";
                    $property_index++;
                    break;

                case "reference":
                case "none":
                    $properties_init .= tabs(2) . "properties[$property_index] = &{$property_name};\n";
                    $property_index++;
                    break;
            }
        }

        $code .= tabs(2) . "properties = new void*[$property_index];\n\n";
        $code .= $properties_init;
    }

    $code .= tabs(2) . register_class_const_properties($class_name) . "\n";

    $code .= tabs(1) . "}\n";

    return $code;
}

/**
 * Generates the code to add a function to wxWidgets php class wrappers
 * that stores the pointer of all the wxWidgets class properties.
 *
 * @param string $class_name
 *
 * @return string
 */
function class_uninit_properties_code($class_name)
{
    global $defClassProperties;

    $code = "void UninitProperties(){\n";

    if(isset($defClassProperties[$class_name]))
    {
        $code .= tabs(2) . "delete[] properties;\n";
    }

    $code .= tabs(1) . "}\n";

    return $code;
}

function register_class_const_properties($class_name)
{
    global $defClassProperties;

    $code = "";

    if(isset($defClassProperties[$class_name]))
    {
        foreach($defClassProperties[$class_name] as $property_name=>$property_attributes)
        {
            $type_modifier = "";
            $standard_type = parameter_type($property_attributes["type"], false, "MINIT", $class_name, $type_modifier, true);
            $property_type = str_replace(array("const ", "&", "*"), "", $property_attributes["type"]);

            $is_constant = true;
            switch($type_modifier)
            {
                case "const_pointer":
                case "const_pointer_pointer":
                case "const_reference":
                case "const_none":
                    break;

                default: //If not constant skip
                    $is_constant = false;
                    break;
            }

            if(!$is_constant)
            {
                continue;
            }

            switch($standard_type)
            {
                case "bool":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_bool(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", *$property_name);\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_bool(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name);\n";
                            break;
                    }
                    break;

                case "integer":
                case "class_enum":
                case "global_enum":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_long(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", *$property_name);\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_long(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name);\n";
                            break;
                    }
                    break;

                case "float":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_double(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", *$property_name);\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_double(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name);\n";
                            break;
                    }
                    break;

                case "characters":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_string(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name);\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_long(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name);\n";
                            break;
                    }
                    break;

                case "date":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_bool(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name->GetTicks());\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_bool(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name.GetTicks());\n";
                            break;
                    }
                    break;

                case "string":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zend_declare_class_constant_stringl(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name->ToUTF8().data(), $property_name->size());\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zend_declare_class_constant_stringl(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", $property_name.ToUTF8().data(), $property_name.size());\n";
                            break;
                    }
                    break;

                case "object":
                    switch($type_modifier)
                    {
                        case "const_pointer":
                        case "const_pointer_pointer":
                            $code .= tabs(1) . "zval {$property_name}_zval;\n";
                            $code .= tabs(1) . "object_init_ex(&{$property_name}_zval, php_{$property_type}_entry);\n";
                            $code .= tabs(1) . "Z_{$property_type}_P(&{$property_name}_zval)->native_object = ({$property_type}_php*) {$property_name};\n";
                            $code .= tabs(1) . "zend_declare_class_constant(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", {$property_name}_zval);\n";
                            break;

                        case "const_reference":
                        case "const_none":
                            $code .= tabs(1) . "zval {$property_name}_zval;\n";
                            $code .= tabs(1) . "object_init_ex(&{$property_name}_zval, php_{$property_type}_entry);\n";
                            $code .= tabs(1) . "Z_{$property_type}_P(&{$property_name}_zval)->native_object = ({$property_type}_php*) {$property_name};\n";
                            $code .= tabs(1) . "zend_declare_class_constant(php_{$class_name}_entry, \"$property_name\", ".strlen($property_name).", {$property_name}_zval);\n";
                            break;
                    }
                    break;

                default:
                    //Just skip unknown types
            }
        }
    }

    return $code;
}

?>
