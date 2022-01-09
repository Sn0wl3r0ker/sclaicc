/* PS990305.c 99¦~´Á¥½ÃD */
#include <stdio.h>
void line(char a[]);
int main(void)
{
    char a[40];
    
    gets(a);
    line(a);
    
    return 0;
}
void line(char a[])
{
	int i,j,k;
	for(k=0;a[k]!=0;k++);
	for(i=0;a[i]!=0;i++)
	{
		for(j=0;j<=k*2-1;j++)
		{
			if(j+i==k-1||j-i==k-1)
				printf("%c", a[i]);
			else
				printf(" ");
		}
		printf("\n");
	}
}
