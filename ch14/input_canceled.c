#include <stdio.h>

int main(){
    
	char input_string[10];
	
	if(NULL != fgets(input_string,10,stdin)){
		printf("input : %s\n", input_string);
	}else{
		printf("input -> Canceled\n");
	}
    return 0;

}
