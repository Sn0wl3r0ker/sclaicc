/* PS080203.c  */
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
	return abs(n);
}
