/**
 * Project Untitled
 */


#include "SMS.h"

/**
 * SMS implementation
 */
 
SMS::SMS(Date fecha, Hora hora, long numero, double tarifa):Servicio(fecha, hora, numero, tarifa){}


/**
 * @return double
 */
double SMS::calcularTarifa() {
    return this->tarifa;
}
