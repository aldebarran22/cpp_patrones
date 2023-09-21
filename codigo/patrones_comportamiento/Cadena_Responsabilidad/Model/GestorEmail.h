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
GestorEmail(Gestor *g):Gestor(g){}
void trasmitir(Peticion peticion);
~GestorEmail(){}
};

#endif //_GESTOREMAIL_H
