/* PS060118.c */
#include <stdio.h>
int main(void)
{
	char c1,c2;
	scanf("%c%c",&c1,&c2);
	if(c1>='0'&&c1<='9')
	{
		if(c2>='0'&&c2<='9')
		printf("%c%c=%c%c",c1,c2,c1,c2);
		else if(c2>='A'&&c2<='Z')
		printf("%c%c=%d",c1,c2,(c1-48)*16+c2-55);
	}
	else if(c1>='A'&&c1<='Z')
	{
		if(c2>='0'&&c2<='9')
		printf("%c%c=%d",c1,c2,(c1-55)*16+c2-48);
		else if(c2>='A'&&c2<='Z')
		printf("%c%c=%d",c1,c2,(c1-55)*16+c2-48);
	}
	return 0;
}
