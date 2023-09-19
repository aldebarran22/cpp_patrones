#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>

class Matriz
{
	std::vector<std::vector<int>> matriz;
	int f;
	int c;
	
	public:
		Matriz(int=5, int=5);
		void imprimir();
		~Matriz();
	protected:
};

#endif
