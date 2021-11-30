/* PS070116.c */
#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d", &n);
	for(i=0;;i++)
	{
		if(n>0)
			n/=10;
		else
			break;
	}
	printf("%d", i);
	return 0;
}
