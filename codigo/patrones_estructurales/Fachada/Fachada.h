#ifndef FACHADA_H
#define FACHADA_H

#include <windows.h>
#include <string>

class Fachada
{
	
	HINSTANCE dll;
	std::string pathDLL;
	
	public:
		Fachada();
		void HelloWorld();
		int sumar(int, int);
		void printArray(int *, int);
		~Fachada();
	protected:
};

#endif
