/* PS090473.c */
#include <stdio.h>
int main(void)
{
	int i,j=0;
	char a[80];
	gets(a);
	for(i=0;a[i]!=0;i++)
		if(a[i]!=' ')
			a[j++]=a[i];
	a[j]=0;
	printf("=");
	puts(a);
	return 0;
}
