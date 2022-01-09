/* PS070401.c */
#include <stdio.h>
int main(void)
{
	int i,c=0,n,m;
	scanf("%d%d", &n,&m);
	for(i=n;i<=m;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			c++;
	}
	printf("%d",c);
	return 0;
}
