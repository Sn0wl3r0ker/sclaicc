/* PS090425.c */
#include <stdio.h>
void afunc(char a[80],char b[80],char c[80]);
int main(void)
{
    char a[80],b[80],c[80];
    
    gets(a);
    gets(b);
    afunc(a,b,c);
    printf("[%s]",c);
    
    return 0;
}
void afunc(char a[80],char b[80],char c[80])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		c[j]=a[i];
		c[j+1]=b[i];
		j+=2;
	}
	c[j]=0;
	return;
}
