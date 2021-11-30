/* PS070123.c 10050735 ªL¸t®¦ */
#include <stdio.h>
int main(void)
{
	int n1,sum=0,n=0;
	scanf("%d", &n1);
	n=n1;
	while(n1>0)
	{
		sum=sum*10+n1%10;
		n1/=10;
	}
	printf("%d+%d=%d",n,sum,n+sum);
  	return 0;
}
