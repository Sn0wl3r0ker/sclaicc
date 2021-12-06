/* PS080202.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{         
    int n;

    scanf("%d",&n);    
    n=afunc(n);
    printf("%d\n",n);
    
    return 0;
}
int afunc(int n)
{
	return n+1;
}
