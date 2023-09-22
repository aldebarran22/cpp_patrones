/**
 * Project Untitled
 */


#ifndef _VENTANA_H
#define _VENTANA_H

#include "IVentana.h"


class Ventana: public IVentana {
public: 
    
/**
 * @param titulo
 */
void Ventana(string titulo);
    
void dibujar();
protected: 
    string titulo;
};

#endif //_VENTANA_H