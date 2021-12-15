/*PS090133.c */
#include <stdio.h>
int main(void)
{
	int a[100];
	int n,i,e;
	scanf("%d", &n);
	for(i=0;n>0;i++)
	{
		a[i]=n%8;
		n/=8;
	}
	e=i;
	for(i=e-1;i>=0;i--)
	{
		printf("%d", a[i]);
	}
	return 0;
}
