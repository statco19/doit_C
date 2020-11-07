#include <stdio.h>

void Swap(int *pa, int *pb)
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main(){ 
	int start = 96, end =5;
	
	printf("before : start = %d, end = %d\n", start, end);
	if(start > end){
		Swap(&start, &end);
	}
	
	printf("After : start = %d, end = %d\n", start, end);
    return 0;
}
