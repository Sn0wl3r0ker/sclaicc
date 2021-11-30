#include <stdio.h>

void afunc(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    afunc(n);
    
    return 0;
}

void afunc(int n)
{
    if (n==0)
        return;
        
    printf("%d\n",n);    
    afunc(n-1);
    return;
}
