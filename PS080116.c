/* PS080116.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{
	int n;
	
	scanf("%d", &n);
	printf("[%d]", afunc(n));
	
	return 0;
}
int afunc(int n)
{
	if(n==0)
		return;
	return afunc(n/10)+1;
}
