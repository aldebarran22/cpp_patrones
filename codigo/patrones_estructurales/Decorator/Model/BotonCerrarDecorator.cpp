/**
 * Project Untitled
 */

#include <iostream>

#include "BotonCerrarDecorator.h"


BotonCerrarDecorator::BotonCerrarDecorator(IVentana *ventana):VentanaDecorator(ventana){}


void BotonCerrarDecorator::dibujar(){
	this->ventana->dibujar();
	std::cout << " [X]";
}

BotonCerrarDecorator::~BotonCerrarDecorator(){}
