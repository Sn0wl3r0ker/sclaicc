/* PS090109.c  */
#include <stdio.h>
int main(void)
{
	int i,n,m,a[10]={0};
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &n,&m);
	for(i=n-1;i<=m-1;i++)
		printf("%d ", a[i]);
	return 0;
}
