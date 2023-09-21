/**
 * Project Untitled
 */


#ifndef _GESTORSMS_H
#define _GESTORSMS_H

#include "Gestor.h"
#include "Peticion.h"


class GestorSMS: public Gestor {
public: 
    
/**
 * @param peticion
 */
GestorSMS(Gestor *g):Gestor(g){}
void trasmitir(Peticion peticion);
~GestorSMS(){}

};

#endif //_GESTORSMS_H
