/* PS080107.c */
#include <stdio.h>
void afunc(int n,int m);
int main(void)
{
    int n,m;
    
    scanf("%d%d",&n,&m);
    afunc(m,n);
            
    return 0;
}
void afunc(int n,int m)
{
	int i;
	for(i=1;i<=m;i+=n)
	{
		printf("%d ", i);
	}
	return;
}
