/* PS080103.c */
#include <stdio.h>
void afunc(int n);
int main(void)
{         
    int n;

    scanf("%d",&n);    
    afunc(n);
    printf("OK\n");
    
    return 0;
}
void afunc(int n)
{
	if(n==0)
	{
		printf("\n");
		return;
	}
	printf("*");
	afunc(n-1);
	return;
}
