/**
 * Project Untitled
 */


#include "Gestor.h"

/**
 * Gestor implementation
 */


/**
 * @param gestor
 */
Gestor::Gestor(Gestor * gestor) {
	this->sucesor = gestor;
}

Gestor::~Gestor(){

}
