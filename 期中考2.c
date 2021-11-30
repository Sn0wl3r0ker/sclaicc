/*´Á¤¤¦Ò2.c */
#include <stdio.h>
int main(void)
{
	double n,n1;
	scanf("%lf%lf",&n,&n1);
	printf("%d POUND+ %d OUNCE=%.8f KG", (int)n,(int)n1,(n+n1/16)*(453.59237)/1000);
	return 0;
}
