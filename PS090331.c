/* PS090331.c */
#include <stdio.h>
void afunc(int a[80],int n);
int main(void)
{
    int a[80],i,n;

    scanf("%d",&n);

    afunc(a,n);
    
    for (i=0;a[i]>=0;i++)
        printf("%d ",a[i]);
    
    return 0;
}
void afunc(int a[80],int n)
{
	int i,n1=n;
	for(i=0;n>0;i++,n/=10);
	a[i]=-1;
	for(i=i-1;i>=0;i--,n1/=10)
	{
		a[i]=n1%10;
	}
	return;
}
