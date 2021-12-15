/* PS070129.c */
#include <stdio.h>
int main(void)
{
	int i,n,len=0,m,n1;
	scanf("%d%d", &m,&n);
	n1=n;
	for(;n1>0;)
	{
		n1/=10;
		len++;
	}
	printf("=");
	if(m<=len)
		printf("%d",n);
	else
	{
		for(i=1;i<=m-len;i++)
		{
			printf("*");
		}
		printf("%d",n);
	}
	return 0;
}
