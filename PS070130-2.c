/* PS070130.c */
#include <stdio.h>
int main(void)
{
	int n,m,i,n1,c=0;
	scanf("%d%d", &m,&n);
	n1=n;
	for(i=1;n>0;i++)
	{
		if(i<m)
		{
			printf(" ");
		}
		n/=10;
	}
	printf("$%d", n1);
	return 0;
}
