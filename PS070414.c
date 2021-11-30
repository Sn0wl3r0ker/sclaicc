/* PS070414.c */
#include <stdio.h>
int main(void)
{
	int n,i,m;
	scanf("%d", &n);
	m=n;
	for(i=0;i<=6;i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	for(;m>0;m--)
	{
		printf("   ");
	}
	for(i=1;i<=7-n;i++)
	{
		printf("%2d ", i);
	}
	return 0;
}
