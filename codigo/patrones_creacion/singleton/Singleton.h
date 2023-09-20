#ifndef SINGLETON_H
#define SINGLETON_H

#include <map>
#include <string>

class Singleton
{
	
	std::map<std::string, std::string> dic;
	

	public:
		Singleton();
		void cargaFichero(std::string);		
		~Singleton();
	protected:
};

#endif
