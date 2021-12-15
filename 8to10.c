#include <stdio.h>
int main(void)
{
	int n1=0,i=1,n;
	scanf("%d", &n);
	for(;n>0;)
	{
		n1=n1+n%10*i;
		n/=10;
		i*=8;
	}
	printf("%d", n1);
}
