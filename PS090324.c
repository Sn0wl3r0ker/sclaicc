/* PS090324.c */
#include <stdio.h>
int afunc(int a[80],int m, int n);
int main(void)
{
    int a[80],i=0,n,m;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);
    scanf("%d%d",&m,&n); 
    
    afunc(a,m,n);
    
    for (i=0;a[i]!=0;i++)
        printf("%d ",a[i]);
    
    return 0;
}
int afunc(int a[80],int m, int n)
{
	int i;
	for(i=0;a[i]!=0;i++)
		;
	i=i-1;
	a[i+2]=0;
	for(;i>=m;i--)
	{
		a[i+1]=a[i];
	}
	a[m]=n;
}
