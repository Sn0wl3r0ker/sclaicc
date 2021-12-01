/* PS050514.c   20211010 */
#include <stdio.h>

int main(void)
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("1=%d\n", n1);
    printf("%d=%d\n", n2, (n2+n1-1)%7);
    return 0;
}