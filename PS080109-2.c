/* PS080109.c */
#include <stdio.h>
int afunc(int n,int m);
int main(void)
{
    int n,m;
    
    scanf("%d%d",&n,&m);
    printf("[%d]",afunc(n,m));
            
    return 0;
}
int afunc(int n,int m)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
			c+=i;
	}
	return c;
}
