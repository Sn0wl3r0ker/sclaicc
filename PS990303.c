/* PS990303.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void afunc(char a[80]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    afunc(a);
    printf("=%s",a);
    return 0;
}
void afunc(char a[80])
{
	int i,c=0,j;
	for(j=0;a[j]!=0;j++);
	for(i=1;i<j-1;i++)
	{
		if(a[i]=='.')
			c++;
	}
	if(c!=1)
		a[0]=0;
	else if(c==1)
		for(i=0;a[i]!=0;i++)
			if(a[i]=='.')
				a[i]=0;
}
