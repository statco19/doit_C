#include <stdio.h>

void main(){
    
   int i, n;
   
   /* 
   // for loop
   
   for(i=2; i<=9; i++) {
   		for(n=1; n<=9; n++) {
   			printf("%d * %d = %d;\n", i, n, i*n);
   		}
		printf("\n");
   }
	*/
	
	// while loop
	
	i = 2;
	while(i<=9) {
		n = 1;
		while(n<=9) {
			printf("%d * %d = %d\n", i, n, i*n);
			n++;
		}
		printf("\n");
		i++;
	}
}