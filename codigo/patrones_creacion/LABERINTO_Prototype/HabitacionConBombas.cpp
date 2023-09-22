/*
 * HabitacionConBombas.cpp
 *
 *  Created on: 09/07/2009
 *      Author: Administrador
 */

#include "HabitacionConBombas.h"

HabitacionConBombas::HabitacionConBombas(const HabitacionConBombas &otra) : Habitacion(otra){}

HabitacionConBombas::HabitacionConBombas(int numHabitacion) : Habitacion(numHabitacion){}

LugarDeMapa *HabitacionConBombas::obtenerLado(Direccion d) const {
	return Habitacion::obtenerLado(d);
}

void HabitacionConBombas::establecerLado(Direccion d, LugarDeMapa *lugar){
	Habitacion::establecerLado(d, lugar);
}

void HabitacionConBombas::entrar(){
	cout << "Entramos en la habitaci�n CON BOMBAS " << this->numeroHabitacion << endl;
}

HabitacionConBombas *HabitacionConBombas::clonar(){
	return new HabitacionConBombas(*this);
}

HabitacionConBombas::~HabitacionConBombas(){}
