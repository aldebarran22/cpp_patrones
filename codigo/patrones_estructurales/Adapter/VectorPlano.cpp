#include "VectorPlano.h"

VectorPlano::VectorPlano(int x, int y):Vector3D(x,y,0)
{
	
}

double VectorPlano::getAbcisa() const {
	return Vector3D::getX();
}

double VectorPlano::getOrdenada() const {
	return 0;
}

double VectorPlano::prod(const Vector2D &v){
	return 0;
}

double VectorPlano::magnitud(){
	return 0;
}

VectorPlano::~VectorPlano()
{
}
