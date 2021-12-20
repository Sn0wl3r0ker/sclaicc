/* PS090151.c */
//#include <stdio.h>
//
//int main(void)
//{
//    int n,a[10]={0},i;
//    scanf("%d",&n);
//    while (n>0)
//    {
//        a[n%10]++;
//        n/=10;    
//    }    
//    for (i=0;i<10;i++)
//        printf("%d ",a[i]);
//    return 0;
//}
#include <stdio.h> //錯誤後修改，暫未成功 
int main(void)
{
	int n,i,a[10]={0},e;
	char c;
	for(;;)
	{
		scanf("%c", &c);
		if(c=='\n')
			break;
		a[c-'0']++;

	}
	e=i;
	for(i=0;i<=9;i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
