/* PS060114.c */
#include <stdio.h>
int main(void)
{
	char c1,c2,c3;
	scanf("%c%c%c",&c1,&c2,&c3);
	if(c1>=c2&&c1>=c3)
		printf("MAX=%c",c1);
	else if(c2>=c1&&c2>=c3)
		printf("MAX=%c",c2);
	else if(c3>=c2&&c3>=c1)
		printf("MAX=%c",c3);
	return 0;
}
