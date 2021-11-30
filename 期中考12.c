/* ´Á¤¤¦Ò12.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>=n/2+1)
				if(j==n/2+1)
					printf("*");
				else
					printf(" ");
			else if(i==j||j+i==n+1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
 } 
