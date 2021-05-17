/*
 * @author Jefferson González
 * @contributors René Vögeli / Rangee GmbH
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

void wxPHPObjectReferences::UnInitialize()
{
    m_userInitialized = 0;
}

bool wxPHPObjectReferences::IsUserInitialized()
{
    return (m_userInitialized == 0xAAEECC);
}

void wxPHPObjectReferences::AddReference(zval* var, std::string class_and_method)
{
    if(IsUserInitialized())
    {
        #ifdef USE_WXPHP_DEBUG
        php_printf("Adding Reference on %s\n", class_and_method.c_str());
        #endif

        Z_TRY_ADDREF_P(var);

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
            if (Z_REFCOUNTED_P((m_references[i])) && Z_TYPE_P(m_references[i]) <= _IS_ERROR) {
                #ifdef USE_WXPHP_DEBUG
                php_printf("Removing reference: %i\n", i);
                #endif

                Z_TRY_DELREF_P(m_references[i]);
            }
        }
    }
}
