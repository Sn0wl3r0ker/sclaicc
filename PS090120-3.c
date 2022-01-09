/* PS090120.c */
#include <stdio.h>
int main(void)
{
	int i,a[20],n,e;
	for(i=0;i<20;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n);
	for(i=0;i<e;i++)
	{
		if((i+1)%n==0)
			printf("%d ", a[i]);
	}
	return 0;
}
