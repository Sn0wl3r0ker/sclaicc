/* PS090212.c */
#include <stdio.h>
int main(void)
{
	int i,j,k,a[7][5]={0},n,n1;
	scanf("%d%d",&n,&n1);
	for(i=0;i<7;i++)
		a[i][n1]=1;
	for(j=0;j<5;j++)
		a[n][j]=1;
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
