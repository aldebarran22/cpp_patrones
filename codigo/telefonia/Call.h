/**
 * Project Untitled
 */


#ifndef _CALL_H
#define _CALL_H

#include "Servicio.h"


class Call: public Servicio {
public: 
    
Call(Date=Date(), Hora=Hora(), long=0, double=0.0, Hora=Hora());

double calcularTarifa();
 ~Call(){}
protected: 
    Hora horaFin;
   
};

#endif //_CALL_H
