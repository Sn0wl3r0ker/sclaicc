/* ´Á¤¤¦Ò15.c */
#include <stdio.h>
int main(void)
{
	char c,c1;
	scanf("%c%c", &c,&c1);
	if(c>='0'&&c<='9')
	{
		printf("%c%c=%d",c,c1, c1>='0'&&c1<='9'?c-'0'+c1-'0':(c-'0')*16+c1-'A'+10);
	}
	else if(c1>='0'&&c1<='9')
	{
		printf("%c%c=%d",c,c1, c>='0'&&c<='9'?c1-'0'+c-'0':c1-'0'+(c-'A'+10)*16);
	}
	return 0;
 } 
