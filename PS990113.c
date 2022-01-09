/* PS990113.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void afunc(int n,char a[80]);
int main(void)
{         
    int n;
    char a[80];

    scanf("%d",&n);
    afunc(n,a);
    printf("[%s]",a);
    
    return 0;
}
void afunc(int n,char a[80])
{
	int i,j=0;
	for(i=0;n>0;i++,n/=10)
	{
		a[i]=n%10+'0';
	}
	a[i]=0;
	return;
}
