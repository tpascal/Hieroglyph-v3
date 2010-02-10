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
#include "VertexElementDX11.h"
#include "Log.h"
//--------------------------------------------------------------------------------
using namespace Glyph3;
//--------------------------------------------------------------------------------
VertexElementDX11::VertexElementDX11( int float_tuple, int elementCount )
{
	m_iTuple = float_tuple;
	m_iCount = elementCount;
	m_pfData = new float[ m_iTuple * m_iCount ];
}
//--------------------------------------------------------------------------------
VertexElementDX11::~VertexElementDX11()
{
	delete[] m_pfData;
}
//--------------------------------------------------------------------------------
int	VertexElementDX11::SizeInBytes()
{
	return( m_iTuple * sizeof(float) );
}
//--------------------------------------------------------------------------------
int	VertexElementDX11::Tuple()
{
	return( m_iTuple );
}
//--------------------------------------------------------------------------------
int VertexElementDX11::Count()
{
	return( m_iCount );
}
//--------------------------------------------------------------------------------
float* VertexElementDX11::Get1f( int i )
{
	return( &m_pfData[ i ] );
}
//--------------------------------------------------------------------------------
Vector2f* VertexElementDX11::Get2f( int i )
{
	return( (Vector2f*)&m_pfData[ 2*i ] );
}
//--------------------------------------------------------------------------------
Vector3f* VertexElementDX11::Get3f( int i )
{
	return( (Vector3f*)&m_pfData[ 3*i ] );
}
//--------------------------------------------------------------------------------
Vector4f* VertexElementDX11::Get4f( int i )
{
	return( (Vector4f*)&m_pfData[ 4*i ] );
}
//--------------------------------------------------------------------------------
float* VertexElementDX11::operator[]( int i )
{
	return( &m_pfData[ m_iTuple * i ] );
}
//--------------------------------------------------------------------------------
const float* VertexElementDX11::operator[]( int i ) const
{
	return( &m_pfData[ m_iTuple * i ] );
}
//--------------------------------------------------------------------------------
void* VertexElementDX11::GetPtr( int i )
{
	return( &m_pfData[ m_iTuple * i ] );
}
//--------------------------------------------------------------------------------