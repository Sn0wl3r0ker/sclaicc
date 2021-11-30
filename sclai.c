#include <stdio.h>
int main(void)
{
	int n,n1,sum=0,i;
	scanf("%d", &n);
	n1=n;
	for(;n>0;)
	{
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==n1)
		printf("YES=%d", n1);
	else
		printf("NO=%d", n1);
    return 0;
 } 
