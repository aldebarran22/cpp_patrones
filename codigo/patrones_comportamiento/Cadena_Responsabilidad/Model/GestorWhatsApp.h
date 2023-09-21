/**
 * Project Untitled
 */


#ifndef _GESTORWHATSAPP_H
#define _GESTORWHATSAPP_H

#include "Gestor.h"


class GestorWhatsApp: public Gestor {
public: 
    
/**
 * @param peticion
 */
void void trasmitir(Peticion peticion);
};

#endif //_GESTORWHATSAPP_H