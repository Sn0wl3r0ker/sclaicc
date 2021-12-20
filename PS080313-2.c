/* PS080313.c */
#include <stdio.h>
int afunc(int n);
int star(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    afunc(n);
    
    return 0;
}
int afunc(int n)
{
	if(n==0)
		return 0;
	star(n);
	printf("\n");
	afunc(n-1);
	return;
}
int star(int n)
{
	if(n==0)
		return 0;
	star(n-1);
	printf("*");
	return;
}
