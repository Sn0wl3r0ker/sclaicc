/* PS070403.c */
#include <stdio.h>
int main(void)
{
	int n,n1,i;
	scanf("%d", &n);
	for(i=n+1;;i++)
	{
		if(i%4==0&&i%100!=0||i%400==0)
		{
			break;
		}
	}
	printf("%d", i);
	return 0;
}
