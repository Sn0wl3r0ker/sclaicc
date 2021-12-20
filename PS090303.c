/* PS090303.c */
#include <stdio.h>
int afunc(int a[]);
int main(void)
{
    int a[20],i;

    afunc(a);

    for (i=0;a[i]!=0;i++)
        printf("%d ",a[i]);
    
    return 0;
}
int afunc(int a[])
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	} 
	a[i]=0;
	return 0;
}

