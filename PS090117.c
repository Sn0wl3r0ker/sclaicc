/* PS090117.c */
#include <stdio.h>
int main(void)
{
	int i,n,a[20]={};
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	}
	scanf("%d",&n);
	for(i=0;i<n&&a[i]!=0;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

