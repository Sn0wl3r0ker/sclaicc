/* PS990307-2.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void afunc(char a[]);
int main(void)
{
    char a[80];
    
    gets(a);
    afunc(a);
    printf("=%s",a);
        
    return 0;
} 
void afunc(char a[])
{
	int i,j,k=0,carry=1;
	char hex[]="0123456789ABCDEF",a2[80]={};
	for(i=0;a[i]>0;i++);
	for(j=i-1;j>=0;j--)
	{
		if(a[j]>='A')
			k=a[j]-'A'+10;
		else
			k=a[j]-'0';
		k=k+carry;
		a2[j]=hex[k%16];
		carry=k/16;
	}
	a2[j]=0;
	for(i=0;a2[i]!=0;i++)
		a[i]=a2[i];
	return;
}
