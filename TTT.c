#include <stdio.h>

int main (void)
{
 char c1;
 scanf("%c", &c1);
 if(c1=='1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9'||'A'||'B'||'C'||'D'||'E'||'F');
{
	if(c1=='A')
 { 
	printf("10");
	} 
	else if(c1=='B')
	{ 
	printf("11");
	} 
	else if(c1=='C')
	{ 
	printf("12");
	} 
	else if(c1=='D')
	{ 
	printf("13");
	} 
	else if(c1=='E')
	{ 
	printf("14");
	} 
	else if(c1=='F')
	{ 
	printf("15");
	}
	else 
	printf("%c", c1);
 } 

 return 0;
}
