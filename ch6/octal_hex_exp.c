#include <stdio.h>

void main(){

   int data1 = 10;
   int data2 = 010;
   int data3 = 0x10;
   
   printf("%x, %d, %o\n", data1,data2, data3);
   
   float data = 12.34f;
   printf("%f, %e, %E", data, data, data);

}
