/* PS090101.c */
#include <stdio.h>
int main(void)
{
	int n[10],i,n1;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	scanf("%d", &n1);
	printf("%d", n[n1-1]);
	return 0;
}
