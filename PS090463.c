/* PS090463.c */
#include <stdio.h>
int main(void)
{
	int i,n,carry=1;
	char a[8];
	gets(a);
	for(i=0;a[i]!=0;i++);
	for(i=i-1;i>=0;i--)
	{
		n=(a[i]-'0'+carry)%2;
		carry=(a[i]-'0'+carry)/2;
		a[i]=n+'0';
	}
	printf("=");
	puts(a);
	return 0;
}
