#include <stdio.h>
int main ()
{
 int n1=0;
 char c1='0';
 while(c1!='\n')
 {
  scanf("%c", &c1);
  if(c1<='9'&&c1>='0')
   n1++;
  else
   {
    n1=0;
    break;
   }
 }
 if(n1!=0)
  printf("%d", n1);
 else
  printf("NO");
 return 0;
 
}
