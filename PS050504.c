/* PS050504.c    */
#include <stdio.h>

int main(void)
{
	char c1;
	scanf("%c", &c1);
	printf("%c=%d", c1, (int)c1-64);
	return 0;
}
