/* PS090148.c */
#include <stdio.h>
int main(void)
{
	int i,day,n=0,m,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d", &m,&day);
	for(i=0;i<m;i++)
	{
		n+=a[i];
	}
	day+=n;
	printf("%d", (day-1)%7);
	return 0;
}
