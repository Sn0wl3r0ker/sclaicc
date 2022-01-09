/*PS990307.c*/
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
	int i,j,carry=1,k=0;
	char hex[]="0123456789ABCDEF";
	for(i=0;a[i]!=0;i++);
	for(j=i-1;j>=0;j++)
	{
		if(a[j]>='A'&&a[j]<='F')
			k=a[j]-'A'+10;
		else
			k=a[j]-'0';
		a[j]=hex[(k+carry)%16];
		carry=(k+carry)/16;
	}	
	return;
}
