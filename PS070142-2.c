/* PS070142.c */
#include <stdio.h>
int main()
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
		{
			printf("\n");
		}
		else
		{
			printf("*");
		}
	}
	return 0;
}
