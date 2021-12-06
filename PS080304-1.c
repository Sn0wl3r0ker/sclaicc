#include <stdio.h>
int afunc(int n1);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    afunc(n1);
    
    return 0;
}
int afunc(int n1)
{
	if(n1==0)
	return n1;
	afunc(n1-1);
	printf("%d",n1);
	printf("\n");
}
