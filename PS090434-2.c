/* PS090434.c */
#include <stdio.h>
void afunc(char a[],int m,int n,char b[]);
int main(void)
{
    char a[80],b[80];
    int m,n;
    
    scanf("%s",a);
    scanf("%d%d",&m,&n);
    afunc(a,m,n,b);
    printf("[%s]",b);
    
    return 0;
}
void afunc(char a[],int m,int n,char b[])
{
	int i,e,j=0;
	for(i=0;a[i]!=0;i++);
	e=i;
	if(m>e)
		b[0]=0;
	else if(m+n>e)
		for(i=m;a[i]!=0;i++)
		{
			b[j++]=a[i];
		}
	else
		for(i=m;i<=m+n-1;i++)
		{
			b[j++]=a[i];
		}
	b[j]=0;
	return;
}
