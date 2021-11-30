/* PS070127.c */
#include <stdio.h>
int main(void)
{
	int n,i,d;
	scanf("%d", &n);
	d = n%10;
	for(i=1;i<=n;i++)
	{
		if(i%d==0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
