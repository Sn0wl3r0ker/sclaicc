/* PS070123.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1=0,n2;
	scanf("%d", &n);
	n2=n;
	for(;n>0;)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	printf("%d+%d=%d", n2,n1,n2+n1);
	return 0;
}
