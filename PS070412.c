/* PS070412.c */
#include <stdio.h>
int main(void)
{
	int n1,n2,i;
	scanf("%d%d", &n1,&n2);
	for(i=1;i<=n2;i++)
	{
		printf("   ");
	}
	for(i=1;i<=n1;i++)
	{
		printf("%2d ", i);
	}
	return 0;
}
