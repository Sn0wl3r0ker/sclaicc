/* PS080303 */
#include <stdio.h>
void afunc(int n);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    afunc(n1);
    
    return 0;
}
void afunc(int n)
{
	if(n==0)
		return;
	afunc(n-1);
	printf("%d ", n);
	return;
}
