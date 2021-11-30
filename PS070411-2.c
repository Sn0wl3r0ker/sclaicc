/* PS070411.c */
#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n/7+n%7;i++)
	{
		for(j=0;j<=6;j++)
		{
			printf("%d ", j);
		}
	}
	return 0;
}
