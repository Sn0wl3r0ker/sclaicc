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
	int i,j=0;
	for(i=0;a[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		b[j++]=a[i];
	}
	b[j]=0;
	return;
}
