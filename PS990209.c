/* PS990209.c 99¦~´Á¥½ÃD */
#include <stdio.h>
int main(void)
{
	int i,b[10]={0},max=0;
	char a[80];
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			b[a[i]-'0']++;
	}
	max=b[0];
	printf("=");
	for(i=0;i<10;i++)
		if(max<b[i])
			max=b[i];
	for(i=0;i<10;i++)
		if(max==b[i])
			printf("%d",i);
	return 0;
}

