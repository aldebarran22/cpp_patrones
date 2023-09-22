#ifndef PADRE_H
#define PADRE_H

#include <iostream>

class Padre
{
	public:
		Padre();
		void mensaje(){ std::cout << "mensaje Padre" << std::endl;}
		virtual void mensaje2(){ std::cout << "mensaje2 Padre" << std::endl;}
		~Padre();
	protected:
};

#endif
