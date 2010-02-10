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
// GeometryStageDX11
//
//--------------------------------------------------------------------------------
#include "ShaderStageDX11.h"
//--------------------------------------------------------------------------------
#ifndef GeometryStageDX11_h
#define GeometryStageDX11_h
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class GeometryStageDX11 : public ShaderStageDX11
	{
	public:
		GeometryStageDX11();
		virtual ~GeometryStageDX11();

	protected:
		virtual ShaderType GetType();

		virtual void BindConstantBuffers( ID3D11DeviceContext* pContext, int count );
		virtual void BindSamplerStates( ID3D11DeviceContext* pContext, int count );
		virtual void BindShaderResourceViews( ID3D11DeviceContext* pContext, int count );
		virtual void BindUnorderedAccessViews( ID3D11DeviceContext* pContext, int count );
		
		friend RendererDX11;
	};
};
//--------------------------------------------------------------------------------
#endif // GeometryStageDX11_h
//--------------------------------------------------------------------------------

