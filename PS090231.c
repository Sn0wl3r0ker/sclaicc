/* PS090231.c */
#include <stdio.h>
int main(void)
{
	int i,a[20][3];
	double avg[2]={0};
	for(i=0;;i++)
	{
		scanf("%d", &a[i][0]);
		if(a[i][0]==0)
			break;
		scanf("%d%d", &a[i][1],&a[i][2]);
	}
	for(i=0;a[i][0]!=0;i++)
	{
		avg[0]+=a[i][1];
		avg[1]+=a[i][2];
	}
	printf("AVG=%.2f %.2f",avg[0]/i,avg[1]/i);
	return 0;
}
