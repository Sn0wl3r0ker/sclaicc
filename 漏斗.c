/* 漏斗.c  */
/* (079) 漏斗 : 函式練習：撰寫ㄧ程式，
可以在主函式輸入ㄧ奇數代表漏斗的高
(如果輸入偶數或1以下的數字顯示"請重新輸入)，
並呼叫函式來印出漏斗的圖形 */
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("請輸入漏斗的高(奇數):\n");
	scanf("%d", &n);
	if(n%2==0)
		printf("請重新輸入\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j>=i&&j+i<=n+1&&i<=n||j+i>=n+1&&j<=i&&i>n/2+1)
					printf("*");
				else if(i+j<=n)
					printf(" ");
			}	
			printf("\n");
		}
	}
	return 0;	
}
