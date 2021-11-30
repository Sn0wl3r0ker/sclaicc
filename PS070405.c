/* PS070405.c */
#include <stdio.h>
int main(void)
{
	int n,n1,n2,c=0,i;
	scanf("%d%d", &n,&n1);
	n2=n1-n;
	for(i=n;i<=n1;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		c++;	
	}
	printf("%d", (n2-c+1)*365+c*366);
	return 0;
}
