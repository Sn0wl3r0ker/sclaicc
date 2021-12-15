/* PS080207.c*/
#include <stdio.h>
int afunc(int n1,int n2,int n3);
int main(void)
{
    int n1,n2,n3;
    
    scanf("%d%d%d",&n1,&n2,&n3);
    printf("MAX=%d\n",afunc(n1,n2,n3));
    
    return 0;
}
int afunc(int n1,int n2,int n3)
{
	if(n1>=n2&&n1>=n3)
		return n1;
	else if(n2>=n1&&n2>=n3)
		return n2;
	else 
		return n3;
}
