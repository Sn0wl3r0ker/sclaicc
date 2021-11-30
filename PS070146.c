/* PS070146 */
#include <stdio.h>
int main(void)
{
    int n,m,i;
    scanf("%d%d", &n,&m);
    if(m==0)
    {
	    for(i=1;i<=n;i=i+7)
   		{
        	printf("%d ", i);
    	}
    }
    else
    {
    	for(i=8-m;i<=n;i=i+7)
    	{
        	printf("%d ", i);
    	}
    }
    return 0;
 } 

