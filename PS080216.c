/* PS080216.c*/
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
	int n1=0,i=0;
	while(n>0)
	{
		n/=2;
		n1++;
	}
	return n1;
}
