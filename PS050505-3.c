/* PS050505-3.c */
#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d%d", &y, &x);
	printf("(%d,%d)=%c",y,x,(y*5+x)%26+65);
	return 0;
 } 
