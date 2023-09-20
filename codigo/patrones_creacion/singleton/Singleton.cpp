#include <fstream>
#include <iostream>

#include "Singleton.h"

Singleton::Singleton()
{
}

void Singleton::cargaFichero(std::string locale){
	std::string path = "diccionario_"+locale+".txt";
	
	char linea[1024];
	int pos;
	std::string datos, key, value;

	std::ifstream os(path, std::ios::in);
	if (!os){
		std::cerr << "Error al abrir el fichero" << std::endl;
		return;
	}

	while (os.getline(linea, 1024)){
		datos = linea;
		pos = datos.find('=');
			
		key = datos.substr(0, pos);
		value = datos.substr(pos+1);
		
		this->dic[key] = value;		
	}

	os.close();
}

Singleton::~Singleton()
{
}
