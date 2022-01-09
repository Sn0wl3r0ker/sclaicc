/* PS070117.c */
#include <stdio.h>
int main(void)
{
	int i,n,a[80],n1=1,n2=0;
	scanf("%d", &n);
	for(i=0;n>10;n/=10)
	{
		n1*=10;
	}
	printf("%d",n*n1);
	return 0;
}
