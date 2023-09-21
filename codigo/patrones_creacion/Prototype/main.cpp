#include <iostream>

#include "Factoria1.h"
#include "Factoria2.h"
#include "Figura.h"
#include "Triangulo.h"
#include "Circulo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void testFactoria1(){
	Factoria1 factoria;
	
	factoria.print();
	std::cout << std::endl;
	
	Figura *t = factoria.getPrototipo(TRIANGULO);
	std::cout << "Prototipo clonado: " << std::endl;
	t->setColor("White");
	std::cout << "Base del Trian. : " << (static_cast<Triangulo *>(t))->getBase() << std::endl;
	t->draw();
	
	std::cout << std::endl;
	factoria.print();
	
	delete t;
	t=nullptr;
}

void testFactoria2(){
	Factoria2 factoria;
	
	factoria.print();
	std::cout << std::endl;
	
	Figura *t = factoria.getPrototipo(TRIANGULO);
	std::cout << "Prototipo clonado: " << std::endl;
	t->setColor("White");
	std::cout << "Base del Trian. : " << (static_cast<Triangulo *>(t))->getBase() << std::endl;
	t->draw();
	
	std::cout << std::endl;
	factoria.print();
	
	delete t;
	t=nullptr;
}

int main(int argc, char** argv) {
	
	testFactoria2();
	return 0;
}
