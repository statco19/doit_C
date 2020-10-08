#include <stdio.h>

void main(){
    
    int sum = 0, num = 1;
	for(;;) {
		printf("num(%d) + sum(%d) = ", num,	sum);
		sum += num;
		
		printf("%d\n", sum);
		num++;
		if(num>5) break;
	}
	
	printf("\nResult : num = %d, sum = %d", num, sum);
}