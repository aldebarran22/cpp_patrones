/**
 * Project Untitled
 */


#ifndef _SERVICIO_H
#define _SERVICIO_H

#include <iostream>


#include "Date.h"
#include "hora.h"

class Servicio {
	
friend std::ostream &operator<<(std::ostream &, const Servicio &);
	
public: 
    
Servicio(Date=Date(), Hora=Hora(), long=0, double=0.0);
double getTarifa(){ return this->tarifa;}
~Servicio(){}
virtual double calcularTarifa() = 0;
protected: 
    Date fecha;
    Hora hora;
    long numero;
    double tarifa;
};



#endif //_SERVICIO_H
