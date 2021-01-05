#include <stdio.h>
#include <unistd.h>
 
int main(void)
{
    char *cwd;
    char wd[BUFSIZ];
	printf("%s\n", wd);
 
    cwd = getcwd(NULL, BUFSIZ);
    printf("1.Current Directory : %s\n", cwd);
 
    chdir("/doit_C/ch19");
    //getcwd(wd, BUFSIZ);
    printf("2.Current Directory : %s\n", wd);
	
    return 0;
}