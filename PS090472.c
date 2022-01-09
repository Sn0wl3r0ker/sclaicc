/* PS090472.c */
#include <stdio.h>
void afunc(char a[]);
int main(void)
{
    char a[80];
    
    gets(a);
    afunc(a);
    printf("[%s]",a);
    
    return 0;
}
void afunc(char a[])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			a[j++]=a[i];
	}
	a[j]=0;
	return;
}
