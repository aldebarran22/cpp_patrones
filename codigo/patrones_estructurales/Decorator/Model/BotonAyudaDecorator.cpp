/**
 * Project Untitled
 */
#include <iostream>

#include "BotonAyudaDecorator.h"

BotonAyudaDecorator::BotonAyudaDecorator(IVentana *ventana):VentanaDecorator(ventana){}

void BotonAyudaDecorator::dibujar(){
	this->ventana->dibujar();
	std::cout << " [Ayuda]";
}

BotonAyudaDecorator::~BotonAyudaDecorator(){}

