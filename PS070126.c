/* PS070126.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1=0;
	scanf("%d", &n);
	for(i=1;n>0;i++)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	printf("%d+1=%d", n1,n1+1);
	return 0;
}
