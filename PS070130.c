/* PS070130.c 10050735 ªL¸t®¦ */
#include <stdio.h>
int main(void)
{
	int n1,s=0;
	scanf("%d", &n1);
	if(sizeof(n1)==4)
		while(n1>0)
			n1/=10;
			s++;
	printf("%d",s);
	return 0;
 } 
