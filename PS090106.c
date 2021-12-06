/*PS090106.c*/
#include <stdio.h>

int main(void)
{
    int a[10],i,n1,n2;

    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&n1,&n2);
    printf("%d*%d=%d",a[n1-1],a[n2-1],a[n1-1]*a[n2-1]);
    
    return 0;
}
