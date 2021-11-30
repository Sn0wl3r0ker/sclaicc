/* PS070104.c */
#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d", &n);
	for(i=1;i<=50;i+=n)
	{
		printf("%d ",i);
	}
	return 0;
}
