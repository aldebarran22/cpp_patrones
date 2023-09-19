#include <vector>
#include <iostream>


void testVector(){
	std::vector<int> v;
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
	
	
	
	
	
	// Aritmética de punteros:
	int array[] = {2,3,4,5};
	std::cout << "El i = 2 " << *(array + 2) << std::endl;	
}

int main(){
	testVector();
	
	return 0;
}
