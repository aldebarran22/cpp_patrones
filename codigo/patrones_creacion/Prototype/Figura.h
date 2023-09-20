
#ifndef _FIGURA_H
#define _FIGURA_H

#include <string>


class Figura {
public: 
	Figura(std::string="black");   
	virtual Figura * clone() = 0; 
	virtual void draw() = 0;
	inline void setColor(std::string color){this->color = color;}
	~Figura();
	
protected: 
    std::string color;
    int id;
};

#endif //_FIGURA_H
