/* PS070130.c */
#include <stdio.h>
int main(void)
{
	int len=0,n,i,m,n1;
	scanf("%d%d", &m,&n1);
	n=n1;
	for(;n>0;)
	{
		len++;
		n/=10;
	}
	if(m>len)
		for(i=1;i<=m-len-1;i++)
			printf(" ");
	printf("$%d", n1);
}
