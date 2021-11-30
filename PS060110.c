/* PS060110.c */
#include <stdio.h>

int main(void)
{
	char c1;
	scanf("%c", &c1);
	if (c1>=48 && c1<=70)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
