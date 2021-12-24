/* PS090103.c */
#include <stdio.h>
int main(void)
{
	int n,a[10]={0},i,m;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &n,&m);
	printf("%d %d", a[n-1],a[m-1]);
	return 0;
}
