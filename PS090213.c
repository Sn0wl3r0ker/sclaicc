/* PS090213.c */
#include <stdio.h>
int main(void)
{
	int i,k,j,s[7][5]={0},n,m;

		for(k=0;;k++)
		{
			scanf("%d%d", &i,&j);
			s[i][j]=1;
			if(i==-1&&j==-1)
				break;
		}
		for(i=0;i<7;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d", s[i][j]);
			}
			printf("\n");
		}
	return 0;	
}

