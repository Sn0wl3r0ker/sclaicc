/* PS090201.c */
#include <stdio.h>
int main(void)
{
	int n,i,e,j,k=0,a[3][3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &i,&j);
	if(a[i][j]==1)
		a[i][j]=0;
	else
		a[i][j]=1;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
