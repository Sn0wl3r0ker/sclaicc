/* PS090451.c */
#include <stdio.h>
int afunc(char a[80]);
int main(void)
{         
    char a[80];

    scanf("%s",&a);
    printf("[%d]\n",afunc(a));
    
    return 0;
}
int afunc(char a[])
{
    int i,n1=0,n2=0;
    
    for (i=0;a[i]!='+';i++)
        n1 = n1*10 + (a[i]-'0');
    i++;
    for (;a[i]!=0;i++)
        n2 = n2*10 + (a[i]-'0');
    
    return n1+n2;
}

//int afunc(char a[80])
//{
//	int i,n=0,n1=0,len;
//	for(i=0;a[i]!='+';i++)
//		;
//	len=i;
//	for(i=0;i<len;i++)
//	{
//		n=n*10+a[i]-'0';
//	}
//	for(i=len+1;a[i]!=0;i++)
//	{
//		n1=n1*10+a[i]-'0';
//	}
//	return n+n1;
//}

