#include <stdio.h>
int main(void)
{ 
	int n1 = 42;
    char c1 = '*';
    
    if (n1 >= 60)
        if (n1 >= 80)
            c1 = 'A';
    else 
        c1 = 'F';
        printf("%c", c1);
    printf("%c",c1);
	return 0;
}
