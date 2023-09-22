#include "VectorPlano.h"

VectorPlano::VectorPlano(int x, int y):Vector3D(x,y,0)
{}

double VectorPlano::getAbcisa() const {
	return Vector3D::getX();
}

double VectorPlano::getOrdenada() const {
	return Vector3D::getY();
}

double VectorPlano::prod(const Vector2D &v){
	
	Vector3D aux(v.getAbcisa(), v.getOrdenada(), 0);
	return Vector3D::productoEscalar(aux);
}

double VectorPlano::magnitud(){
	return Vector3D::norma();
}

VectorPlano::~VectorPlano()
{
}
