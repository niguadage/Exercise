#include <stdio.h>
#include <string.h>
int main()
{
FILE *f;
int s[5]={2};
int j,i;
//memset(s, 0, sizeof(int)*5);

f=fopen("myFile.txt","w");
for(j=0;j<5;j++)
{
for(i=0;i<5;i++){
	s[i]=i+j;
fprintf(f,"%d",*(s+i));
}
fprintf(f,"\n");


}

fclose(f);

printf("%d",s[0]);
return 0;
}