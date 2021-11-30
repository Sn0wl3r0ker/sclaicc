/* PS080108.c */
#include <stdio.h>
int afunc(int n,int m);
int main(void)
{
    int n,m;
    
    scanf("%d%d",&n,&m);
    afunc(m,n);
            
    return 0;
}
int afunc(int n,int m)
{
	int i;
	for(i=1;i<=m;i++)
	{
		if(i%n==0)
		{
			printf("%d ", i);
		}
	}
	return;
}
