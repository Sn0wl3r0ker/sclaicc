/* PS090147.c */
#include <stdio.h>
int main(void)
{
    int n1,i,day=0;
    int month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    scanf("%d",&n1);
    
    for (i=0;i<n1;i++)
        day+=month[i]; 
//    day += 1;
    
    printf("%d",(day)%7);
        
    return 0;
}
