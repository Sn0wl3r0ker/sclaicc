/* PS070143.c */
#include <stdio.h>
int main(void)
{
	int n,i,j=10;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(j==10)
		{
			printf("#");
			j=0;
		}
		else
		{
			printf("*");
			j++;
		}
		if(i%10==0)
			printf("\n");
	}
	return 0;
}
