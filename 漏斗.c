/* �|��.c  */
/* (079) �|�� : �禡�m�ߡG���g���{���A
�i�H�b�D�禡��J���_�ƥN��|�檺��
(�p�G��J���Ʃ�1�H�U���Ʀr���"�Э��s��J)�A
�éI�s�禡�ӦL�X�|�檺�ϧ� */
#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("�п�J�|�檺��(�_��):\n");
	scanf("%d", &n);
	if(n%2==0)
		printf("�Э��s��J\n");
	else
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(j>=i&&j+i<=n+1&&i<=n||j+i>=n+1&&j<=i&&i>n/2+1)
					printf("*");
				else if(i+j<=n)
					printf(" ");
			}	
			printf("\n");
		}
	}
	return 0;	
}
