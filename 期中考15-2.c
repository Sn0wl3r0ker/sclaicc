/* ´Á¤¤¦Ò15.c */
#include <stdio.h>
int main()
{
	int n;
	char c,c1;
	scanf("%c%c", &c,&c1);
	if(c>='0'&&c<='9')
	{
		if(c1>='0'&&c1<='9')
			printf("%c%c=%d", c,c1,(c-'0')*16+c1-'0');
		else
			printf("%c%c=%d", c,c1,(c-'0')*16+c1-'A'+10);
	}
	else
	{
		if(c1>='0'&&c1<='9')
			printf("%c%c=%d", c,c1,(c-'A'+10)*16+c1-'0');
		else
			printf("%c%c=%d", c,c1,(c-'A'+10)*16+c1-'A'+10);
	}
	return 0;
 } 
