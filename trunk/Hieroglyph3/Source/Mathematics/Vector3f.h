//--------------------------------------------------------------------------------
// This file is a portion of the Hieroglyph 3 Rendering Engine.  It is distributed
// under the MIT License, available in the root of this distribution and 
// at the following URL:
//
// http://www.opensource.org/licenses/mit-license.php
//
// Copyright (c) 2003-2010 Jason Zink 
//--------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
// Vector3f
//----------------------------------------------------------------------------------------------------
#ifndef Vector3f_h
#define Vector3f_h
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
namespace Glyph3
{
	class Vector3f
	{
	public:
		Vector3f( );
		Vector3f( float x, float y, float z );
		Vector3f( const Vector3f& Vector );

		// vector operations
		void Clamp( );
		Vector3f Cross( Vector3f& A );
		float Dot( Vector3f& A );
		void MakeZero( );
		float Magnitude( );
		void Normalize( );

		// assignment
		Vector3f& operator= (const Vector3f& Vector);

		// member access
		float operator[] (int iPos) const;
		float& operator[] (int iPos);

		// comparison
		bool operator== ( const Vector3f& Vector ) const;
		bool operator!= ( const Vector3f& Vector ) const;

		// arithmetic operations
		Vector3f operator+ ( const Vector3f& Vector ) const;
		Vector3f operator- ( const Vector3f& Vector ) const;
		Vector3f operator* ( float fScalar ) const;
		Vector3f operator/ ( float fScalar ) const;
		Vector3f operator- ( ) const;

		// arithmetic updates
		Vector3f& operator+= ( const Vector3f& Vector );
		Vector3f& operator-= ( const Vector3f& Vector );
		Vector3f& operator*= ( float fScalar );
		Vector3f& operator/= ( float fScalar );

	public:
		float x;
		float y;
		float z;
	};
};
//----------------------------------------------------------------------------------------------------
#endif // Vector3f_h
