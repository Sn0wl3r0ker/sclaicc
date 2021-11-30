/* PS060117.c */
#include <stdio.h>

int main(void)
{
	char c1;
	scanf("%c", &c1);
	printf("%c=%d", c1, c1 >=65 && c1 <= 70? c1-55 : c1-48);
	return 0;
}
