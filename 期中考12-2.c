/* ´Á¤¤¦Ò12.c */
#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==i&&i<=(n/2)||j+i==n+1&&i<=n/2||j==(n+1)/2&&i>(n/2))
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
