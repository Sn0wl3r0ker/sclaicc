/* ´Á¤¤¦Ò19.c */
#include <stdio.h> 
int main()
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	for(i=8-m;i<=n;i+=7)
	{
		printf("%d ", i);
	}
	return 0;
}
