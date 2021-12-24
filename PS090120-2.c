/* PS090120.c */
#include <stdio.h>
int main(void)
{
	int a[20],i,n,e;
	for(i=0;i<20;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n);
	for(i=n-1;i<e;i+=n)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
