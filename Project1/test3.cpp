#include <stdio.h>

// ���� 3 
// 1000������ 3 �Ǵ� 5�� ����� �ڿ������� ���� ���Ѵ�.
int main()
{
	int sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0)	// 3�� ���
		{
			sum += i;
		}
		else if (i % 5 == 0)
		{
			sum += i;
		}		
	}

	printf("3 �Ǵ� 5�� ����� �ڿ������� ����? : %d ", sum);

	return 0;
 }