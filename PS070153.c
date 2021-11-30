/*PS070153.c*/
#include <stdio.h>
int main(void)
{
	int n,n1,i;
	char c;
	scanf("%c", &c);
	while(c!='\n')
	{
		if(c>='0'&&c<='9')
		{
			printf("%c", c);
		}
		scanf("%c", &c);
	}
	printf("\b%c", c+1);
	return 0;
}
