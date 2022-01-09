/* PS090416.c */
#include <stdio.h>
void afunc(char a[80]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    afunc(a);    
    printf("[%s]",a);
    
    return 0;
}
void afunc(char a[80])
{
	int i;
	for(i=0;a[i]!=0;i++)
		if(a[i]>='0'&&a[i]<='9')
			a[i]='*';
	return;
}
