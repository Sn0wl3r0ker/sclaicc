/* PS070401.c   20211022 */
#include <stdio.h>
int main(void) 
{
	int n1,n2,i,s=0;
	scanf("%d%d", &n1,&n2);
	for(i=n1;i<=n2;i++)
	if(i%4==0&&i%100!=0||i%400==0)
		s++;
	printf("%d", s);
	return 0;
}
