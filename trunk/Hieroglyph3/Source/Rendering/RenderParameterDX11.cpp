//--------------------------------------------------------------------------------
// This file is a portion of the Hieroglyph 3 Rendering Engine.  It is distributed
// under the MIT License, available in the root of this distribution and 
// at the following URL:
//
// http://www.opensource.org/licenses/mit-license.php
//
// Copyright (c) 2003-2010 Jason Zink 
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
#include "RenderParameterDX11.h"
//--------------------------------------------------------------------------------
using namespace Glyph3;
//--------------------------------------------------------------------------------
RenderParameterDX11::RenderParameterDX11()
{
}
//--------------------------------------------------------------------------------
RenderParameterDX11::RenderParameterDX11( RenderParameterDX11& copy )
{
	m_sParameterName = copy.m_sParameterName;
}
//--------------------------------------------------------------------------------
RenderParameterDX11::~RenderParameterDX11()
{
}
//--------------------------------------------------------------------------------
std::wstring& RenderParameterDX11::GetName()
{
	return( m_sParameterName );
}
//--------------------------------------------------------------------------------
void RenderParameterDX11::SetName( std::wstring& name )
{
	m_sParameterName = name;
}
//--------------------------------------------------------------------------------