/* PS090142.c */
#include <stdio.h>
int main(void)
{
	int n,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},day=0,i;
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		day+=a[i];
	}
	printf("%d=%d",n,day);
	return 0;
}
