/* PS090114.c */
#include <stdio.h>
int main(void)
{
	int s[10],i,n,e;
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
		if(s[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n);
	for(i=0;i<e;i++)
	{
		if(s[i]==n)
			printf("%d ", i);
	}
	return 0;
}
