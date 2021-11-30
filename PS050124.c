/* PS050124.c */
#include <stdio.h>
int main(void)
{
	int n,n1,n2,n3;
	scanf("%d", &n);
	n1=n/50;
	n2=n%50/10;
	n3=n%50%10;
	printf("%d=50*%d+10*%d+1*%d", n,n1,n2,n3);
	return 0;
}
