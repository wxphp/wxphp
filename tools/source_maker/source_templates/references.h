/*
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 *  
*/

#ifndef WXPHP_REFERENCES_H_GUARD
#define WXPHP_REFERENCES_H_GUARD


#include "common.h"
#include <vector>
#include <string>

/**
 * Used internally by each php wrapper class to keep track of
 * zval references used by them
 */
class wxPHPObjectReferences
{	
	public:
	
	wxPHPObjectReferences();
	
	~wxPHPObjectReferences();
	
	/**
	 * To turn on the flag that indicates that the php class using
	 * this object was initialized by the php user space and not internally
	 * by wxWidgets
	 */
	void Initialize();
	
	/**
	 * To turn off the flag that indicates that the php class using
	 * this object was initialized by the php user.
	 * 
	 * Needed to implement this since virtual methods returning php 
	 * objects caused a segfault when returned value was garbage 
	 * collected by php. Should always be called when an object shouldn't
	 * automatically be garbage collected like for example global objects 
	 * initialized on the RINIT function.
	 */
	void UnInitialize();
	
	/**
	 * Checks if the class using this object was initialized by the php
	 * user space.
	 * 
	 * @return true if initialized by user otherwise false
	 */
	bool IsUserInitialized();
	
	/**
	 * Increments the refcount of a zval and stores it on an internal
	 * vector. This method should be used when the php class wrapper
	 * using this object uses a zval resource as pointer or reference.
	 * 
	 * @param var Pointer of zval to increment its refcount
	 */
	void AddReference(zval* var, std::string class_and_method);
	
	/**
	 * Decreases the refcount of all registered zvals on the internal
	 * in order for php to garbage collect them. This method should
	 * be called when the php wrapper using this object is destroyed.
	 */
	void RemoveReferences();
	
	private:
	
	long m_userInitialized; /**< Flag that stores the initialization status of the class using this object. */
	std::vector<zval*> m_references; /**< Vector that keeps a registry of all zvals* which refcount was incremented */
};

#endif //WXPHP_REFERENCES_H_GUARD
