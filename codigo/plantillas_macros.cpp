#include <iostream>

#define MENOR(A,B) ((A<B)?A:B)



int main(){
	std::cout << "Menor int: " << MENOR(8,4) << std::endl;
	std::cout << "Menor char: " << MENOR('a','A') << std::endl;
	std::cout << "Menor float: " << MENOR(8.99,9.4) << std::endl;
	 
	int a = 9, b = 10;
	
	std::cout << "Menor int: " << MENOR(a++,b++) << std::endl; // ((a++ < b++) ? a++ : b++
	std::cout << "a: " << a << " b: " << b << std::endl;
	return 0;
}
