/* PS060112.c   20211018 */
#include <stdio.h>
int main(void)
{
	scanf("%c%c%c",&c1,&c2,&c3);
	if (c1>='A'&&c1<='Z'||c1>='a'&&c1<='z'||c1=='_')
	{
		if (c2>='A'&&c2<='Z'||c2>='a'&&c2<='z'||c2=='_'||c2>='0'&&c2<='9')
		{
			if (c3>='A'&&c3<='Z'||c3>='a'&&c3<='z'||c3=='_'||c3>='0'&&c3<='9')
			{
				if(c1=='_'&&c2=='_'&&c3=='_')
				printf("NO");
			}
			else
			{
				printf("YES");
			}
		}
		else
		{
			printf("NO");
		}
	else
	{
		printf("NO");
	}
	return 0;
 } 
