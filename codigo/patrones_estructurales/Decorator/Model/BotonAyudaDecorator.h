/**
 * Project Untitled
 */


#ifndef _BOTONAYUDADECORATOR_H
#define _BOTONAYUDADECORATOR_H

#include "VentanaDecorator.h"


class BotonAyudaDecorator: public VentanaDecorator {
public: 
    
BotonAyudaDecorator(IVentana *);
void dibujar();
~BotonAyudaDecorator();
};

#endif //_BOTONAYUDADECORATOR_H
