/* PS090133.c°Ñ¦Ò½d¨Ò*/ 
#include <stdio.h>

int main(void)
{
    int a[80]={0};
    int n,i=0,j;
    
    scanf("%d",&n);
    for (;n>0;i++)
    {
        a[i]=n%8;
        n/=8;
    }
    
    for (j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    
    return 0;
}
