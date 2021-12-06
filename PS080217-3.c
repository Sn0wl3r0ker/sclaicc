/* PS080217.c */
#include <stdio.h>
int afunc(int n,int n1);
int main(void)
{
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    printf("GCD=[%d]\n",afunc(n1,n2));
    
    return 0;
}
int afunc(int n,int n1)
{
	int i;
	if(n1>=n)
		i==n1;
	else
		i==n;
	for(;i>=1;i--)
	{
		if(n1%i==0&&n%i==0)
			break;
	}
	return i;
}
