/* PS090308.c */
#include <stdio.h>
int afunc(int a[80]);
int main(void)
{
    int a[80],i=0;

    scanf("%d",&a[i]);
    while (a[i]!=0)
        scanf("%d",&a[++i]);

    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(int a[80])
{
	int max,e,i;
	for(i=0;a[i]!=0;i++)
	;
	e=i;
	max=a[0];
	for(i=1;i<e;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	for(i=0;i<e;i++)
		if(a[i]==max)
			break;
	return i;
}
