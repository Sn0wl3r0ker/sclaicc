/* PS090107.c */
#include <stdio.h>
int main(void)
{
	int i,n[10],n1,n2;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d%d", &n1,&n2);
	if(n[n1-1]<=n[n2-1])
		printf("%d", n[n1-1]);
	else
		printf("%d", n[n2-1]);
	return 0;
}
