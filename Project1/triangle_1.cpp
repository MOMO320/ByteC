#include <stdio.h>

int main36()
{
	// N���� �ﰢ�� ���
	// ����ڷ� ���� ������ n�� �Է¹޴´�.

	int value = 0;

	printf("������ ���� �־��ּ��� :  ");
	scanf_s("%d", &value);

	for (int i = 0; i < value; i++)
	{
		if (i == 0)
		{
			printf("* \n");
			continue;
		}

		for (int j = 0; j < i + (1 + i); j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;

}