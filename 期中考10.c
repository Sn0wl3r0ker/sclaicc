/* ������10.c */
#include <stdio.h>
int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j+i<=n+1)
				printf("*");
		}
		printf("\n");
	}
	return 0;
 } 
