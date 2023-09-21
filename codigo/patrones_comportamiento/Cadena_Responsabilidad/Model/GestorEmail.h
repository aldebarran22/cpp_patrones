/**
 * Project Untitled
 */


#ifndef _GESTOREMAIL_H
#define _GESTOREMAIL_H

#include "Gestor.h"
#include "Peticion.h"


class GestorEmail: public Gestor {
public: 
    
/**
 * @param peticion
 */
void trasmitir(Peticion peticion);
};

#endif //_GESTOREMAIL_H
