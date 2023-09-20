/**
 * Project Untitled
 */


#ifndef _TRIANGULO_H
#define _TRIANGULO_H

#include "Figura.h"
#include <iostream>


class Triangulo: public Figura {
public: 
    
	Figura * clone(); 
	void draw();
	
	int getBase(){ return this->base; }
	int getAltura(){ return this->altura; }
	
	Triangulo(int b, int h, std::string c="black");
	~Triangulo();
	
private: 
    int base;
    int altura;
};

#endif //_TRIANGULO_H
