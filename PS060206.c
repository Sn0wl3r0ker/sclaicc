/* PS060206.c */
#include <stdio.h>
int main(void)
{
	char c;
	scanf("%c", &c);
	if(c>='A'&&c<='Z')
		printf("%c",c-'A'+'a');
	else if(c>='a'&&c<='z')
		printf("%c",c-'a'+'A');
	else
		printf("*");
	return 0;
}
