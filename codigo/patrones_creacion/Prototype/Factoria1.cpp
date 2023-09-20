#include <iostream>
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

void Factoria1::print(){
	std::cout << "factoria1: " << std::endl;
	for (auto it=this->prototipos.begin() ; it != this->prototipos.end() ; it++){
		it->second->draw();
	}  
}

Factoria1::~Factoria1()
{
	for (auto it = this->prototipos.begin(); it != this->prototipos.end() ; it++){
		delete it->second;
		it->second=nullptr;
	}
}
