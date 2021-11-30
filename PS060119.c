/* PS060119.c */
#include <stdio.h>
int main(void)
{
	char c1,c2;
	scanf("%c%c",&c1,&c2);
	if (c1>=65&&c1<=96&&c2>=65&&c2<=96)
		printf("+");
	else if(c1>=97&&c1<=112&&c2>=97&&c2<=112)
		printf("+");
	else
		printf("?");
	return 0;
}
