
#include <stdio.h>
int main(void)
{
	int i,n,j;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=n*2;j++)
		{
			if(j==i||j==n*2-i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0; 
}
