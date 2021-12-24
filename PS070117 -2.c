/* PS070117.c */
#include <stdio.h>
int main(void)
{
	int n,i,len=0,n1,e=1;
	scanf("%d", &n);
	n1=n;
	for(;n>10;)
	{
		e*=10;
		n/=10;
	}
	printf("%d", n*e);
	return 0;
}
