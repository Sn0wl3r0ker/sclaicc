#include <stdio.h>
int main(void)
{ 
    int i,j=0;
    
    for (i=0;i<10;i++)
    {    
            	printf("i=%d\n",i);
        	printf("j=%d\n", j);
        if (i%3==0)

            continue;
        if (j++==3)
            break;
        printf("sum=%d\n",i);    
    }
}

