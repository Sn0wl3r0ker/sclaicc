/* PS090118.c */
#include <stdio.h>
int main(void)
{
	int a[20]={0},i,n,e,k;
	for(i=0;i<20;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	scanf("%d", &n);
	for(i=0;a[i]!=0;i++)
	;
	e=i;
	if(n>=i)
		for(i=0;i<e;i++)
			printf("%d ", a[i]);
	else
		for(i=e-n;i<e;i++)
			printf("%d ", a[i]);
	return 0;
}
