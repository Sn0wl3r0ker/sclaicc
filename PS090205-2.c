/* PS090205.c */
#include <stdio.h>
int main(void)
{
	int n,a[3][3]={0},i,j,e,k,sum,line=0;
	for(;;)
	{
		scanf("%d%d", &j,&i);
		if(i==-1&&j==-1)
			break;
		a[j][i]=1;
	}
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d", a[j][i]);
		}
		printf("\n");
	}
	sum=0;
	for(j=0;j<3;j++)
	{
		sum+=a[j][2-j];
		if(sum==3)
		{
			line=1;
			break;
		}
	}
	if(line)
		printf("YES");
	else
		printf("NO");
	return 0;
}
