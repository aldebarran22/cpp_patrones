#include <iostream>
#include <string>
#include <cstring>
#include <vector>

#include "hora.h"

#define MENOR(A,B) ((A<B)?A:B)

template <class T> T menor(T a, T b){
	return (a<b ? a : b);
}

template <class T> std::vector<T> menor(std::vector<T> a, std::vector<T> b){
	// Especialización parcial.
	return (a<b ? a : b);
}

template <class T> void imprimir(std::vector<T> v){
	for (T a : v)
		std::cout << a << " ";
	std::cout << std::endl;
}

const char *menor(const char *ptr1, const char *ptr2){
	std::cout << "Compara con punteros" << std::endl;
	return (std::strcmp(ptr1, ptr2) < 0) ? ptr1 : ptr2;
}


void testMacro(){
	std::cout << "Menor int: " << MENOR(8,4) << std::endl;
	std::cout << "Menor char: " << MENOR('a','A') << std::endl;
	std::cout << "Menor float: " << MENOR(8.99,9.4) << std::endl;
	 
	int a = 9, b = 10;
	
	std::cout << "Menor int: " << MENOR(a++,b++) << std::endl; // ((a++ < b++) ? a++ : b++
	std::cout << "a: " << a << " b: " << b << std::endl;
}

void testPlantillaMenor(){
	//std::cout << "Menor: " << menor(12, 6.4) << std::endl; Error espera que los dos params sean del mismo tipo.
	std::cout << "Menor int: " << menor(8,4) << std::endl;
	std::cout << "Menor char: " << menor('a','A') << std::endl;
	
	int a = 9, b = 10;
	
	std::cout << "Menor int: " << menor(a++,b++) << std::endl; // ((a++ < b++) ? a++ : b++
	std::cout << "a: " << a << " b: " << b << std::endl;
	
	std::string n1 = "Juan";
	std::string n2 = "Cristina";
	std::cout << "Menor string: " << menor(n1,n2) << std::endl;
	
	const char *s1 = "Juan";
	const char *s2 = "Cristina";
	std::cout << "Menor const char *: " << menor(s1,s2) << std::endl;
	
	Hora h1(12,29,1);
	Hora h2(12,30,0);
	
	std::cout << "Menor Hora: " << menor(h2, h1) << std::endl;
	
	std::vector<int> v1 = {1,2,3,4,5};
	std::vector<int> v2 = {1,2,3,4,6};
	
	std::vector<int> resul = menor(v1, v2);
	imprimir(resul);
}

int main(){
	testPlantillaMenor();
	return 0;
}
