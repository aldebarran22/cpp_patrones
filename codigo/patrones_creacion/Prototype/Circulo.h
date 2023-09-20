/**
 * Project Untitled
 */


#ifndef _CIRCULO_H
#define _CIRCULO_H

#include "Figura.h"
#include <string>
#include <iostream>


class Circulo: public Figura {
public:    
	Figura * clone();
	void draw();
	inline void setRadio(int radio){ this->radio=radio;}
	Circulo(int r, std::string c="black");
	~Circulo();
private: 
    int radio;
};

#endif //_CIRCULO_H
