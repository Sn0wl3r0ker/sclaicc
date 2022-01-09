/* PS070420.c */
#include <stdio.h>
int main(void)
{
	int i,j,n,m,c=0;
	scanf("%d%d",&n,&m);
	while(m!=0)
	{
		printf("   ");
		c++;
		m--;
	}
	for(i=1;i<=n;i++)
	{
		printf("%2d ",i);
		c++;
		if(c%7==0)
		{
			printf("\n");
			c=0;
		}
	}
}
