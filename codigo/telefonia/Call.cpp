/**
 * Project Untitled
 */


#include "Call.h"

/**
 * Call implementation
 */
Call::Call(Date fecha, Hora hora, long numero, double tarifa, Hora horaFin):Servicio(fecha, hora, numero, tarifa),horaFin(horaFin){
}

/**
 * @return double
 */
double Call::calcularTarifa() {
	long sg2 = this->horaFin.segundos();
	long sg1 = this->hora.segundos();
	
	return (sg2 - sg1) * this->tarifa;   
}
