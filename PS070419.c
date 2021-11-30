/* PS070419.c */
#include <stdio.h>
int main(void)
{
	int n,m,i,j=0;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
	{
		j++;
		if(j>m)
		{
			printf("\n");
			j=1;
		}
		printf("%2d ", i);
	}
	return 0;
}
