/* PS080222.c */
#include <stdio.h>
int afunc(int n,int n1,int n2);
int main(void)
{         
    int n1,n2,n3;

    scanf("%d%d%d",&n1,&n2,&n3);    
    printf("[%d]",afunc(n1,n2,n3));
    
    return 0;
}
int afunc(int n,int n1,int n2)
{
	return n*100+n1*10+n2;
}
