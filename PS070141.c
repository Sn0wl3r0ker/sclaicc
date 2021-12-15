/* PS070141.c */
#include <stdio.h>
int main(void)
{
	int n,i,j,c=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("*");
		if(i%10==0)
		{
			printf("\n");
		}
	}
	return 0;
}
