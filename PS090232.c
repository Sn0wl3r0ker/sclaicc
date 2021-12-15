/* PS090232.c 上傳沒過 */
#include <stdio.h>
int main(void)
{
	int s[60]={},n,i,e,sum=0,sum1=0; //原20改60不知道會不會對 
	for(i=0;i<60;i++)
	{
		scanf("%d", &s[i]);
		if(s[i]==0)
			break;
	}
	e=i;
	scanf("%d", &n);
	for(i=1;i<e;i+=3)
	{
		if(s[i]<=n)
			sum+=1;
	}
	for(i=2;i<e;i+=3)
	{
		if(s[i]<=n)
			sum1+=1;
	}
	printf("FAIL=%d %d", sum,sum1);
	return 0;
}
