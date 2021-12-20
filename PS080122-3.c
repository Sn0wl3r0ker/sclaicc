/* PS080122.c */
#include <stdio.h>
int afunc(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    printf("[%d]",afunc(n));

    return 0;
}
int afunc(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		if(n==i*i)
		{
			return 1;
		}
	}
	return 0;
}

