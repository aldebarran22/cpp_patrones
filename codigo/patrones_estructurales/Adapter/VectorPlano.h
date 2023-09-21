#ifndef VECTORPLANO_H
#define VECTORPLANO_H

#include "Vector3D.h"
#include "Vector2D.h"


// Solución por herencia múltiple
class VectorPlano : public Vector2D, private Vector3D
{
	public:
		VectorPlano(int=0, int=0);
		double getAbcisa() const; 
	 	double getOrdenada()const; 
	 	double prod(const Vector2D &); 
	 	double magnitud(); 
		~VectorPlano();
	protected:
};

#endif
