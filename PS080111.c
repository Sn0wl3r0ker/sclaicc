/*PS080111.c*/
#include <stdio.h>
int afunc(int n);
int main(void)
{
    int n;
    
    scanf("%d",&n);
    afunc(n);

    return 0;
}
int afunc(int n)
{
	int i,j=0;
	for(i=1;i<=n;i++)
	{
		printf("%d ", i);
		i+=j;
		j++;
	}
	return;
}
