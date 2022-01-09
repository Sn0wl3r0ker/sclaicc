/* PS090478.c */
#include <stdio.h>
int main(void)
{
	char a[80],b[10]={},max;
	int i,j;
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		b[a[i]-'0']++;
	}
	max=b[0];
	for(i=1;i<10;i++)
	{
		if(max<b[i])
			max=b[i];
	}
	printf("=");
	for(i=0;i<10;i++)
	{
		if(max==b[i])
			printf("%d",i);
	}
	return 0;
}
