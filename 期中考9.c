/* ´Á¤¤¦Ò9.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1=0;
	scanf("%d", &n);
	for(i=0;n>0;i++)
	{
		n1+=n%10;
		n/=10;
	}
	printf("%d", n1);
	return 0;
	
 } 
