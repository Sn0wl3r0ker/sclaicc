/* PS070121.c */
#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=2;;i++)
	{
		if(n%i==0)
			break;
	}
	printf("%d",i);
	return 0;
}
