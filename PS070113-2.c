/* PS070113.c */
#include <stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	printf("ANS=%d", c);
	return 0;
}
