/**
 * Project Untitled
 */


#include "Triangulo.h"

Figura * Triangulo::clone() {

}

void Triangulo::draw() {
	std::cout << "Triangulo: b: " << base << " h: " 
	     << altura << " color: " << color << std::endl;
}

Triangulo::Triangulo(int b, int h, std::string c):Figura(c) {
	this->base = b;
	this->altura = h;
}
