/* PS090482.c */
#include <stdio.h>
char second(char a[]);
int main(void)
{
    char a[80],c='A';
    int i=0;
    
    while (c>'0')
    {
        scanf("%c",&c);
        a[i++] = c;
    }
    printf("SECOND=%c",second(a));
    
    return 0;
}
char second(char a[])
{
	int i,max=a[0],max1;
	for(i=1;a[i]!=0;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	max1=a[0];
	for(i=0;a[i]!=0;i++)
	{
		if(max1<a[i]&&a[i]!=max)
			max1=a[i];
	}
	for(i=0;a[i]!=0;i++)
	{
		if(max1==a[i])
			return a[i];
	}
}
