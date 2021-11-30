/* PS070154.c */
#include <stdio.h>
int main(void)
{
	int n=0,i,f=1;
	char c;
	scanf("%c", &c);
	while(c!='\n')
	{
		
		if(c>='0'&&c<='9')
		{
			f=1;
			n++;
		}
		else
		{
			f=0;
			break;
		}
		scanf("%c", &c);
	}
	if(f==1)
	{
		printf("%d", n);
	}
	else
		printf("NO");
	return 0;
}
