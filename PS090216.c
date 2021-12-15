/* PS090216.c */
#include <stdio.h>
int main(void)
{
	int a[7][5]={0},i,j,x1,x2,y1,y2;
	scanf("%d%d", &y1,&x1);
	scanf("%d%d", &y2,&x2);
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=1;
		}
	}
	for(i=y1;i<=y2;i++)
	{
		for(j=x1;j<=x2;j++)
		{
			a[i][j]=0;
		}
	}
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
