/* PS060208 */
#include <stdio.h>

int main(void)
{
	char c1,c2,c3;
	scanf("%c%c%c",&c1,&c2,&c3);
	if(c1==c2||c1==c3||c2==c3)
		printf("DIFF=%d",(c1==c2)?abs(c1-c3):abs(c1-c2));
	if(c1>c2&&c1>c3&&c2!=c3)
		printf("DIFF=%d",c2>c3?c1-c3:c1-c2);
//		if(c2>c3)
//			printf("DIFF=%d",c1-c3);
//		else
//			printf("DIFF=%d",c1-c2);
	if(c2>c1&&c2>c3&&c1!=c3)
		printf("DIFF=%d",c1>c3?c2-c3:c2-c1);
//		if(c1>c3)
//			printf("DIFF=%d",c2-c3);
//		else
//			printf("DIFF=%d",c2-c1);
	if(c3>c1&&c3>c2&&c1!=c2)
		printf("DIFF=%d",c1>c2?c3-c2:c3-c1);
//		if(c1>c2)
//			printf("DIFF=%d",c3-c2);
//		else
//			printf("DIFF=%d",c3-c1);
//	printf("DIFF=%d",(c1-c2)>=(c2-c3)?c1-c2:c2-c3);
	return 0;
}
