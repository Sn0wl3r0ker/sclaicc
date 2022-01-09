/* PS070128.c */
#include <stdio.h>
int main(void)
{
	int n,i,d,c;
	scanf("%d",&n);
	d=n%10;
	c=d;
	for(i=n;c>0;c--,i+=d)
	{
		printf("%d ",i);
	}
	return 0;
}
