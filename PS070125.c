/* PS070125.c */
#include <stdio.h>
int main(void)
{
	int n,n1=0,i;
	scanf("%d", &n);
	while(n>0)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	printf("%d*2=%d\n", n1,n1*2);
	return 0;
}
