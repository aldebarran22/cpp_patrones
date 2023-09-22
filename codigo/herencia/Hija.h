#ifndef HIJA_H
#define HIJA_H

#include <iostream>
#include "Padre.h"

class Hija : public Padre
{
	public:
		Hija();
		void mensaje(){ std::cout << "mensaje Hija" << std::endl;}
		void mensaje2(){ std::cout << "mensaje2 Hija" << std::endl;}
		~Hija();
	protected:
};

#endif
