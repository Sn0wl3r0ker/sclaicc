/* PS090318.c */
#include <stdio.h>
int afunc(int a[]);
int main(void)
{
    int a[80],i=0;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

    afunc(a);
    
    for (i=0;a[i]!=0;i++)
        printf("%d ",a[i]);
    
    return 0;
}
int afunc(int a[])
{
	int i,e,b[80]={0},j=0;
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	e=i;
	for(i=e-1;i>=0;i--)
	{
		a[j++]=b[i];
	}
	a[j]=0;
}
