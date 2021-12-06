/* PS090141.c */
#include <stdio.h>
int main(void)
{
	int n[12]={31,28,31,30,31,30,31,31,30,31,30,31},n1;
	scanf("%d", &n1);	
	printf("%d=%d", n1, n[n1-1]);
	return 0;
}

