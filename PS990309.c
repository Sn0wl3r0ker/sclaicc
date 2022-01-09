/* PS990309.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void afunc(char a[11],char b[11]);
int main(void)
{
    char a[11],b[80];
    
    gets(a);
    gets(b);
    afunc(a,b);
    printf("=%s",b);
    
    return 0;
}
void afunc(char a[11],char b[11])
{
	int i,k;
	for(k=0;b[k]!=0;k++)
	{
		for(i=0;a[i]!=0;i++)
		{
			if(b[k]==a[i])
				b[k]=i+'0';	
		}
	}
	return;
		
}
