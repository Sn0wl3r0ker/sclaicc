#include <stdio.h>
int main(void)
{
int n1 = 1, n2 = 2, n3 = 3;
    
    n1 += n2 += n3;
    
    printf("%d%d%d",n1,n2,n3);
	return 0;
}
