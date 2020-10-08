#include <stdio.h>

void main(){
    
   int sum = 0, num = 1;
   
   do {
   		printf("num(%d) + sum(%d) = ", num, sum);
		sum += num;
		
		printf("%d\n", sum);
		num++;
   } while(num<=5);
   
   printf("\nResult : num = %d, sum = %d", num ,sum);

}