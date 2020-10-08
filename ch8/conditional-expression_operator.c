#include <stdio.h>

void main(){
    
    int point = 0, value = 10000;
	if (value >= 10000) point = value * 0.1;
	else point = value * 0.05;
	
	printf("point = %d\n", point);    
	
	point = 0, value = 5000;
	point = (value >= 10000) ? value * 0.1: value * 0.05;
	
	printf("point = %d", point);

}
