/**
 * Project Untitled
 */


#ifndef _GESTORWHATSAPP_H
#define _GESTORWHATSAPP_H

#include "Gestor.h"
#include "Peticion.h"


class GestorWhatsApp: public Gestor {
public: 
    
/**
 * @param peticion
 */
void trasmitir(Peticion peticion);
};

#endif //_GESTORWHATSAPP_H
