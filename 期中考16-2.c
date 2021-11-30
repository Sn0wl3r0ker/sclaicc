/* ´Á¤¤¦Ò16.c */
#include <stdio.h>
int main(void)
{
	int n,n1;
	scanf("%d", &n);
	n1=n;
	n=n%26;
	printf("%d=%c",n1, (26-n)+'A');
	return 0;
 } 
