/* PS070110.c */
#include <stdio.h>
int main(void)
{
	int n1,n2,i,s=0;
	scanf("%d%d", &n1,&n2);
	for(i=1;i<=n1;i++)
	{
		if(i%n2==0)
			s++;
	}
	printf("ANS=%d", s);
	return 0;
}
