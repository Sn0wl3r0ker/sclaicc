/* PS070408.c */
#include <stdio.h>
int main(void)
{
	int i,n,m,c=0;
	scanf("%d%d",&n,&m);
	for(i=n;c!=m;i++)
	{
		if(!(i%4==0&&i%100!=0||i%400==0))
		{
			printf("%d ", i);
			c++;
		}
	}
	return 0;
	
}
