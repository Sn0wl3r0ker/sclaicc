/* PS070422.c*/
#include <stdio.h>

int main(void)
{
    int n1=1970,n2,count=0,i;
    
    scanf("%d",&n2);
    
    for (i=n1;i<=n2;i++)
        if ((i%4==0&&i%100!=0) || (i%400==0))
            count++;
            
    printf("%d\n",((n2-n1+1)*365+count+3)%7);
        
    return 0;
}
