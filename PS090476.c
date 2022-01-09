/* PS090476.c */
#include <stdio.h>
int main(void)
{
	int c=0,i,e;
	char n[80];
	gets(n);
	for(i=0;n[i];i++)
	{
		if(n[i]=='.')
		{
			e=i;
			c++; 	
		}
	}
	if(c==1)
	{
		printf("=");
		for(i=0;i<e;i++)
			printf("%c", n[i]);
	}
	else
		printf("=NO");
	return 0;
}
