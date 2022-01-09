/* PS080310.c */
#include <stdio.h>
int f(int n1);
int main(void)
{
    int n1;
    
    scanf("%d",&n1);
    printf("%d",f(n1));
    
    return 0;
}
int f(int n1)
{
	int i;
	if(n1==0)
		return 2;
	else if(n1==1)
		return 1;
	else
		return f(n1-1)+f(n1-2);
}
