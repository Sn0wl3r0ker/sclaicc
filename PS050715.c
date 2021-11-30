/* PS050715.c */
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	n%=5;
	if(n==1||n==0)
		printf("0");
	else if(n==2||n==3)
		printf("1");
	else
		printf("2");
	return 0;
}
