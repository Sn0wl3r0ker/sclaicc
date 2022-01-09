/* PS070142.c*/
#include <stdio.h>
int main(void)
{
	int i,c=0,n,m;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
	{
		printf("*");
		c++;
		if(c==m)
		{
			printf("\n");
			c=0;
		}
	}
}
