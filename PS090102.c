/* PS090102 */
#include <stdio.h>
int main(void)
{
	int n[10],n1,i;
	for(i=0;i<10;i++)
	{
		scanf("%d", &n[i]);
	}
	scanf("%d", &n1);
	printf("%d", n[10-n1]);
	return 0;
} 
