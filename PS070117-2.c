/* PS070117.c */
#include <stdio.h>
int main(void)
{
	int n,i,c=1,n1;
	scanf("%d", &n);
	for(i=1;n>10;i++)
	{
		n1=n1*10+n%10;
		n/=10;
		c=c*10;
	}
	printf("%d", n*c);
	return 0;
}
