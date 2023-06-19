/*
 * @author Mário Soares
 * @contributors Jefferson González
 * @contributors René Vögeli / Rangee GmbH
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_RTTI_H_GUARD
#define WXPHP_RTTI_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_rtti_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxRefCounter_entry;
extern zend_object_handlers wxphp_wxRefCounter_object_handlers;
void php_wxRefCounter_destruction_handler(zend_resource*);

class wxRefCounter_php: public wxRefCounter{
    public:

    wxRefCounter_php():wxRefCounter(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxRefCounter{
    wxRefCounter_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxRefCounter;

void php_wxRefCounter_free(void *object);
zend_object* php_wxRefCounter_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
ZEND_BEGIN_ARG_INFO_EX(php_wxRefCounter_DecRef_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxRefCounter_GetRefCount_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxRefCounter_IncRef_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxRefCounter___construct_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()

static zend_function_entry php_wxRefCounter_functions[] = {
    PHP_ME(php_wxRefCounter, DecRef, php_wxRefCounter_DecRef_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxRefCounter, GetRefCount, php_wxRefCounter_GetRefCount_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxRefCounter, IncRef, php_wxRefCounter_IncRef_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxRefCounter, __construct, php_wxRefCounter___construct_arg_infos, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxRefCounter * php_wxRefCounter_fetch_object(zend_object *obj) {
    return (zo_wxRefCounter *)(
        (char *)(obj) - XtOffsetOf(zo_wxRefCounter, zo)
    );
}

#define Z_wxRefCounter_P(zv) \
    php_wxRefCounter_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxObject_entry;
extern zend_object_handlers wxphp_wxObject_object_handlers;
void php_wxObject_destruction_handler(zend_resource*);

class wxObject_php: public wxObject{
    public:

    wxObject_php(const wxObject& other):wxObject(other){}
    wxObject_php():wxObject(){}
    
    
    void InitProperties(){
        properties = new void*[1];

        properties[0] = &m_refData;
        
    }

    void UninitProperties(){
        delete[] properties;
    }

    void** properties;

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxObject{
    wxObject_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxObject;

void php_wxObject_free(void *object);
zend_object* php_wxObject_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
ZEND_BEGIN_ARG_INFO_EX(php_wxObject___construct_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, other)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_UnShare_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_UnRef_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_IsSameAs_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, obj)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_Ref_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, clone)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_GetClassInfo_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxObject_IsKindOf_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, info)
ZEND_END_ARG_INFO()

static zend_function_entry php_wxObject_functions[] = {
    PHP_ME(php_wxObject, __construct, php_wxObject___construct_arg_infos, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxObject, UnShare, php_wxObject_UnShare_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, UnRef, php_wxObject_UnRef_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, IsSameAs, php_wxObject_IsSameAs_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, Ref, php_wxObject_Ref_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, GetClassInfo, php_wxObject_GetClassInfo_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, IsKindOf, php_wxObject_IsKindOf_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxObject, __get, wxphp_rtti_get_args, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxObject * php_wxObject_fetch_object(zend_object *obj) {
    return (zo_wxObject *)(
        (char *)(obj) - XtOffsetOf(zo_wxObject, zo)
    );
}

#define Z_wxObject_P(zv) \
    php_wxObject_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxClassInfo_entry;
extern zend_object_handlers wxphp_wxClassInfo_object_handlers;
void php_wxClassInfo_destruction_handler(zend_resource*);

class wxClassInfo_php: public wxClassInfo{
    public:

    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxClassInfo{
    wxClassInfo_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxClassInfo;

void php_wxClassInfo_free(void *object);
zend_object* php_wxClassInfo_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
ZEND_BEGIN_ARG_INFO_EX(php_wxClassInfo_CreateObject_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxClassInfo_FindClass_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, className)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxClassInfo_GetSize_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxClassInfo_IsDynamic_arg_infos, 0, 0, 0)
ZEND_END_ARG_INFO()
ZEND_BEGIN_ARG_INFO_EX(php_wxClassInfo_IsKindOf_arg_infos, 0, 0, 0)
    ZEND_ARG_INFO(0, info)
ZEND_END_ARG_INFO()

static zend_function_entry php_wxClassInfo_functions[] = {
    PHP_ME(php_wxClassInfo, CreateObject, php_wxClassInfo_CreateObject_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxClassInfo, FindClass, php_wxClassInfo_FindClass_arg_infos, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxClassInfo, GetSize, php_wxClassInfo_GetSize_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxClassInfo, IsDynamic, php_wxClassInfo_IsDynamic_arg_infos, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxClassInfo, IsKindOf, php_wxClassInfo_IsKindOf_arg_infos, ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxClassInfo * php_wxClassInfo_fetch_object(zend_object *obj) {
    return (zo_wxClassInfo *)(
        (char *)(obj) - XtOffsetOf(zo_wxClassInfo, zo)
    );
}

#define Z_wxClassInfo_P(zv) \
    php_wxClassInfo_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_RTTI_H_GUARD
