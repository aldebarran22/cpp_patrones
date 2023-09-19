#ifndef MATRIZ_H
#define MATRIZ_H

#include <vector>
#include <string>

class Matriz
{
	std::vector<std::vector<int>> matriz;
	int f;
	int c;
	
	void split(const std::string &, char, std::vector<int> &);
	
	public:
		Matriz(int=5, int=5);
		Matriz(std::string);
		void imprimir();
		~Matriz();
	protected:
};

#endif
