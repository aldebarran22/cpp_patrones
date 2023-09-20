#include "Factoria1.h"

#include "Triangulo.h"
#include "Circulo.h"

Factoria1::Factoria1()
{
	this->prototipos[TRIANGULO] = new Triangulo(5, 10, "red");
	this->prototipos[CIRCULO] = new Circulo(5, "blue");
}

Figura *Factoria1::getPrototipo(TipoProto tipo){
	return this->prototipos.at(tipo)->clone();
}

Factoria1::~Factoria1()
{
}
