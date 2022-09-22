#include <stdio.h>

// 문제 3 
// 1000이하의 3 또는 5의 배수인 자연수들의 합을 구한다.
int main()
{
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)	// 3의 배수
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}		
	}

	printf("3 또는 5의 배수인 자연수들의 합은? : %d ", sum);

	return 0;
 }