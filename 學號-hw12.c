/* 學號-hw12.c 20211201 */
#include <stdio.h>
int main(void)
{
	int n[10],i,e,tmp,j;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
		if(n[i]==0)
			break;
	}
	e=i;
	//SORT
	for(i=e-1;i>=0;i--)
	{
		for(j=i-1;j>=0;j--)
		{
			if(n[i]<n[j]) //if n[i]比n[j]小 交換值 
			{
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	}
	//OUTPUT
	for(i=0;i<e;i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}
