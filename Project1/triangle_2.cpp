#include <stdio.h>


// 정삼각형(피라미드)

int main37()
{
	int i, j, n, k = 0;

	printf("임의의 숫자를 입력 받으세요 : ");
	scanf_s("%d", &n);

	for (i = 1; i < n; ++i, k = 0)
	{
		for (j = 1; j <= n - i; ++j)
		{
			printf(" ");	// 공백 만들어 주기
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