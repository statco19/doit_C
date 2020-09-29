#include <stdio.h>

void main(){

   int data1 = -1;
   unsigned int data2 = 4294967295;
   printf("%d, %u, %d, %u\n", data1, data1, data2, data2);
   
   char data = -1; /* 1byte signed char data type */
   printf("%d, %u", data, data);
   }
