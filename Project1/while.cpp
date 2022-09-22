#include <stdio.h>

int main34()
{
	int i = 1, sum = 0;

	while (i <= 100)	// 조건식
	{
		sum += i;
		i++;	// 후위 연산자로 +1 해주라

		if (i == 50)
		{
			printf("종료합니다. \n");
			break;
		}
			
	}

	printf("1부터 100까지의 합 : %d \n ", sum);

	// for(int i = 0; i < 100 ; i++) // 초기화 / 조건식 / 증감식
	// while(i <100)	// 조건식

	return 0;
}