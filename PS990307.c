/* PS990307.c 99¦~´Á¥½ÃD */
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
	int i,j,n=0;
	
	for(i=0;a[i]!=0;i++,n*=16)
	{
		if(a[i]>='0'&&a[i]<='9')
			n+=a[i]-'0';
		else
			n+=a[i]-'A'+10;
	}
	n/=16;
	n++;
	for(j=i-1;j>=0;j--,n/=16)
	{
		if(n%16<=9)
			a[j]=n%16+'0';
		else
			a[j]=n%16+'A'-10;
	}
	a[i]=0;
}

