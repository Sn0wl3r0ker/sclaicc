/* PS090113.c */
#include <stdio.h>
int main(void)
{
	int i,a[10],n,j,c=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
			break;
	}
	scanf("%d",&n);
	for(j=0;j<i;j++)
		if(a[j]==n)
			c++;
	printf("%d",c);
	return 0;
}
