/* PS090302.c */
#include <stdio.h>
int afunc(int a[]);
int main(void)
{
    int a[81],i=0;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

    printf("[%d]\n",afunc(a));
    
    return 0;
}
int afunc(int a[])
{
	int i,c=0;
	for(i=0;a[i]!=0;i++)
	{
		c++;
	}
	return c;
}

