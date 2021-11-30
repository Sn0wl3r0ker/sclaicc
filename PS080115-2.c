/* PS080115.c */
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
	int n1=0;
	for(;n>0;)
	{
		n1=n1*10+n%10;
		n/=10;
	}
	return n1;
}
