/* PS090322.c */
#include <stdio.h>
int afunc(int a[], int n);
int main(void)
{
    int a[80],i=0,n;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);
    scanf("%d",&n); 
    
    printf("[%d] ", afunc(a,n));
    
    for (i=0;a[i]!=0;i++)
        printf("%d ",a[i]);
    
    return 0;
}
int afunc(int a[], int n)
{
	int i,ans=a[n];
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==a[n])
			a[i]=a[i+1];
	}
	a[i-1]=0;
	return ans;
}
