#include <stdio.h>

void main(){
    
   int m;
   for(m = 5; m<=7; m++) {
   		if(m == 6) continue;
		printf("m(%d)\n", m);
   }
}