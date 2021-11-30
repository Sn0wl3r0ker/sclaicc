/* PS080104.c */
#include <stdio.h>
void afunc(int n);
void dash(int n);
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
    
    for (i=0;i<n;i++)
        printf("-");
    printf("\n");
    return;
}

