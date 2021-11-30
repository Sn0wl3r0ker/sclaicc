/* PS070151.c */
#include <stdio.h>
int main(void)
{
	int n=0;
	char c;
	scanf("%c", &c);
	for(;c!='\n';)
	{
		if(c>='0'&&c<='9')
			n++;
		scanf("%c", &c);
	}
	printf("%d", n);
	return 0;
}
