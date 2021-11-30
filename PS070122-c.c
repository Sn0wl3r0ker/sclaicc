/* PS070122.c */
#include <stdio.h>
int main()
{
	int n,i,flag=0;
	scanf("%d", &n);
	for(i=n-1;n>=1;i--)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	printf("%d", i);
	return 0;
}
