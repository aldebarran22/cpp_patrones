/**
 * Project Untitled
 */


#ifndef _VENTANA_H
#define _VENTANA_H

#include <string>

#include "IVentana.h"


class Ventana: public IVentana {
public: 
    
/**
 * @param titulo
 */
Ventana(std::string titulo="titulo");
void dibujar();
~Ventana();


protected: 
    std::string titulo;
};

#endif //_VENTANA_H
