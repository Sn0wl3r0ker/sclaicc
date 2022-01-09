/* PS090215.c */
#include <stdio.h>
int main(void)
{
	int n,c=0,i,j,a[7][5]={0};
	for(;;)
	{
		scanf("%d%d",&i,&j);
		if(i==-1&&j==-1)
			break;
		a[i][j]=1;
		c++;
	}
	for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("[%d]",c);
}
