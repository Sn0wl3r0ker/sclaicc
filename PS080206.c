/*PS080206.c*/
#include <stdio.h>
int afunc(int n1,int n2);
int main(void)
{
    int n1,n2,n3;
    
    scanf("%d%d",&n1,&n2);
    printf("MIN=%d\n",afunc(n1,n2));
    
    return 0;
}
int afunc(int n1,int n2)
{
	if(n1<=n2)
		return n1;
	else
		return n2;
}
