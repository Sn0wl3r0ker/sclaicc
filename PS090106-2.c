/* PS090106.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,s[10];
	for(i=0;i<10;i++)
	{
		scanf("%d", &s[i]);
	}
	scanf("%d%d", &n,&n1);
	printf("%d*%d=%d",s[n-1],s[n1-1],s[n-1]*s[n1-1]);
	return 0;
 } 
