/* PS090221.c */
#include <stdio.h>
int main(void)
{
	int s[10]={},n[10]={},i,m,e;
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
		if(s[i]==0)
			break;
	}
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	e=i;
	for(i=0;i<e;i++)
	{
		if(s[i]==n[i])
			printf("1 ");
		else
			printf("0 ");
	}
	return 0;
}
