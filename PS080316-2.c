/* PS080316.c */
#include <stdio.h>
void afunc(int n);
void star(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    afunc(n);
    
    return 0;
}
void afunc(int n)
{
	if(n==0)
		return;
	star(n);
	printf("\n");
	afunc(n-1);
	
	return;
}
void star(int n)
{
	if(n==0)
		return;
	printf("%d", n);
	star(n-1);
	
	return;
}
