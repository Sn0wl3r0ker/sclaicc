/* PS070119.c */
#include <stdio.h>
int main(void)
{
	int n,m,i;
	scanf("%d%d", &n,&m);
	if(n>=m)
		i=n;
	else
		i=m;
	for(;;i++)
	{
		if(i%n==0&&i%m==0)
			break;
	}
	printf("LCM(%d,%d)=%d",n,m,i);
	return 0;
 } 
