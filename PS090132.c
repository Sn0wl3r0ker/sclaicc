/* PS090132.c */
#include <stdio.h>
int main(void)
{
	int i,n,n1;
	char c[16]="0123456789ABCDEF",a[40]={};
	scanf("%d", &n);
	n1=n;
	for(i=0;n>15;i++,n/=16)
	{
		a[i]=c[n/16];
	}
	a[i]=c[n1%16];
	a[i+1]=0;
	puts(a);
	return 0;
}
