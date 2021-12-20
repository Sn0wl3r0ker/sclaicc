/* PS090318.c */
#include <stdio.h>
int afunc(int a[80]);
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
int afunc(int a[80])
{
	int i,e,tmp,b[80];;
	for(i=0;a[i]!=0;i++)
	{
		b[i]=a[i];
	}
	e=i-1;
	for(i=e;i>=0;i--)
	{
		a[i]=b[e-i];
	}
}

