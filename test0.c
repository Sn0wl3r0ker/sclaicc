#include <stdio.h> 
int main(void)
{
 int f[80],i,j;
 for(i=0;;i++)
 {
  scanf("%d",&f[i]);
  if(f[i]==-1)
   break;
 }
// j=f[0];
// for(i=i-1;i>=0;i--)
//  if(j>f[i])
//   j=f[i];
 printf("%d", f[i]);
 return 0;
}
