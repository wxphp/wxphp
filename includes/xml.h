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

#ifndef WXPHP_XML_H_GUARD
#define WXPHP_XML_H_GUARD

#include "references.h"
#include "object_types.h"

ZEND_BEGIN_ARG_INFO_EX(wxphp_xml_get_args, 0, 0, 1)
    ZEND_ARG_INFO(0, name)
ZEND_END_ARG_INFO()

extern zend_class_entry* php_wxXmlNode_entry;
extern zend_object_handlers wxphp_wxXmlNode_object_handlers;
void php_wxXmlNode_destruction_handler(zend_resource*);

class wxXmlNode_php: public wxXmlNode{
    public:

    wxXmlNode_php(wxXmlNode* parent, wxXmlNodeType type, const wxString& name, const wxString& content=wxEmptyString, wxXmlAttribute* attrs=NULL, wxXmlNode* next=NULL, int lineNo=-1):wxXmlNode(parent, type, name, content, attrs, next, lineNo){}
    wxXmlNode_php(wxXmlNodeType type, const wxString& name, const wxString& content=wxEmptyString, int lineNo=-1):wxXmlNode(type, name, content, lineNo){}
    wxXmlNode_php(const wxXmlNode& node):wxXmlNode(node){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxXmlNode{
    wxXmlNode_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxXmlNode;

void php_wxXmlNode_free(void *object);
zend_object* php_wxXmlNode_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxXmlNode_functions[] = {
    PHP_ME(php_wxXmlNode, AddAttribute, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, AddChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, DeleteAttribute, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetAttribute, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetAttributes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetChildren, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetContent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetDepth, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetLineNumber, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetNoConversion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetNodeContent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, GetType, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, HasAttribute, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, InsertChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, InsertChildAfter, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, IsWhitespaceOnly, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, RemoveChild, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetAttributes, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetChildren, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetContent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetNoConversion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetParent, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, SetType, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlNode, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxXmlNode * php_wxXmlNode_fetch_object(zend_object *obj) {
    return (zo_wxXmlNode *)(
        (char *)(obj) - XtOffsetOf(zo_wxXmlNode, zo)
    );
}

#define Z_wxXmlNode_P(zv) \
    php_wxXmlNode_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxXmlAttribute_entry;
extern zend_object_handlers wxphp_wxXmlAttribute_object_handlers;
void php_wxXmlAttribute_destruction_handler(zend_resource*);

class wxXmlAttribute_php: public wxXmlAttribute{
    public:

    wxXmlAttribute_php():wxXmlAttribute(){}
    wxXmlAttribute_php(const wxString& name, const wxString& value, wxXmlAttribute* next=NULL):wxXmlAttribute(name, value, next){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxXmlAttribute{
    wxXmlAttribute_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxXmlAttribute;

void php_wxXmlAttribute_free(void *object);
zend_object* php_wxXmlAttribute_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxXmlAttribute_functions[] = {
    PHP_ME(php_wxXmlAttribute, GetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, GetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, GetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, SetName, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, SetNext, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, SetValue, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlAttribute, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxXmlAttribute * php_wxXmlAttribute_fetch_object(zend_object *obj) {
    return (zo_wxXmlAttribute *)(
        (char *)(obj) - XtOffsetOf(zo_wxXmlAttribute, zo)
    );
}

#define Z_wxXmlAttribute_P(zv) \
    php_wxXmlAttribute_fetch_object(Z_OBJ_P(zv))
extern zend_class_entry* php_wxXmlDocument_entry;
extern zend_object_handlers wxphp_wxXmlDocument_object_handlers;
void php_wxXmlDocument_destruction_handler(zend_resource*);

class wxXmlDocument_php: public wxXmlDocument{
    public:

    wxXmlDocument_php():wxXmlDocument(){}
    wxXmlDocument_php(const wxXmlDocument& doc):wxXmlDocument(doc){}
    wxXmlDocument_php(const wxString& filename, const wxString& encoding="UTF-8"):wxXmlDocument(filename, encoding){}
    wxXmlDocument_php(wxInputStream& stream, const wxString& encoding="UTF-8"):wxXmlDocument(stream, encoding){}
    
    

    zval phpObj;
    wxPHPObjectReferences references;
};

BEGIN_EXTERN_C()
typedef struct _zo_wxXmlDocument{
    wxXmlDocument_php* native_object;
    wxphp_object_type object_type;
    int is_user_initialized;
    zend_object zo;
} zo_wxXmlDocument;

void php_wxXmlDocument_free(void *object);
zend_object* php_wxXmlDocument_new(zend_class_entry *class_type);
END_EXTERN_C()

#ifdef WXPHP_INCLUDE_METHOD_TABLES
static zend_function_entry php_wxXmlDocument_functions[] = {
    PHP_ME(php_wxXmlDocument, AppendToProlog, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, DetachDocumentNode, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, DetachRoot, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, GetDocumentNode, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, GetFileEncoding, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, GetLibraryVersionInfo, NULL, ZEND_ACC_STATIC|ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, GetRoot, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, GetVersion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, IsOk, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, Load, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, Save, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, SetDocumentNode, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, SetFileEncoding, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, SetRoot, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, SetVersion, NULL, ZEND_ACC_PUBLIC)
    PHP_ME(php_wxXmlDocument, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
    PHP_FE_END
};
#endif


static inline zo_wxXmlDocument * php_wxXmlDocument_fetch_object(zend_object *obj) {
    return (zo_wxXmlDocument *)(
        (char *)(obj) - XtOffsetOf(zo_wxXmlDocument, zo)
    );
}

#define Z_wxXmlDocument_P(zv) \
    php_wxXmlDocument_fetch_object(Z_OBJ_P(zv))
#endif //WXPHP_XML_H_GUARD
