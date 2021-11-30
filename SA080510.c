/*SA080510*/
#include <stdio.h>
int afunc(int i);
int main(void)
{
int i=101;
afunc(i);
printf("%d",i);
}
int afunc(int i)
{
    i = 1000;
    return i;
}
