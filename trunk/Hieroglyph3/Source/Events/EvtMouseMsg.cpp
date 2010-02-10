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
#include "EvtMouseMsg.h"
//--------------------------------------------------------------------------------
using namespace Glyph3;
//--------------------------------------------------------------------------------
EvtMouseMsg::EvtMouseMsg( HWND hwnd, unsigned int wparam, long lparam )
	: EvtWindowMsg( hwnd, wparam, lparam )
{
}
//--------------------------------------------------------------------------------
EvtMouseMsg::~EvtMouseMsg( )
{
}
//--------------------------------------------------------------------------------
bool EvtMouseMsg::ControlKeyDown()
{
	return( ( MK_CONTROL & m_wparam ) > 0 );
}
//--------------------------------------------------------------------------------
bool EvtMouseMsg::LButtonDown()
{
	return( ( MK_CONTROL & m_wparam ) > 0 );
}
//--------------------------------------------------------------------------------
bool EvtMouseMsg::MButtonDown()
{
	return( ( MK_CONTROL & m_wparam ) > 0 );
}
//--------------------------------------------------------------------------------
bool EvtMouseMsg::RButtonDown()
{
	return( ( MK_CONTROL & m_wparam ) > 0 );
}
//--------------------------------------------------------------------------------
bool EvtMouseMsg::ShiftKeyDown()
{
	return( ( MK_CONTROL & m_wparam ) > 0 );
}
//--------------------------------------------------------------------------------
unsigned int EvtMouseMsg::GetX()
{
	return( 0xffff & m_lparam );
}
//--------------------------------------------------------------------------------
unsigned int EvtMouseMsg::GetY()
{
	return( ( 0xffff0000 & m_lparam ) >> 16 );
}
//--------------------------------------------------------------------------------