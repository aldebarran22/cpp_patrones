/**
 * Project Untitled
 */


#ifndef _GESTORSMS_H
#define _GESTORSMS_H

#include "Gestor.h"


class GestorSMS: public Gestor {
public: 
    
/**
 * @param peticion
 */
void void trasmitir(Peticion peticion);
};

#endif //_GESTORSMS_H