/* PS070409.c */
#include <stdio.h>
int main(void)
{
	int i,n,m,c=0;
	scanf("%d%d",&n,&m);
	for(i=n%10;i>0;i--)
	{
		printf("     ");
		c++;
	}
	for(i=n;i<=n+m;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			printf("%d ",i);
			c++;
		}
		else
		{
			printf("**** ");
			c++;
		}
		if(c==10)
		{
			printf("\n");
			c=0;
		}
	}
	return 0;
}
