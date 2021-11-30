/* PS050412.c */
#include <stdio.h>
int main(void)
{
	int n1;
	scanf("%d", &n1);
	printf("%d=%d",n1,(n1%100)*1+n1/10%10*2+n1/100*4);
	return 0;
}
