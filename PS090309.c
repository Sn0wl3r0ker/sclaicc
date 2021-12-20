/* PS090309.c */
#include <stdio.h>
int afunc(int a[]);
int main(void)
{
    int a[80],i=0;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(int a[])
{
	int i,max=a[0],e;
	for(i=1;a[i]!=0;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	e=i;
	for(i=e-1;i>=0;i--)
	{
		if(max==a[i])
			return i;
	}
}
