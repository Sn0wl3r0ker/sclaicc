/* PS070212.c */
#include <stdio.h>
int main(void)
{
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
				if(j==i&&i<=n/2+1||j+i==n+1&&i<=n/2+1||j==n/2+1&&i>n/2+1)
					printf("*");
				else
					printf(" ");
		}
		printf("\n");
	}
	return 0;
}
