/* PS090419.c */
#include <stdio.h>
void afunc(char a[80]);
int main(void)
{
    char a[80];
    
    scanf("%s",a);
    afunc(a);    
    printf("[%s]",a);
    
    return 0;
}
void afunc(char a[80])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
			a[i]=a[i]-'a'+'A';
		else if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]-'A'+'a';
	}
	return;
}

