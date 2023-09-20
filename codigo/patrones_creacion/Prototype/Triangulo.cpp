/**
 * Project Untitled
 */


#include "Triangulo.h"

Figura * Triangulo::clone() {
	return new Triangulo(*this);  // Triangulo(const Triangulo &)   // triangulo *
}

void Triangulo::draw() {
	std::cout << "Triangulo: b: " << base << " h: " 
	     << altura << " color: " << color << std::endl;
}

Triangulo::Triangulo(int b, int h, std::string c):Figura(c) {
	this->base = b;
	this->altura = h;
}
