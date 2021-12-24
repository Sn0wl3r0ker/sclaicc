/* PS090441.c */
#include <stdio.h>
void afunc(int n, char a[80]);
int main(void)
{         
    int n;
    char a[80];

    scanf("%d",&n);
    afunc(n,a);
    printf("[%s]",a);
    
    return 0;
}
void afunc(int n, char a[80])
{
	int i,n1;
	n1=n;
	for(i=0;n>0;i++)
	{
		a[i]=n%10+'0';
		n/=10;
	}
	a[i]=0;
	return;
}
