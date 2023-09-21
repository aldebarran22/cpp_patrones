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
void trasmitir(Peticion peticion);
};

#endif //_GESTORSMS_H
