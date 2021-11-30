/* PS050513.c */
#include <stdio.h>

int main(void)
{
    int n1,n2;
    
    scanf("%d",&n1);

    n2 = 15 - n1 - (7 - n1)/7*7; 
    
    printf("%d=%d\n",n1,n2);
        
    return 0;
}

