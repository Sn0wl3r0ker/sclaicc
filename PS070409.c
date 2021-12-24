/* PS070409.c */
#include <stdio.h>
int main(void)
{
	int n,m,i,c=0;
	scanf("%d%d", &n,&m);
	if(n%10!=0)
	for(i=1;i<=n%10;i++)
	{
		printf("     ");
		c++;
	}
	for(i=n;i<=n+m;i++)
	{
		c++;
		if(i%4==0&&i%100!=0||i%400==0)
			printf("%d ", i);
		else
			printf("**** ");
		if(c==10)
		{
			printf("\n");
			c=0;
		}
	}
	return 0;
}
