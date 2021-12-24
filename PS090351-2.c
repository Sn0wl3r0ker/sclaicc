/* PS090351.c */
#include <stdio.h>
int sum(int a[80][3], int stuid);
int main(void)
{
    int a[80][3];
    int i,j,stuid;
        
    for (i=0;i<80;i++)
    {
        scanf("%d",&a[i][0]);
        if (a[i][0]==0)
           break;
        for (j=1;j<=2;j++)
            scanf("%d",&a[i][j]);
    }
    
    scanf("%d",&stuid);
    printf("%d=%d",stuid,sum(a,stuid));
    return 0;
}
int sum(int a[80][3], int stuid)
{
	int i,e;
	for(i=0;a[i][0]!=0;i++)
	{
		if(stuid==a[i][0])
			return a[i][1]+a[i][2];
	}
	return -1;
}
