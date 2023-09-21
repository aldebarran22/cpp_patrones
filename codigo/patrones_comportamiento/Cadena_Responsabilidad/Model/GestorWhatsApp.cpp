/**
 * Project Untitled
 */

#include <iostream>
#include "GestorWhatsApp.h"

/**
 * GestorWhatsApp implementation
 */


/**
 * @param peticion
 */
void GestorWhatsApp::trasmitir(Peticion peticion) {
	if (peticion.getTipo()==TMensaje::WHATSAPP){
		std::cout << "WHATSAPP: " << peticion.getMensaje() << std::endl;
		
	} else {
		
		if (this->sucesor == nullptr){
			std::cout << "WHATSAPP es el final de la cadena, ya no propaga el mensaje" << std::endl;
			
		} else {
			std::cout << "WHATSAPP trasmite el mensaje al siguiente" << std::endl;
			this->sucesor->trasmitir(peticion);
		}
	}

}
