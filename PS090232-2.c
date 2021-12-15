/* PS090232.c */
#include <stdio.h>
int main(void)
{
	int s[20][3]={0},n,i,e,j,sum[3]={0};
	for(i=0;i<20;i++)
	{
		scanf("%d", &s[i][0]);
		if(s[i][0]==0)
			break;
		scanf("%d%d", &s[i][1],&s[i][2]);
	}
	e=i;
	scanf("%d", &n);
	for(j=1;j<=2;j++)
	{
		for(i=0;i<e;i++)
		{
			if(s[i][j]<n)
				sum[j]++;
		}
	}
	printf("FAIL=%d %d", sum[1],sum[2]);
	return 0;
}
