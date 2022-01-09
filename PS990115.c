/*  PS990115.c */
#include <stdio.h>
int afunc(char a[80]);
int main(void)
{         
    char a[80];
    int n;

    scanf("%s",a);
    printf("[%d]",afunc(a));
    
    return 0;
}
int afunc(char a[]) //«Ü²rªº¼gªk 
{
    int b,c=0;
    for(b=0;a[b]!=0;c*=2)
        c+=a[b++]-'0';
    return c/=2;
}

//int afunc(char a[80])
//{
//	int i,n=0,j=1;
//	for(i=0;a[i]!=0;i++);
//	for(i=i-1;i>=0;i--)
//	{
//		n=n+(a[i]-'0')*j;
//		j*=2;
//	}
//	return n;
//	
//}
