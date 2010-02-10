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
// MaterialDX11
//
//--------------------------------------------------------------------------------
#include "RendererDX11.h"
#include "IRenderView.h"
#include "RenderEffectDX11.h"
//--------------------------------------------------------------------------------
#ifndef MaterialDX11_h
#define MaterialDX11_h
//--------------------------------------------------------------------------------
namespace Glyph3
{
	struct MaterialParams
	{
		bool							bRender;
		RenderEffectDX11				Effect;
		TArray<RenderParameterDX11*>	vParameters;
		TArray<IRenderView*>			vViews;
	};


	class MaterialDX11
	{
	public:
		MaterialDX11();
		virtual ~MaterialDX11();

		void PreRender( RendererDX11& Renderer, VIEWTYPE type );
		void SetRenderParams( RendererDX11& Renderer, VIEWTYPE type );
		void SetEntity( Entity3D* pEntity );

	public:
		MaterialParams			Params[VT_NUM_VIEW_TYPES];
		Entity3D*				m_pEntity;
	};
};
//--------------------------------------------------------------------------------
#endif // MaterialDX11_h
//--------------------------------------------------------------------------------

