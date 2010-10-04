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
// ResourceProxyDX11
//
//--------------------------------------------------------------------------------
#include "BufferConfigDX11.h"
#include "Texture1dConfigDX11.h"
#include "Texture2dConfigDX11.h"
#include "Texture3dConfigDX11.h"
#include "DepthStencilViewConfigDX11.h"
#include "ShaderResourceViewConfigDX11.h"
#include "UnorderedAccessViewConfigDX11.h"
#include "RenderTargetViewConfigDX11.h"
#include "RendererDX11.h"
//--------------------------------------------------------------------------------
#ifndef ResourceProxyDX11_h
#define ResourceProxyDX11_h
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class ResourceProxyDX11
	{
	public:
		ResourceProxyDX11();
		ResourceProxyDX11( int ResourceID, BufferConfigDX11* pConfig, RendererDX11* pRenderer, 
                            ShaderResourceViewConfigDX11* pSRVConfig = NULL,
                            RenderTargetViewConfigDX11* pRTVConfig = NULL,
                            UnorderedAccessViewConfigDX11* pUAVConfig = NULL );
		ResourceProxyDX11( int ResourceID, Texture1dConfigDX11* pConfig, RendererDX11* pRenderer, 
                            ShaderResourceViewConfigDX11* pSRVConfig = NULL,
                            RenderTargetViewConfigDX11* pRTVConfig = NULL,
                            UnorderedAccessViewConfigDX11* pUAVConfig = NULL );
		ResourceProxyDX11( int ResourceID, Texture2dConfigDX11* pConfig, RendererDX11* pRenderer, 
                            ShaderResourceViewConfigDX11* pSRVConfig = NULL,
                            RenderTargetViewConfigDX11* pRTVConfig = NULL,
                            UnorderedAccessViewConfigDX11* pUAVConfig = NULL,
                            DepthStencilViewConfigDX11* pDSVConfig = NULL );
		ResourceProxyDX11( int ResourceID, Texture3dConfigDX11* pConfig, RendererDX11* pRenderer, 
                            ShaderResourceViewConfigDX11* pSRVConfig = NULL,
                            RenderTargetViewConfigDX11* pRTVConfig = NULL,
                            UnorderedAccessViewConfigDX11* pUAVConfig = NULL );

		virtual ~ResourceProxyDX11();

	public:

		int						m_iResource;
		int						m_iResourceSRV;
		int						m_iResourceRTV;
		int						m_iResourceDSV;
		int						m_iResourceUAV;

		BufferConfigDX11*		        m_pBufferConfig;
		Texture1dConfigDX11*	        m_pTexture1dConfig;
		Texture2dConfigDX11*	        m_pTexture2dConfig;
		Texture3dConfigDX11*	        m_pTexture3dConfig;
        DepthStencilViewConfigDX11*     m_pDSVConfig;
        ShaderResourceViewConfigDX11*   m_pSRVConfig;
        RenderTargetViewConfigDX11*     m_pRTVConfig;
        UnorderedAccessViewConfigDX11*  m_pUAVConfig;

		friend RendererDX11;

    protected: 
        
        void CommonConstructor( UINT BindFlags, int ResourceID, RendererDX11* pRenderer, 
                                ShaderResourceViewConfigDX11* pSRVConfig,
                                RenderTargetViewConfigDX11* pRTVConfig,
                                UnorderedAccessViewConfigDX11* pUAVConfig,
                                DepthStencilViewConfigDX11* pDSVConfig = NULL );
	};

	typedef boost::shared_ptr<ResourceProxyDX11> ResourcePtr;
};
//--------------------------------------------------------------------------------
#endif // ResourceProxyDX11_h
//--------------------------------------------------------------------------------

