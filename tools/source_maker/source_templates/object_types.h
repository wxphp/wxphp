/*
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @descirption
 * File that stores all types of classes used to check if an object 
 * passed to a method or function is castable to another type by
 * inheritance.
 * 
*/

#ifndef WXPHP_OBJECT_TYPES_H_GUARD
#define WXPHP_OBJECT_TYPES_H_GUARD

enum wxphp_object_type
{
	PHP_WXAPP_TYPE,
<?=$object_types?>
};

#endif //WXPHP_OBJECT_TYPES_H_GUARD
