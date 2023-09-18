/**
 * Project Untitled
 */


#ifndef _FACTURA_H
#define _FACTURA_H

#include <string>
#include <vector>

#include "Servicio.h"

class Factura {
public: 
    
/**
 * @param Servicio *
 */
void addServicio(Servicio *);
void imprimir();
~Factura();


private: 	
    std::string cliente;
    std::vector<Servicio *> servicios;
};

#endif //_FACTURA_H
