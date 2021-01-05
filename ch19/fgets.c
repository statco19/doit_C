#include <stdio.h>

int main(){
	
	char temp[64];
	FILE *p_file = fopen("tips.txt", "rt");
	if(NULL != p_file) {
		while(NULL != fgets(temp, sizeof(temp), p_file)) {
			printf("%s", temp);
		}
	} else printf("error");
    return 0;

}
