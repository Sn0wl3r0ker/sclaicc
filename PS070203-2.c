/* PS070203.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			if(j==i)
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
