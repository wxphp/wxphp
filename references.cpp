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
		#ifdef USE_WXPHP_DEBUG
		php_printf("Adding Reference\n");
		#endif
		
		Z_ADDREF_P(var);
		m_references.push_back(var); 
	}
}

void wxPHPObjectReferences::RemoveReferences()
{
	if(IsUserInitialized())
	{
		#ifdef USE_WXPHP_DEBUG
		php_printf("Removing References\n");
		#endif
			
		for(unsigned int i=0; i<m_references.size(); i++)
		{
			#ifdef USE_WXPHP_DEBUG
			php_printf("Removing reference: %i\n", i);
			#endif
			
			zval_ptr_dtor(&m_references[i]);
		}
	}
}
