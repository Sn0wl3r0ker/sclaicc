/* ´Á¤¤¦Ò18.c */
#include <stdio.h>
int main()
{
	int n,i,n1=0,n2;
	scanf("%d", &n);
	n2=n;
	for(i=1;n>0;i++)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	printf("%d+%d=%d", n2,n1,n1+n2);
	return 0;
 } 
