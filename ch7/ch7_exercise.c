#include <stdio.h>

void main(){
    
    int data = 5, result = 0, tmp=0;
	
	tmp = result-- || (data=0);
	printf("result : %d, data : %d, tmp: %d\n", result, data, tmp);

}
