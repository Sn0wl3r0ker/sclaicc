/* PS070144.c */
	#include <stdio.h>

int main(void)
{
    int i,n,j=-1;
    
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
        if (j==8)
        {
            printf("#");
            j=0;
        }    
        else
        {
            printf("*");
            j++;
        }
        if (i%10==0)
            printf("\n",i);
    }
    printf("\n");

    return 0;
}

