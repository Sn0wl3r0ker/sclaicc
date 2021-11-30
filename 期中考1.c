/*´Á¤¤¦Ò1 */
#include <stdio.h>
int main(void)
{
	char c,c1,c2;
	scanf("%c%c%c", &c,&c1,&c2);
	if(c==c2&&c!=c1)
		printf("YES");
	else
		printf("NO");
	return 0;
 } 
