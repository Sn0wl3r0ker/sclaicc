/*PS070132.c  */
#include <stdio.h>
int main(void)
{
	int n1,n2,i;
	scanf("%d%d", &n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%4==0&i%100!=0||i%400==0)
			printf("%d ", i);
	}
	return 0;
}
