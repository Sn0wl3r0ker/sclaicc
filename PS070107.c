/* PS070107.c */
#include <stdio.h>
int main(void)
{
	int n1,n2,i;
	scanf("%d%d", &n1,&n2);
	for(i=1;i<=n1;i++)
	{
		if(i%n2!=0)
			printf("%d ",i);

	}
	return 0;
}
