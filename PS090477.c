/* PS090477.c */
#include <stdio.h>
int main(void)
{
	int i,j=0,max,n[26]={0};
	char a[100];	//hex[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	gets(a);
	for(i=0;a[i]!=0;i++)
	{
		n[a[i]-'A']++;
	}
	max=n[0];
	for(j=1;j<i;j++)
	{
		if(max<n[j])
			max=n[j];
	}
	printf("=");
	for(j=0;j<26;j++)
	{
		if(max==n[j])
			printf("%c",j+'A');
	}
	return 0;
}
