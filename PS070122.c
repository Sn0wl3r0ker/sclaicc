/* PS070122.c */
#include <stdio.h>
int main(void)
{
	int n,i,n1=1;
	scanf("%d", &n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			if(n>n1)
			{
				n1=i;
			}
		}
	}
	printf("%d", n1);
	return 0;
}

