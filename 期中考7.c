/* ´Á¤¤¦Ò7.c */
#include <stdio.h>
int main(void)
{
	int n1,n,i,n2=1;
	scanf("%d", &n);
	n1=n;
	for(i=0;n>10;i++)
	{
		n/=10;
		n2*=10;
	}
	printf("%d", n1%n2);
	return 0;
 } 
