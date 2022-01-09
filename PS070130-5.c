/* PS070130.c */
#include <stdio.h>
int main(void)
{
	int m,n,len=0,i,n1;
	scanf("%d%d",&m,&n);
	n1=n;
	for(;n>0;n/=10,len++);
	printf("=");
	while(m>len+1)
	{
		printf(" ");
		m--;
	}
	printf("$%d",n1);
	return 0;
}
