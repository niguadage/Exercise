#include <stdio.h>
int  main()
{
FILE *fp;
char a[1]={0};
fp=fopen("a.txt","a");
fputc(a[0],fp);
fclose(fp);
return 0;
	
     	
}