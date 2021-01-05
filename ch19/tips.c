#include <stdio.h>

void main(){

    FILE *p_file = fopen("tips.txt", "wt");
	if(NULL != p_file) {
		fprintf(p_file, "Hello~ tipssoft\nTest file input\n");
		fclose(p_file);
	} else printf("error!");

}
