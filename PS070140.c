/* PS070140.c */
#include <stdio.h>
int main(void)
{
	int i,n,n1;
	scanf("%d%d", &n,&n1);
	for(i=1;i<=n;i++)
	{
		if((i+n1)%7==0)
		printf("%d ", i);
	}
	return 0;
}
