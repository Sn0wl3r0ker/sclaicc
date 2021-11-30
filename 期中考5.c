/*´Á¤¤¦Ò5.c */ 
#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d=25*%d+5*%d+1*%d", n,n/25,n%25/5,n%25%5);
	return 0;
}
