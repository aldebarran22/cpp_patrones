/**
 * Project Untitled
 */


#ifndef _VENTANADECORATOR_H
#define _VENTANADECORATOR_H

#include "IVentana.h"


class VentanaDecorator: public IVentana {
public:
	VentanaDecorator(IVentana *ventana);	
	~VentanaDecorator();
	
protected: 
    IVentana *ventana;
};

#endif //_VENTANADECORATOR_H
