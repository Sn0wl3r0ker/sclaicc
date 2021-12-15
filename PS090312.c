/* PS090312.c */
#include <stdio.h>
void afunc(int a[],int b[]);
int main(void)
{
    int a[80],b[80],i=0;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

    afunc(a,b);
    
    for (i=0;b[i]!=0;i++)
        printf("%d ",b[i]);
    
    return 0;
}
void afunc(int a[],int b[])
{
	int i,c=0;
	for(i=0;a[i]!=0;i++)
		c++;
	c=c-1;
	for(i=0;a[i]!=0;i++)
	{
		b[c-i]=a[i];
	}
	b[i]=0;
	return;
}

