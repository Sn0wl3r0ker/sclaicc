/* PS090101.c */
#include <stdio.h>
int main(void)
{
	int i,a[10];
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	scanf("%d", &i);
	printf("%d",a[i-1]);
	return 0;
}
