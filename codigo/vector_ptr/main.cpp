#include <iostream>

#include "Vector.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Vector v;
	Vector v2;
	Vector v3(v);
	
	v2 = v;
	
	v.imprimir();
	const int *p = v.getPtr();
	//p[0] = 1000;
	
	// Quita el efecto del const:
	int *p2 = const_cast<int *>(p);
	
	p2[0] = 1000;
	v.imprimir();
	return 0;
}
