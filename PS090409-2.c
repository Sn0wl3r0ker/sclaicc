/* PS090409.c */
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
	int i,j=0;
	char b[80];
	for(i=0;a[i]!=0;i++);
	for(i=i-1;i>=0;i--)
		b[j++]=a[i];
	b[j]=0;
	for(i=0;a[i]!=0;i++)
		if(b[i]!=a[i])
			return 0;
	return 1;
			
}
