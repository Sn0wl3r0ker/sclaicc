/* PS090133.c */
//#include <stdio.h>
//int main(void)
//{
//	int n,i;
//	char m[10]={'0','1','2','3','4','5','6','7','8','9'};
//	scanf("%d", &n);
//	for(;n>=8;)
//	{
//		printf("%c", m[n/8]);
//		n%=8;
//	}
//	printf("%c", m[n%8]);
//	return 0;
//}
#include <stdio.h>

int main(void)
{
    int a[80]={0};
    int n,i=0,j;
    
    scanf("%d",&n);
    for (;n>0;i++)
    {
        a[i]=n%8;
        n/=8;
    }
    
    for (j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    
    return 0;
}

