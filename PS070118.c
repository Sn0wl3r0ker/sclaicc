/* PS070118.c   */
#include <stdio.h> 
int main(void)
{
	int n,n1,n2,n3,i,s=0;
	scanf("%d", &n);
	while(n>0)
	{
		i=n/10;
		n/=10;
		s+=i;
	}
	printf("%d",s+n);
	return 0;
}
