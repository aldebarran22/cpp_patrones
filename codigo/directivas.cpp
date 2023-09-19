#include <iostream>

#define N 10

#ifndef PRODUCCION
	#define PATH "/home/datos"
#else
	#define PATH "/home/etc"
#endif
	

void test1(){
	std::cout << "N : " << N << std::endl;
	#undef N
	
	#ifndef N
		#warning No existe N	
	#else
		#error Se ha definido N
	#endif
	
	//std::cout << "N : " << N << std::endl;
}

void test2(){
	std::cout << "Path: " << PATH << std::endl;
}

int main(){
	
	test2();
	return 0;
}
