/* ´Á¤¤¦Ò14.c */
#include <stdio.h>
int main()
{
	int n=0,i;
	char c;
	scanf("%c", &c);
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
		{
			n=n+c-'0';
		}
		scanf("%c", &c);
	}
	printf("%d", n);
	return 0;
 } 
