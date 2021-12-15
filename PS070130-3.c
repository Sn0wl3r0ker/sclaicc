/* PS070130.c */
#include <stdio.h>
int main(void)
{
	int n,i,m,e,n1;
	scanf("%d%d", &m,&n);
	n1=n;
	for(i=0;n1>0;i++)
	{
		n1/=10;
	}
	e=i;
	printf("=");
	if(m>i)
	{
	for(i=m-i;i>0;i--)
	{
		printf(" ");
	}
	printf("$%d\n", n);
	}
	else
	{
		printf("$%d\n",n);
	}
	return 0;
}
