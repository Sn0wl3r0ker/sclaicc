/* PS050507.c   20211017 */
#include <stdio.h>

int main(void)
{
	int n1;
	scanf("%d", &n1);
	printf("%d=%c", n1, 65+(26-n1%26));
	return 0;
 } 
