/* PS080114.c */
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
		if(n%i==0)
			break;
	}
	if(i==n)
		return 1;
	else
		return 0;
}
