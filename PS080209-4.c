/* PS080209.c */
#include <stdio.h>
int afunc(int n1,int n2);
int main(void)
{
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    printf("[%d]\n",afunc(n1,n2));
    
    return 0;
}
int afunc(int n1,int n2)
{
	if(n1<n2)
		return -1;
	else if(n1==n2)
		return 0;
	else
		return 1;
}
