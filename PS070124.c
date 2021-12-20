/* PS070124.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1=0,n2;
	scanf("%d", &n);
	n2=n;
	for(i=0;n>0;i++)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	if(n1==n2)
		printf("YES=%d",n1);
	else
		printf("NO=%d", n2);
	return 0;
}
