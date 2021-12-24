/* PS090405.c */
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
	int i;
	char max=-1;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			if(max<a[i])
			{
				max=a[i];
				
			}
	}
	if(max!=-1)
		return max-'0';
	return max;
}
