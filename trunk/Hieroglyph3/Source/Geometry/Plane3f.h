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
// Plane3f
//
// This class represents a 3D plane.  It allows testing the distance from a point
// to the plane, which is typically used in frustum testing to see if a point or
// sphere is intersecting the frustum.
//--------------------------------------------------------------------------------
#ifndef Plane3f_h
#define Plane3f_h
//--------------------------------------------------------------------------------
#include "Shape3D.h"
#include "Vector3f.h"
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class Plane3f : public Shape3D
	{
	public:
		Plane3f( );
		Plane3f( float a, float b, float c, float d );
		virtual ~Plane3f( );

		// Operations
		void Normalize();
		float DistanceToPoint(const Vector3f& pt);

		// Member Access
		float a() const;
		float& a();
		float b() const;
		float& b();
		float c() const;
		float& c();
		float d() const;
		float& d();

		virtual eSHAPE GetShapeType( );

	protected:
		union
		{
			struct 
			{
				float A;
				float B;
				float C;
				float D;
			};
            float m_fComponents[4];
		};

	};
};
//--------------------------------------------------------------------------------
#endif // Plane3f_h
