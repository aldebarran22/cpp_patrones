#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include "Padre.h"
#include "Hija.h"

int main(int argc, char** argv) {
	Hija h;	
	h.mensaje();
	h.mensaje2();
	std::cout << std::endl;
	
	Padre p;	
	p.mensaje();
	p.mensaje2();
	std::cout << std::endl;
	
	Padre t = Hija();
	t.mensaje();
	t.mensaje2();
	std::cout << std::endl;
	
	Padre *t2 = new Hija();
	t2->mensaje();
	t2->mensaje2();
	delete t2;
	std::cout << std::endl;
		
	
	return 0;
}
