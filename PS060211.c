/* PS060211.c   20211018*/
#include <stdio.h>
int main(void)
{
	char c1,c2;
	scanf("%c%c",&c1,&c2);
	if (c1>='0'&&c1<='9'&&c2>='0'&&c2<='9')
	{
		if(c1>=c2)
		printf("%c%c",c1,c2);
		else
		printf("%c%c", c2,c1);
	}
	else
	{
		printf("NO");
	}
	return 0;
 } 
