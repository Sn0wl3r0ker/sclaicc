/* PS070127.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1;
	scanf("%d", &n);
	n1=n%10;
	for(i=1;i<=n;i++)
	{
		if(i%n1==0)
			printf("%d ", i);
	}
	return 0;
}
