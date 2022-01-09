/* PS080305.c */
#include <stdio.h>
void afunc(int n1);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    afunc(n1);
    
    return 0;
}
void afunc(int n1)
{
	if(n1==0)
		return;
	printf("%d ",n1);
	afunc(n1-1);
}
