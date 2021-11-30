/* PS080102.c */
#include <stdio.h>
int box(void);
int main(void)
{         
    box();    
    
    return 0;
}
int box(void)
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			if(i==1||i==4||j==1||j==4)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return;
 } 
