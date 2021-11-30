/* ´Á¤¤¦Ò19.c */
#include <stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
	{
		if((i-(8-m))%7==0)
			printf("%d ", i);
	}
	return 0;
 } 
