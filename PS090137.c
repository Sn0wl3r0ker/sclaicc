/* PS090137 */
#include <stdio.h>

int main(void)
{
    int a[80]={0};
    int n,i=0,j;
    
    scanf("%d",&n);
    for (;n>0;)
    {
        a[i++]=n%1000/100*4+n%100/10*2+n%10;
        n/=1000;
    }
    
    for (j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    
    return 0;
}
