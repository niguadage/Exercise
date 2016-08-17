#include <stdio.h>
#include <string.h>
int main()
{
FILE *f;
int s[5]={1,2,3,4,5};
int i;
f=fopen("myFile.txt","w");
for(i=0;i<5;i++)
fprintf(f,"%c",s);
fclose(f);
printf("%d",s[1]);
return 0;
}