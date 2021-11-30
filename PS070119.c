/* PS070119.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i;
	scanf("%d%d", &n,&n1);
	if(n<=n1)
		for(i=n;i<=n*n1;i++)
		{
			if(i%n==0&&i%n1==0)
				break;
		}
	else if(n>=n1)
	{
		for(i=n1;i<=n*n1;i++)
		{
			if(i%n==0&&i%n1==0)
				break;
		}
	}
	printf("LCM(%d,%d)=%d",n,n1,i);
	return 0;
}
