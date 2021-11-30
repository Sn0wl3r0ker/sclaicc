#include <stdio.h>

int main(void)
{
	int num=0;
	if(--num)
		printf("%dF",++num);
	else
		printf("%dS",--num);
	return 0;
}
