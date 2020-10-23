#include <stdio.h>
#include<string.h>

int main(){
	char data[] = "Hello";
	char result[16];
	
	strcpy(result,data);
	strcat(result, " world!");
	
	printf("%s\n", result);
    
    return 0;

}
