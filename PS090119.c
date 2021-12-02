/* PS090119.c */
#include <stdio.h>
int main(void)
{
	int n[20]={},i,n1,e;
	for(i=0;i<20;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n1);
	for(i=0;i<=e;i=i+1+n1)
	{
		printf("%d ", n[i]);
	}
	return 0;
}
