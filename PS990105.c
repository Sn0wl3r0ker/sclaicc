/* PS990105.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void led(int a[7][5],int x1,int y1,int x2,int y2);
int main(void)
{
    int a[7][5]={};
    int x1,y1,x2,y2;

    scanf("%d%d",&y1,&x1);
    scanf("%d%d",&y2,&x2);
    
    led(a,x1,y1,x2,y2);
    
    for (y1=0;y1<7;y1++)
    { 
        for (x1=0;x1<5;x1++)
            printf("%d",a[y1][x1]);
        printf("\n");
    } 
    
    return 0;
}
void led(int a[7][5],int x1,int y1,int x2,int y2)
{
	int i,j;
	for(i=y1;i<=y2;i++)
	{
		for(j=x1;j<=x2;j++)
		{
			a[i][j]=1;
		}
	}
	return;
}
