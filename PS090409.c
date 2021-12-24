/* PS090409.c */
#include <stdio.h>
int afunc(char a[80]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(char a[80])
{
	int i,e,j=0,flag=0;
	char b[80];
	for(i=0;a[i]!=0;i++)
		;
	e=i;
	for(i=e-1;i>=0;i--)
		b[j++]=a[i];
	b[j]=0;
	for(i=0;a[i]!=0;i++)
	{
		if(b[i]==a[i])
			flag=1;
		else
		{
			flag=0;
			break;
		}
	}
	if(flag)
		return 1;
	else
		return 0;
}
