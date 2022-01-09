/* PS090147.c */
#include <stdio.h>
int main(void)
{
	int i,n,day=0,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		day+=a[i-1];
	}
	printf("%d", day%7);
	return 0;
}
