/* PS090115.c */
#include <stdio.h>
int main(void)
{
	int a[10]={0},i,n;
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]==0)
			break;
	}
	scanf("%d", &n);
	if(a[n]>=n)
		printf("%d",a[n]);
	else
		printf("NO");
	return 0;
}
