/* PS080215.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("[%d]", afunc(n));
	
	return 0;
}
int afunc(int n)
{
	int i=1,n1=0;
	while(n>0)
	{
		n1=n1+n%10*i;
		n/=10;
		i*=2;
	}
	return n1;
}
