
#include <stdio.h>
int main(void)
{
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			if(i==j||j==n*2-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0; 
}
