/* PS090133.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{
	int n;
	scanf("%d", &n);
	afunc(n);
//	printf("%d",afunc(n));
}
int afunc(int n)
{
	int n1=0,n2=n;
	for(;n>=8;)
	{
		n1=n1*10+n/8;
		n/=8;
	}
	printf("%d", n1*10+n2%8);
}
