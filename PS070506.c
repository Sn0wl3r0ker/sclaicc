/* PS070506.c */
#include <stdio.h>
int main(void)
{
	int n,i,prime,p1,p2,p3;
	scanf("%d", &n);
	if(n%2==0)
		printf("EVEN");
	else
	{
		for(p1=2;p1<n;p1++)
		{
			prime=1;
			for(i=2;i<p1;i++)
			{
				if(p1%i==0)
				{
					prime=0;
					break;
				}
			}
			if(!prime)
				continue;
		for(p2=p1;p2<n-p1;p2++)
		{
			prime=1;
			for(i=2;i<p2;i++)
			{
				if(p2%i==0)
				{
					prime=0;
					break;
			}
		}
		if(!prime)
			continue;
		p3=n-p1-p2;
		prime=1;
		for(i=2;i<p3;i++)
		{
			if(p3%i==0)
			{
				prime=0;
				break;
			}
		}
		if(!prime)
			continue;
			
		printf("%d=%d+%d+%d\n",n,p1,p2,p3);
		break;
		}
		if(prime)
			break;
		}
	}
	return 0;
}
