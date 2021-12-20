/* PS090123.c*/
#include <stdio.h>
int main(void)
{
	int n,i,a[10],max,e;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	e=i;
	max=a[0];
	for(i=1;i<e;i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<e;i++)
		if(max==a[i])
			printf("%d ", i);
	return 0;
}

