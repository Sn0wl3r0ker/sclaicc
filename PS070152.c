#include <stdio.h>
int main(void)
{
	char c;
	int i=0,count=0;
	scanf("%c", &c);
	for(;i<=8&&c!='\n';i++)
	{
		if(c>='0'&&c<='9')
			count+=c-'0';
			scanf("%c", &c);
	}
	printf("%d", count);
	return 0;
}
