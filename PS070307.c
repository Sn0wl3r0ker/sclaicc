/* PS070307.c */
#include <Stdio.h>
int main(void)
{
	int m,n,i,count=0,s,gap;
	scanf("%d%d",&m,&n);
	s=n;
	while(n>0)
	{
		count++;
		n /= 10;
	}
	if(count>m)
		printf("=%d",s);
	else
	{
		gap= m-count;
		printf("=");
		for(i=1;i<=gap;i++)
			printf("*");
		printf("%d",s);
}
	return 0;
 } 
