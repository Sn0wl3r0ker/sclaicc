/* PS070206.c */
#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			if(i==j||i+j==n*2)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
