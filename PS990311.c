/* PS990311.c 99¦~´Á¥½ÃD */
#include <stdio.h>
char second(char a[80]);
int main(void)
{
    char a[80];
    
    gets(a);
    printf("[%c]",second(a));
    
    return 0;
}
char second(char a[80])
{
	int i,k,min=a[0],smin=a[1];
	for(i=1;a[i]!=0;i++)
	{
		if(min>a[i])
			min=a[i];
	}
	for(i=0;a[i]!=0;i++)
	{
		if(smin>a[i]&&a[i]!=min)
		{
			smin=a[i];
		}
	}
	return smin;
}
