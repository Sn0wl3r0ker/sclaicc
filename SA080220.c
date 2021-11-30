/* SA080220*/
#include <stdio.h>
int afunc(int i);
int main(void)
{
	printf("%d", afunc(4));
}
int afunc(int i)
{
	if(i==1)
		return 1;
	else
		return i*afunc(i-1);
}
