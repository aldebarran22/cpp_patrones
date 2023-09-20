#include <iostream>
using namespace std;

#include "idiomasingleton.h"

void test(){
	const IdiomaSingleton *singleton  = IdiomaSingleton::getInstance("en");
	
	cout << singleton->get("key_nombre") << endl;
	cout << singleton->get("key_apellido") << endl;
	
}

int main(int argc, char** argv) {
	const IdiomaSingleton *singleton  = IdiomaSingleton::getInstance("en");
	
	cout << singleton->get("key_nombre") << endl;
	cout << singleton->get("key_apellido") << endl;
	
	test();
}
