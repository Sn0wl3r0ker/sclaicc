/* PS040305 */
#include <stdio.h>
int main(void)
{
	int n,i,n1,count=1;
	scanf("%d", &n);
	n1=n;
	for(;n>0;)
	{
		count=count*10;
		n/=10;
	}
	count/=10;
	printf("%d", n1%count);
	return 0;
}
