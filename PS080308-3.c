/* PS080308 */
#include <stdio.h>
int afunc(int n);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",afunc(n1));
    
    return 0;
}
int afunc(int n)
{
	if(n==1)
		return 1;
	return n*afunc(n-1);
}
