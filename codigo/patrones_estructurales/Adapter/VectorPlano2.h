#ifndef VECTORPLANO2_H
#define VECTORPLANO2_H

#include "Vector2D.h"
#include "Vector3D.h"

class VectorPlano2 : public Vector2D
{
	Vector3D v3;
	
	public:
		VectorPlano2();
		double getAbcisa() const; 
	 	double getOrdenada()const; 
	 	double prod(const Vector2D &); 
	 	double magnitud(); 
		~VectorPlano2();
	protected:
};

#endif
