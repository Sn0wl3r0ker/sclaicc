/* PS070117.c */
#include <stdio.h>
int main(void)
{
	int i,n;
	scanf("%d", &n);
	for(i=1;n>10;i*=10,n/=10);
	printf("%d", n*i);
	return 0;
		
}
