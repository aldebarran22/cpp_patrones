/**
 * Project Untitled
 */


#ifndef _BOTONCERRARDECORATOR_H
#define _BOTONCERRARDECORATOR_H

#include "VentanaDecorator.h"


class BotonCerrarDecorator: public VentanaDecorator {
public: 
    
BotonCerrarDecorator(IVentana *);
void dibujar();
~BotonCerrarDecorator();
};

#endif //_BOTONCERRARDECORATOR_H
