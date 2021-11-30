/* ´Á¤¤¦Ò16.c */
#include <stdio.h>
int main(void)
{
	int n,n1;
	char c;
	scanf("%d", &n);
	n1=26-n%26;
	c= n1+'A';
	printf("%d=%c",n,c);
	return 0;
 } 
