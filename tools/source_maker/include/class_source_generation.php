<?php
/**
 * @author Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 *
 * @license
 * This file is part of wxPHP check the LICENSE file for information.
 *
 * @description
 * Functions to assist on the generation of the wxWidgets functions
 * to php functions code
 *
*/

function classes_get_property_code($class_name)
{
    global $defClassProperties;

    $code = "";
    if(isset($defClassProperties[$class_name]))
    {
        $property_index = 0;

        foreach($defClassProperties[$class_name] as $property_name=>$property_attributes)
        {
            $type_modifier = "";
            $standard_type = parameter_type($property_attributes["type"], false, "MINIT", $class_name, $type_modifier, true);
            $property_type = str_replace(array("const ", "&", "*"), "", $property_attributes["type"]);

            $is_constant = false;
            switch($type_modifier)
            {
                //If constant skip
                case "const_pointer":
                case "const_pointer_pointer":
                case "const_reference":
                case "const_none":
                    $is_constant = true;
                    break;

                default: //If not constant continue
                    break;
            }

            if($is_constant)
            {
                continue;
            }

            if(!$property_attributes["static"])
            {
                $code .= "else if(strcmp(\"$property_name\", name) == 0)\n";
                $code .= tabs(1). "{\n";
            }
            else
            {
                //Skip static properties (we should handle them differently?)
                continue;
            }

            switch($standard_type)
            {
                case "bool":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_BOOL(*((bool*) *((void**) native_object->properties[$property_index])));\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_BOOL(*((bool*) native_object->properties[$property_index]));\n";
                            break;
                    }
                    break;

                case "integer":
                case "class_enum":
                case "global_enum":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_LONG(*(($property_type*) *((void**) native_object->properties[$property_index])));\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_LONG(*(($property_type*) native_object->properties[$property_index]));\n";
                            break;
                    }
                    break;

                case "float":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_DOUBLE(*(($property_type*) *((void**) native_object->properties[$property_index])));\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_DOUBLE(*(($property_type*) native_object->properties[$property_index]));\n";
                            break;
                    }
                    break;

                case "characters":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_STRING(((char*) *((void**) native_object->properties[$property_index])));\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_LONG(*((char*) native_object->properties[$property_index]));\n";
                            break;
                    }
                    break;

                case "date":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_LONG(*((wxDateTime*) *((void**) native_object->properties[$property_index])).GetTicks());\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_LONG(*((wxDateTime*) native_object->properties[$property_index]).GetTicks());\n";
                            break;
                    }
                    break;

                case "string":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "RETVAL_STRING(*((wxString*) *((void**) native_object->properties[$property_index])));\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "RETVAL_STRING((const char*) *((wxString*) native_object->properties[$property_index]));\n";
                            break;
                    }
                    break;

                case "object":
                    switch($type_modifier)
                    {
                        case "pointer":
                        case "pointer_pointer":
                            $code .= tabs(2) . "object_init_ex(return_value, php_{$property_type}_entry);\n";
                            $code .= tabs(2) . "Z_{$class_name}_P(&return_value)->native_object = (({$property_type}_php*) *((void**) native_object->properties[$property_index]));\n";
                            $code .= tabs(2) . "return;\n";
                            break;

                        case "reference":
                        case "none":
                            $code .= tabs(2) . "object_init_ex(return_value, php_{$property_type}_entry);\n";
                            $code .= tabs(2) . "Z_{$class_name}_P(&return_value)->native_object = (({$property_type}_php*) native_object->properties[$property_index]);\n";
                            $code .= tabs(2) . "return;\n";
                            break;
                    }
                    break;

                default:
                    //Just skip unknown types
            }

            $code .= tabs(1) . "}\n";
            $code .= tabs(1);

            $property_index++;
        }
    }

    $code = rtrim($code, tabs(1));

    return $code;
}


?>
