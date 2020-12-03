#include <stdio.h>

int main(){
    
	char data[5] = {1,2,3,4,5};
	char *p = data;
	int result=0, i;
	
	for(i=0;i<5;i++){
		result += *p++;
		// p++;
	}
	printf("data 배열의 각 요소의 합은 %d입니다.", result);
    return 0;

}
