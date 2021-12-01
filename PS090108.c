/* PS090108 */
#include <stdio.h>
int main(void)
{
	int n[10],i,n1,n2;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d%d", &n1,&n2);
	if(n[n1-1]>=n[n2-1])
		printf("%d", n[n1-1]);
	printf("%d", n[n2-1]);
	return 0;
}
