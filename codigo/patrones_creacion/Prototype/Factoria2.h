#ifndef FACTORIA2_H
#define FACTORIA2_H

#include <map>
#include "tipos.h"
#include "figura.h"


class Factoria2
{
	std::map<TipoProto, Figura *> prototipos;
	
	public:
		Factoria2();
		Figura *getPrototipo(TipoProto);
		void print();
		~Factoria2();
};

#endif
