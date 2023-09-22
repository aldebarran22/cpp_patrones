/*
 * Juego.h
 *
 *  Created on: 08/07/2009
 *      Author: Administrador
 */

#ifndef JUEGO_H_
#define JUEGO_H_

#include "Laberinto.h"
#include "Puerta.h"
#include "Pared.h"
#include "Habitacion.h"
#include "FabricaLaberintos.h"

class Juego {

public:
	Juego();
	Laberinto *crearLaberinto(FabricaLaberintos &);
	virtual ~Juego();
};

#endif /* JUEGO_H_ */
