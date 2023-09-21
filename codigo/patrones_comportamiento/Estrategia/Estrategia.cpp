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

int main(){
	return 0;
}

