/* PS070408.c */
#include <stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	for(i=n;m>0;i++)
	{
		if(!(i%4==0&&i%100!=0||i%400==0))
		{
			printf("%d ",i);
			m--;
		}
	}
	return 0;
}
