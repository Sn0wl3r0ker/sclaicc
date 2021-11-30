/* ´Á¤¤¦Ò11.c */
#include <stdio.h>
int main(void)
{
	char c,c1;
	int yes=1;
	scanf("%c%c", &c,&c1);
	if(!(c>='a'&& c<='z'||c>='A'&&c<='Z'||c=='_'))
	{
		yes=0;
	}
	c=c1;
		if(!(c>='a'&& c<='z'||c>='A'&&c<='Z'||c=='_'||c>='0'&&c<='9'))
		{
		yes=0;
		}
//	if(c>='a'&& c<='z'||c>='A'&&c<='Z'||c=='_')
//		if!(c1>='a'&& c1<='z'||c1>='A'&&c1<='Z'||c1=='_'||c1>='0'&&c1<='9')
//			printf("YES");
//		else
//			printf("NO");
//	else
//		printf("NO");
	if(yes!=0)
		printf("YES");
	else
		printf("NO");
	return 0;
 } 
