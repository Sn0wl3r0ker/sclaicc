/* PS070204.c */
#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
