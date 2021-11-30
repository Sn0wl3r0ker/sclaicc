/* SA060419.c */
#include <stdio.h>
int main(void)
{
	int n=2;
	char c = '*';
	switch(n)
	{
		case 6-10:
			c = 'Y';
			break;
		case 0-5:
			c = 'N';
			break;
	}
	printf("%c", c);
	return 0;
}
