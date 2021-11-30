/* ´Á¤¤¦Ò18.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,n2;
	scanf("%d", &n);
	n2=n;
	for(i=1;n>0;i++)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	printf("%d+%d=%d", n2,n1,n2+n1);
	return 0;
 } 
