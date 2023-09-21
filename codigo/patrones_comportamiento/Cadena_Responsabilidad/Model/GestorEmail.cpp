/**
 * Project Untitled
 */

#include <iostream>
#include "GestorEmail.h"

/**
 * GestorEmail implementation
 */


/**
 * @param peticion
 */
void GestorEmail::trasmitir(Peticion peticion) {
	if (peticion.getTipo()==TMensaje::EMAIL){
		std::cout << "EMAIL: " << peticion.getMensaje() << std::endl;
		
	} else {
		
		if (this->sucesor == nullptr){
			std::cout << "EMAIL es el final de la cadena, ya no propaga el mensaje" << std::endl;
			
		} else {
			std::cout << "EMAIL trasmite el mensaje al siguiente" << std::endl;
			this->sucesor->trasmitir(peticion);
		}
	}

}
