/* PS090434.c */
#include <stdio.h>
void afunc(char a[80],int m,int n,char b[80]);
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
void afunc(char a[80],int m,int n,char b[80])
{
	int i,j=0,e;
	for(i=0;a[i]!=0;i++)
		;
	e = (m+n>i? i :m+n); 
//	e=i;
//	if(m>e-1)
//	{
//		b[0]=0;
//		return;
//	}
//	
//	else if(m+n>e-1) 
//		{
		for(i=m;i<e;i++)
		{
			b[j++]=a[i];
		}
		b[j]=0;
//	}
//	else
//	{
//		for(i=m;i<=m+n-1;i++)
//		{
//			b[j++]=a[i];
//		}
//		b[j]=0;
//	}
	return;
}
