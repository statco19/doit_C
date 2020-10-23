#include <stdio.h>

int GetStringLength(char data[]){
	int count = 0;
	while(data[count] != 0) count++;
	
	return count;
}

int main(){
	int data_length = 0;
	// char data[10] = {'h','a','p','p','y',0,};
	char data[10] = "happy";
	data_length = GetStringLength(data);
	
    printf("data_length = %d\n", data_length);
    return data_length;

}
