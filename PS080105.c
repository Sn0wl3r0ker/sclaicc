/* PS080105.c */
#include <stdio.h>

void afunc(int n);

int main(void)
{         
    int n;

    scanf("%d",&n);    
    afunc(n);
    printf("OK\n");
    
    return 0;
}

void afunc(int n)
{
    int i;
    
    for (i=1;i<=n;i++)
        printf("%d ",i);
    printf("\n");
    return;
}

