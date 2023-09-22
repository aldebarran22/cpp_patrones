/**
 * Project Untitled
 */

#include <iostream>
#include "Ventana.h"

/**
 * Ventana implementation
 */


/**
 * @param titulo
 */
Ventana::Ventana(std::string titulo) {
	this->titulo = titulo;
}

/**
 * @return void
 */
void Ventana::dibujar() {
    std::cout << this->titulo;
}

Ventana::~Ventana(){}
