/* PS070103.c */
#include <stdio.h>
int main(void)
{
	char c;
	int n=0;
	scanf("%c", &c);
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
			n++;
		else
		{
			n=0;
			break;
		}
		scanf("%c", &c);
	}
	if(n==0)
		printf("NO");
	else
	{
		printf("%d", n);
	}
	return 0;
}
