/* PS080218.c */
#include <stdio.h>
int afunc(int n1,int n2);
int main(void)
{
    int n1,n2;
    
    scanf("%d%d",&n1,&n2);
    printf("LCM=[%d]\n",afunc(n1,n2));
    
    return 0;
}
int afunc(int n1,int n2)
{
	int i;
	for(i=2;i<=n1*n2;i++)
	{
		if(i%n1==0&&i%n2==0)
		break;
	}
	return i;
}

