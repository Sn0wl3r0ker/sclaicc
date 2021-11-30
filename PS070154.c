/* PS070154.c */
#include <stdio.h>
int main(void)
{
	int n=0;
	char c;
	scanf("%c", &c);
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
		{
			scanf("%c", &c);
			n++;
		}
		else
		{
			n=0;
			break;
		}
	}
	if(n)
		printf("%d", n);
	else
		printf("NO");
	return 0;
}
