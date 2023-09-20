#include "Circulo.h"

Figura * Circulo::clone() {

}

void Circulo::draw() {
	std::cout << "Circulo: r: " << radio
	     << " color: " << color << std::endl;
}

Circulo::Circulo(int r, std::string c):Figura(c) {
	this->radio = r;
}

Circulo::~Circulo()
{
}
