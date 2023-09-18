#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Factura.h"
#include "Servicio.h"
#include "SMS.h"
#include "Call.h"
#include "CallInt.h"

#define _SMS 0
#define CALL 1
#define CALL_INT 2

Servicio *create(int tipo, Date f=Date(), Hora h1=Hora(), long num=0, double tarifa=0.0, Hora h2=Hora(), double cuota=0.0){
	switch(tipo){
		case _SMS:
			return new SMS(f, h1, num, tarifa);
			
		case CALL:
			return new Call(f, h1, num, tarifa, h2);
			
		case CALL_INT:
			return new CallInt(f, h1, num, tarifa, h2, cuota);
			
		default:
			return nullptr;
	}
}


int main(int argc, char** argv) {
	Servicio *s = new SMS;
	Factura f;
	
	f.addServicio(create(_SMS, Date(1,1,2023), Hora(12,0,0), 0, 0.05, Hora(12,0,0)));
	f.addServicio(create(CALL, Date(1,1,2023), Hora(12,0,0), 0, 0.05, Hora(12,0,10)));
	f.addServicio(create(CALL_INT, Date(1,1,2023), Hora(12,0,0), 0, 0.05, Hora(12,0,20),10));
	
	f.imprimir();
	
	SMS sms(Date(1,1,2023), Hora(12,0,0), 0, 0.05);
	std::cout << std::endl << sms << std::endl;
	std::cout << "Tarifa: " << sms.getTarifa() << std::endl;
	
	std::cout << std::endl;
	const Date fecha1(1,1,2022);
	Date fecha2(1,1,2022);
	
	std::cout << fecha1.toString() << std::endl;
	std::cout << fecha2.toString() << std::endl;
	
	
	
	return 0;
}
