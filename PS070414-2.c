/* PS070414.c */
#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d", &n);
	for(i=0;i<7;i++)
	{
		printf("%2d ",i);
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		printf("   ");
	}
	for(i=1;i<=7-n;i++)
	{
		printf("%2d ",i);
	}
	return 0;
}
