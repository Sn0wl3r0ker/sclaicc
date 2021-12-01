/* PS070109.c   20211027*/
#include <stdio.h>
int main(void)
{
	int n,m,i,s=0;
	scanf("%d%d", &n,&m);
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
			s+=i;
	}
	printf("ANS=%d",s);
	return 0;
 } 
