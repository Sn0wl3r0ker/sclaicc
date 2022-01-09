/* PS090461.c */
#include <stdio.h>
int main(void)
{
	int i,j,f=1;
	char a[16];
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(!(a[i]>='0'&&a[i]<='9'))
		{
			f=0;
			break;
		}
		else
			f=1;
	}
	if(f)
		printf("=%d",i);
	else
		printf("=NO");
}
