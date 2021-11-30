/* PS070111.c */
#include <stdio.h>
int main(void)
{
	int n,i,s=0;
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		printf("%d ", i);
		i+=s;
		s++;
	}
	return 0;
}
