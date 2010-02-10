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
// GeometryShaderDX11
//
//--------------------------------------------------------------------------------
#include "ShaderDX11.h"
//--------------------------------------------------------------------------------
#ifndef GeometryShaderDX11_h
#define GeometryShaderDX11_h
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class GeometryShaderDX11 : public ShaderDX11
	{
	public:
		GeometryShaderDX11( ID3D11GeometryShader* pShader );
		virtual ~GeometryShaderDX11();

		virtual ShaderType GetType();

	protected:
		ID3D11GeometryShader*			m_pGeometryShader;

		friend RendererDX11;
	};
};
//--------------------------------------------------------------------------------
#endif // GeometryShaderDX11_h
//--------------------------------------------------------------------------------

