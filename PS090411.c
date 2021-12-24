/* PS090411.c */
#include <stdio.h>
int main(void)
{
	char a[80]={};
	int i;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			a[i]='x'; 
	}
	printf("=");
	puts(a);
	return 0;
}
