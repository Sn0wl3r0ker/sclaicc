/* PS060120.c */
#include <stdio.h>
int main(void)
{
	char c1,c2;
	scanf("%c%c",&c1,&c2);
	if(c1>='0'&&c1<='9'&&c2>='0'&&c2<='9')
		printf("+");
	else
		printf("?");
	return 0;
}
