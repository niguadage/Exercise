#include <stdio.h>
#include <string.h>
int main()
{
FILE *f;
char* s="Hey,Buddy!";
int i;
f=fopen("myFile.txt","a");
for(i=0;i<strlen(s);i++)
fputc(s[i],f);
fclose(f);
return 0;
}