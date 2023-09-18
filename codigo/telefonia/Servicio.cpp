/**
 * Project Untitled
 */


#include "Servicio.h"

/**
 * Servicio implementation
 */


Servicio::Servicio(Date fecha, Hora hora, long numero, double tarifa):fecha(fecha), hora(hora),numero(numero), tarifa(tarifa){
	// this->fecha = fecha;
}


std::ostream &operator<<(std::ostream &os, const Servicio &s){
	return os << s.fecha << " " << s.tarifa << std::endl;
}

