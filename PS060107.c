/* PS060107.c 10050735 �L�t�� 20211013 */
#include <stdio.h>
int main(void)
{
	int n1;
	scanf("%d", &n1);
	if (n1/100 == n1 % 10)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
 } 
