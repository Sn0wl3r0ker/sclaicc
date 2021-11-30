/*¦Ò«e7.c */
#include <stdio.h>
int main()
{
	int n,i,j;
	scanf("%d", &n);
	printf("ANS=");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d ", i);
		}
	}
	return 0;
 } 
