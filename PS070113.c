/* PS070113.c 10050735 ªL¸t®¦ 20211022 */
#include <stdio.h>
int main(void)
{
	int n1,i,s=0;
	scanf("%d", &n1);
	for(i=1;i<=n1;i++)
	{
		if(n1%i==0)
			s++; 
	}
	printf("ANS=%d", s);
	return 0;
 } 
