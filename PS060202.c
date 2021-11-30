/* PS060202.c */
#include <stdio.h>
int main(void)
{
	int c1,c2,c3;
	scanf("%d%d%d",&c1,&c2,&c3);
	if(c1<=c2&&c1<=c3)
		printf("%d",c1);
	else if(c2<=c1&&c2<=c3)
		printf("%d",c2);
	else if(c3<=c2&&c3<=c1)
		printf("%d",c3);
	return 0;
}
