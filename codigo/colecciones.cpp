#include <vector>
#include <algorithm>
#include <iostream>
#include <stdexcept>


bool borrarElemento(std::vector<int> &v, int n){
	
	auto it = std::find(v.begin(), v.end(), n);
	if (it == v.end()){
		throw std::invalid_argument("No existe el elemento");
		
	} else {
		v.erase(it);
		return true;
	}
}

void testVector2(){
	std::vector<int> v = {1,2,3,4,3,4,2,3};
	
	try {
		
		if (borrarElemento(v, 3)){
			std::cout << "Elemento eliminado" << std::endl;
			for (auto i : v){
				std::cout << i << " ";
			}
			std::cout << std::endl;
		}
			
		
	} catch (std::invalid_argument &e){
		std::cerr << e.what() << std::endl;
	}
	
}

void testVector(){
	std::vector<int> v = {1,2,3,4};
	std::vector<int>::iterator it;
	std::vector<int>::reverse_iterator itr;
	
	for (int i = 0 ; i < 10 ; i++){
		//std::cout << "Size: " << v.size() << " Capacity: " << v.capacity() << std::endl;
		
		v.push_back(i);
	}
	
	// Recorrer un vector:
	for (int i = 0 ; i < v.size(); i++ ){
		//v[i] *= 2;
		v.at(i) *= 2;
		std::cout << v[i] << " ";
	}
	std::cout << std::endl;
	
	// for :
	for (int & item : v){
		item *= 2;
		std::cout << item << " ";
	}
	std::cout << std::endl;	
	
	// Iterador:
	for (it = v.begin() ; it != v.end() ; it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;	
	
	// Iterador: saltando los 3 primeros
	for (it = v.begin()+3 ; it != v.end() ; it++){
		std::cout << *it << " ";
	}
	std::cout << std::endl;	
	
	// Con auto, C++ infiere el tipo de la var. a partir de lo que asignamos:
	for (auto it2 = v.begin() ; it2 != v.end() ; it2++){
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;	
	
	// Iterador invertido:
	for (itr = v.rbegin() ; itr != v.rend() ; itr++ ) {
		std::cout << *itr << " ";
	}
	std::cout << std::endl;	
	
	// Verificaci�n de rango:
	std::vector<int> v2 = {1,5,2,0,5,3,4,5};
	
	try {
		std::cout << "pos. 10 de v2: " << v2[10]  << std::endl;
		std::cout << "pos. 10 de v2: " << v2.at(10) << std::endl;
		
	} catch (std::out_of_range &e){
		std::cerr << e.what() << std::endl;
	}
	
	//  Localizar un n�mero:
	auto ptr = std::find(v2.begin(), v2.end(), 6);
	if (ptr != v2.end()){
		std::cout << "Existe: " << *ptr << std::endl;
		std::cout << "pos: " << ptr-v2.begin() << std::endl;
		
	} else {
		std::cout << "No existe " << std::endl;
	}
	
	// Contar repeticiones:
	int n = std::count(v2.begin()+2, v2.end()-2, 5);
	std::cout << "El 5 se repite: " << n << std::endl;
	
	// Una funci�n que borre un elemento del vector: 1� ocurrencia!
	
	
	// Aritm�tica de punteros:
	int array[] = {2,3,4,5};
	std::cout << "El i = 2 " << *(array + 2) << std::endl;	
	
	int *ini = array; // ini = &array[0]
	int *fin = array+2;
	
	std::cout << fin-ini << std::endl;
	
}

int main(){
	testVector2();
	
	return 0;
}
