/* PS070129 */
#include <stdio.h>
int main(void)
{
	int i,l=0,m,n;
	scanf("%d%d", &m,&n);
	for(i=n;i>0;i/=10)
	{
		l++;
	}
	printf("=");
	if(m>l)
		for(i=m-l;i>0;i--)
			printf("*");
	printf("%d", n);
	return 0;
}
