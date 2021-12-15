/* PS090205.c */
#include <stdio.h>
int main(void)
{
	int n,i,s[3][3]={0},j,sum,flag=0;
	for(;;)
	{
		scanf("%d%d", &i,&j);
		s[i][j]=1;
		if(i==-1&&j==-1)
			break;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", s[i][j]);
		}
		printf("\n");
	}
		sum=0;
		for(j=0;j<3;j++)
		{
			sum+=s[j][2-j];
			if(sum==3)
			{
				flag=1;
				break;
			}
		}
	if(flag)
		printf("YES");
	else
		printf("NO");
		return 0;
}
