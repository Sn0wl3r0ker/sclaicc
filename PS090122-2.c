/* PS090122.c */
#include <stdio.h>
int main(void)
{
	int n[10],i,end;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	end=i;
	for(i=0;i<end;i++)
	{
		printf("%d ", n[i]%10);
	}
	return 0;
}
