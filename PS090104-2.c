/* PS090104.c */
#include <stdio.h>
int main(void)
{
	int s[10],i,n,m;
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
	}
	scanf("%d%d", &n,&m);
	printf("%d %d", s[i-n],s[i-m]);
	return 0;
}
