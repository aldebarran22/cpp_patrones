#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
	int *ptr;
	int n;
	
	public:
		Vector(int = 10);
		Vector(const Vector &);
		void copia(const Vector &);
		Vector &operator=(const Vector &);
		const int * getPtr() { return this->ptr; }
		void imprimir();
		~Vector();
	protected:
};

#endif
