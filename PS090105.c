/* PS090105.c */
#include <stdio.h>
int main(void)
{
	int n1,n2,n[10]={0},i;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d%d", &n1,&n2);
	printf("%d+%d=%d", n[n1-1],n[n2-1],n[n1-1]+n[n2-1]);
	return 0;
}
