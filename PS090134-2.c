#include <stdio.h>

int main(void)
{
    int a[80]={0};
    int n,i=0,j,k=0;
    
    scanf("%d",&n);
    for (;n>0;i++)
    {
        a[i]=n%2;
        n/=2;
    }
    
    for (j=i-1;j>=0;j--)
    {
        if (a[j]==1)
            k++;
    }
    printf("%d\n",k);
    
    return 0;
}
