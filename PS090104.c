/* PS090104.c */
#include <stdio.h>
int main(void)
{
	int n[10],i,n1,n2;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d%d", &n1,&n2);
	printf("%d %d", n[10-n1],n[10-n2]);
	return 0;
 } 
