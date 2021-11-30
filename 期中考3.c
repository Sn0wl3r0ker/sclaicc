/* ´Á¤¤¦Ò3.c */
#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c%c%c", &c,&c1,&c2);
	if(c<=c1&&c<=c2)
		printf("MIN=%c", c);
	else if(c1<=c&&c1<=c2)
		printf("MIN=%c", c1);
	else 
		printf("MIN=%c", c2);
	return 0;
 } 
