/* PS090234.c */
#include <stdio.h>
int main(void)
{
	int a[20][4],i,j,max,e;
	for(i=0;i<20;i++)
	{
		scanf("%d", &a[i][0]);
		if(a[i][0]==0)
			break;
		scanf("%d%d", &a[i][1],&a[i][2]);
		a[i][3]=a[i][1]+a[i][2];
	}
	e=i;
	max=a[0][3];
	for(i=1;i<e;i++)
		if(max<a[i][3])
			max=a[i][3];
	for(i=1;i<e;i++)
		if(max==a[i][3])
			printf("%d\n", a[i][0]);
	return 0;
}
