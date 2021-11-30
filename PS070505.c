/* PS070505.c */
#include <stdio.h>
int main(void)
{
	int n,i=0,p1,p2,prime;
	scanf("%d", &n);
	
	if(n%2!=0)
		printf("ODD");
	else
	{
		for(p1=2;p1<=n;p1++)
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
			if(prime==0)
				continue;
			else
			{
				p2=n-p1;
				prime=1;
				for(i=2;i<p2;i++)
				{
					if(p2%i==0)
					{
						prime=0;
						break;
					}
				}
				if(prime==1)
				{
					printf("%d=%d+%d",n,p1,p2);
					break;
				}
			}
		}
	}
}
