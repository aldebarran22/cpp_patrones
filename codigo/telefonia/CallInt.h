/**
 * Project Untitled
 */


#ifndef _CALLINT_H
#define _CALLINT_H

#include "Call.h"


class CallInt: public Call {
public: 
    
CallInt(Date=Date(), Hora=Hora(), long=0, double=0.0, Hora=Hora(), double=0.0);

double calcularTarifa();
private: 
    double cuota;
       ~CallInt(){
	   }
};

#endif //_CALLINT_H
