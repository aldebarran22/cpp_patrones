/**
 * Project Untitled
 */


#include "CallInt.h"

/**
 * CallInt implementation
 */
CallInt::CallInt(Date fecha, Hora hora, long numero, double tarifa, Hora horaFin, double cuota):Call(fecha,hora,numero,tarifa,horaFin){
	this->cuota = cuota;
}

/**
 * @return double
 */
double CallInt::calcularTarifa() {
    return Call::calcularTarifa() + this->cuota;
}
