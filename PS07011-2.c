/* PS070110.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1,count=0;
	scanf("%d%d", &n,&n1);
	for(i=1;i<=n;i++)
	{
		if(i%n1==0)
		{
			count++;
		}
	}
	printf("ANS=%d", count);
	return 0;
}
