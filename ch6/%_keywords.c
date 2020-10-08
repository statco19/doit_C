#include <stdio.h>

void main(){

    int data = 7;
	printf("[%d] [%5d] \n", data, data);
	
	printf("[%5d] [%05d] [%-5d]\n", data, data, data);
	
	double data1 = 3.141592;
	
	printf("[%f] [%.4f] [%8.4f] [%-8.4f]", data1, data1, data1, data1);

}
