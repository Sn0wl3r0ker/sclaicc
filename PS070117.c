/* PS070117.c */
#include <stdio.h>
int main(void)
{
	int n1;
	scanf("%d", &n1);
	while(n1>=10)
	{
		n1/=10;
	}
	printf("%0d",n1);
	return 0;
}

