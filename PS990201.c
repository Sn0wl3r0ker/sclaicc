/* PS990201.c 99¦~´Á¥½ÃD */
#include <stdio.h>
int afunc(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    printf("=%d",afunc(n));
    
    return 0;
}
int afunc(int n)
{
	if(n==0)
		return 0;
	return afunc(n/10)+1;	
}

