/* PS090120.c */
#include <stdio.h>
int main(void)
{
	int n[20],n1,i,e;
	for(i=0;i<20;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n1);
	if(n1!=1)
	for(i=n1-1;i<=e;i+=n1)
	{
		printf("%d ", n[i]);
	}	
	return 0;
}
