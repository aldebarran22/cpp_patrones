/**
 * Project Untitled
 */


#ifndef _SMS_H
#define _SMS_H

#include "Servicio.h"


class SMS: public Servicio {
public: 

SMS(Date=Date(), Hora=Hora(), long=0, double=0.0);
    
double calcularTarifa();
~SMS(){
}
};

#endif //_SMS_H
