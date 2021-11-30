/* PS070503.c */
#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if((i+1)*(i+1)-n>i*i-n)
		{
			j=i;
		}
		else
		{
			j=i+1;
		}
	}
	printf("=%d", j*j);
	return 0;
}
