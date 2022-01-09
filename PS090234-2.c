/* PS090234.c */ 
#include <stdio.h>
int main(void)
{
	int i,n,a[20][4],max;
	for(i=0;i<20;i++)
	{
		scanf("%d", &a[i][0]);
		if(a[i][0]==0)
			break;
		scanf("%d%d",&a[i][1],&a[i][2]);
		a[i][3]=a[i][1]+a[i][2];
	}
	max=a[0][3];
	for(i=1;i<20&&a[i][0]!=0;i++)
	{
		if(max<a[i][3])
			max=a[i][3];
	}
	for(i=0;i<20&&a[i][0]!=0;i++)
	{
		if(max==a[i][3])
			printf("%d\n", a[i][0]);
	}
	return 0;
}
