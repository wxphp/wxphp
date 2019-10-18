/*
 * @author Mário Soares
 * @contributors Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 * 
 * @note
 * This file was auto-generated by the wxPHP source maker
*/

#ifndef WXPHP_VFS_H_GUARD
#define WXPHP_VFS_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_vfs_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxFileSystem_entry;
void php_wxFileSystem_destruction_handler(zend_resource*);

class wxFileSystem_php: public wxFileSystem{
    public:

    wxFileSystem_php():wxFileSystem(){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileSystem{
    wxFileSystem_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileSystem;

void php_wxFileSystem_free(void *object);
zend_object* php_wxFileSystem_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileSystem_functions[] = {
    PHP_ME(php_wxFileSystem, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_ME(php_wxFileSystem, URLToFileName, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, OpenFile, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, HasHandlerForPath, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, GetPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, FindNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, FindFirst, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, FindFileInPath, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, FileNameToURL, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, ChangePathTo, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystem, AddHandler, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_FE_END
};
#endif


static inline zo_wxFileSystem * php_wxFileSystem_fetch_object(zend_object *obj) {
    return (zo_wxFileSystem *)(
        (char *)(obj) - XtOffsetOf(zo_wxFileSystem, zo)
    );
}

#define Z_wxFileSystem_P(zv) \
    php_wxFileSystem_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxFileSystemHandler_entry;
void php_wxFileSystemHandler_destruction_handler(zend_resource*);

class wxFileSystemHandler_php: public wxFileSystemHandler{
    public:

    wxFileSystemHandler_php():wxFileSystemHandler(){}
    
    bool CanOpen(const wxString& location);
    wxFSFile* OpenFile(wxFileSystem& fs, const wxString& location);
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxFileSystemHandler{
    wxFileSystemHandler_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxFileSystemHandler;

void php_wxFileSystemHandler_free(void *object);
zend_object* php_wxFileSystemHandler_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxFileSystemHandler_functions[] = {
    PHP_ME(php_wxFileSystemHandler, FindFirst, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystemHandler, FindNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystemHandler, GetMimeTypeFromExt, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxFileSystemHandler, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxFileSystemHandler * php_wxFileSystemHandler_fetch_object(zend_object *obj) {
    return (zo_wxFileSystemHandler *)(
        (char *)(obj) - XtOffsetOf(zo_wxFileSystemHandler, zo)
    );
}

#define Z_wxFileSystemHandler_P(zv) \
    php_wxFileSystemHandler_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_VFS_H_GUARD
