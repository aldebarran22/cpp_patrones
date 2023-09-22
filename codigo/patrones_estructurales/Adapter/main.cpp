#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "VectorPlano.h"
#include "VectorPlano2.h"

int main(int argc, char** argv) {
	VectorPlano vp(12,6);
	VectorPlano2 vp2(2,44);
	
	std::cout << vp.prod(vp2) << std::endl;
	std::cout << vp2.prod(vp) << std::endl;
		
	return 0;
}
