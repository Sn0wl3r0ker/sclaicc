#include <stdio.h>
int main(void)
{
	int n,n1;
	scanf("%d", &n);
	n1= (15-n)/7*7+(15-n)%7;
	printf("%d=%d", n, n1);
	return 0;
}
