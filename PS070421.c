/* PS070421.c */
#include <stdio.h>
int main(void)
{
	int n1,n,i,c=0;
	scanf("%d", &n);
	for(i=1970;i<n;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
			c++;
	}
	n1=(n-1970+1)*365+c+3;
	printf("%d", n1%7);
	return 0;
}
