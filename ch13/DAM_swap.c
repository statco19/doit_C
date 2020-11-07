#include <stdio.h>

void Swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
   int start = 96, end = 5;
   
   printf("before : start = %d, end = %d\n", start, end);
   if(start > end){
   		Swap(start, end);
   } 
	
	printf("after : start = %d, end = %d\n", start, end);
    return 0;

}
