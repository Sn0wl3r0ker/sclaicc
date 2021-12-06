/* PS090146.c */
#include <stdio.h>
int main(void)
{
	int n[]={0,31,28,31,30,31,30,31,31,30,31,30,31},n1,n2,i,n3;
	scanf("%d%d", &n2,&n1);
	for(i=0;i<n2;i++)
	{
		n3+=n[i];
	}
	printf("%d", n3+n1-1);
	return 0;
}
