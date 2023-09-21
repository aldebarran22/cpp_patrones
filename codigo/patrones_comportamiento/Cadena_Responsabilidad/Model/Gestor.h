/**
 * Project Untitled
 */


#ifndef _GESTOR_H
#define _GESTOR_H

#include "Peticion.h"

class Gestor {
public: 
    
/**
 * @param gestor
 */
Gestor(Gestor * gestor);
~Gestor();
/**
 * @param peticion
 */
virtual void trasmitir(Peticion peticion) = 0;

protected: 
    Gestor * sucesor;
};

#endif //_GESTOR_H
