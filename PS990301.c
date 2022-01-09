/* PS990301.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void conv(char a[80]);
int main(void)
{
    char a[80];
    
    gets(a);
    conv(a);
    printf("=%s",a);
    
    return 0;
}
void conv(char a[80])
{
	int i,n=0,j=1,n1;
	char hex[]="0123456789ABCDEF";
	for(i=0;a[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		n=n+(a[i]-'0')*j;
		j*=2;
	}
	n1=n;
	for(i=0;n>15;i++)
	{
		a[i]=hex[n/16];
		n/=16;
	}
	a[i]=hex[n1%16];
	a[i+1]=0;
	return;
}
