/* PS090212.c */
#include <stdio.h>
int main(void)
{
	int n,i,j,a[7][5]={0},k,m;
	scanf("%d%d", &n,&m);
	for(i=0;i<7;i++)
		a[i][m]=1;
	for(j=0;j<5;j++)
		a[n][j]=1;
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
