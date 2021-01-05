#include <stdio.h>

void main(){
	FILE *p_file = fopen("tipssoft.txt", "wt");
	char s[] = "412 100 123\n408 127 121";
	if(NULL != p_file) {
		fprintf(p_file, "%s\n", s);
		fclose(p_file);
	} else printf("failed to open!");
}
