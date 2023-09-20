#ifndef FACTORIA1_H
#define FACTORIA1_H

#include <map>
#include "Figura.h"

typedef enum { TRIANGULO, CIRCULO} TipoProto;

// Esta versión crea todos los prototipos al principio y cuando piden un prototipo lo clona.
class Factoria1
{
	std::map<TipoProto, Figura *> prototipos;
	
	public:
		Factoria1();
		Figura *getPrototipo(TipoProto);
		~Factoria1();
	protected:
};

#endif
