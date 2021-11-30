/* ´Á¤¤¦Ò20.c */
#include <stdio.h>
int main(void)
{
	int n=1,n1=n;
	while(n!=0)
	{
		scanf("%d", &n);
		if(n>n1)
		{
			n1=n;
		}
	}
	printf("MAX=%d", n1);
	return 0;
 } 
