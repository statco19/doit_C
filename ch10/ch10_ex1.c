#include <stdio.h>

int main(){

	unsigned char data = 254;
	if(data & 0x01) printf("이 값은 홀수입니다.\n");
	else printf("이 값은 짝수입니다.\n");    
    return 0;

}
