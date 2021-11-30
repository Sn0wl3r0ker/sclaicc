/* PS080213.c */
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
	int n1,n2=0;
	n1=n;
	while(n>0)
	{
		n2=n2*10+n%10;
		n/=10;
	}
	return n2+n;
}
