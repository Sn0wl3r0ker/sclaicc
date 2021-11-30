/* ´Á¤¤¦Ò17.c */
#include <stdio.h> 
int main(void)
{
	int n,n1;
	scanf("%d", &n);
	if(n%5==1||n%5==0)
	{
		printf("0");
	}
	else if(n%5==3||n%5==4)
	{
		printf("1");
	}
	return 0;
}
