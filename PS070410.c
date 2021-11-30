/* PS070410.c */
#include <stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	for(i=0;i<n%10;i++)
	{
		printf("     ");
	}
	for(i=n;i<=n+m;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			printf("**** ");
		}
		else
		{
			printf("%d ",i);
		}
		if(i%10==9)
			printf("\n");
	}
	return 0;
}
