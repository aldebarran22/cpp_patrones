#include <iostream>
#include <string>

#define MENOR(A,B) ((A<B)?A:B)

template <class T> T menor(T a, T b){
	return (a<b ? a : b);
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
}

int main(){
	testPlantillaMenor();
	return 0;
}
