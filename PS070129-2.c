/* PS070129.c */
#include <stdio.h>
int main(void)
{
	int n,i,m,n1,len=0;
	scanf("%d%d", &m,&n);
	n1=n;
	for(i=0;n1>0;i++)
	{
		n1/=10;
		len++;
	}
	printf("=");
	if(m<=i)
		printf("%d", n);
	else
	{
		for(i=1;i<=m-len;i++)
		{
			printf("*");
		}
		printf("%d", n);
	}
	return 0;
}
