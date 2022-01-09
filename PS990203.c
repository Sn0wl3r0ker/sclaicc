/* PS990203.c 99¦~´Á¥½ÃD */
#include <stdio.h>
int afunc(char a[80]);
int main(void)
{         
    char a[80];

    scanf("%s",&a);
    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(char a[80])
{
	int i,n=0,n1=0;
	for(i=0;a[i]!='*';i++)
	{
		n=n*10+a[i]-'0';
	}
	for(i=i+1;a[i]!=0;i++)
	{
		n1=n1*10+a[i]-'0';
	}
	return n1*n;
}
