#include <stdio.h>


// ���ﰢ��(�Ƕ�̵�)

int main37()
{
	int i, j, n, k = 0;

	printf("������ ���ڸ� �Է� �������� : ");
	scanf_s("%d", &n);

	for (i = 1; i < n; ++i, k = 0)
	{
		for (j = 1; j <= n - i; ++j)
		{
			printf(" ");	// ���� ����� �ֱ�
		}

		while (k != 2 * i - 1)
		{
			printf("*");
			++k;
		}

		printf("\n");
	}

	return 0;
}