#include <iostream>
#include <string>

template <class T> class Estrategia {
	
	virtual void Sort(T *, int)=0;
};


template <class T> class EstrategiaInsDirecta : public Estrategia<T> {
	
	void Sort(T * array, int size)
	{
		// inserción directa
		int i, j, min;
		T str;
	
		for (i = 0; i < size-1; i++)
		{
			min = i;
			for (j=i+1 ; j < size ; j++){
				if (array[j] < array[min])
					min = j;
			}
		   
			str = array[i];
			array[i] = array[min];
			array[min] = str;
		}
	}
};
		
template <class T> class EstrategiaBurbuja : public Estrategia<T> {		
	
	void Sort(T * array, int size)
	{
		// burbuja
		int i;
		int j;
		T aux_elem;
		
		for (int i = 0; i < size - 1; i++)
		{
			for (j = i+1; j < size; j++)
			{
				if (array[i] > array[j])
				{   
					aux_elem = array[i];
					array[i] = array[j];
					array[j] = aux_elem;
				}
			}
		}
	}
};

template <class T> class Contexto {

	Estrategia<T> *algoritmo;
	
	public:
		Contexto();
		Contexto(Estrategia<T> *);
		void setEstrategia(Estrategia<T> *);
		void ordenar(T *, int);
		void imprimir(T *, int);
		~Contexto();
};

// CPP del Contexto
template <class T> Contexto<T>::Contexto(){
	this->algoritmo = nullptr;
}

template <class T> Contexto<T>::Contexto(Estrategia<T> *estrategia){
	this->algoritmo = estrategia;
}

template <class T> void Contexto<T>::setEstrategia(Estrategia<T> *estrategia){
	this->algoritmo = estrategia;
}

template <class T> void Contexto<T>::ordenar(T *array, int size){
	if (this->algoritmo == nullptr){
		
		// Seleccionar un algoritmo en función del tamaño del array:
		if (size < 10){
			// Ordenar por la burbuja:
			this->algoritmo = new EstrategiaBurbuja<T>();	
			
		} else {
			this->algoritmo = new EstrategiaInsDirecta<T>();
			
		}
	} 
	
	this->algoritmo->Sort(array, size);
}

template <class T> void Contexto<T>::imprimir(T *array, int size){
	
	for (int i = 0 ; i < size ; i++){
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

template <class T> Contexto<T>::~Contexto(){
	
	if (this->algoritmo != nullptr){
		delete this->algoritmo;
		this->algoritmo = nullptr;
	}
}


int main(){
	Contexto<int> c;
	Contexto<std::string> c2;
	return 0;
}

