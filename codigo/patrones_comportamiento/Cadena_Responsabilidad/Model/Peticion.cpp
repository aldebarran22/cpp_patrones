/**
 * Project Untitled
 */


#include "Peticion.h"

/**
 * Peticion implementation
 */


/**
 * @param tipo
 * @param mensaje
 */
Peticion::Peticion(TMensaje tipo, std::string mensaje) {
	this->tipo = tipo;
	this->mensaje = mensaje;
}

Peticion::~Peticion() {

}
