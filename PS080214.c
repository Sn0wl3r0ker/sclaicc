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
	int i=1;
	for(;n>10;)
	{
		i=i*10;
		n/=10;
	}
	return i;
}
