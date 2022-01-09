/* PS070125.c */
#include <stdio.h>
int main(void)
{
	int i,n,n1=0;
	scanf("%d", &n);
	for(;n>0;n/=10)
	{
		n1=n1*10+n%10;
	}
	printf("%d*2=%d",n1,n1*2);
	return 0;
}
