/* PS070108.c */
#include <stdio.h>
int main(void)
{
	int n,i,m;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
		if(i%m==0)
			printf("%d ", i);
	return 0;
}
