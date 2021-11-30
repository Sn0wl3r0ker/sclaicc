/*PS070203.c 10050735 ªL¸t®¦ */
#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
			if(j==0||j==i)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
	return 0;
 } 
