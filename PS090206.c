/* PS090206.c */
#include <stdio.h>
int main(void)
{
	int a[3][3]={0},i,j,sum=0;
	for(;;)
	{
		scanf("%d%d",&i,&j);
		if(i==-1&&j==-1)
			break;
		a[i][j]=1;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		sum+=a[i][i];
	}
	if(sum==3)
		printf("YES");
	else
		printf("NO");
	return 0;
}
