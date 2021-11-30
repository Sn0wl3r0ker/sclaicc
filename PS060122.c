/* PS060122.c */
#include <stdio.h>
int main(void)
{
	int n,n1;
	scanf("%d", &n);
	n1= n%10;
	if(n1>=5)
		printf("%d=%d", n, n/10*10+10);
	else
		printf("%d=%d",n, n/10*10);
	return 0;
 } 
