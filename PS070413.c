/* PS070413.c */
#include <stdio.h>
int main(void)
{
	int n,m,i,c=0,f,j;
	scanf("%d%d", &n,&m);
	for(i=0;i<n+m;i++)
	{
		printf("%2d ",i%7);
	}
	printf("\n");
	while(m!=0)
	{
		printf("   ");
		m--;
		c++;
	}
	for(i=1;i<=n;i++)
	{
		printf("%2d ",i);
	}
	return 0;
}
