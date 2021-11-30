/* PS070208.c */
#include <stdio.h>
int main(void)
{
	int n1,i,j;
	scanf("%d", &n1);
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n1;j++)
		{
			if(j==1||j==n1||j==i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
