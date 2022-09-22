#include <stdio.h>

int main36()
{
	// N줄인 삼각형 출력
	// 사용자로 부터 임의의 n을 입력받는다.

	int value = 0;

	printf("임의의 값을 넣어주세요 :  ");
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