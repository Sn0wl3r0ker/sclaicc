/* PS090403.c */
#include <stdio.h>
int afunc(char a[80], char c);
int main(void)
{
    char a[80],c;
    
    scanf("%c",&c);
    scanf("%s",a);
    printf("[%d]",afunc(a,c));
    
    return 0;
}
int afunc(char a[80], char c)
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==c)
		{
			return i;
		}
	}
	return -1;
}
