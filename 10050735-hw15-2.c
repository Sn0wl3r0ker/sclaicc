/* 10050735-hw15.c */
#include <stdio.h>
int count_word(char a[]);
int main(void)
{
	char a[80];
	gets(a);
	printf("WORD=%d\n",count_word(a));
	return 0;
}
int count_word(char a[])
{
	int i,c=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i+1]==' '&&a[i]!=0||a[i+1]=='\n'&&a[i]!=' ')
			c++;
	}
	return c;
}
