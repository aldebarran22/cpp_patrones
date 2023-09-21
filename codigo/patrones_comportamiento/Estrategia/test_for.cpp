#include <iostream>


void print(int *arr){
	for (int i : arr){
		std::cout << i << std::endl;
	}	
}

int main(){
	int num[] = {1,2,3,4,5};
	
	print(num);
}
