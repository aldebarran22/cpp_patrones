#ifndef FACTORIA1_H
#define FACTORIA1_H

#include <map>
#include "Figura.h"
#include "tipos.h"


// Esta versión crea todos los prototipos al principio y cuando piden un prototipo lo clona.
class Factoria1
{
	std::map<TipoProto, Figura *> prototipos;
	
	public:
		Factoria1();
		Figura *getPrototipo(TipoProto);
		void print();
		~Factoria1();
	protected:
};

#endif
