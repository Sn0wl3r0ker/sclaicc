/* PS090423.c */
#include <stdio.h>
void afunc(char a[80],char b[80]);
int main(void)
{         
    char a[80],b[80];

    scanf("%s",a);
    afunc(a,b);
    printf("[%s]\n",b);
    
    return 0;
}
void afunc(char a[80],char b[80])
{
	int i,j=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
			b[j++]=a[i];
	}
	b[j]=0;
	return;
}
