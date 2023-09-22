/**
 * Project Untitled
 */


#include "VentanaDecorator.h"

/**
 * VentanaDecorator implementation
 */
 
VentanaDecorator::VentanaDecorator(IVentana *ventana){
	this->ventana = ventana;
}


VentanaDecorator::~VentanaDecorator(){
	
}
