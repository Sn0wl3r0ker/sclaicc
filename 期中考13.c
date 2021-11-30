/* ´Á¤¤¦Ò13.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i,count=0;
	scanf("%d%d", &n,&n1);
	for(i=n;i<=n1;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			count++;
	}
	printf("%d", (n1-n+1)*365+count);
	return 0;
 } 
