/* PS070411.c */
#include <stdio.h>
int main(void)
{
	int n,i,j=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(j>6)
		{
			j=0;
		}
		printf("%d ", j);
		j++;
	}
	return 0;
}
