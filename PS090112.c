	/* PS090112.c */
#include <stdio.h>
int main(void)
{
    int n[10],i,e;
    for(i=0;i<10;i++)
    {
    	scanf("%d", &n[i]);
        if(n[i]==0)
            break;
    }
    e=i;
    for(i=e-1;i>=0;i--)
    {
        printf("%d ", n[i]);
    }
    return 0;
}
