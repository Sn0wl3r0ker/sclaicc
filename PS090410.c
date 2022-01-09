/* PS090410.c */
#include <stdio.h>
int afunc(char a[]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(char a[])
{
	int i;
	for(i=1;a[i]!=0;i++)
		if(a[i-1]>a[i])
			return 0;
	return 1;
}

