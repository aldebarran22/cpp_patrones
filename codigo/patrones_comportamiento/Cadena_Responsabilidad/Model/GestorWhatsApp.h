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
GestorWhatsApp(Gestor *g):Gestor(g){}
void trasmitir(Peticion peticion);
~GestorWhatsApp(){}
};

#endif //_GESTORWHATSAPP_H
