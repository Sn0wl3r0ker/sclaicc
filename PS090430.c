/* PS090430.c */
#include <stdio.h>
void afunc(char a[],char b[],char c[]);
int main(void)
{         
    char a[80],b[80],c[80];

    scanf("%s",a);
    scanf("%s",b);
    afunc(a,b,c);
    printf("[%s]",c);
    
    return 0;
}
void afunc(char a[],char b[],char c[])
{
	int i,carry=0,j;
	for(i=0;a[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		c[i]=(a[i]-'0'+b[i]-'0'+carry)%2+'0';
		carry=(a[i]-'0'+b[i]-'0'+carry)/2;
	}
	c[i]=0;
	return;
}
