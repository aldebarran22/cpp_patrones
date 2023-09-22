#include "VectorPlano2.h"

VectorPlano2::VectorPlano2(int x, int y):v3(Vector3D(x,y,0))
{}

double VectorPlano2::VectorPlano2::getAbcisa() const {
	return this->v3.getX();
}

double VectorPlano2::getOrdenada()const {
	return this->v3.getY();
}

double VectorPlano2::prod(const Vector2D &v){
	Vector3D aux(v.getAbcisa(), v.getOrdenada(), 0);
	return this->v3.productoEscalar(aux);
}

double VectorPlano2::magnitud() {
		return this->v3.norma();
}

VectorPlano2::~VectorPlano2()
{
}
