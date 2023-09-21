#include <iostream>
#include <stdexcept>

#include "Fachada.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	try {

		Fachada fachada;
		
		fachada.HelloWorld();
		std::cout << "Sumar: 66,77 -> " << fachada.sumar(66,77) << std::endl;
		
		int numeros[] = {1,2,3,4,5};
		fachada.printArray(numeros, 5);
	
	} catch  (std::invalid_argument &e){
		std::cerr << "ERROR: " << e.what() << std::endl;
	}
	
	return 0;
}
