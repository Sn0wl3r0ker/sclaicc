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
    int d=0,i=1;
    while (n>0)
    {
        d=d+(n%10)*i;
        n/=10;
        i*=2;
    }
    return d;
}
