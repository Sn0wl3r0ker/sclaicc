/* PS090107.c */
#include <stdio.h>
int main(void)
{
	int i,a[10],n,m;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d%d", &n,&m);
	if(a[n-1]<a[m-1])
		printf("%d", a[n-1]);
	else
		printf("%d", a[m-1]);
	return 0;
}
