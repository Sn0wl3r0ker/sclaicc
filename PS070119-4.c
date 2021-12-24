/* PS070119.c */
#include <stdio.h>
int main(void)
{
	int i,n,m;
	scanf("%d%d", &n,&m);
	i= n>m?n:m;
	for(;i<=n*m;i++)
	{
		if(i%n==0&&i%m==0)
			break;
	}
	printf("LCM(%d,%d)=%d", n,m,i);
	return 0;
}
