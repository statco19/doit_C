#include <stdio.h>
#include <string.h>

int main(){
    char str1[10];
	char str2[4];
	
	fgets(str1, 10, stdin);
	fgets(str2, 4, stdin);
	
	int length = strlen(str1);
	if(length>0) str1[length - 1] = 0;
	
	strcat(str1,str2);
	printf("result : %s\n", str1);
    return 0;

}
