/* PS080222.c */
#include <stdio.h>
int afunc(int n1,int n2,int n3);
int main(void)
{         
    int n1,n2,n3;

    scanf("%d%d%d",&n1,&n2,&n3);    
    printf("[%d]",afunc(n1,n2,n3));
    
    return 0;
}
int afunc(int n1,int n2,int n3)
{
	int n4;
	n4=n1*100+n2*10+n3;
	return n4;
}
