/* PS060218.c   */
#include <stdio.h>
int main(void)
{
	char c1;
	scanf("%c", &c1);
	if(c1>='A'&&c1<='F')
		printf("%04d", c1);
	printf("");
}
