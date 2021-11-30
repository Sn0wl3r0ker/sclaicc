/* PS050505.c 10050735 ªL¸t®¦ 20211011 */
#include <stdio.h>

int main(void)
{
	int x, y;
	char c1;
	scanf("%d%d", &x, &y);
	printf("%c", ((x*100)+y)%26+65);
	return 0;
 } 
