/* PS070112.c */
#include <stdio.h>
int main(void)
{
	int n,s=0,i;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d ", s);
		s+=i;
	}
	return 0;
}
