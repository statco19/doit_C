#include <stdio.h>

int main(){
    
	char input_string[10];
	fgets(input_string,10,stdin);
	printf("input : %s\n", input_string);
	
    return 0;

}
