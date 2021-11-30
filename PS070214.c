/* PS070214.c */
#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==1||j==(n/2+1)||j==n||i==1||i==(n/2+1)||i==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
