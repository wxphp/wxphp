/**
 * @author Jefferson González
 * 
 * @license 
 * This file is part of wxPHP check the LICENSE file for information.
 *  
*/

#include "references.h"

wxPHPObjectReferences::wxPHPObjectReferences()
{
	m_userInitialized = 0x000000;
}

wxPHPObjectReferences::~wxPHPObjectReferences()
{
	RemoveReferences();
}

void wxPHPObjectReferences::Initialize()
{
	m_userInitialized = 0xAAEECC;
}

bool wxPHPObjectReferences::IsUserInitialized()
{
	return (m_userInitialized == 0xAAEECC); 
}
	
void wxPHPObjectReferences::AddReference(zval* var)
{
	if(IsUserInitialized())
	{
		Z_ADDREF_P(var);
		m_references.push_back(var); 
	}
}

void wxPHPObjectReferences::RemoveReferences()
{
	if(IsUserInitialized())
	{
		for(unsigned int i=0; i<m_references.size(); i++)
		{
			zval_ptr_dtor(&m_references[i]);
		}
	}
}
