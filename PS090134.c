/* PS090134.c */
#include <stdio.h>

int main(void)
{
	int a[80]={0},i,n,c=0;
	scanf("%d", &n);
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n/=2;
	}
	for(i=i-1;i>=0;i--)
	{
		if(a[i]==1)
			c++;
	}
	printf("%d\n", c);
    return 0;
}

