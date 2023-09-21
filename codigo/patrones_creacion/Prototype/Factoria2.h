#ifndef FACTORIA2_H
#define FACTORIA2_H

class Factoria2
{
	std::map<TipoProto, Figura *> prototipos;
	
	public:
		Factoria2();
		Figura *getPrototipo(TipoProto);
		void print();
		~Factoria2();
};

#endif
