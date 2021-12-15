/* PS090222.c */
#include <stdio.h>
int main(void)
{
	int n,i,s[10],e,s1[10],c=0;
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
		if(s[i]==0)
			break;
	}
	for(i=0;i<10;i++)
	{
		scanf("%d", &s1[i]);
		if(s1[i]==0)
			break;
	}
	e=i;
	for(i=0;i<e;i++)
	{
		if(s[i]!=s1[i])
			c++;
	}
	printf("%d", c);
	return 0;
}
