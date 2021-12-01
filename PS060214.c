/* PS060214.c   20211027*/
#include <stdio.h>
int main(void)
{
	char c1,c2,c3;
	scanf("%c%c%c",&c1,&c2,&c3);
	if(c1>=c2&&c1>=c3)
		if(c2>=c3)
			printf("%c%c%c*2=%c%c%c",c1,c2,c3,c1*2,c2*2,c3*2);
		else
			printf("%c%c%c*2=%c%c%c",c1,c3,c2,c1*2,c3*2,c2*2);
	if(c2>=c1&&c2>=c3)
		if(c1>=c3)
			printf("%c%c%c*2=%c%c%c",c2,c1,c3,c2*2,c1*2,c3*2);
		else
			printf("%c%c%c*2=%c%c%c",c2,c3,c1,c2*2,c3*2,c1*2);
	if(c3>=c1&&c3>=c2)
		if(c2>=c1)
			printf("%c%c%c*2=%c%c%c",c3,c2,c1,c3*2,c2*2,c1*2);
		else
			printf("%c%c%c*2=%c%c%c",c3,c1,c2,c3*2,c1*2,c2*2);
	return 0;
}
