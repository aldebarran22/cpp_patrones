/**
 * Project Untitled
 */

#include <iostream>
#include "BordeDecorator.h"

BordeDecorator::BordeDecorator(IVentana *ventana):VentanaDecorator(ventana){}


void BordeDecorator::dibujar(){
	std::cout << " | ";
	this->ventana->dibujar();
	std::cout << " | ";
}

BordeDecorator::~BordeDecorator(){}
