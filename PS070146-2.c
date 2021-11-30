/*PS070146*/
#include <stdio.h>
int main (void)
{
    int n1, n2, n3;
    scanf("%d%d", &n1, &n2);
    if(n2==0)
    {
        n3+=1;
        for(;n3<=n1;)
    {
        printf("%d ", n3);
        n3+=7;
    }
    }
    else
    {
    n3=7-n2+1;
    for(;n3<=n1;)
    {
        printf("%d ", n3);
        n3+=7;
    }
}
    return 0;
}
