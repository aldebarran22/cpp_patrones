#include <cmath>
#include <ctime>
#include <iostream>

class Matriz {
	
	int filas, cols;
	int **datos;
	
	public:
		Matriz(int filas = 10, int cols = 10);
		void imprimir();
		Matriz operator+(const Matriz &m);		
		~Matriz();	
};


Matriz::Matriz(int filas, int cols){
	this->filas = filas;
	this->cols = cols;
	
	this->datos = new int *[filas];
	for (int i = 0 ; i < filas ; i++){
		this->datos[i] = new int[cols];
		
		for (int j = 0 ; j < cols ; j++){
			this->datos[i][j] = rand() % 100;
		}
	}
}

void Matriz::imprimir(){
	for (int i = 0 ; i < filas ; i++){			
		for (int j = 0 ; j < cols ; j++){
			std::cout << this->datos[i][j]  << "\t";
		}
		std::cout << std::endl;
	}
}

Matriz::~Matriz(){
	///
}


int main(){
	std::srand(std::time(NULL));
	
	Matriz m1;
	m1.imprimir();
}
