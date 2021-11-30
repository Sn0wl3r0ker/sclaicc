/* ´Á¤¤¦Ò14.c */
#include <stdio.h>
int main(void)
{
	int n;
	char c;
	scanf("%c", &c);
	for(;;)
	{
		if(c>='0'&&c<='9')
		{
			n+=c-'0';
		}
		else if(c=='\n')
		{
			break;
		}
		else
		{
			c=0;
		}
		scanf("%c", &c);
	}
	printf("%d", n);
	return 0;
 } 
