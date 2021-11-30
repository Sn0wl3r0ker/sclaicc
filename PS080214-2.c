/* PS080214.c */
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
	int i,n1=1;
	for(;n>10;)
	{
		n1=n1*10;
		n/=10;
	}
	return n1*n;
}
