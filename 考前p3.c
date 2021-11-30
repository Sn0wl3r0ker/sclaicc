#include <stdio.h>
int main()
{
	int n,i,j=1;
	scanf("%d", &n);
	printf("1 ");
	for(i=1;i+j<=n;)
	{
		printf("%d ",i+=j);
		j+=1;
	}
	return 0;
 } 
