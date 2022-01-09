/* PS070412.c */
#include <stdio.h>
int main(void)
{
	int i,n,m;
	scanf("%d%d", &n,&m);
	for(i=1;i<=m;i++)
	{
		printf("   ");
	}
	for(i=1;i<=n;i++)
	{
		printf("%2d ", i);
	}
	return 0;
}
