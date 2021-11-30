/* PS070503.c */
#include <stdio.h>
int main()
{
	int n,i,t1,t2,t3;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		if(i*i>n)
			break;
	}
	t1=i*i;
	t2=(i-1)*(i-1);
	if(abs(t1-n)<=abs(t2-n))
		t3=t1;
	else
		t3=t2;
	printf("=%d", t3);
	return 0;
}
