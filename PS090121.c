/* PS090121.c */
#include <stdio.h>
int main(void)
{
	int n,s=0;
	scanf("%d", &n);
	while(n)
	{
		printf("%d ", n+1);
		s++;
		scanf("%d", &n);
		if(n==0||s==10)
			break;
	}
	return 0;
}
