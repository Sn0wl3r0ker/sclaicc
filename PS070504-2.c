/* PS070504.c */
#include <stdio.h>
void afunc(int n);
int bfunc(int n);
int main(void)
{
	int n,i;
	scanf("%d", &n);
	afunc(n);
	return 0;
}
void afunc(int n)
{
	int i,t1,t2;
	for(i=1;i<=n;i++)
	{
		if(bfunc(i)>n)
			break;
	}
	t1=bfunc(i-1);
	t2=bfunc(i);
	if(n-t1>t2-n)
		printf("=%d", t2);
	else if(n-t1<t2-n)
		printf("=%d", t1);
	else
		printf("=%d %d", t1,t2);
}
int bfunc(int n)
{
	return (n*(n+1))/2;
}
