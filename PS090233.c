/* PS090233.c �W�ǨS�L :( */
#include <stdio.h>
int main(void)
{
	int s[60]={},n,i,e; //��20��60�����D�|���|�L 
	for(i=0;i<60;i++)
	{
		scanf("%d", &s[i]);
		if(s[i]==0)
			break;
	}
	e=i;
	scanf("%d",&n);
	for(i=0;i<e;i++)
	{
		if(s[i]==n)
		{
			printf("%d %d %d", s[i],s[i+1],s[i+2]);
			break;
		}
		else
		{
			printf("NO");
			break;
		}
	}
	return 0;
}
