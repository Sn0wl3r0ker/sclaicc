/* PS070505.c */
#include <stdio.h>
int main(void)
{
	int n,p1,p2=0,i,n1;
	scanf("%d", &n);
	n1=n;
	for(i=3;i<=n;i++)
	{
		if(n%i!=0)
		{
			p1=i;
			break;
		}
	}
	for(i=3;i<=n1;i++)
	{
		if(n1%i!=0)
		{
			if(i>p2&&p1+p2==n1)
				p2=i;
		}
	}
	printf("%d=%d+%d", n,p1,p2);
	return 0;
}
