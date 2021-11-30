/* PS050505.c 10050735 ªL¸t®¦ 20211011 */
#include <stdio.h>

int main(void)
{
	int x, y;
	char c1;
	scanf("%d%d", &x, &y);
//	printf("x=%d,+y=%d", x/5, y%5);
	printf("%c", ((x*5)%5+y)+65-(x*5/25));
	return 0;
 } 
