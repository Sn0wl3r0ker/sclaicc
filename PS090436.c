/* PS090436.c */
#include <stdio.h>
void afunc(char a[80],char b[80]);
int main(void)
{
    char a[80],b[80];
    
    gets(a);
    afunc(a,b);
    printf("[%s]",b);
    
    return 0;
}
void afunc(char a[80],char b[80])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		b[j]=a[i];
		b[j+1]=' ';
		j+=2;
	}
	b[j]=0;
	return;
}

