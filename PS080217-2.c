/* PS080217.c */
#include <stdio.h>
int afunc(int n1,int n2);
int main(void)
{
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    printf("GCD=[%d]\n",afunc(n1,n2));
    
    return 0;
}
int afunc(int n1,int n2)
{
	int i;
	if(n1>=n2)
		i=n2;
	else
		i=n1;
	for(i;n1>0;i--)
	{
		if(n1%i==0&&n2%i==0)
			return i;
	}
}
