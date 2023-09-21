/**
 * Project Untitled
 */

#include <iostream>
#include "GestorSMS.h"

/**
 * GestorSMS implementation
 */


/**
 * @param peticion
 */
void GestorSMS::trasmitir(Peticion peticion) {
	
	if (peticion.getTipo()==TMensaje::SMS){
		std::cout << "SMS: " << peticion.getMensaje() << std::endl;
		
	} else {
		
		if (this->sucesor == nullptr){
			std::cout << "SMS es el final de la cadena, ya no propaga el mensaje" << std::endl;
			
		} else {
			std::cout << "SMS trasmite el mensaje al siguiente" << std::endl;
			this->sucesor->trasmitir(peticion);
		}
	}
}
