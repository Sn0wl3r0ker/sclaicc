/* PS070142.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,j;
	scanf("%d%d", &n,&n1);
	for(i=1;i<=n;i++)
	{
		printf("*");
		if(i%n1==0)
			printf("\n");
	}
	return 0;
}
