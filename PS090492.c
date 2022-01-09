/* PS090492.c */

//#include <stdio.h>
//
//void afunc(char a1[],char a2[]);
//
//int main(void)
//{
//    char a1[80],a2[80];
//    
//    gets(a1);
//    afunc(a1,a2);
//    printf("=%s",a2);
//        
//    return 0;
//} 
//
//void afunc(char a1[],char a2[])
//{
//    int i,j,k,carry=1;
//    char hex[] = "0123456789ABCDEF";
//    for (i=0;a1[i]>0;i++)
//        ;
//        
//    for (j=i-1;j>=0;j--)
//    {
//        if (a1[j]>='A')
//            k = a1[j] - 'A' + 10;
//        else
//            k = a1[j] - '0';
//        k = k + carry;
//        a2[j] = hex[k % 16];
//        carry = k / 16;
//    }
//    a2[i] = 0;
//    return;
//}


#include <stdio.h> //´ú¸ê¥¼¸Õ 
void afunc(char a1[80], char a2[80]);
int main(void)
{
    char a1[80],a2[80];
    
    gets(a1);
    
    afunc(a1,a2);
    printf("%s",a2);
        
    return 0;
} 
void afunc(char a1[80], char a2[80])
{
	int i,len=0;
	for(i=0;a1[i]!=0;i++)
		len++;
	a2[len]=0;
	a2[0]='=';
	for(i=len-1;i>=0;i--)
	{
		if(a1[i]=='F')
		{
			a2[i+1]='0';
		}
		else
		{
			a2[i+1]=a1[i]+1;
			break;
		}
	}
	for(i=i-1;i>=0;i--)
	{
		a2[i+1]=a1[i];
	}
	return;
}

