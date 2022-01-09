/* PS990205.c 99¦~´Á¥½ÃD */
#include <stdio.h>
int afunc(char a[80]);
int main(void)
{
    char a[80];
    
    gets(a);
    printf("=%d",afunc(a));
    
    return 0;
}

int afunc(char a[80])
{
	int i,flag=0,c=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9'||a[i]>='A'&&a[i]<='F')
		{
			c++;
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag)
		return c;
	else
		return 0;
}

