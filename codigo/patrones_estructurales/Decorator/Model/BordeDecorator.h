/**
 * Project Untitled
 */


#ifndef _BORDEDECORATOR_H
#define _BORDEDECORATOR_H

#include "VentanaDecorator.h"


class BordeDecorator: public VentanaDecorator {
public: 
    
BordeDecorator(IVentana *);
void dibujar();
~BordeDecorator();
};

#endif //_BORDEDECORATOR_H
