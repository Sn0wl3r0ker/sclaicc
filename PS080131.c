/* PS080131.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    printf("[%d]",afunc(n));
	
    return 0;
} 
int afunc(int n)
{
	if(n==0)
		return 8;
	else
		return 15-n; 
}
