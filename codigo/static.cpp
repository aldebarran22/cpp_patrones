#include <iostream>


void imprimir(){
	static int i = 0;
	
	i++;
	std::cout << "i = " << i << std::endl;
}


int main(){
	for (int i = 0 ; i < 3 ; i++)
		imprimir();
}
