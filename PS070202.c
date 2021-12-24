/* PS070202.c */
#include <stdio.h>
void afunc(int n);
void star(int n);
int main(void)
{
	int n;
	scanf("%d", &n);
	afunc(n);
}
void afunc(int n)
{
	if(n==0)
		return;
	star(n);
	printf("\n");
	afunc(n-1);
}
void star(int n)
{
	if(n==0)
		return;
	printf("*");
	star(n-1);
}
