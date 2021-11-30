/* PS070420.c*/
#include <stdio.h>
int main()
{
	int n,m,i,n1=0;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;)
	{
		if(m>0)
		{
			printf("   ");
			m--;
			n1++;
		}
		else
		{
			printf("%2d ", i++);
			n1++;
		}
		if(n1%7==0)
		{
			printf("\n");
			n1=0;
		}
	}
	return 0;
}
