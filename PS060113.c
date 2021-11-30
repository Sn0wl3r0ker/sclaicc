/* PS060113.c 10050735 ªL¸t®¦ 20211020 */
#include <stdio.h>
int main(void)
{
	char c1,c2,c3;
	scanf("%c%c%c", &c1,&c2,&c3);
	if (c1<=c2&&c1<=c3)
	{
		printf("MIN=%c",c1);
	}
	else if(c2<=c1&&c2<=c3)
	{
		printf("MIN=%c",c2);
	}
	else
	{
		printf("MIN=%c", c3);
	}
	return 0;
 } 
