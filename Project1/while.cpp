#include <stdio.h>

int main34()
{
	int i = 1, sum = 0;

	while (i <= 100)	// ���ǽ�
	{
		sum += i;
		i++;	// ���� �����ڷ� +1 ���ֶ�

		if (i == 50)
		{
			printf("�����մϴ�. \n");
			break;
		}
			
	}

	printf("1���� 100������ �� : %d \n ", sum);

	// for(int i = 0; i < 100 ; i++) // �ʱ�ȭ / ���ǽ� / ������
	// while(i <100)	// ���ǽ�

	return 0;
}