/* PS070112.c */
#include <stdio.h>
int main(void)
{
	int n,i,k=1,n1=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d ", n1);
		n1=n1+k;
		k++;
	}
	return 0;
}
