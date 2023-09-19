#include <iostream>

using namespace std;

namespace ns1 {
	int i = 0;
	
	int imprimir(){
		cout << "Dentro de ns1" << endl;
	}
	
	namespace ns2 {
		int j = 100;
		
		int imprimir(){
			cout << "Dentro de ns2" << endl;
		}
	};
};

namespace funcionesV2 {
	
	void imprimir(){
		cout << "Dentro de funcionesV2" << endl;
	}	
}

namespace f = funcionesV2;



int main(){
	cout << "mensaje de prueba" << endl;
	ns1::ns2::imprimir();
	cout << "i: " << ns1::i << endl;
	
	using namespace ns1;
	cout << "i: " << i << endl;
	
	ns2::imprimir();
	
	//using namespace ns2;
	imprimir();
	
	f::imprimir();
	
	return 0;
}

