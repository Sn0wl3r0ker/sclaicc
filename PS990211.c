/* PS990211.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void line (char a[80]);
int main(void)
{
    char a[80];
    
    gets(a);
    line(a);
    
    return 0;
}
void line (char a[80])
{
	int i,tmp,j,k;
	for(j=0;a[j]!=0;j++);
	for(i=0;i<j;i++)
	{
		puts(a);
		tmp=a[0];
		for(k=0;k<j-1;k++)
			a[k]=a[k+1];
		a[k]=tmp;
	}
	
}

